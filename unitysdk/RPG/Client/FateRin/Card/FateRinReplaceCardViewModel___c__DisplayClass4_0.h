#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class FateRinReplaceCardViewModel; }

#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEE1F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS4_0___REPLACECARD_B__0_OFFSET UNITYSDK_OFFSET(0x1CBEEC90)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinReplaceCardViewModel___c__DisplayClass4_0_TypeDefinitionIndex = 79845;

	class FateRinReplaceCardViewModel___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Card::FateRinReplaceCardViewModel* __4__this; // 0x10
		::System::UInt32 changedCardID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void __ReplaceCard_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS4_0___REPLACECARD_B__0_OFFSET))(this);
		}
	};
}
