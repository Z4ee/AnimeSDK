#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityExchangeDialogPopWindowController; }

#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196E8A20)
#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__DOBUY_B__0_OFFSET UNITYSDK_OFFSET(0x196E8A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityExchangeDialogPopWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 40717;

	class UIActivityExchangeDialogPopWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityExchangeDialogPopWindowController* __4__this; // 0x10
		::System::UInt32 buyExchangeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoBuy_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__DOBUY_B__0_OFFSET))(this);
		}
	};
}
