#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeGameplay/StateTreeCommonTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"

namespace StateTreeGameplay { class VirtualProxy_RandomValueFloatTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x1CB93C20)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x96C050)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x96BFF0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x1CB947A0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x96BFD0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1CB93DF0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1CB93D50)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x96B9A0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x96C130)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x96B990)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x96C050)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x96BFF0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_RESET_OFFSET UNITYSDK_OFFSET(0x96C0A0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x96BE00)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x96BF00)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x96BE80)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x96BD80)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x96BC80)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x96BB00)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x96BA80)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x96BC00)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x96BB80)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x96BA00)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x96BD00)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x96B910)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x96C190)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB94C80)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RandomValueFloatTask_TypeDefinitionIndex = 59514;

	struct alignas(4) RandomValueFloatTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(RandomValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x47960);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x68546A67; // 0x0
		::StateTreeGameplay::StateTreeCommonTaskBase Base; // 0x10
		::System::Single MinValue; // 0x30
		::System::Single MaxValue; // 0x34

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::RandomValueFloatTask& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::RandomValueFloatTask&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_COMPILE_OFFSET))(self, instanceDataView);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::RandomValueFloatTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::RandomValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::RandomValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::RandomValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeGameplay::VirtualProxy_RandomValueFloatTask* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_RandomValueFloatTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeGameplay::RandomValueFloatTask Create()
		{
			return ((::StateTreeGameplay::RandomValueFloatTask(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_CREATE_OFFSET))();
		}

		::StateTreeGameplay::RandomValueFloatTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::RandomValueFloatTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::RandomValueFloatTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::RandomValueFloatTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::RandomValueFloatTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::RandomValueFloatTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::RandomValueFloatTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::RandomValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::RandomValueFloatTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::RandomValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_RandomValueFloatTask__CopyAssign(::StateTreeGameplay::RandomValueFloatTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::RandomValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_RANDOMVALUEFLOATTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
