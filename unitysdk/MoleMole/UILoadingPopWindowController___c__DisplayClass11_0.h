#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILoadingPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x150EB0B0)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__UNACTIVELOADINGUI_B__0_OFFSET UNITYSDK_OFFSET(0x150EB0C0)

namespace MoleMole
{
	inline static constexpr unsigned int UILoadingPopWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 63525;

	class UILoadingPopWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UILoadingPopWindowController* __4__this; // 0x10
		::System::Action* endcallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _UnActiveLoadingUI_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__UNACTIVELOADINGUI_B__0_OFFSET))(this);
		}
	};
}
