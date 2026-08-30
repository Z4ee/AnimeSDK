#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMSTATSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2E6CF0)
#define RPG_GAMECORE_MUSEUMSTATSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E73C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumStatsRow_TypeDefinitionIndex = 14115;

	class MuseumStatsRow : public ::System::Object
	{
	public:
		::System::UInt32 FundCost; // 0x10
		::System::UInt32 StatsValue; // 0x14
		::System::UInt32 StatsType; // 0x18
		::System::UInt32 AreaID; // 0x1C
		::System::UInt32 PhaseLimit; // 0x20
		::System::UInt32 Level; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuseumStatsRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumStatsRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
