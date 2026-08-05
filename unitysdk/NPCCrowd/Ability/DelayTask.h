#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeCrowdTaskBase.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace NPCCrowd::Ability { class VirtualProxy_DelayTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_DELAYTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define NPCCROWD_ABILITY_DELAYTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x609F40)
#define NPCCROWD_ABILITY_DELAYTASK_CREATE_OFFSET UNITYSDK_OFFSET(0xE932D90)
#define NPCCROWD_ABILITY_DELAYTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x609F20)
#define NPCCROWD_ABILITY_DELAYTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_DELAYTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xE9323D0)
#define NPCCROWD_ABILITY_DELAYTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xE932330)
#define NPCCROWD_ABILITY_DELAYTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define NPCCROWD_ABILITY_DELAYTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define NPCCROWD_ABILITY_DELAYTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define NPCCROWD_ABILITY_DELAYTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define NPCCROWD_ABILITY_DELAYTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define NPCCROWD_ABILITY_DELAYTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define NPCCROWD_ABILITY_DELAYTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define NPCCROWD_ABILITY_DELAYTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define NPCCROWD_ABILITY_DELAYTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define NPCCROWD_ABILITY_DELAYTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define NPCCROWD_ABILITY_DELAYTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x6098F0)
#define NPCCROWD_ABILITY_DELAYTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x609F90)
#define NPCCROWD_ABILITY_DELAYTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define NPCCROWD_ABILITY_DELAYTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define NPCCROWD_ABILITY_DELAYTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x6098E0)
#define NPCCROWD_ABILITY_DELAYTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define NPCCROWD_ABILITY_DELAYTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x609F40)
#define NPCCROWD_ABILITY_DELAYTASK_RESET_OFFSET UNITYSDK_OFFSET(0x463850)
#define NPCCROWD_ABILITY_DELAYTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x609D50)
#define NPCCROWD_ABILITY_DELAYTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x609E50)
#define NPCCROWD_ABILITY_DELAYTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x609DD0)
#define NPCCROWD_ABILITY_DELAYTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x609CD0)
#define NPCCROWD_ABILITY_DELAYTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x609BD0)
#define NPCCROWD_ABILITY_DELAYTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x609A50)
#define NPCCROWD_ABILITY_DELAYTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x6099D0)
#define NPCCROWD_ABILITY_DELAYTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x609B50)
#define NPCCROWD_ABILITY_DELAYTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x609AD0)
#define NPCCROWD_ABILITY_DELAYTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x609950)
#define NPCCROWD_ABILITY_DELAYTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x609C50)
#define NPCCROWD_ABILITY_DELAYTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x609860)
#define NPCCROWD_ABILITY_DELAYTASK_TICK_OFFSET UNITYSDK_OFFSET(0xE932450)
#define NPCCROWD_ABILITY_DELAYTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_DELAYTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x609FF0)
#define NPCCROWD_ABILITY_DELAYTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xE933210)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int DelayTask_TypeDefinitionIndex = 57088;

	struct alignas(4) DelayTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(DelayTask_TypeDefinitionIndex)->GetStaticField(0x3ABC0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x3E601A95; // 0x0
		::NPCCrowd::Ability::StateTreeCrowdTaskBase Base; // 0x10
		::System::Single delayTime; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::DelayTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::DelayTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::DelayTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::DelayTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::DelayTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::DelayTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_DelayTask* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_DelayTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::DelayTask Create()
		{
			return ((::NPCCrowd::Ability::DelayTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::DelayTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DelayTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::DelayTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DelayTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::DelayTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DelayTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::DelayTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DelayTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::DelayTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DelayTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_DelayTask__CopyAssign(::NPCCrowd::Ability::DelayTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DelayTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_DELAYTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
