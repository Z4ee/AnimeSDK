#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreePropertyAccessType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FPropertyHandle.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEPROPERTYINDIRECTION_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9DFC50)
#define STATETREECORE_STATETREEPROPERTYINDIRECTION_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9DFC20)
#define STATETREECORE_STATETREEPROPERTYINDIRECTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1C514890)
#define STATETREECORE_STATETREEPROPERTYINDIRECTION_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9DFB80)
#define STATETREECORE_STATETREEPROPERTYINDIRECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define STATETREECORE_STATETREEPROPERTYINDIRECTION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9DFB20)
#define STATETREECORE_STATETREEPROPERTYINDIRECTION_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9DFD10)
#define STATETREECORE_STATETREEPROPERTYINDIRECTION_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x9DFC50)
#define STATETREECORE_STATETREEPROPERTYINDIRECTION_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9DFC20)
#define STATETREECORE_STATETREEPROPERTYINDIRECTION_RESET_OFFSET UNITYSDK_OFFSET(0x9DFC80)
#define STATETREECORE_STATETREEPROPERTYINDIRECTION_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYINDIRECTION__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9DFC50)
#define STATETREECORE_STATETREEPROPERTYINDIRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C514B40)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyIndirection_TypeDefinitionIndex = 28353;

	struct alignas(4) StateTreePropertyIndirection
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x21840);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x7ED6C241; // 0x0
		::System::UInt16 ArrayIndex; // 0x10
		::System::UInt16 Offset; // 0x12
		::System::UInt16 NextIndex; // 0x14
		::StateTreeCore::StateTreePropertyAccessType Type; // 0x16
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> InstanceStruct; // 0x18
		::UnrealTypes::FPropertyHandle ArrayProperty; // 0x1C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYINDIRECTION__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYINDIRECTION_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreePropertyIndirection Create()
		{
			return ((::StateTreeCore::StateTreePropertyIndirection(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYINDIRECTION_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreePropertyIndirection DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyIndirection(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYINDIRECTION_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyIndirection CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyIndirection(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYINDIRECTION_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyIndirection MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyIndirection(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYINDIRECTION_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreePropertyIndirection& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyIndirection&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYINDIRECTION_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreePropertyIndirection& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyIndirection&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYINDIRECTION_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYINDIRECTION_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYINDIRECTION_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYINDIRECTION_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreePropertyIndirection__CopyAssign(::StateTreeCore::StateTreePropertyIndirection& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyIndirection&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYINDIRECTION_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYINDIRECTION__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
