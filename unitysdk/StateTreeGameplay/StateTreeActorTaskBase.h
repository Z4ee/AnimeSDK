#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace StateTreeGameplay { class VirtualProxy_StateTreeActorTaskBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x591C80)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x732F40)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_CREATE_OFFSET UNITYSDK_OFFSET(0x1CB75F80)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9A0630)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1CB75BF0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1CB75C40)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4109D0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x410AF0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x410A60)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3E3DA0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x591890)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4108C0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x410830)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x591800)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x591770)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x4107A0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9A0230)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9A0650)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x591920)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x9A0220)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x591C80)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x732F40)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_RESET_OFFSET UNITYSDK_OFFSET(0x591CC0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x9A0510)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x9A05B0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x9A0560)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9A04C0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x9A0420)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x9A0330)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x9A02E0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x9A03D0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x9A0380)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x9A0290)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x9A0470)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x9A01D0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CB75C90)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_TICK_OFFSET UNITYSDK_OFFSET(0x1CB75CF0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_TRIGGERTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1CB75D50)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_STATETREEACTORTASKBASE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9A06B0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB76200)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeActorTaskBase_TypeDefinitionIndex = 72374;

	struct alignas(4) StateTreeActorTaskBase
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeActorTaskBase_TypeDefinitionIndex)->GetStaticField(0x4C440);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xD358BE06; // 0x0
		::StateTreeCore::StateTreeTaskBase Base; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE__CCTOR_OFFSET))();
		}

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void ExitState(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void StateCompleted(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		static ::System::Void TriggerTransitions(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_TRIGGERTRANSITIONS_OFFSET))(self, context);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeGameplay::VirtualProxy_StateTreeActorTaskBase* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_StateTreeActorTaskBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeGameplay::StateTreeActorTaskBase Create()
		{
			return ((::StateTreeGameplay::StateTreeActorTaskBase(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_CREATE_OFFSET))();
		}

		::StateTreeGameplay::StateTreeActorTaskBase DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::StateTreeActorTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::StateTreeActorTaskBase CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::StateTreeActorTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::StateTreeActorTaskBase MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::StateTreeActorTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::StateTreeActorTaskBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::StateTreeActorTaskBase&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::StateTreeActorTaskBase& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::StateTreeActorTaskBase&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_StateTreeActorTaskBase__CopyAssign(::StateTreeGameplay::StateTreeActorTaskBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::StateTreeActorTaskBase&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_STATETREEACTORTASKBASE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
