#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x2C4D0)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x384B540)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x2C4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventExcelTable_IndexKey_TypeDefinitionIndex = 12238;

	struct alignas(4) BattleEventExcelTable_IndexKey
	{
		::System::UInt32 BattleEventID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::BattleEventExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleEventExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
