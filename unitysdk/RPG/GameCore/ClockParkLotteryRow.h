#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkAttribute; }

#define RPG_GAMECORE_CLOCKPARKLOTTERYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18819960)
#define RPG_GAMECORE_CLOCKPARKLOTTERYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18819F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkLotteryRow_TypeDefinitionIndex = 10691;

	class ClockParkLotteryRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ClockParkAttribute* LotteryAttributeGain; // 0x10
		::System::UInt32 Weight; // 0x18
		::System::UInt32 LotteryID; // 0x1C
		::System::UInt32 LotteryType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkLotteryRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkLotteryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
