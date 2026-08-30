#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class CardConfig; }

#define RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCB1E890)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS12_0__GETCARDINDEXLISTBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xCB1ED90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleDeckData___c__DisplayClass12_0_TypeDefinitionIndex = 61521;

	class ChenLingBattleDeckData___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingCardType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCardIndexListByType_b__0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::ChenLingBattle::CardConfig*, ::System::Int32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::ChenLingBattle::CardConfig*, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__DISPLAYCLASS12_0__GETCARDINDEXLISTBYTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
