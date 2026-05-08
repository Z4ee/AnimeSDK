#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__ACTIVELOADINGUI_B__0_OFFSET UNITYSDK_OFFSET(0x14D340D0)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D340C0)

namespace MoleMole
{
	inline static constexpr unsigned int UILoadingPopWindowController___c__DisplayClass10_0_TypeDefinitionIndex = 63526;

	class UILoadingPopWindowController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _ActiveLoadingUI_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__ACTIVELOADINGUI_B__0_OFFSET))(this);
		}
	};
}
