#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILoadingTransitionPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D4A180)
#define MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__UNACTIVELOADINGUI_B__0_OFFSET UNITYSDK_OFFSET(0x15D4A190)

namespace MoleMole
{
	inline static constexpr unsigned int UILoadingTransitionPopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 43589;

	class UILoadingTransitionPopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UILoadingTransitionPopWindowController* __4__this; // 0x10
		::System::Action* endcallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _UnActiveLoadingUI_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSITIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__UNACTIVELOADINGUI_B__0_OFFSET))(this);
		}
	};
}
