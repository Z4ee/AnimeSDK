#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameOpponent; }

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS58_0__CHANGEENEMY_B__0_OFFSET UNITYSDK_OFFSET(0xA8370D0)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA8370C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass58_0_TypeDefinitionIndex = 60709;

	class MatchThreeGame___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ChangeEnemy_b__0(::RPG::Client::MatchThreeGameOpponent* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS58_0__CHANGEENEMY_B__0_OFFSET))(this, x);
		}
	};
}
