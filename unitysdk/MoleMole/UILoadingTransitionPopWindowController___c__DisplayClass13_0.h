#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__ACTIVELOADINGUI_B__0_OFFSET UNITYSDK_OFFSET(0x150EB150)
#define MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x150EB140)

namespace MoleMole
{
	inline static constexpr unsigned int UILoadingTransitionPopWindowController___c__DisplayClass13_0_TypeDefinitionIndex = 43590;

	class UILoadingTransitionPopWindowController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _ActiveLoadingUI_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__ACTIVELOADINGUI_B__0_OFFSET))(this);
		}
	};
}
