#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotPotRoundFinishPopWindowController; }

#define MOLEMOLE_UIACTIVITYHOTPOTROUNDFINISHPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173C7A30)
#define MOLEMOLE_UIACTIVITYHOTPOTROUNDFINISHPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x173C7A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotRoundFinishPopWindowController___c__DisplayClass7_0_TypeDefinitionIndex = 57201;

	class UIActivityHotPotRoundFinishPopWindowController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityHotPotRoundFinishPopWindowController* __4__this; // 0x10
		::System::Single curProgressValue; // 0x18
		::System::Single maxProgressValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTROUNDFINISHPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTROUNDFINISHPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
