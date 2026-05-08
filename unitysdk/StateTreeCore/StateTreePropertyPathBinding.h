#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreePropertyPath.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEPROPERTYPATHBINDING_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9E1910)
#define STATETREECORE_STATETREEPROPERTYPATHBINDING_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9E1630)
#define STATETREECORE_STATETREEPROPERTYPATHBINDING_CREATE_OFFSET UNITYSDK_OFFSET(0x1C5390B0)
#define STATETREECORE_STATETREEPROPERTYPATHBINDING_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9E1560)
#define STATETREECORE_STATETREEPROPERTYPATHBINDING_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E1B50)
#define STATETREECORE_STATETREEPROPERTYPATHBINDING_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9E1500)
#define STATETREECORE_STATETREEPROPERTYPATHBINDING_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9E1B80)
#define STATETREECORE_STATETREEPROPERTYPATHBINDING_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x9E1AA0)
#define STATETREECORE_STATETREEPROPERTYPATHBINDING_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9E1770)
#define STATETREECORE_STATETREEPROPERTYPATHBINDING_RESET_OFFSET UNITYSDK_OFFSET(0x9E1AE0)
#define STATETREECORE_STATETREEPROPERTYPATHBINDING_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYPATHBINDING__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9E1910)
#define STATETREECORE_STATETREEPROPERTYPATHBINDING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5397C0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyPathBinding_TypeDefinitionIndex = 28348;

	struct alignas(8) StateTreePropertyPathBinding
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreePropertyPathBinding_TypeDefinitionIndex)->GetStaticField(0x21A60);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xA6F0C60D; // 0x0
		::StateTreeCore::StateTreePropertyPath SourcePropertyPath; // 0x10
		::StateTreeCore::StateTreePropertyPath TargetPropertyPath; // 0x28
		::StateTreeCore::StateTreeDataHandle SourceDataHandle; // 0x40

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreePropertyPathBinding Create(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPathBinding(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING_CREATE_OFFSET))(allocator);
		}

		::StateTreeCore::StateTreePropertyPathBinding DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPathBinding(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyPathBinding CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPathBinding(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyPathBinding MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyPathBinding(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreePropertyPathBinding& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyPathBinding&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreePropertyPathBinding& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyPathBinding&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreePropertyPathBinding__CopyAssign(::StateTreeCore::StateTreePropertyPathBinding& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyPathBinding&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYPATHBINDING__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
