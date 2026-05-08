#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeConditionEvaluationMode.h"
#include "unitysdk/StateTreeCore/StateTreeConditionOperand.h"
#include "unitysdk/StateTreeCore/StateTreeNodeBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace StateTreeCore { class VirtualProxy_StateTreeConditionBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREECONDITIONBASE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4B76B0)
#define STATETREECORE_STATETREECONDITIONBASE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9DB520)
#define STATETREECORE_STATETREECONDITIONBASE_CREATE_OFFSET UNITYSDK_OFFSET(0x1C4D6CA0)
#define STATETREECORE_STATETREECONDITIONBASE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9DB500)
#define STATETREECORE_STATETREECONDITIONBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define STATETREECORE_STATETREECONDITIONBASE_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4B6C10)
#define STATETREECORE_STATETREECONDITIONBASE_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x3EBE20)
#define STATETREECORE_STATETREECONDITIONBASE_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x4B6C70)
#define STATETREECORE_STATETREECONDITIONBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3ABA20)
#define STATETREECORE_STATETREECONDITIONBASE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9DB470)
#define STATETREECORE_STATETREECONDITIONBASE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9DB570)
#define STATETREECORE_STATETREECONDITIONBASE_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define STATETREECORE_STATETREECONDITIONBASE_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x9DB320)
#define STATETREECORE_STATETREECONDITIONBASE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x4B76B0)
#define STATETREECORE_STATETREECONDITIONBASE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9DB520)
#define STATETREECORE_STATETREECONDITIONBASE_RESET_OFFSET UNITYSDK_OFFSET(0x4B76F0)
#define STATETREECORE_STATETREECONDITIONBASE_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x9DB4E0)
#define STATETREECORE_STATETREECONDITIONBASE_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x722290)
#define STATETREECORE_STATETREECONDITIONBASE_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x9DB4F0)
#define STATETREECORE_STATETREECONDITIONBASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9DB4D0)
#define STATETREECORE_STATETREECONDITIONBASE_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2E85F0)
#define STATETREECORE_STATETREECONDITIONBASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x1C4D6A30)
#define STATETREECORE_STATETREECONDITIONBASE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREECONDITIONBASE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4B76B0)
#define STATETREECORE_STATETREECONDITIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4D70A0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeConditionBase_TypeDefinitionIndex = 28266;

	struct alignas(4) StateTreeConditionBase
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x21A00);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x1224F20E; // 0x0
		::StateTreeCore::StateTreeNodeBase Base; // 0x10
		::StateTreeCore::StateTreeConditionOperand Operand; // 0x28
		::System::SByte DeltaIndent; // 0x29
		::StateTreeCore::StateTreeConditionEvaluationMode EvaluationMode; // 0x2A

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE__CCTOR_OFFSET))();
		}

		/*
		static ::System::Boolean TestCondition(::StateTreeCore::StateTreeConditionBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeConditionBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_TESTCONDITION_OFFSET))(self, context);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeCore::VirtualProxy_StateTreeConditionBase* get_VirtualProxy()
		{
			return ((::StateTreeCore::VirtualProxy_StateTreeConditionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeCore::StateTreeConditionBase Create()
		{
			return ((::StateTreeCore::StateTreeConditionBase(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeConditionBase DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeConditionBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeConditionBase CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeConditionBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeConditionBase MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeConditionBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeConditionBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionBase&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeConditionBase& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionBase&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeConditionBase__CopyAssign(::StateTreeCore::StateTreeConditionBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionBase&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREECONDITIONBASE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
