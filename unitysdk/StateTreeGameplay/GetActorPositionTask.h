#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeGameplay/StateTreeActorTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace StateTreeGameplay { class VirtualProxy_GetActorPositionTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x8B97B0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x8B9750)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x1A685BB0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x8B9730)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1A684FA0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1A684F00)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x8B9100)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x8B9880)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x8B90F0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x8B97B0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x8B9750)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_RESET_OFFSET UNITYSDK_OFFSET(0x8B9800)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x8B9560)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x8B9660)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x8B95E0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x8B94E0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x8B93E0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x8B9260)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x8B91E0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x8B9360)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x8B92E0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x8B9160)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x8B9460)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x8B9070)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1A685150)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_GETACTORPOSITIONTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x8B98E0)
#define STATETREEGAMEPLAY_GETACTORPOSITIONTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A686070)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int GetActorPositionTask_TypeDefinitionIndex = 45609;

	struct alignas(4) GetActorPositionTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(GetActorPositionTask_TypeDefinitionIndex)->GetStaticField(0x34090);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x719A6ED3; // 0x0
		::StateTreeGameplay::StateTreeActorTaskBase Base; // 0x10
		::System::Boolean UpdateOnTick; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::GetActorPositionTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::GetActorPositionTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::GetActorPositionTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::GetActorPositionTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::GetActorPositionTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::GetActorPositionTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeGameplay::VirtualProxy_GetActorPositionTask* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_GetActorPositionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeGameplay::GetActorPositionTask Create()
		{
			return ((::StateTreeGameplay::GetActorPositionTask(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_CREATE_OFFSET))();
		}

		::StateTreeGameplay::GetActorPositionTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::GetActorPositionTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::GetActorPositionTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::GetActorPositionTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::GetActorPositionTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::GetActorPositionTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::GetActorPositionTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::GetActorPositionTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::GetActorPositionTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::GetActorPositionTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_GetActorPositionTask__CopyAssign(::StateTreeGameplay::GetActorPositionTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::GetActorPositionTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETACTORPOSITIONTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_GETACTORPOSITIONTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
