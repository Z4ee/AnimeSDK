#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotPotCardSelectPopWindowController; }
namespace MoleMole { class UIActivityHotpotInGamePageController; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13882EC0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS60_0__ONHOTPOTCARDGACHA_B__0_OFFSET UNITYSDK_OFFSET(0x13882ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass60_0_TypeDefinitionIndex = 87253;

	class UIActivityHotpotInGamePageController___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityHotpotInGamePageController* __4__this; // 0x10
		::MoleMole::UIActivityHotPotCardSelectPopWindowController* nwebiePage; // 0x18

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
