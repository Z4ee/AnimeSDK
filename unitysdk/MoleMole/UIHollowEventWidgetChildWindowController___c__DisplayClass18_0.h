#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1690D350)
#define MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__SHOWDESC_B__0_OFFSET UNITYSDK_OFFSET(0x16911190)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowEventWidgetChildWindowController___c__DisplayClass18_0_TypeDefinitionIndex = 56241;

	class UIHollowEventWidgetChildWindowController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action* OnTextShowFinish; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowDesc_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__SHOWDESC_B__0_OFFSET))(this);
		}
	};
}
