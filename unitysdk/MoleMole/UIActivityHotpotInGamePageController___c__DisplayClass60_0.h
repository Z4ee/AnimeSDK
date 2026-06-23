#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotPotCardSelectPopWindowController; }
namespace MoleMole { class UIActivityHotpotInGamePageController; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12C03190)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS60_0__ONHOTPOTCARDGACHA_B__0_OFFSET UNITYSDK_OFFSET(0x12C031A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass60_0_TypeDefinitionIndex = 75073;

	class UIActivityHotpotInGamePageController___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityHotPotCardSelectPopWindowController* nwebiePage; // 0x10
		::MoleMole::UIActivityHotpotInGamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnHotpotCardGacha_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS60_0__ONHOTPOTCARDGACHA_B__0_OFFSET))(this);
		}
	};
}
