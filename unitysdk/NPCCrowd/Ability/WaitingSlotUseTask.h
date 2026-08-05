#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeCrowdTaskBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace NPCCrowd::Ability { class VirtualProxy_WaitingSlotUseTask; }
namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x633970)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_CREATE_OFFSET UNITYSDK_OFFSET(0xF0D59F0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x633950)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xF0D4B80)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xF0D4AE0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x633320)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x6339C0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x633310)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_LINK_OFFSET UNITYSDK_OFFSET(0xF0D4880)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x633970)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_RESET_OFFSET UNITYSDK_OFFSET(0x463850)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x633780)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x633880)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x633800)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x633700)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x633600)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x633480)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x633400)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x633580)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x633500)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x633380)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x633680)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x633290)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_TICK_OFFSET UNITYSDK_OFFSET(0xF0D4F30)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_WAITINGSLOTUSETASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x633A20)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xF0D5E80)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int WaitingSlotUseTask_TypeDefinitionIndex = 65418;

	struct alignas(4) WaitingSlotUseTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotUseTask_TypeDefinitionIndex)->GetStaticField(0x4EDB0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x3C3D312E; // 0x0
		::NPCCrowd::Ability::StateTreeCrowdTaskBase Base; // 0x10
		::System::Single delayTime; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x34
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathfollowDataHandle; // 0x3A
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> transformHandle; // 0x40
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> moveTargetHandle; // 0x46

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK__CCTOR_OFFSET))();
		}

		static ::System::Boolean Link(::NPCCrowd::Ability::WaitingSlotUseTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::WaitingSlotUseTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_LINK_OFFSET))(self, linker);
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::WaitingSlotUseTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::WaitingSlotUseTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::System::Void ExitState(::NPCCrowd::Ability::WaitingSlotUseTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::WaitingSlotUseTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::WaitingSlotUseTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::WaitingSlotUseTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_WaitingSlotUseTask* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_WaitingSlotUseTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::WaitingSlotUseTask Create()
		{
			return ((::NPCCrowd::Ability::WaitingSlotUseTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::WaitingSlotUseTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::WaitingSlotUseTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::WaitingSlotUseTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::WaitingSlotUseTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::WaitingSlotUseTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::WaitingSlotUseTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::WaitingSlotUseTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::WaitingSlotUseTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::WaitingSlotUseTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::WaitingSlotUseTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_WaitingSlotUseTask__CopyAssign(::NPCCrowd::Ability::WaitingSlotUseTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::WaitingSlotUseTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_WAITINGSLOTUSETASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
