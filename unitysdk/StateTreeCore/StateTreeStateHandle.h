#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace System { class String; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREESTATEHANDLE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4D5640)
#define STATETREECORE_STATETREESTATEHANDLE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x35AE50)
#define STATETREECORE_STATETREESTATEHANDLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1DBD01D0)
#define STATETREECORE_STATETREESTATEHANDLE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA30AC0)
#define STATETREECORE_STATETREESTATEHANDLE_DESCRIBE_OFFSET UNITYSDK_OFFSET(0xA309B0)
#define STATETREECORE_STATETREESTATEHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_STATETREESTATEHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x927FF0)
#define STATETREECORE_STATETREESTATEHANDLE_FROMCOMPLETIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1DBC2A60)
#define STATETREECORE_STATETREESTATEHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA30950)
#define STATETREECORE_STATETREESTATEHANDLE_GETTYPEHASH_OFFSET UNITYSDK_OFFSET(0x1DBBFB70)
#define STATETREECORE_STATETREESTATEHANDLE_GET_ISCOMPLETIONSTATE_OFFSET UNITYSDK_OFFSET(0xA30880)
#define STATETREECORE_STATETREESTATEHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7C9630)
#define STATETREECORE_STATETREESTATEHANDLE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA30A60)
#define STATETREECORE_STATETREESTATEHANDLE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA30AE0)
#define STATETREECORE_STATETREESTATEHANDLE_ISVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x1DBD0000)
#define STATETREECORE_STATETREESTATEHANDLE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x4D5640)
#define STATETREECORE_STATETREESTATEHANDLE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x35AE50)
#define STATETREECORE_STATETREESTATEHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DBBFA10)
#define STATETREECORE_STATETREESTATEHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1DBD00B0)
#define STATETREECORE_STATETREESTATEHANDLE_RESET_OFFSET UNITYSDK_OFFSET(0xA30AD0)
#define STATETREECORE_STATETREESTATEHANDLE_TOCOMPLETIONSTATUS_OFFSET UNITYSDK_OFFSET(0xA30920)
#define STATETREECORE_STATETREESTATEHANDLE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREESTATEHANDLE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4D5640)
#define STATETREECORE_STATETREESTATEHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBD0300)
#define STATETREECORE_STATETREESTATEHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA30890)
#define STATETREECORE_STATETREESTATEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x35ACA0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeStateHandle_TypeDefinitionIndex = 31067;

	struct alignas(2) StateTreeStateHandle
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeStateHandle_TypeDefinitionIndex)->GetStaticField(0x24CD0);
		}
		static ::StateTreeCore::StateTreeStateHandle* StaticGet_Root()
		{
			return (::StateTreeCore::StateTreeStateHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeStateHandle_TypeDefinitionIndex)->GetStaticField(0x7B40);
		}
		static ::StateTreeCore::StateTreeStateHandle* StaticGet_Failed()
		{
			return (::StateTreeCore::StateTreeStateHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeStateHandle_TypeDefinitionIndex)->GetStaticField(0x7B42);
		}
		static ::StateTreeCore::StateTreeStateHandle* StaticGet_Stopped()
		{
			return (::StateTreeCore::StateTreeStateHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeStateHandle_TypeDefinitionIndex)->GetStaticField(0x7B44);
		}
		static ::StateTreeCore::StateTreeStateHandle* StaticGet_Invalid()
		{
			return (::StateTreeCore::StateTreeStateHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeStateHandle_TypeDefinitionIndex)->GetStaticField(0x7B46);
		}
		static ::StateTreeCore::StateTreeStateHandle* StaticGet_Succeeded()
		{
			return (::StateTreeCore::StateTreeStateHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeStateHandle_TypeDefinitionIndex)->GetStaticField(0x7B48);
		}
		// static const ::System::UInt16 InvalidIndex = 0xFFFF; // 0x0
		// static const ::System::UInt16 SucceededIndex = 0xFFFE; // 0x0
		// static const ::System::UInt16 FailedIndex = 0xFFFD; // 0x0
		// static const ::System::UInt16 StoppedIndex = 0xFFFC; // 0x0
		// static const ::System::UInt16 RootIndex = 0x0; // 0x0
		// static const ::System::UInt32 PersistentTypeHash = 0xAAD2BCAD; // 0x0
		::System::UInt16 Index; // 0x10

		::System::Void _ctor(::System::UInt16 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE__CTOR_OFFSET))(this, index);
		}

		::System::Void _ctor_1(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE__CTOR_1_OFFSET))(this, index);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsCompletionState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_GET_ISCOMPLETIONSTATE_OFFSET))(this);
		}

		static ::System::Boolean IsValidIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_ISVALIDINDEX_OFFSET))(index);
		}

		::StateTreeCore::StateTreeRunStatus ToCompletionStatus()
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_TOCOMPLETIONSTATUS_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeStateHandle FromCompletionStatus(::StateTreeCore::StateTreeRunStatus status)
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::StateTreeCore::StateTreeRunStatus))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_FROMCOMPLETIONSTATUS_OFFSET))(status);
		}

		::System::Boolean Equals(::StateTreeCore::StateTreeStateHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::UInt32 GetTypeHash(::StateTreeCore::StateTreeStateHandle self)
		{
			return ((::System::UInt32(*)(::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_GETTYPEHASH_OFFSET))(self);
		}

		static ::System::Boolean op_Equality(::StateTreeCore::StateTreeStateHandle lhs, ::StateTreeCore::StateTreeStateHandle rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeStateHandle, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::StateTreeCore::StateTreeStateHandle lhs, ::StateTreeCore::StateTreeStateHandle rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeStateHandle, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::String* Describe()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_DESCRIBE_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeStateHandle Create()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeStateHandle DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeStateHandle CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeStateHandle MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeStateHandle& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeStateHandle& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeStateHandle__CopyAssign(::StateTreeCore::StateTreeStateHandle& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREESTATEHANDLE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
