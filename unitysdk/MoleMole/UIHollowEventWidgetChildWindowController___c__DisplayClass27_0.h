#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19F18B80)
#define MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__PLAYDETAILFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x19F18B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowEventWidgetChildWindowController___c__DisplayClass27_0_TypeDefinitionIndex = 77971;

	class UIHollowEventWidgetChildWindowController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayDetailFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__PLAYDETAILFADEOUT_B__0_OFFSET))(this);
		}
	};
}
