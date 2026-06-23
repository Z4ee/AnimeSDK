#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FNAMEENTRYID_FROMUNSTABLEINT_OFFSET UNITYSDK_OFFSET(0x1E823110)
#define FOUNDATION_UNREAL_FNAMEENTRYID_GETTYPEHASH_OFFSET UNITYSDK_OFFSET(0x1E823120)
#define FOUNDATION_UNREAL_FNAMEENTRYID_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA7F820)
#define FOUNDATION_UNREAL_FNAMEENTRYID_TOUNSTABLEINT_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define FOUNDATION_UNREAL_FNAMEENTRYID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E823190)
#define FOUNDATION_UNREAL_FNAMEENTRYID__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNameEntryId_TypeDefinitionIndex = 8491;

	struct alignas(4) FNameEntryId
	{
		static ::Foundation::Unreal::FNameEntryId* StaticGet_Invalid()
		{
			return (::Foundation::Unreal::FNameEntryId*)Il2CppClass::FromTypeDefinitionIndex(FNameEntryId_TypeDefinitionIndex)->GetStaticField(0x3B40);
		}
		static ::Foundation::Unreal::FNameEntryId* StaticGet_None()
		{
			return (::Foundation::Unreal::FNameEntryId*)Il2CppClass::FromTypeDefinitionIndex(FNameEntryId_TypeDefinitionIndex)->GetStaticField(0x3B44);
		}
		::System::UInt32 _value; // 0x10

		::System::Void _ctor(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYID__CTOR_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYID__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYID_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 ToUnstableInt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYID_TOUNSTABLEINT_OFFSET))(this);
		}

		static ::Foundation::Unreal::FNameEntryId FromUnstableInt(::System::UInt32 value)
		{
			return ((::Foundation::Unreal::FNameEntryId(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYID_FROMUNSTABLEINT_OFFSET))(value);
		}

		static ::System::UInt32 GetTypeHash(::Foundation::Unreal::FNameEntryId self)
		{
			return ((::System::UInt32(*)(::Foundation::Unreal::FNameEntryId))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYID_GETTYPEHASH_OFFSET))(self);
		}
	};
}
