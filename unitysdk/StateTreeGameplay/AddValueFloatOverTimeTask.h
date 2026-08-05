#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeGameplay/StateTreeCommonTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"

namespace StateTreeGameplay { class VirtualProxy_AddValueFloatOverTimeTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x1CB913E0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x7E39D0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_CREATE_OFFSET UNITYSDK_OFFSET(0x1CB91FB0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x96AEA0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1CB915C0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1CB91520)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x96A870)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x96AEC0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x96A860)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x7E39D0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_RESET_OFFSET UNITYSDK_OFFSET(0x463850)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x96ACD0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x96ADD0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x96AD50)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x96AC50)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x96AB50)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x96A9D0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x96A950)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x96AAD0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x96AA50)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x96A8D0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x96ABD0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x96A7E0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_TICK_OFFSET UNITYSDK_OFFSET(0x1CB91660)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x96AF20)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB92420)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int AddValueFloatOverTimeTask_TypeDefinitionIndex = 65781;

	struct alignas(4) AddValueFloatOverTimeTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(AddValueFloatOverTimeTask_TypeDefinitionIndex)->GetStaticField(0x47910);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x7F90762C; // 0x0
		::StateTreeGameplay::StateTreeCommonTaskBase Base; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::AddValueFloatOverTimeTask& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::AddValueFloatOverTimeTask&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_COMPILE_OFFSET))(self, instanceDataView);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::AddValueFloatOverTimeTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::AddValueFloatOverTimeTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::AddValueFloatOverTimeTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::AddValueFloatOverTimeTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::AddValueFloatOverTimeTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::AddValueFloatOverTimeTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeGameplay::VirtualProxy_AddValueFloatOverTimeTask* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_AddValueFloatOverTimeTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeGameplay::AddValueFloatOverTimeTask Create()
		{
			return ((::StateTreeGameplay::AddValueFloatOverTimeTask(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_CREATE_OFFSET))();
		}

		::StateTreeGameplay::AddValueFloatOverTimeTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::AddValueFloatOverTimeTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::AddValueFloatOverTimeTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::AddValueFloatOverTimeTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::AddValueFloatOverTimeTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::AddValueFloatOverTimeTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::AddValueFloatOverTimeTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::AddValueFloatOverTimeTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::AddValueFloatOverTimeTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::AddValueFloatOverTimeTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_AddValueFloatOverTimeTask__CopyAssign(::StateTreeGameplay::AddValueFloatOverTimeTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::AddValueFloatOverTimeTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
