#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkRoundType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKROUNDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1965D720)
#define RPG_GAMECORE_CLOCKPARKROUNDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1965DD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkRoundRow_TypeDefinitionIndex = 10728;

	class ClockParkRoundRow : public ::System::Object
	{
	public:
		::System::UInt32 RoundID; // 0x10
		::System::Boolean DiceSpecialDisplay; // 0x14
		::RPG::GameCore::ClockParkRoundType RoundType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkRoundRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkRoundRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
