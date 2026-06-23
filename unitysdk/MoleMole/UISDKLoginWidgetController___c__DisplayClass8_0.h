#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILoginMessageBoxPopWindowController; }

#define MOLEMOLE_UISDKLOGINWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1616D3E0)
#define MOLEMOLE_UISDKLOGINWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONCLCIKQUITGAME_B__0_OFFSET UNITYSDK_OFFSET(0x1616D3F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISDKLoginWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 82408;

	class UISDKLoginWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UILoginMessageBoxPopWindowController* tipCtrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISDKLOGINWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClcikQuitGame_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISDKLOGINWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONCLCIKQUITGAME_B__0_OFFSET))(this);
		}
	};
}
