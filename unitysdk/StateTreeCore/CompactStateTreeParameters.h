#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FInstancedPropertyBag.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_COMPACTSTATETREEPARAMETERS_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA149D0)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA148D0)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS_CREATE_OFFSET UNITYSDK_OFFSET(0x1FC60980)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xADAC30)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA14A00)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xADABD0)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xADACB0)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA149E0)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA149A0)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS_RESET_OFFSET UNITYSDK_OFFSET(0xA149F0)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS_UNREALTYPES_ISTRUCT_STATETREECORE_COMPACTSTATETREEPARAMETERS__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA149D0)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC60C30)

namespace StateTreeCore
{
	inline static constexpr unsigned int CompactStateTreeParameters_TypeDefinitionIndex = 31698;

	struct alignas(8) CompactStateTreeParameters
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(CompactStateTreeParameters_TypeDefinitionIndex)->GetStaticField(0x26A10);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xFBB0FB; // 0x0
		::UnrealTypes::FInstancedPropertyBag Parameters; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::CompactStateTreeParameters Create(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::CompactStateTreeParameters(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_CREATE_OFFSET))(allocator);
		}

		::StateTreeCore::CompactStateTreeParameters DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::CompactStateTreeParameters(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::CompactStateTreeParameters CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::CompactStateTreeParameters(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::CompactStateTreeParameters MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::CompactStateTreeParameters(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::CompactStateTreeParameters& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::CompactStateTreeParameters&))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::CompactStateTreeParameters& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::CompactStateTreeParameters&))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_CompactStateTreeParameters__CopyAssign(::StateTreeCore::CompactStateTreeParameters& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::CompactStateTreeParameters&))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_UNREALTYPES_ISTRUCT_STATETREECORE_COMPACTSTATETREEPARAMETERS__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
