#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinHandbookCardOwnerViewModel; }

#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A7410)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C__DISPLAYCLASS5_0___GETCARDVIEWMODELLISTBYTABOWNERTYPE_B__1_OFFSET UNITYSDK_OFFSET(0x1B4A7D10)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C__DISPLAYCLASS5_0___GETCARDVIEWMODELLISTBYTABOWNERTYPE_B__2_OFFSET UNITYSDK_OFFSET(0x1B4A7D40)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinHandbookCardViewModel___c__DisplayClass5_0_TypeDefinitionIndex = 76233;

	class FateRinHandbookCardViewModel___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FateRinHouguOwnerType ownerType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetCardViewModelListByTabOwnerType_b__1(::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C__DISPLAYCLASS5_0___GETCARDVIEWMODELLISTBYTABOWNERTYPE_B__1_OFFSET))(this, a1);
		}

		::System::Boolean __GetCardViewModelListByTabOwnerType_b__2(::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C__DISPLAYCLASS5_0___GETCARDVIEWMODELLISTBYTABOWNERTYPE_B__2_OFFSET))(this, a1);
		}
	};
}
