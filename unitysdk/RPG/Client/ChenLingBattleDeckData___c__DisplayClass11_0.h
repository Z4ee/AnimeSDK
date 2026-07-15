#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class CardConfig; }

#define RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFEE520)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS11_0__GETCARDSBYTYPEWITHDISPLAYONLY_B__0_OFFSET UNITYSDK_OFFSET(0x1AFEED00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleDeckData___c__DisplayClass11_0_TypeDefinitionIndex = 58689;

	class ChenLingBattleDeckData___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::CardConfig* displayCard; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCardsByTypeWithDisplayOnly_b__0(::RPG::Client::ChenLingBattle::CardConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS11_0__GETCARDSBYTYPEWITHDISPLAYONLY_B__0_OFFSET))(this, a1);
		}
	};
}
