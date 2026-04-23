#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TeamData; }

#define RPG_CLIENT_TEAMMODULE___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2B6310)
#define RPG_CLIENT_TEAMMODULE___C__DISPLAYCLASS9_0__GETSTORYLINETEAM_B__0_OFFSET UNITYSDK_OFFSET(0xB2C2030)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamModule___c__DisplayClass9_0_TypeDefinitionIndex = 62815;

	class TeamModule___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::UInt32 storyLineID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetStoryLineTeam_b__0(::RPG::Client::TeamData* team)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___C__DISPLAYCLASS9_0__GETSTORYLINETEAM_B__0_OFFSET))(this, team);
		}
	};
}
