#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameOpponent; }

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B3C8B0)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS73_0___UPDATEPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x9B400F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass73_0_TypeDefinitionIndex = 53569;

	class MatchThreeGame___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdatePlayer_b__0(::RPG::Client::MatchThreeGameOpponent* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS73_0___UPDATEPLAYER_B__0_OFFSET))(this, x);
		}
	};
}
