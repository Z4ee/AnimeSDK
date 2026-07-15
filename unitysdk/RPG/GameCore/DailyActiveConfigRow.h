#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DAILYACTIVECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BC431C0)
#define RPG_GAMECORE_DAILYACTIVECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC437F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DailyActiveConfigRow_TypeDefinitionIndex = 12616;

	class DailyActiveConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 WorldLevel; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 DailyActiveReward; // 0x18
		::System::UInt32 DailyActivePoint; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DailyActiveConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DailyActiveConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
