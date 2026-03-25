#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x29140)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20E8410)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x29130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionExcelTable_IndexKey_TypeDefinitionIndex = 12938;

	struct alignas(4) MainMissionExcelTable_IndexKey
	{
		::System::UInt32 MainMissionID; // 0x10

		::System::Void _ctor(::System::UInt32 MainMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, MainMissionID);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::MainMissionExcelTable_IndexKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MainMissionExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
