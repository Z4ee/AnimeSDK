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

#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x7E39D0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_CREATE_OFFSET UNITYSDK_OFFSET(0x1E506100)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA1F3B0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1E505740)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1E5056A0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x463410)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x463260)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x463380)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x4632F0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA1ED80)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA1F3D0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4634A0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0xA1ED70)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x463810)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x7E39D0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_RESET_OFFSET UNITYSDK_OFFSET(0x463850)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0xA1F1E0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0xA1F2E0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0xA1F260)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA1F160)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F060)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0xA1EEE0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0xA1EE60)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0xA1EFE0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0xA1EF60)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0xA1EDE0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0xA1F0E0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0xA1ECF0)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA1F430)
#define STATETREEGAMEPLAY_RANDOMVECTOR3INSPHERETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E506570)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RandomVector3InSphereTask_TypeDefinitionIndex = 67793;

	struct alignas(4) RandomVector3InSphereTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(RandomVector3InSphereTask_TypeDefinitionIndex)->GetStaticField(0x4B3E0);
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
