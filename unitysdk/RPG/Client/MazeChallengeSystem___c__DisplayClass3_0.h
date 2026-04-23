#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MazeChallengeSystem; }

#define RPG_CLIENT_MAZECHALLENGESYSTEM___C__DISPLAYCLASS3_0__CREATEMAZECHALLENGE_B__0_OFFSET UNITYSDK_OFFSET(0xA87C100)
#define RPG_CLIENT_MAZECHALLENGESYSTEM___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA879CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MazeChallengeSystem___c__DisplayClass3_0_TypeDefinitionIndex = 56169;

	class MazeChallengeSystem___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::MazeChallengeSystem* __4__this; // 0x10
		::System::UInt32 mazeChallengeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateMazeChallenge_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM___C__DISPLAYCLASS3_0__CREATEMAZECHALLENGE_B__0_OFFSET))(this);
		}
	};
}
