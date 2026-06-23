#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeNodeBase.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace StateTreeCore { class VirtualProxy_StateTreeTaskBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREETASKBASE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x591C80)
#define STATETREECORE_STATETREETASKBASE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x732F40)
#define STATETREECORE_STATETREETASKBASE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E83AFA0)
#define STATETREECORE_STATETREETASKBASE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA80E30)
#define STATETREECORE_STATETREETASKBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_STATETREETASKBASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1E83ACF0)
#define STATETREECORE_STATETREETASKBASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1E83AD00)
#define STATETREECORE_STATETREETASKBASE_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4109D0)
#define STATETREECORE_STATETREETASKBASE_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x410AF0)
#define STATETREECORE_STATETREETASKBASE_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x410A60)
#define STATETREECORE_STATETREETASKBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3E3DA0)
#define STATETREECORE_STATETREETASKBASE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA80DD0)
#define STATETREECORE_STATETREETASKBASE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA80E50)
#define STATETREECORE_STATETREETASKBASE_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STATETREECORE_STATETREETASKBASE_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0xA80C80)
#define STATETREECORE_STATETREETASKBASE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x591C80)
#define STATETREECORE_STATETREETASKBASE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x732F40)
#define STATETREECORE_STATETREETASKBASE_RESET_OFFSET UNITYSDK_OFFSET(0x591CC0)
#define STATETREECORE_STATETREETASKBASE_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0xA7CAE0)
#define STATETREECORE_STATETREETASKBASE_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x7F5090)
#define STATETREECORE_STATETREETASKBASE_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0xA7CAF0)
#define STATETREECORE_STATETREETASKBASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA7CAD0)
#define STATETREECORE_STATETREETASKBASE_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2B66C0)
#define STATETREECORE_STATETREETASKBASE_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E83AD10)
#define STATETREECORE_STATETREETASKBASE_TICK_OFFSET UNITYSDK_OFFSET(0x1E83AD20)
#define STATETREECORE_STATETREETASKBASE_TRIGGERTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1E83AD30)
#define STATETREECORE_STATETREETASKBASE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETASKBASE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x591C80)
#define STATETREECORE_STATETREETASKBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83B3A0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTaskBase_TypeDefinitionIndex = 31054;

	struct alignas(4) StateTreeTaskBase
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x24CC0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xF815FE46; // 0x0
		::StateTreeCore::StateTreeNodeBase Base; // 0x10
		::System::Boolean ShouldStateChangeOnReselect; // 0x28
		::System::Boolean ShouldCallTick; // 0x29
		::System::Boolean ShouldCallTickOnlyOnEvents; // 0x2A
		::System::Boolean ShouldCopyBoundPropertiesOnTick; // 0x2B
		::System::Boolean ShouldCopyBoundPropertiesOnExitState; // 0x2C
		::System::Boolean ShouldAffectTransitions; // 0x2D
		::System::Boolean TaskEnabled; // 0x2E

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE__CCTOR_OFFSET))();
		}

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeCore::StateTreeTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeCore::StateTreeTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void ExitState(::StateTreeCore::StateTreeTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeCore::StateTreeTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void StateCompleted(::StateTreeCore::StateTreeTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::StateTreeCore::StateTreeTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeCore::StateTreeTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeCore::StateTreeTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		static ::System::Void TriggerTransitions(::StateTreeCore::StateTreeTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Void(*)(::StateTreeCore::StateTreeTaskBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_TRIGGERTRANSITIONS_OFFSET))(self, context);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeCore::VirtualProxy_StateTreeTaskBase* get_VirtualProxy()
		{
			return ((::StateTreeCore::VirtualProxy_StateTreeTaskBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeCore::StateTreeTaskBase Create()
		{
			return ((::StateTreeCore::StateTreeTaskBase(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeTaskBase DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeTaskBase CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeTaskBase MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeTaskBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTaskBase&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeTaskBase& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTaskBase&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeTaskBase__CopyAssign(::StateTreeCore::StateTreeTaskBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTaskBase&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETASKBASE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
