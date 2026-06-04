#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FightFestRaceData; }

#define RPG_CLIENT_FIGHTFESTMODULE___C__DISPLAYCLASS94_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBA1BCE0)
#define RPG_CLIENT_FIGHTFESTMODULE___C__DISPLAYCLASS94_0__GETRACEDATA_B__0_OFFSET UNITYSDK_OFFSET(0xBA1BCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestModule___c__DisplayClass94_0_TypeDefinitionIndex = 59987;

	class FightFestModule___c__DisplayClass94_0 : public ::System::Object
	{
	public:
		::System::UInt32 raceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__DISPLAYCLASS94_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRaceData_b__0(::RPG::Client::FightFestRaceData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestRaceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__DISPLAYCLASS94_0__GETRACEDATA_B__0_OFFSET))(this, a1);
		}
	};
}
