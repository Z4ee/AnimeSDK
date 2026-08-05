#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeGameplay/StateTreeActorTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace StateTreeGameplay { class VirtualProxy_MoveToPositionTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA3D990)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA3D930)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x1E829530)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA3D910)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1E828930)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1E828890)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA3D2E0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA3DA60)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0xA3D2D0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA3D990)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA3D930)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_RESET_OFFSET UNITYSDK_OFFSET(0xA3D9E0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0xA3D740)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0xA3D840)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0xA3D7C0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA3D6C0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0xA3D5C0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0xA3D440)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0xA3D3C0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0xA3D540)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0xA3D4C0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0xA3D340)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0xA3D640)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0xA3D250)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1E828AF0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_MOVETOPOSITIONTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA3DAC0)
#define STATETREEGAMEPLAY_MOVETOPOSITIONTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E829A00)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int MoveToPositionTask_TypeDefinitionIndex = 62208;

	struct alignas(4) MoveToPositionTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(MoveToPositionTask_TypeDefinitionIndex)->GetStaticField(0x512A0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x832023A; // 0x0
		::StateTreeGameplay::StateTreeActorTaskBase Base; // 0x10
		::System::Boolean StopAtTarget; // 0x30
		::System::Boolean UpdateTargetOnTick; // 0x31

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::MoveToPositionTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::MoveToPositionTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::MoveToPositionTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::MoveToPositionTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::MoveToPositionTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::MoveToPositionTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeGameplay::VirtualProxy_MoveToPositionTask* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_MoveToPositionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeGameplay::MoveToPositionTask Create()
		{
			return ((::StateTreeGameplay::MoveToPositionTask(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_CREATE_OFFSET))();
		}

		::StateTreeGameplay::MoveToPositionTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::MoveToPositionTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::MoveToPositionTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::MoveToPositionTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::MoveToPositionTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::MoveToPositionTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::MoveToPositionTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::MoveToPositionTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::MoveToPositionTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::MoveToPositionTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_MoveToPositionTask__CopyAssign(::StateTreeGameplay::MoveToPositionTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::MoveToPositionTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVETOPOSITIONTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_MOVETOPOSITIONTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
