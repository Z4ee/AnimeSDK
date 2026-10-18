#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }

#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCEEC820)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS10_0___FINDRECOMMENDEDCARD_B__0_OFFSET UNITYSDK_OFFSET(0xCEECB90)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinReplaceCardViewModel___c__DisplayClass10_0_TypeDefinitionIndex = 81169;

	class FateRinReplaceCardViewModel___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 lowerID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __FindRecommendedCard_b__0(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS10_0___FINDRECOMMENDEDCARD_B__0_OFFSET))(this, a1);
		}
	};
}
