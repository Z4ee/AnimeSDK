#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeEnergyFadeEffect; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA8264C0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS41_0__DOENERGYFADEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xA82B740)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass41_0_TypeDefinitionIndex = 60685;

	class MatchThreeBoard___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeEnergyFadeEffect* effect; // 0x10
		::RPG::Client::MatchThreeBoard* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoEnergyFadeEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS41_0__DOENERGYFADEEFFECT_B__0_OFFSET))(this);
		}
	};
}
