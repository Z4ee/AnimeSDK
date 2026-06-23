#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeBindableStructDesc.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEPROPERTYCOPYBATCH_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA5AE10)
#define STATETREECORE_STATETREEPROPERTYCOPYBATCH_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA5ADF0)
#define STATETREECORE_STATETREEPROPERTYCOPYBATCH_CREATE_OFFSET UNITYSDK_OFFSET(0x1E1DBD60)
#define STATETREECORE_STATETREEPROPERTYCOPYBATCH_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA5AD70)
#define STATETREECORE_STATETREEPROPERTYCOPYBATCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_STATETREEPROPERTYCOPYBATCH_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA5AD10)
#define STATETREECORE_STATETREEPROPERTYCOPYBATCH_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA5AED0)
#define STATETREECORE_STATETREEPROPERTYCOPYBATCH_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA5AE10)
#define STATETREECORE_STATETREEPROPERTYCOPYBATCH_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA5ADF0)
#define STATETREECORE_STATETREEPROPERTYCOPYBATCH_RESET_OFFSET UNITYSDK_OFFSET(0xA5AE30)
#define STATETREECORE_STATETREEPROPERTYCOPYBATCH_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYCOPYBATCH__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA5AE10)
#define STATETREECORE_STATETREEPROPERTYCOPYBATCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DBFF0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyCopyBatch_TypeDefinitionIndex = 31009;

	struct alignas(4) StateTreePropertyCopyBatch
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreePropertyCopyBatch_TypeDefinitionIndex)->GetStaticField(0x25790);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x145A97A6; // 0x0
		::StateTreeCore::StateTreeBindableStructDesc TargetStruct; // 0x10
		::System::UInt16 BindingsBegin; // 0x24
		::System::UInt16 BindingsEnd; // 0x26

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPYBATCH__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPYBATCH_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreePropertyCopyBatch Create()
		{
			return ((::StateTreeCore::StateTreePropertyCopyBatch(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPYBATCH_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreePropertyCopyBatch DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyCopyBatch(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPYBATCH_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyCopyBatch CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyCopyBatch(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPYBATCH_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyCopyBatch MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyCopyBatch(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPYBATCH_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreePropertyCopyBatch& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyCopyBatch&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPYBATCH_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreePropertyCopyBatch& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyCopyBatch&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPYBATCH_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPYBATCH_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPYBATCH_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPYBATCH_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreePropertyCopyBatch__CopyAssign(::StateTreeCore::StateTreePropertyCopyBatch& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyCopyBatch&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPYBATCH_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYCOPYBATCH__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
