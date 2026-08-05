#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeGameplay/StateTreeCommonTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"

namespace StateTreeGameplay { class VirtualProxy_UpdateValueFloatTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x1CB95650)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x887B30)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x887AD0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x1CB96340)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x96C8E0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1CB957B0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1CB958B0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1CB95710)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x96C2B0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x96C900)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x96C2A0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x887B30)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x887AD0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_RESET_OFFSET UNITYSDK_OFFSET(0x887B90)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x96C710)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x96C810)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x96C790)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x96C690)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x96C590)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x96C410)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x96C390)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x96C510)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x96C490)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x96C310)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x96C610)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x96C220)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1CB95990)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x96C960)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB96840)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int UpdateValueFloatTask_TypeDefinitionIndex = 49685;

	struct alignas(4) UpdateValueFloatTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(UpdateValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x47A00);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x6B873D5; // 0x0
		::StateTreeGameplay::StateTreeCommonTaskBase Base; // 0x10
		::System::Boolean UpdateOnEnter; // 0x30
		::System::Boolean UpdateOnExit; // 0x31
		::System::Boolean UpdateOnTick; // 0x32

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::UpdateValueFloatTask& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::UpdateValueFloatTask&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_COMPILE_OFFSET))(self, instanceDataView);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::UpdateValueFloatTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::UpdateValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::UpdateValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::UpdateValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void ExitState(::StateTreeGameplay::UpdateValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeGameplay::UpdateValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::UpdateValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::UpdateValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeGameplay::VirtualProxy_UpdateValueFloatTask* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_UpdateValueFloatTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeGameplay::UpdateValueFloatTask Create()
		{
			return ((::StateTreeGameplay::UpdateValueFloatTask(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_CREATE_OFFSET))();
		}

		::StateTreeGameplay::UpdateValueFloatTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::UpdateValueFloatTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::UpdateValueFloatTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::UpdateValueFloatTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::UpdateValueFloatTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::UpdateValueFloatTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::UpdateValueFloatTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::UpdateValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::UpdateValueFloatTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::UpdateValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_UpdateValueFloatTask__CopyAssign(::StateTreeGameplay::UpdateValueFloatTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::UpdateValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_UPDATEVALUEFLOATTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
