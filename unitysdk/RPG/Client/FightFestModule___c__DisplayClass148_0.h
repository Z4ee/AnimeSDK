#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FightFestCoachType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FightFestCoachSkill; }

#define RPG_CLIENT_FIGHTFESTMODULE___C__DISPLAYCLASS148_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96BE1C0)
#define RPG_CLIENT_FIGHTFESTMODULE___C__DISPLAYCLASS148_0__GETCOACHSKILLS_B__0_OFFSET UNITYSDK_OFFSET(0x96C09F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestModule___c__DisplayClass148_0_TypeDefinitionIndex = 52105;

	class FightFestModule___c__DisplayClass148_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FightFestCoachType coachSkillType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__DISPLAYCLASS148_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCoachSkills_b__0(::RPG::Client::FightFestCoachSkill* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__DISPLAYCLASS148_0__GETCOACHSKILLS_B__0_OFFSET))(this, x);
		}
	};
}
