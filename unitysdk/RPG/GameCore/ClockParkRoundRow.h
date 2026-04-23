#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkRoundType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKROUNDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1881C5B0)
#define RPG_GAMECORE_CLOCKPARKROUNDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1881CBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkRoundRow_TypeDefinitionIndex = 10672;

	class ClockParkRoundRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ClockParkRoundType RoundType; // 0x10
		::System::UInt32 RoundID; // 0x14
		::System::Boolean DiceSpecialDisplay; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkRoundRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkRoundRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
