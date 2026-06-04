#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeExtraStep; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS107_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF0F460)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS107_0__DOPLAYSTEPBONUSTEXT_B__0_OFFSET UNITYSDK_OFFSET(0xBF11DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass107_0_TypeDefinitionIndex = 61602;

	class MatchThreeBoard___c__DisplayClass107_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeBoard* __4__this; // 0x10
		::RPG::Client::MatchThreeExtraStep* extraStep; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS107_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayStepBonusText_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS107_0__DOPLAYSTEPBONUSTEXT_B__0_OFFSET))(this);
		}
	};
}
