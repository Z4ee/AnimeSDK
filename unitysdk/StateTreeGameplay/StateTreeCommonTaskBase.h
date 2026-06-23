#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace StateTreeGameplay { class VirtualProxy_StateTreeCommonTaskBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x591C80)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x732F40)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_CREATE_OFFSET UNITYSDK_OFFSET(0x1DA4CC90)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA2AA90)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1DA4C460)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1DA4C4B0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4109D0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x410AF0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x410A60)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3E3DA0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x591890)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4108C0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x410830)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x591800)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x591770)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x4107A0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA2A690)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA2AAB0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x591920)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0xA2A680)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x591C80)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x732F40)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_RESET_OFFSET UNITYSDK_OFFSET(0x591CC0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0xA2A970)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0xA2AA10)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0xA2A9C0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA2A920)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0xA2A880)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0xA2A790)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0xA2A740)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0xA2A830)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0xA2A7E0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0xA2A6F0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0xA2A8D0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0xA2A630)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1DA4C500)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_TICK_OFFSET UNITYSDK_OFFSET(0x1DA4C560)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_TRIGGERTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1DA4C5C0)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_STATETREECOMMONTASKBASE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA2AB10)
#define STATETREEGAMEPLAY_STATETREECOMMONTASKBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA4D0C0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeCommonTaskBase_TypeDefinitionIndex = 50611;

	struct alignas(4) StateTreeCommonTaskBase
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeCommonTaskBase_TypeDefinitionIndex)->GetStaticField(0x457E0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xBA972808; // 0x0
		::StateTreeCore::StateTreeTaskBase Base; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE__CCTOR_OFFSET))();
		}

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::StateTreeCommonTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::StateTreeCommonTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void ExitState(::StateTreeGameplay::StateTreeCommonTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeCommonTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void StateCompleted(::StateTreeGameplay::StateTreeCommonTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeCommonTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::StateTreeCommonTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::StateTreeCommonTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		static ::System::Void TriggerTransitions(::StateTreeGameplay::StateTreeCommonTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeCommonTaskBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_TRIGGERTRANSITIONS_OFFSET))(self, context);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeGameplay::VirtualProxy_StateTreeCommonTaskBase* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_StateTreeCommonTaskBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeGameplay::StateTreeCommonTaskBase Create()
		{
			return ((::StateTreeGameplay::StateTreeCommonTaskBase(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_CREATE_OFFSET))();
		}

		::StateTreeGameplay::StateTreeCommonTaskBase DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::StateTreeCommonTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::StateTreeCommonTaskBase CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::StateTreeCommonTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::StateTreeCommonTaskBase MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::StateTreeCommonTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::StateTreeCommonTaskBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::StateTreeCommonTaskBase&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::StateTreeCommonTaskBase& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::StateTreeCommonTaskBase&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_StateTreeCommonTaskBase__CopyAssign(::StateTreeGameplay::StateTreeCommonTaskBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::StateTreeCommonTaskBase&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMMONTASKBASE_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_STATETREECOMMONTASKBASE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
