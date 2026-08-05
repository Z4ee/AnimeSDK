#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCitySwitchRoleTimePanelWidgetController; }

#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179EB350)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS25_0__REFRESHTIME_B__0_OFFSET UNITYSDK_OFFSET(0x179EB360)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRoleTimePanelWidgetController___c__DisplayClass25_0_TypeDefinitionIndex = 55663;

	class UIMainCitySwitchRoleTimePanelWidgetController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController* __4__this; // 0x10
		::System::Single currentMinues; // 0x18
		::System::Single targetMinues; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshTime_b__0(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS25_0__REFRESHTIME_B__0_OFFSET))(this, value);
		}
	};
}
