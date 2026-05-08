#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadeGamingChildWindowController; }

#define MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC7820)
#define MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__DISPLAYCLASS40_0__ONSELECTBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x15EC7830)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeGamingChildWindowController___c__DisplayClass40_0_TypeDefinitionIndex = 72423;

	class UIArcadeGamingChildWindowController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeGamingChildWindowController* __4__this; // 0x10
		::System::Int32 arcadeGameID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__DISPLAYCLASS40_0__ONSELECTBTNCLICKED_B__0_OFFSET))(this);
		}
	};
}
