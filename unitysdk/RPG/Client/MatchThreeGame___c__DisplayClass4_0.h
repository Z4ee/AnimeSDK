#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameOpponent; }

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF78330)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_0__INITPLAYERS_B__0_OFFSET UNITYSDK_OFFSET(0xBF81140)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_0__INITPLAYERS_B__1_OFFSET UNITYSDK_OFFSET(0xBF811B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass4_0_TypeDefinitionIndex = 61641;

	class MatchThreeGame___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 playerUid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitPlayers_b__0(::RPG::Client::MatchThreeGameOpponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_0__INITPLAYERS_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _InitPlayers_b__1(::RPG::Client::MatchThreeGameOpponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_0__INITPLAYERS_B__1_OFFSET))(this, a1);
		}
	};
}
