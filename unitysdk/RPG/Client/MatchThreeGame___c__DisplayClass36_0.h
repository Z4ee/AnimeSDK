#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameOpponent; }

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA836D10)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS36_0__INITPLAYERS_B__0_OFFSET UNITYSDK_OFFSET(0xA836D20)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass36_0_TypeDefinitionIndex = 60703;

	class MatchThreeGame___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::UInt32 playerUid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitPlayers_b__0(::RPG::Client::MatchThreeGameOpponent* opponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS36_0__INITPLAYERS_B__0_OFFSET))(this, opponent);
		}
	};
}
