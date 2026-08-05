#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeCrowdTaskBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace NPCCrowd::Ability { class VirtualProxy_CarQueueUpdateEnvironmentTask; }
namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x652070)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x13DE53F0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x7E32B0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x13DE43D0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x7E2B10)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x7E32D0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x7E2B00)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_LINK_OFFSET UNITYSDK_OFFSET(0x13DE4270)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x652070)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_RESET_OFFSET UNITYSDK_OFFSET(0x463850)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x7E3020)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x7E3280)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x7E3150)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x7E2EF0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x7E2DF0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x7E2C70)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x7E2BF0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x7E2D70)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x7E2CF0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x7E2B70)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x7E2E70)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x7E29D0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_TICK_OFFSET UNITYSDK_OFFSET(0x13DE4470)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x7E3330)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DE5A30)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueUpdateEnvironmentTask_TypeDefinitionIndex = 61874;

	struct alignas(4) CarQueueUpdateEnvironmentTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(CarQueueUpdateEnvironmentTask_TypeDefinitionIndex)->GetStaticField(0x4DBD0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xB3949097; // 0x0
		::NPCCrowd::Ability::StateTreeCrowdTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathfollowDataHandle; // 0x36

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK__CCTOR_OFFSET))();
		}

		static ::System::Boolean Link(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_LINK_OFFSET))(self, linker);
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_CarQueueUpdateEnvironmentTask* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_CarQueueUpdateEnvironmentTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask Create()
		{
			return ((::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_CarQueueUpdateEnvironmentTask__CopyAssign(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
