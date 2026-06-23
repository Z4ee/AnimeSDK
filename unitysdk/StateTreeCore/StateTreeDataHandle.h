#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataSourceType.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEDATAHANDLE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA2FE90)
#define STATETREECORE_STATETREEDATAHANDLE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA2FE70)
#define STATETREECORE_STATETREEDATAHANDLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1DBBFCF0)
#define STATETREECORE_STATETREEDATAHANDLE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA2FE00)
#define STATETREECORE_STATETREEDATAHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_STATETREEDATAHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2FC60)
#define STATETREECORE_STATETREEDATAHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2FCD0)
#define STATETREECORE_STATETREEDATAHANDLE_GETTYPEHASH_OFFSET UNITYSDK_OFFSET(0x1DBBFAF0)
#define STATETREECORE_STATETREEDATAHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x3D6980)
#define STATETREECORE_STATETREEDATAHANDLE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA2FDA0)
#define STATETREECORE_STATETREEDATAHANDLE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA2FF10)
#define STATETREECORE_STATETREEDATAHANDLE_ISVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x1DBBFC80)
#define STATETREECORE_STATETREEDATAHANDLE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA2FE90)
#define STATETREECORE_STATETREEDATAHANDLE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA2FE70)
#define STATETREECORE_STATETREEDATAHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DBBFB80)
#define STATETREECORE_STATETREEDATAHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1DBBFC00)
#define STATETREECORE_STATETREEDATAHANDLE_RESET_OFFSET UNITYSDK_OFFSET(0xA2FEB0)
#define STATETREECORE_STATETREEDATAHANDLE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEDATAHANDLE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA2FE90)
#define STATETREECORE_STATETREEDATAHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBBFF30)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA2FB70)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA2FBE0)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_3_OFFSET UNITYSDK_OFFSET(0xA2FBF0)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_4_OFFSET UNITYSDK_OFFSET(0xA2FBE0)
#define STATETREECORE_STATETREEDATAHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FB00)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeDataHandle_TypeDefinitionIndex = 31070;

	struct alignas(2) StateTreeDataHandle
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x24F10);
		}
		static ::StateTreeCore::StateTreeDataHandle* StaticGet_Invalid()
		{
			return (::StateTreeCore::StateTreeDataHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x7B60);
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
