#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }

#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3738C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS9_1___FINDRECOMMENDEDCARD_B__1_OFFSET UNITYSDK_OFFSET(0x1A373CF0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinReplaceCardViewModel___c__DisplayClass9_1_TypeDefinitionIndex = 76214;

	class FateRinReplaceCardViewModel___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::System::UInt32 defaultID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __FindRecommendedCard_b__1(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS9_1___FINDRECOMMENDEDCARD_B__1_OFFSET))(this, a1);
		}
	};
}
