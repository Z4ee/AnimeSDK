#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataSourceType.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEDATAHANDLE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA7C140)
#define STATETREECORE_STATETREEDATAHANDLE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA7C120)
#define STATETREECORE_STATETREEDATAHANDLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1ED76E30)
#define STATETREECORE_STATETREEDATAHANDLE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA7C0B0)
#define STATETREECORE_STATETREEDATAHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREECORE_STATETREEDATAHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA7BF10)
#define STATETREECORE_STATETREEDATAHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA7BF80)
#define STATETREECORE_STATETREEDATAHANDLE_GETTYPEHASH_OFFSET UNITYSDK_OFFSET(0x1ED76C30)
#define STATETREECORE_STATETREEDATAHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x36DBB0)
#define STATETREECORE_STATETREEDATAHANDLE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA7C050)
#define STATETREECORE_STATETREEDATAHANDLE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA7C1C0)
#define STATETREECORE_STATETREEDATAHANDLE_ISVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x1ED76DC0)
#define STATETREECORE_STATETREEDATAHANDLE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA7C140)
#define STATETREECORE_STATETREEDATAHANDLE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA7C120)
#define STATETREECORE_STATETREEDATAHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1ED76CC0)
#define STATETREECORE_STATETREEDATAHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1ED76D40)
#define STATETREECORE_STATETREEDATAHANDLE_RESET_OFFSET UNITYSDK_OFFSET(0xA7C160)
#define STATETREECORE_STATETREEDATAHANDLE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEDATAHANDLE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA7C140)
#define STATETREECORE_STATETREEDATAHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED77070)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA7BE20)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA7BE90)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_3_OFFSET UNITYSDK_OFFSET(0xA7BEA0)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_4_OFFSET UNITYSDK_OFFSET(0xA7BE90)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA7BDB0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeDataHandle_TypeDefinitionIndex = 31689;

	struct alignas(2) StateTreeDataHandle
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x26690);
		}
		static ::StateTreeCore::StateTreeDataHandle* StaticGet_Invalid()
		{
			return (::StateTreeCore::StateTreeDataHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x7B50);
		}
		// static const ::System::UInt16 InvalidIndex = 0xFFFF; // 0x0
		// static const ::System::UInt32 PersistentTypeHash = 0x7E45BBC0; // 0x0
		::StateTreeCore::StateTreeDataSourceType Source; // 0x10
		::System::UInt16 Index; // 0x12
		::StateTreeCore::StateTreeStateHandle StateHandle; // 0x14

		::System::Void _ctor(::StateTreeCore::StateTreeDataSourceType source)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataSourceType))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE__CTOR_OFFSET))(this, source);
		}

		::System::Void _ctor_1(::StateTreeCore::StateTreeDataSourceType source, ::System::UInt16 index)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataSourceType, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE__CTOR_1_OFFSET))(this, source, index);
		}

		::System::Void _ctor_2(::StateTreeCore::StateTreeDataSourceType source, ::System::UInt16 index, ::StateTreeCore::StateTreeStateHandle stateHandle)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataSourceType, ::System::UInt16, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE__CTOR_2_OFFSET))(this, source, index, stateHandle);
		}

		::System::Void _ctor_3(::StateTreeCore::StateTreeDataSourceType source, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataSourceType, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE__CTOR_3_OFFSET))(this, source, index);
		}

		::System::Void _ctor_4(::StateTreeCore::StateTreeDataSourceType source, ::System::Int32 index, ::StateTreeCore::StateTreeStateHandle stateHandle)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataSourceType, ::System::Int32, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE__CTOR_4_OFFSET))(this, source, index, stateHandle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean Equals(::StateTreeCore::StateTreeDataHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::UInt32 GetTypeHash(::StateTreeCore::StateTreeDataHandle& self)
		{
			return ((::System::UInt32(*)(::StateTreeCore::StateTreeDataHandle&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_GETTYPEHASH_OFFSET))(self);
		}

		static ::System::Boolean op_Equality(::StateTreeCore::StateTreeDataHandle& lhs, ::StateTreeCore::StateTreeDataHandle& rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeDataHandle&, ::StateTreeCore::StateTreeDataHandle&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::StateTreeCore::StateTreeDataHandle& lhs, ::StateTreeCore::StateTreeDataHandle& rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeDataHandle&, ::StateTreeCore::StateTreeDataHandle&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean IsValidIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_ISVALIDINDEX_OFFSET))(index);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeDataHandle Create()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeDataHandle DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeDataHandle CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeDataHandle MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeDataHandle& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeDataHandle& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeDataHandle__CopyAssign(::StateTreeCore::StateTreeDataHandle& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAHANDLE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEDATAHANDLE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
