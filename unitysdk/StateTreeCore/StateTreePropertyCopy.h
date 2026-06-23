#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreePropertyCopyType.h"
#include "unitysdk/StateTreeCore/StateTreePropertyIndirection.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FPropertyHandle.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEPROPERTYCOPY_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA748D0)
#define STATETREECORE_STATETREEPROPERTYCOPY_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA74880)
#define STATETREECORE_STATETREEPROPERTYCOPY_CREATE_OFFSET UNITYSDK_OFFSET(0x1E6807B0)
#define STATETREECORE_STATETREEPROPERTYCOPY_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA74860)
#define STATETREECORE_STATETREEPROPERTYCOPY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_STATETREEPROPERTYCOPY_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA74800)
#define STATETREECORE_STATETREEPROPERTYCOPY_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA74960)
#define STATETREECORE_STATETREEPROPERTYCOPY_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA748D0)
#define STATETREECORE_STATETREEPROPERTYCOPY_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA74880)
#define STATETREECORE_STATETREEPROPERTYCOPY_RESET_OFFSET UNITYSDK_OFFSET(0xA74910)
#define STATETREECORE_STATETREEPROPERTYCOPY_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYCOPY__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA748D0)
#define STATETREECORE_STATETREEPROPERTYCOPY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E680B60)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyCopy_TypeDefinitionIndex = 31012;

	struct alignas(4) StateTreePropertyCopy
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreePropertyCopy_TypeDefinitionIndex)->GetStaticField(0x256F0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xC74DF1FA; // 0x0
		::StateTreeCore::StateTreePropertyIndirection SourceIndirection; // 0x10
		::StateTreeCore::StateTreePropertyIndirection TargetIndirection; // 0x20
		::UnrealTypes::FPropertyHandle SourceLeafProperty; // 0x30
		::UnrealTypes::FPropertyHandle TargetLeafProperty; // 0x34
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> SourceStructType; // 0x38
		::System::Int32 CopySize; // 0x3C
		::StateTreeCore::StateTreeDataHandle SourceDataHandle; // 0x40
		::StateTreeCore::StateTreePropertyCopyType Type; // 0x46

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPY__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPY_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreePropertyCopy Create()
		{
			return ((::StateTreeCore::StateTreePropertyCopy(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPY_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreePropertyCopy DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyCopy(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPY_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyCopy CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyCopy(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPY_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyCopy MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyCopy(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPY_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreePropertyCopy& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyCopy&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPY_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreePropertyCopy& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyCopy&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPY_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPY_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPY_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPY_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreePropertyCopy__CopyAssign(::StateTreeCore::StateTreePropertyCopy& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyCopy&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPY_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYCOPY__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
