#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILoadingTransitionPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x189B27F0)
#define MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__UNACTIVELOADINGUI_B__0_OFFSET UNITYSDK_OFFSET(0x189B2800)

namespace MoleMole
{
	inline static constexpr unsigned int UILoadingTransitionPopWindowController___c__DisplayClass16_0_TypeDefinitionIndex = 66460;

	class UILoadingTransitionPopWindowController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Action* endcallback; // 0x10
		::MoleMole::UILoadingTransitionPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _UnActiveLoadingUI_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__UNACTIVELOADINGUI_B__0_OFFSET))(this);
		}
	};
}
