#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x384B490)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x384B4B0)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38539B0)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidConfigExcelTable_IndexKey_TypeDefinitionIndex = 13863;

	struct alignas(4) RaidConfigExcelTable_IndexKey
	{
		::System::UInt32 RaidID; // 0x10
		::System::UInt32 HardLevel; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::RaidConfigExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RaidConfigExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
