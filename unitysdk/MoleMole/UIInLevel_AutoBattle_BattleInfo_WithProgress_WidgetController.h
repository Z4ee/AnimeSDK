#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevel_BattleInfo_WithProgress_WidgetController.h"
#include "unitysdk/MoleMole/UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus.h"

#define MOLEMOLE_UIINLEVEL_AUTOBATTLE_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x146B64A0)
#define MOLEMOLE_UIINLEVEL_AUTOBATTLE_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__GETINFOSTATUS_OFFSET UNITYSDK_OFFSET(0x146B5F80)
#define MOLEMOLE_UIINLEVEL_AUTOBATTLE_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__REFRESHCUSTOM_OFFSET UNITYSDK_OFFSET(0x146B5FD0)
#define MOLEMOLE_UIINLEVEL_AUTOBATTLE_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER___BASE__GETINFOSTATUS_OFFSET UNITYSDK_OFFSET(0x146B64B0)
#define MOLEMOLE_UIINLEVEL_AUTOBATTLE_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER___BASE__REFRESHCUSTOM_OFFSET UNITYSDK_OFFSET(0x146B6540)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevel_AutoBattle_BattleInfo_WithProgress_WidgetController_TypeDefinitionIndex = 56144;

	class UIInLevel_AutoBattle_BattleInfo_WithProgress_WidgetController : public ::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_AUTOBATTLE_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus _GetInfoStatus()
		{
			return ((::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_AUTOBATTLE_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__GETINFOSTATUS_OFFSET))(this);
		}

		::System::Void _RefreshCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_AUTOBATTLE_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__REFRESHCUSTOM_OFFSET))(this);
		}

		::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus __base__GetInfoStatus()
		{
			return ((::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_AUTOBATTLE_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER___BASE__GETINFOSTATUS_OFFSET))(this);
		}

		::System::Void __base__RefreshCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_AUTOBATTLE_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER___BASE__REFRESHCUSTOM_OFFSET))(this);
		}
	};
}
