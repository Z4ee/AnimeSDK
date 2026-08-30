#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeTimedEffect; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD62E0E0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS37_0__DOPLAYALLSCREENBOMBEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xD633E30)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass37_0_TypeDefinitionIndex = 65962;

	class MatchThreeBoard___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeTimedEffect* bombEffect; // 0x10
		::RPG::Client::MatchThreeBoard* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayAllScreenBombEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS37_0__DOPLAYALLSCREENBOMBEFFECT_B__0_OFFSET))(this);
		}
	};
}
