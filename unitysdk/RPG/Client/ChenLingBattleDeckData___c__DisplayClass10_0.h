#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class CardConfig; }

#define RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D4890)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS10_0__GETCARDSBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xB5D52C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleDeckData___c__DisplayClass10_0_TypeDefinitionIndex = 57426;

	class ChenLingBattleDeckData___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingCardType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCardsByType_b__0(::RPG::Client::ChenLingBattle::CardConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS10_0__GETCARDSBYTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
