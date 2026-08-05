#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__ACTIVELOADINGUI_B__0_OFFSET UNITYSDK_OFFSET(0x19C9D350)
#define MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9D340)

namespace MoleMole
{
	inline static constexpr unsigned int UILoadingTransitionPopWindowController___c__DisplayClass15_0_TypeDefinitionIndex = 66461;

	class UILoadingTransitionPopWindowController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _ActiveLoadingUI_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__ACTIVELOADINGUI_B__0_OFFSET))(this);
		}
	};
}
