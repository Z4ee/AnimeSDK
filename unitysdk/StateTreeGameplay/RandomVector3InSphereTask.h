#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeGameplay/StateTreeCommonTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace StateTreeGameplay { class VirtualProxy_RandomVector3InSphereTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x591C80)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x732F40)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_CREATE_OFFSET UNITYSDK_OFFSET(0x1CB73440)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x99F4A0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1CB72A80)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1CB729E0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4109D0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x410AF0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x410A60)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3E3DA0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x591890)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4108C0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x410830)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x591800)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x591770)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x4107A0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x99EE70)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x99F4C0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x591920)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x99EE60)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x591C80)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x732F40)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_RESET_OFFSET UNITYSDK_OFFSET(0x591CC0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x99F2D0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x99F3D0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x99F350)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x99F250)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x99F150)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x99EFD0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x99EF50)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x99F0D0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x99F050)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x99EED0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x99F1D0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x99EDE0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x99F520)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB738B0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RandomVector3InSphereTask_TypeDefinitionIndex = 49638;

	struct alignas(4) RandomVector3InSphereTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(RandomVector3InSphereTask_TypeDefinitionIndex)->GetStaticField(0x4C3B0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x77A85FDE; // 0x0
		::StateTreeGameplay::StateTreeCommonTaskBase Base; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::RandomVector3InSphereTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::RandomVector3InSphereTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::RandomVector3InSphereTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::RandomVector3InSphereTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeGameplay::VirtualProxy_RandomVector3InSphereTask* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_RandomVector3InSphereTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeGameplay::RandomVector3InSphereTask Create()
		{
			return ((::StateTreeGameplay::RandomVector3InSphereTask(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_CREATE_OFFSET))();
		}

		::StateTreeGameplay::RandomVector3InSphereTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::RandomVector3InSphereTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::RandomVector3InSphereTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::RandomVector3InSphereTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::RandomVector3InSphereTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::RandomVector3InSphereTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::RandomVector3InSphereTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::RandomVector3InSphereTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::RandomVector3InSphereTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::RandomVector3InSphereTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_RandomVector3InSphereTask__CopyAssign(::StateTreeGameplay::RandomVector3InSphereTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::RandomVector3InSphereTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
