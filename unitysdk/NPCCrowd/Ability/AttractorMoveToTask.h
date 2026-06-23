#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/MoveToTask.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace NPCCrowd::Ability { class VirtualProxy_AttractorMoveToTask; }
namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x591C80)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x747140)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x11787BA0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x747120)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x11785A60)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x11786650)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4109D0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x410AF0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x410A60)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3E3DA0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x591890)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4108C0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x410830)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x591800)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x591770)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x4107A0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x746950)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x7471A0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x591920)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x746940)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_LINK_OFFSET UNITYSDK_OFFSET(0x117857B0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x591C80)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x747140)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_REALEXITACTION_OFFSET UNITYSDK_OFFSET(0x11786380)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_RESET_OFFSET UNITYSDK_OFFSET(0x591CC0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SETSTAIRBLEND_OFFSET UNITYSDK_OFFSET(0x117865E0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x746F30)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x747090)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x746FE0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x746E80)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x746D20)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x746B10)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x746A60)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x746C70)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x746BC0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x7469B0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x746DD0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x746890)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_TICK_OFFSET UNITYSDK_OFFSET(0x11786870)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORMOVETOTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x747200)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x117880B0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorMoveToTask_TypeDefinitionIndex = 44021;

	struct alignas(4) AttractorMoveToTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(AttractorMoveToTask_TypeDefinitionIndex)->GetStaticField(0x38260);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x15A53E3E; // 0x0
		::NPCCrowd::Ability::MoveToTask Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> transformHandle; // 0x58
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> attractorDataHandle; // 0x5E
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x64
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathFollowHandle; // 0x6A

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK__CCTOR_OFFSET))();
		}

		static ::System::Boolean Link(::NPCCrowd::Ability::AttractorMoveToTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::AttractorMoveToTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_LINK_OFFSET))(self, linker);
		}

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::AttractorMoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::AttractorMoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void ExitState(::NPCCrowd::Ability::AttractorMoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::AttractorMoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::AttractorMoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::AttractorMoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		static ::System::Void RealExitAction(::NPCCrowd::Ability::FNPCAttractorControlFragment& attractorControlData, ::NPCCrowd::Ability::FNPCBaseDataFragment baseData, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FNPCAIBlackboardFragment& blackboard, ::NPCCrowd::Ability::FNPCNavmeshFragment& navmesh)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAttractorControlFragment&, ::NPCCrowd::Ability::FNPCBaseDataFragment, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&, ::NPCCrowd::Ability::FNPCNavmeshFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_REALEXITACTION_OFFSET))(attractorControlData, baseData, pathFollow, blackboard, navmesh);
		}
		*/

		/*
		static ::System::Void SetStairBlend(::NPCCrowd::Ability::FNPCNavmeshFragment& navmesh)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCNavmeshFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SETSTAIRBLEND_OFFSET))(navmesh);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_AttractorMoveToTask* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_AttractorMoveToTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::AttractorMoveToTask Create()
		{
			return ((::NPCCrowd::Ability::AttractorMoveToTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::AttractorMoveToTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorMoveToTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorMoveToTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorMoveToTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorMoveToTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorMoveToTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::AttractorMoveToTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorMoveToTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::AttractorMoveToTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorMoveToTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_AttractorMoveToTask__CopyAssign(::NPCCrowd::Ability::AttractorMoveToTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorMoveToTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORMOVETOTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
