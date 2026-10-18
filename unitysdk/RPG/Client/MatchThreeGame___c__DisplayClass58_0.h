#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameOpponent; }

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS58_0__CHANGEENEMY_B__0_OFFSET UNITYSDK_OFFSET(0xD59AE50)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD59AE40)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass58_0_TypeDefinitionIndex = 65944;

	class MatchThreeGame___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ChangeEnemy_b__0(::RPG::Client::MatchThreeGameOpponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS58_0__CHANGEENEMY_B__0_OFFSET))(this, a1);
		}
	};
}
