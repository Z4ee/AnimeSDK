#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeGameplay/StateTreeCommonTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"

namespace StateTreeGameplay { class VirtualProxy_DebugLogValueFloatTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x18C59430)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x887B30)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x887AD0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x18C5A3F0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x887AB0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x18C59590)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x18C59780)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x18C594F0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x887480)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x887C20)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x887470)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x887B30)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x887AD0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_RESET_OFFSET UNITYSDK_OFFSET(0x887B90)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x8878E0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x8879E0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x887960)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x887860)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x887760)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x8875E0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x887560)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x8876E0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x887660)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x8874E0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x8877E0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x8873F0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_TICK_OFFSET UNITYSDK_OFFSET(0x18C59950)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x887C80)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C5A8F0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int DebugLogValueFloatTask_TypeDefinitionIndex = 66880;

	struct alignas(4) DebugLogValueFloatTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(DebugLogValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x3B1B0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x6BE1BBAF; // 0x0
		::StateTreeGameplay::StateTreeCommonTaskBase Base; // 0x10
		::System::Boolean LogOnEnter; // 0x30
		::System::Boolean LogOnExit; // 0x31
		::System::Boolean LogOnTick; // 0x32

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::DebugLogValueFloatTask& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::DebugLogValueFloatTask&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_COMPILE_OFFSET))(self, instanceDataView);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::DebugLogValueFloatTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::DebugLogValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::DebugLogValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::DebugLogValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void ExitState(::StateTreeGameplay::DebugLogValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeGameplay::DebugLogValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::DebugLogValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::DebugLogValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeGameplay::VirtualProxy_DebugLogValueFloatTask* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_DebugLogValueFloatTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeGameplay::DebugLogValueFloatTask Create()
		{
			return ((::StateTreeGameplay::DebugLogValueFloatTask(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_CREATE_OFFSET))();
		}

		::StateTreeGameplay::DebugLogValueFloatTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DebugLogValueFloatTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::DebugLogValueFloatTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DebugLogValueFloatTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::DebugLogValueFloatTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DebugLogValueFloatTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::DebugLogValueFloatTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DebugLogValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::DebugLogValueFloatTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DebugLogValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_DebugLogValueFloatTask__CopyAssign(::StateTreeGameplay::DebugLogValueFloatTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DebugLogValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
