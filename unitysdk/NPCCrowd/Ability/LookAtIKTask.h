#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace NPCCrowd::Ability { class VirtualProxy_LookAtIKTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_LOOKATIKTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4B6DD0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x50C120)
#define NPCCROWD_ABILITY_LOOKATIKTASK_CREATE_OFFSET UNITYSDK_OFFSET(0xBDD5690)
#define NPCCROWD_ABILITY_LOOKATIKTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x50C100)
#define NPCCROWD_ABILITY_LOOKATIKTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xBDD4940)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xBDD48A0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4B6C10)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x3EBE20)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x4B6C70)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3ABA20)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x4B6B00)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4B69E0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4B6980)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4B6AA0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4B6A40)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x3F06C0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x50BD00)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x50C180)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4B6B60)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x50BCF0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_LINK_OFFSET UNITYSDK_OFFSET(0xBDD47D0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x4B6DD0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x50C120)
#define NPCCROWD_ABILITY_LOOKATIKTASK_RESET_OFFSET UNITYSDK_OFFSET(0x4B6E10)
#define NPCCROWD_ABILITY_LOOKATIKTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x50BFE0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x50C080)
#define NPCCROWD_ABILITY_LOOKATIKTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x50C030)
#define NPCCROWD_ABILITY_LOOKATIKTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x50BF90)
#define NPCCROWD_ABILITY_LOOKATIKTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x50BEF0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x50BE00)
#define NPCCROWD_ABILITY_LOOKATIKTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x50BDB0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x50BEA0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x50BE50)
#define NPCCROWD_ABILITY_LOOKATIKTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x50BD60)
#define NPCCROWD_ABILITY_LOOKATIKTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x50BF40)
#define NPCCROWD_ABILITY_LOOKATIKTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x50BCA0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0xBDD4F50)
#define NPCCROWD_ABILITY_LOOKATIKTASK_TICK_OFFSET UNITYSDK_OFFSET(0xBDD4FB0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_LOOKATIKTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x50C1E0)
#define NPCCROWD_ABILITY_LOOKATIKTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDD5B00)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int LookAtIKTask_TypeDefinitionIndex = 63128;

	struct alignas(4) LookAtIKTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(LookAtIKTask_TypeDefinitionIndex)->GetStaticField(0x44C10);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x3DF9951E; // 0x0
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::System::Boolean enable; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x32

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK__CCTOR_OFFSET))();
		}

		/*
		static ::System::Boolean Link(::NPCCrowd::Ability::LookAtIKTask& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::LookAtIKTask&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_LINK_OFFSET))(self, linker);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::LookAtIKTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::LookAtIKTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::LookAtIKTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::LookAtIKTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void StateCompleted(::NPCCrowd::Ability::LookAtIKTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::LookAtIKTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::LookAtIKTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::LookAtIKTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_LookAtIKTask* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_LookAtIKTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::LookAtIKTask Create()
		{
			return ((::NPCCrowd::Ability::LookAtIKTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::LookAtIKTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::LookAtIKTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::LookAtIKTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::LookAtIKTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::LookAtIKTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::LookAtIKTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::LookAtIKTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::LookAtIKTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::LookAtIKTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::LookAtIKTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_LookAtIKTask__CopyAssign(::NPCCrowd::Ability::LookAtIKTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::LookAtIKTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_LOOKATIKTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
