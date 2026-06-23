#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotPotCardSelectPopWindowController; }
namespace MoleMole { class UIActivityHotpotInGamePageController; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS60_1__CTOR_OFFSET UNITYSDK_OFFSET(0x186555E0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS60_1__ONHOTPOTCARDGACHA_B__1_OFFSET UNITYSDK_OFFSET(0x186555F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass60_1_TypeDefinitionIndex = 75068;

	class UIActivityHotpotInGamePageController___c__DisplayClass60_1 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityHotpotInGamePageController* __4__this; // 0x10
		::MoleMole::UIActivityHotPotCardSelectPopWindowController* nwebiePage; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS60_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnHotpotCardGacha_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS60_1__ONHOTPOTCARDGACHA_B__1_OFFSET))(this);
		}
	};
}
