#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeTimedEffect; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF72850)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS39_0__DOPLAYPROPBUBBLEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xBF72860)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass39_0_TypeDefinitionIndex = 61617;

	class MatchThreeBoard___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeBoard* __4__this; // 0x10
		::RPG::Client::MatchThreeTimedEffect* propBubbleEffect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayPropBubbleEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS39_0__DOPLAYPROPBUBBLEEFFECT_B__0_OFFSET))(this);
		}
	};
}
