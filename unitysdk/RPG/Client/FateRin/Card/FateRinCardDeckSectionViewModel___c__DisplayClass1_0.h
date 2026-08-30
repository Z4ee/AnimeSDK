#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE16E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL___C__DISPLAYCLASS1_0__TRYREMOVECARD_B__0_OFFSET UNITYSDK_OFFSET(0xCFE1810)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardDeckSectionViewModel___c__DisplayClass1_0_TypeDefinitionIndex = 79807;

	class FateRinCardDeckSectionViewModel___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 cardID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryRemoveCard_b__0(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKSECTIONVIEWMODEL___C__DISPLAYCLASS1_0__TRYREMOVECARD_B__0_OFFSET))(this, a1);
		}
	};
}
