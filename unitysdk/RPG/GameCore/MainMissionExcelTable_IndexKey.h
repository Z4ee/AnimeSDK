#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x860DE0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19050)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x860D40)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionExcelTable_IndexKey_TypeDefinitionIndex = 14037;

	struct alignas(4) MainMissionExcelTable_IndexKey
	{
		::System::UInt32 MainMissionID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::MainMissionExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MainMissionExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
