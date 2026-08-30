#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFE3B50)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE40F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkProgressRewardRow_TypeDefinitionIndex = 11180;

	class ClockParkProgressRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestProgress; // 0x10
		::System::UInt32 QuestID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkProgressRewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkProgressRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
