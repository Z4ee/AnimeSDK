#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeCrowdTaskBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace NPCCrowd::Ability { class VirtualProxy_AttractorUseTask; }
namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_ATTRACTORUSETASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x609720)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_CREATE_OFFSET UNITYSDK_OFFSET(0xE931DC0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x609700)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xE9301F0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xE930640)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xE930150)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x6090D0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x609770)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x6090C0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_LINK_OFFSET UNITYSDK_OFFSET(0xE92FEF0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x609720)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_REALEXITACTION_OFFSET UNITYSDK_OFFSET(0xE9311A0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_RESET_OFFSET UNITYSDK_OFFSET(0x463850)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x609530)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x609630)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x6095B0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x6094B0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x6093B0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x609230)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x6091B0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x609330)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x6092B0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x609130)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x609430)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x609040)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_TICK_OFFSET UNITYSDK_OFFSET(0xE9309F0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORUSETASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6097D0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xE932250)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorUseTask_TypeDefinitionIndex = 47144;

	struct alignas(4) AttractorUseTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(AttractorUseTask_TypeDefinitionIndex)->GetStaticField(0x3ABA0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x37CEED77; // 0x0
		::NPCCrowd::Ability::StateTreeCrowdTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> attractorDataHandle; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x36
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathFollowHandle; // 0x3C
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> blackBoardHandle; // 0x42

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK__CCTOR_OFFSET))();
		}

		static ::System::Boolean Link(::NPCCrowd::Ability::AttractorUseTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::AttractorUseTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_LINK_OFFSET))(self, linker);
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::AttractorUseTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::AttractorUseTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::AttractorUseTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::AttractorUseTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void ExitState(::NPCCrowd::Ability::AttractorUseTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::AttractorUseTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::AttractorUseTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::AttractorUseTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		static ::System::Void RealExitAction(::NPCCrowd::Ability::FNPCAttractorControlFragment& attractorControlData, ::NPCCrowd::Ability::FNPCBaseDataFragment baseData, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FNPCAIBlackboardFragment& blackboard)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAttractorControlFragment&, ::NPCCrowd::Ability::FNPCBaseDataFragment, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_REALEXITACTION_OFFSET))(attractorControlData, baseData, pathFollow, blackboard);
		}

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_AttractorUseTask* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_AttractorUseTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::AttractorUseTask Create()
		{
			return ((::NPCCrowd::Ability::AttractorUseTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::AttractorUseTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorUseTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorUseTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorUseTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorUseTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorUseTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::AttractorUseTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorUseTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::AttractorUseTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorUseTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_AttractorUseTask__CopyAssign(::NPCCrowd::Ability::AttractorUseTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorUseTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORUSETASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
