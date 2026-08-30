#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class FateRinDeckEditPreviewViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }

#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE51E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL___C__DISPLAYCLASS3_0___ONCARDCLICK_B__0_OFFSET UNITYSDK_OFFSET(0xCFE5340)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinDeckEditPreviewViewModel___c__DisplayClass3_0_TypeDefinitionIndex = 79836;

	class FateRinDeckEditPreviewViewModel___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* card; // 0x10
		::RPG::Client::FateRin::Card::FateRinDeckEditPreviewViewModel* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnCardClick_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL___C__DISPLAYCLASS3_0___ONCARDCLICK_B__0_OFFSET))(this, a1);
		}
	};
}
