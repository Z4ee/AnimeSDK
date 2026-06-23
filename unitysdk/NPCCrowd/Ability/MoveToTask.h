#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/MoveType.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeCrowdTaskBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability { class VirtualProxy_MoveToTask; }
namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_MOVETOTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x591C80)
#define NPCCROWD_ABILITY_MOVETOTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x592780)
#define NPCCROWD_ABILITY_MOVETOTASK_CREATE_OFFSET UNITYSDK_OFFSET(0xD40ECC0)
#define NPCCROWD_ABILITY_MOVETOTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x592760)
#define NPCCROWD_ABILITY_MOVETOTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_MOVETOTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xD40DE40)
#define NPCCROWD_ABILITY_MOVETOTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xD40E120)
#define NPCCROWD_ABILITY_MOVETOTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xD40DDA0)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4109D0)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x410AF0)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x410A60)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3E3DA0)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x591890)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4108C0)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x410830)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x591800)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x591770)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x4107A0)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x592130)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x5927E0)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x591920)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x592120)
#define NPCCROWD_ABILITY_MOVETOTASK_LINK_OFFSET UNITYSDK_OFFSET(0xD40DB40)
#define NPCCROWD_ABILITY_MOVETOTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x591C80)
#define NPCCROWD_ABILITY_MOVETOTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x592780)
#define NPCCROWD_ABILITY_MOVETOTASK_RESET_OFFSET UNITYSDK_OFFSET(0x591CC0)
#define NPCCROWD_ABILITY_MOVETOTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x592590)
#define NPCCROWD_ABILITY_MOVETOTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x592690)
#define NPCCROWD_ABILITY_MOVETOTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x592610)
#define NPCCROWD_ABILITY_MOVETOTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x592510)
#define NPCCROWD_ABILITY_MOVETOTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x592410)
#define NPCCROWD_ABILITY_MOVETOTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x592290)
#define NPCCROWD_ABILITY_MOVETOTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x592210)
#define NPCCROWD_ABILITY_MOVETOTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x592390)
#define NPCCROWD_ABILITY_MOVETOTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x592310)
#define NPCCROWD_ABILITY_MOVETOTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x592190)
#define NPCCROWD_ABILITY_MOVETOTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x592490)
#define NPCCROWD_ABILITY_MOVETOTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x5920A0)
#define NPCCROWD_ABILITY_MOVETOTASK_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0xD40E170)
#define NPCCROWD_ABILITY_MOVETOTASK_TICK_OFFSET UNITYSDK_OFFSET(0xD40E310)
#define NPCCROWD_ABILITY_MOVETOTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_MOVETOTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x592840)
#define NPCCROWD_ABILITY_MOVETOTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xD40F180)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int MoveToTask_TypeDefinitionIndex = 77383;

	struct alignas(4) MoveToTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(MoveToTask_TypeDefinitionIndex)->GetStaticField(0x45550);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x20BA1DAC; // 0x0
		::NPCCrowd::Ability::StateTreeCrowdTaskBase Base; // 0x10
		::UnityEngine::Vector3 targetPosition; // 0x30
		::NPCCrowd::Ability::MoveType moveType; // 0x3C
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> transformHandle; // 0x40
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCNavmeshFragment> navmeshHandle; // 0x46
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> blackboardHandle; // 0x4C
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathFollowHandle; // 0x52

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK__CCTOR_OFFSET))();
		}

		static ::System::Boolean Link(::NPCCrowd::Ability::MoveToTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::MoveToTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_LINK_OFFSET))(self, linker);
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::MoveToTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::MoveToTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::MoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::MoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void ExitState(::NPCCrowd::Ability::MoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::MoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void StateCompleted(::NPCCrowd::Ability::MoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::MoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::MoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::MoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_MoveToTask* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_MoveToTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::MoveToTask Create()
		{
			return ((::NPCCrowd::Ability::MoveToTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::MoveToTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::MoveToTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::MoveToTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::MoveToTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::MoveToTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::MoveToTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::MoveToTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::MoveToTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::MoveToTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::MoveToTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_MoveToTask__CopyAssign(::NPCCrowd::Ability::MoveToTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::MoveToTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_MOVETOTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
