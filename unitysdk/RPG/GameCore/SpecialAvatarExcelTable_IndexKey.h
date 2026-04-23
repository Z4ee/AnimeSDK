#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x22BA540)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22BA560)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22BBBB0)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarExcelTable_IndexKey_TypeDefinitionIndex = 14335;

	struct alignas(4) SpecialAvatarExcelTable_IndexKey
	{
		::System::UInt32 SpecialAvatarID; // 0x10
		::System::UInt32 WorldLevel; // 0x14

		::System::Void _ctor(::System::UInt32 SpecialAvatarID, ::System::UInt32 WorldLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, SpecialAvatarID, WorldLevel);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::SpecialAvatarExcelTable_IndexKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
