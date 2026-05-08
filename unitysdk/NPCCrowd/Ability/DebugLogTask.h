#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace NPCCrowd::Ability { class VirtualProxy_DebugLogTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_DEBUGLOGTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4B6DD0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x50AFE0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_CREATE_OFFSET UNITYSDK_OFFSET(0xBDD3520)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x50AFC0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xBDD2B60)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xBDD2AC0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4B6C10)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x3EBE20)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x4B6C70)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3ABA20)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x4B6B00)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4B69E0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4B6980)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4B6AA0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4B6A40)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x3F06C0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x50ABC0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x50B040)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4B6B60)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x50ABB0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_LINK_OFFSET UNITYSDK_OFFSET(0xBDD29F0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x4B6DD0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x50AFE0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_RESET_OFFSET UNITYSDK_OFFSET(0x4B6E10)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x50AEA0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x50AF40)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x50AEF0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x50AE50)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x50ADB0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x50ACC0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x50AC70)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x50AD60)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x50AD10)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x50AC20)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x50AE00)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x50AB60)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_DEBUGLOGTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x50B0A0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDD3990)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int DebugLogTask_TypeDefinitionIndex = 47722;

	struct alignas(4) DebugLogTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(DebugLogTask_TypeDefinitionIndex)->GetStaticField(0x44BB0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xF318278F; // 0x0
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::UnityEngine::LogType logType; // 0x30
		::Foundation::Unreal::FName debugMessage; // 0x34
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x3C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK__CCTOR_OFFSET))();
		}

		/*
		static ::System::Boolean Link(::NPCCrowd::Ability::DebugLogTask& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::DebugLogTask&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_LINK_OFFSET))(self, linker);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::DebugLogTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::DebugLogTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::DebugLogTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::DebugLogTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_DebugLogTask* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_DebugLogTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::DebugLogTask Create()
		{
			return ((::NPCCrowd::Ability::DebugLogTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::DebugLogTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DebugLogTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::DebugLogTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DebugLogTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::DebugLogTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DebugLogTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::DebugLogTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DebugLogTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::DebugLogTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DebugLogTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_DebugLogTask__CopyAssign(::NPCCrowd::Ability::DebugLogTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DebugLogTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_DEBUGLOGTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
