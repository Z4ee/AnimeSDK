#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeGameplay/StateTreeActorTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace StateTreeGameplay { class VirtualProxy_SendGraphEventTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x7E39D0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x1E507FE0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA1FDA0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1E507080)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1E506FE0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA1F600)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA1FDC0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0xA1F5F0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x7E39D0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_RESET_OFFSET UNITYSDK_OFFSET(0x463850)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0xA1FB10)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0xA1FD70)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0xA1FC40)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA1F9E0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F8E0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0xA1F760)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0xA1F6E0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0xA1F860)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0xA1F7E0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0xA1F660)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0xA1F960)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0xA1F4C0)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1E507220)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_SENDGRAPHEVENTTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA1FE20)
#define STATETREEGAMEPLAY_SENDGRAPHEVENTTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E508600)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int SendGraphEventTask_TypeDefinitionIndex = 85770;

	struct alignas(4) SendGraphEventTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(SendGraphEventTask_TypeDefinitionIndex)->GetStaticField(0x4B460);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xB8ADC4AB; // 0x0
		::StateTreeGameplay::StateTreeActorTaskBase Base; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::SendGraphEventTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::SendGraphEventTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::SendGraphEventTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::SendGraphEventTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::SendGraphEventTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::SendGraphEventTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeGameplay::VirtualProxy_SendGraphEventTask* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_SendGraphEventTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeGameplay::SendGraphEventTask Create()
		{
			return ((::StateTreeGameplay::SendGraphEventTask(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_CREATE_OFFSET))();
		}

		::StateTreeGameplay::SendGraphEventTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::SendGraphEventTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::SendGraphEventTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::SendGraphEventTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::SendGraphEventTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::SendGraphEventTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::SendGraphEventTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::SendGraphEventTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::SendGraphEventTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::SendGraphEventTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_SendGraphEventTask__CopyAssign(::StateTreeGameplay::SendGraphEventTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::SendGraphEventTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_SENDGRAPHEVENTTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_SENDGRAPHEVENTTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
