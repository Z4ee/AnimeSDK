#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace NPCCrowd::Ability { class VirtualProxy_IdleAnimationTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4B6DD0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x50AFE0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x11B11A10)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x72E360)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x11B10FE0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x11B11210)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x11B10F40)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4B6C10)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x3EBE20)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x4B6C70)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3ABA20)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x4B6B00)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4B69E0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4B6980)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4B6AA0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4B6A40)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x3F06C0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x72DF60)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x72E380)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4B6B60)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x72DF50)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_LINK_OFFSET UNITYSDK_OFFSET(0x11B10D30)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x4B6DD0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x50AFE0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_RESET_OFFSET UNITYSDK_OFFSET(0x4B6E10)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x72E240)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x72E2E0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x72E290)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x72E1F0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x72E150)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x72E060)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x72E010)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x72E100)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x72E0B0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x72DFC0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x72E1A0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x72DF00)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_IDLEANIMATIONTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x72E3E0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B11E80)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int IdleAnimationTask_TypeDefinitionIndex = 79927;

	struct alignas(4) IdleAnimationTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(IdleAnimationTask_TypeDefinitionIndex)->GetStaticField(0x46D50);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xA9C23DF2; // 0x0
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> blackboardHandle; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCMontageDataFragment> montageHandle; // 0x36
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x3C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK__CCTOR_OFFSET))();
		}

		/*
		static ::System::Boolean Link(::NPCCrowd::Ability::IdleAnimationTask& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::IdleAnimationTask&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_LINK_OFFSET))(self, linker);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::IdleAnimationTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::IdleAnimationTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::IdleAnimationTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::IdleAnimationTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void ExitState(::NPCCrowd::Ability::IdleAnimationTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::IdleAnimationTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_IdleAnimationTask* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_IdleAnimationTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::IdleAnimationTask Create()
		{
			return ((::NPCCrowd::Ability::IdleAnimationTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::IdleAnimationTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::IdleAnimationTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::IdleAnimationTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::IdleAnimationTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::IdleAnimationTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::IdleAnimationTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::IdleAnimationTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::IdleAnimationTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::IdleAnimationTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::IdleAnimationTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_IdleAnimationTask__CopyAssign(::NPCCrowd::Ability::IdleAnimationTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::IdleAnimationTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_IDLEANIMATIONTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
