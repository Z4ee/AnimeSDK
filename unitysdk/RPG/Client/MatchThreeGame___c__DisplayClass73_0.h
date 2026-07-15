#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameOpponent; }

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB613E0)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS73_0___UPDATEPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x1AB65D10)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass73_0_TypeDefinitionIndex = 63009;

	class MatchThreeGame___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdatePlayer_b__0(::RPG::Client::MatchThreeGameOpponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS73_0___UPDATEPLAYER_B__0_OFFSET))(this, a1);
		}
	};
}
