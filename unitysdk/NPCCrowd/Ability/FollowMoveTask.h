#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavigationObstacleGridCellLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace NPCCrowd::Ability { class VirtualProxy_FollowMoveTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_FOLLOWMOVETASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4B6DD0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x573080)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_CREATE_OFFSET UNITYSDK_OFFSET(0xCE48EC0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x573060)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xCE478C0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xCE48380)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xCE47820)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GETPREDICTOFFSETS_OFFSET UNITYSDK_OFFSET(0xCE485E0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4B6C10)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x3EBE20)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x4B6C70)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3ABA20)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x4B6B00)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4B69E0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4B6980)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4B6AA0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4B6A40)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x3F06C0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x572C60)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x5730E0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4B6B60)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x572C50)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_LINK_OFFSET UNITYSDK_OFFSET(0xCE47460)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x4B6DD0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x573080)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_RESET_OFFSET UNITYSDK_OFFSET(0x4B6E10)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x572F40)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x572FE0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x572F90)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x572EF0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x572E50)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x572D60)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x572D10)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x572E00)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x572DB0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x572CC0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x572EA0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x572C00)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0xCE483D0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_TICKLOGIC_OFFSET UNITYSDK_OFFSET(0xCE47960)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_TICK_OFFSET UNITYSDK_OFFSET(0xCE48520)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FOLLOWMOVETASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x573140)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE49340)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FollowMoveTask_TypeDefinitionIndex = 47818;

	struct alignas(4) FollowMoveTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FollowMoveTask_TypeDefinitionIndex)->GetStaticField(0x496E0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xB29408FC; // 0x0
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> transformHandle; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCNavmeshFragment> navmeshHandle; // 0x36
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> blackboardHandle; // 0x3C
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathFollowHandle; // 0x42
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> baseDataHandle; // 0x48
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment> navLocationHandle; // 0x4E

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK__CCTOR_OFFSET))();
		}

		/*
		static ::System::Boolean Link(::NPCCrowd::Ability::FollowMoveTask& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FollowMoveTask&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_LINK_OFFSET))(self, linker);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::FollowMoveTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::FollowMoveTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::FollowMoveTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::FollowMoveTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void ExitState(::NPCCrowd::Ability::FollowMoveTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FollowMoveTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void StateCompleted(::NPCCrowd::Ability::FollowMoveTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FollowMoveTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::FollowMoveTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::FollowMoveTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus TickLogic(::NPCCrowd::Ability::FollowMoveTask& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::FollowMoveTask&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_TICKLOGIC_OFFSET))(self, context);
		}
		*/

		/*
		static ::UnityEngine::Vector3 GetPredictOffsets(::System::Single param)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GETPREDICTOFFSETS_OFFSET))(param);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_FollowMoveTask* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_FollowMoveTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::FollowMoveTask Create()
		{
			return ((::NPCCrowd::Ability::FollowMoveTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::FollowMoveTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FollowMoveTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FollowMoveTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FollowMoveTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FollowMoveTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FollowMoveTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::FollowMoveTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FollowMoveTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::FollowMoveTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FollowMoveTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_FollowMoveTask__CopyAssign(::NPCCrowd::Ability::FollowMoveTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FollowMoveTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FOLLOWMOVETASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
