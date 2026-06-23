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

#define STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA82900)
#define STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA828C0)
#define STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1E85BF30)
#define STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA82810)
#define STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA829E0)
#define STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA82900)
#define STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA828C0)
#define STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_RESET_OFFSET UNITYSDK_OFFSET(0xA82930)
#define STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYPATHINDIRECTION__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA82900)
#define STATETREECORE_STATETREEPROPERTYPATHINDIRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85C260)
#define STATETREECORE_STATETREEPROPERTYPATHINDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA82770)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyPathIndirection_TypeDefinitionIndex = 31005;

	struct alignas(8) StateTreePropertyPathIndirection
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreePropertyPathIndirection_TypeDefinitionIndex)->GetStaticField(0x25810);
		}
		::UnrealTypes::FPropertyHandle Property; // 0x10
		::System::Void* ContainerAddress; // 0x18
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> ContainerStruct; // 0x20
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> InstanceStruct; // 0x24
		::System::Int32 ArrayIndex; // 0x28
		::System::Int32 PropertyOffset; // 0x2C
		::System::Int32 PathSegmentIndex; // 0x30
		::StateTreeCore::StateTreePropertyAccessType AccessType; // 0x34

		::System::Void _ctor(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> containerStruct)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHINDIRECTION__CTOR_OFFSET))(this, containerStruct);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHINDIRECTION__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreePropertyPathIndirection Create()
		{
			return ((::StateTreeCore::StateTreePropertyPathIndirection(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreePropertyPathIndirection DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPathIndirection(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyPathIndirection CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPathIndirection(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyPathIndirection MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPathIndirection(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreePropertyPathIndirection& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyPathIndirection&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreePropertyPathIndirection& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyPathIndirection&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreePropertyPathIndirection__CopyAssign(::StateTreeCore::StateTreePropertyPathIndirection& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyPathIndirection&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHINDIRECTION_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYPATHINDIRECTION__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
