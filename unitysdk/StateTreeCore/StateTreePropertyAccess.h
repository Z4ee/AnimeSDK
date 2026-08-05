#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreePropertyIndirection.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FPropertyHandle.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEPROPERTYACCESS_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xAD00F0)
#define STATETREECORE_STATETREEPROPERTYACCESS_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xAD00C0)
#define STATETREECORE_STATETREEPROPERTYACCESS_CREATE_OFFSET UNITYSDK_OFFSET(0x1FC03390)
#define STATETREECORE_STATETREEPROPERTYACCESS_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xAD00A0)
#define STATETREECORE_STATETREEPROPERTYACCESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREECORE_STATETREEPROPERTYACCESS_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xAD0040)
#define STATETREECORE_STATETREEPROPERTYACCESS_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xAD0160)
#define STATETREECORE_STATETREEPROPERTYACCESS_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xAD00F0)
#define STATETREECORE_STATETREEPROPERTYACCESS_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xAD00C0)
#define STATETREECORE_STATETREEPROPERTYACCESS_RESET_OFFSET UNITYSDK_OFFSET(0xAD0120)
#define STATETREECORE_STATETREEPROPERTYACCESS_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYACCESS__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xAD00F0)
#define STATETREECORE_STATETREEPROPERTYACCESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC03690)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyAccess_TypeDefinitionIndex = 31619;

	struct alignas(4) StateTreePropertyAccess
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreePropertyAccess_TypeDefinitionIndex)->GetStaticField(0x26AB0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x2332AC09; // 0x0
		::StateTreeCore::StateTreePropertyIndirection SourceIndirection; // 0x10
		::UnrealTypes::FPropertyHandle SourceLeafProperty; // 0x20
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> SourceStructType; // 0x24
		::StateTreeCore::StateTreeDataHandle SourceDataHandle; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreePropertyAccess Create()
		{
			return ((::StateTreeCore::StateTreePropertyAccess(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreePropertyAccess DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyAccess(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyAccess CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyAccess(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyAccess MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyAccess(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreePropertyAccess& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyAccess&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreePropertyAccess& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyAccess&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreePropertyAccess__CopyAssign(::StateTreeCore::StateTreePropertyAccess& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyAccess&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYACCESS__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
