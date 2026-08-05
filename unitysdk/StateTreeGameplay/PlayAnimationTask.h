#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeGameplay/StateTreeActorTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace StateTreeGameplay { class VirtualProxy_PlayAnimationTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x96B750)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x96B700)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x1CB936A0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x96B6E0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1CB92AD0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1CB92A30)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x96B0B0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x96B820)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x96B0A0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x96B750)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x96B700)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_RESET_OFFSET UNITYSDK_OFFSET(0x96B7A0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x96B510)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x96B610)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x96B590)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x96B490)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x96B390)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x96B210)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x96B190)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x96B310)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x96B290)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x96B110)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x96B410)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x96B020)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1CB92C60)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_PLAYANIMATIONTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x96B880)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB93B50)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int PlayAnimationTask_TypeDefinitionIndex = 41641;

	struct alignas(4) PlayAnimationTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(PlayAnimationTask_TypeDefinitionIndex)->GetStaticField(0x47920);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x749A8D81; // 0x0
		::StateTreeGameplay::StateTreeActorTaskBase Base; // 0x10
		::System::Int32 AnimationID; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::PlayAnimationTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::PlayAnimationTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::PlayAnimationTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::PlayAnimationTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::PlayAnimationTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::PlayAnimationTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeGameplay::VirtualProxy_PlayAnimationTask* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_PlayAnimationTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeGameplay::PlayAnimationTask Create()
		{
			return ((::StateTreeGameplay::PlayAnimationTask(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_CREATE_OFFSET))();
		}

		::StateTreeGameplay::PlayAnimationTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::PlayAnimationTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::PlayAnimationTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::PlayAnimationTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::PlayAnimationTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::PlayAnimationTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::PlayAnimationTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::PlayAnimationTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::PlayAnimationTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::PlayAnimationTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_PlayAnimationTask__CopyAssign(::StateTreeGameplay::PlayAnimationTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::PlayAnimationTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_PLAYANIMATIONTASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
