#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_BASEFRAGMENT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_BASEFRAGMENT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_BASEFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x1DBBD9B0)
#define STATETREECORE_BASEFRAGMENT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_BASEFRAGMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_BASEFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA2FA40)
#define STATETREECORE_BASEFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA2FAA0)
#define STATETREECORE_BASEFRAGMENT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_BASEFRAGMENT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_BASEFRAGMENT_RESET_OFFSET UNITYSDK_OFFSET(0x4105E0)
#define STATETREECORE_BASEFRAGMENT_UNREALTYPES_ISTRUCT_STATETREECORE_BASEFRAGMENT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_BASEFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBBDAE0)

namespace StateTreeCore
{
	inline static constexpr unsigned int BaseFragment_TypeDefinitionIndex = 30976;

	struct alignas(1) BaseFragment
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(BaseFragment_TypeDefinitionIndex)->GetStaticField(0x24F50);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x25BCCC24; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::BaseFragment Create()
		{
			return ((::StateTreeCore::BaseFragment(*)())((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_CREATE_OFFSET))();
		}

		::StateTreeCore::BaseFragment DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::BaseFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::BaseFragment CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::BaseFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::BaseFragment MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::BaseFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::BaseFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::BaseFragment&))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::BaseFragment& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::BaseFragment&))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_BaseFragment__CopyAssign(::StateTreeCore::BaseFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::BaseFragment&))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_UNREALTYPES_ISTRUCT_STATETREECORE_BASEFRAGMENT__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
