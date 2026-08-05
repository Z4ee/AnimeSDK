#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCitySwitchRoleTimePanelWidgetController; }

#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183AD940)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS32_0__ONCLICKSENDTIME_B__0_OFFSET UNITYSDK_OFFSET(0x183AD950)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS32_0__ONCLICKSENDTIME_G__ONMODTIMERSPUNSTUCK_1_OFFSET UNITYSDK_OFFSET(0x183ADB90)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS32_0__ONCLICKSENDTIME_G__ONMODTIMERSP_2_OFFSET UNITYSDK_OFFSET(0x183ADF50)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRoleTimePanelWidgetController___c__DisplayClass32_0_TypeDefinitionIndex = 55661;

	class UIMainCitySwitchRoleTimePanelWidgetController___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSendTime_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS32_0__ONCLICKSENDTIME_B__0_OFFSET))(this);
		}

		::System::Void _OnClickSendTime_g__OnModTimeRspUnstuck_1(::System::Boolean isSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS32_0__ONCLICKSENDTIME_G__ONMODTIMERSPUNSTUCK_1_OFFSET))(this, isSuccess);
		}

		::System::Void _OnClickSendTime_g__OnModTimeRsp_2(::System::Boolean isSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS32_0__ONCLICKSENDTIME_G__ONMODTIMERSP_2_OFFSET))(this, isSuccess);
		}
	};
}
