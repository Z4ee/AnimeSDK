#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadeTeamChildWindowController; }

#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197DF970)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS31_0__ONCLICKSWITCHHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x197DF980)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeTeamChildWindowController___c__DisplayClass31_0_TypeDefinitionIndex = 65761;

	class UIArcadeTeamChildWindowController___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeTeamChildWindowController* __4__this; // 0x10
		::System::Int32 pos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSwitchHandler_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS31_0__ONCLICKSWITCHHANDLER_B__0_OFFSET))(this);
		}
	};
}
