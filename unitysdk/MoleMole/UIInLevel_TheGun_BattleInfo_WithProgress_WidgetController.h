#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevel_BattleInfo_WithProgress_WidgetController.h"
#include "unitysdk/MoleMole/UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus.h"

namespace System { class String; }

#define MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER_ISSHOWTHEGUNSCORE_OFFSET UNITYSDK_OFFSET(0x18385040)
#define MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18385A20)
#define MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__GETINFOSTATUS_OFFSET UNITYSDK_OFFSET(0x18384F50)
#define MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__REFRESHCUSTOM_OFFSET UNITYSDK_OFFSET(0x183851C0)
#define MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__TRYGETTITLETEXT_OFFSET UNITYSDK_OFFSET(0x18384FA0)
#define MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER___BASE__GETINFOSTATUS_OFFSET UNITYSDK_OFFSET(0x18385A30)
#define MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER___BASE__REFRESHCUSTOM_OFFSET UNITYSDK_OFFSET(0x18385AC0)
#define MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER___BASE__TRYGETTITLETEXT_OFFSET UNITYSDK_OFFSET(0x18385B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevel_TheGun_BattleInfo_WithProgress_WidgetController_TypeDefinitionIndex = 71520;

	class UIInLevel_TheGun_BattleInfo_WithProgress_WidgetController : public ::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus _GetInfoStatus()
		{
			return ((::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__GETINFOSTATUS_OFFSET))(this);
		}

		::System::Boolean _TryGetTitleText(::System::String*& titleText)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__TRYGETTITLETEXT_OFFSET))(this, titleText);
		}

		::System::Boolean IsShowTheGunScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER_ISSHOWTHEGUNSCORE_OFFSET))(this);
		}

		::System::Void _RefreshCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__REFRESHCUSTOM_OFFSET))(this);
		}

		::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus __base__GetInfoStatus()
		{
			return ((::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER___BASE__GETINFOSTATUS_OFFSET))(this);
		}

		::System::Void __base__RefreshCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER___BASE__REFRESHCUSTOM_OFFSET))(this);
		}

		::System::Boolean __base__TryGetTitleText(::System::String*& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_THEGUN_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER___BASE__TRYGETTITLETEXT_OFFSET))(this, P0);
		}
	};
}
