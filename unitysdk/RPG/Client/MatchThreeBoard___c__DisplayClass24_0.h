#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeEnemySwitchTipEffect; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA822F90)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS24_0__PLAYENEMYSWITCHTIPEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xA82B2C0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS24_0__PLAYENEMYSWITCHTIPEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0xA82B2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass24_0_TypeDefinitionIndex = 60672;

	class MatchThreeBoard___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeEnemySwitchTipEffect* effect; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::MatchThreeBoard* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayEnemySwitchTipEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS24_0__PLAYENEMYSWITCHTIPEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _PlayEnemySwitchTipEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS24_0__PLAYENEMYSWITCHTIPEFFECT_B__1_OFFSET))(this);
		}
	};
}
