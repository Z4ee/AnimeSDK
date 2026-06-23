#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityGuideUIBaseWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_CD6523BC6729FD35;
namespace MoleMole { class UIActgivityMasterCoffeeItemWidgetController; }
namespace MoleMole { class UIActgivityMasterHollowItemWidgetController; }
namespace MoleMole { class UIActgivityMasterRamenItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A3A320)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONGUDIEWIDGETACTIVITYEND_OFFSET UNITYSDK_OFFSET(0x18A3A660)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18A3A5A0)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18A3A460)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A3A530)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A3A0C0)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A3A120)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_OPENDETAIL_OFFSET UNITYSDK_OFFSET(0x18A3A6B0)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x18A3A5F0)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_REFRESHREMAINTIMERTEXT_OFFSET UNITYSDK_OFFSET(0x18A3A4E0)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_REFRESHTITLE_OFFSET UNITYSDK_OFFSET(0x18A3A260)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3A710)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A3A770)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18A3A800)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18A3A810)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A3A820)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A3A830)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A3A8C0)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x18A3A8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMasterMakeWidgetController_TypeDefinitionIndex = 79830;

	class UIActivityMasterMakeWidgetController : public ::MoleMole::ActivityGuideUIBaseWidgetController
	{
	public:
		::Class_2_CD6523BC6729FD35* _view; // 0x2E8
		::MoleMole::UIActgivityMasterHollowItemWidgetController* hollowcardItemController; // 0x2F0
		::MoleMole::UIActgivityMasterRamenItemWidgetController* ramenItemController; // 0x2F8
		::MoleMole::UIActgivityMasterCoffeeItemWidgetController* coffeeItemController; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void PlayFadeOut(::System::Action* callback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_PLAYFADEOUT_OFFSET))(this, callback, animSpeed);
		}

		::System::Void RefreshRemainTimerText(::Class_1_D375C91CCE5D3999* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_REFRESHREMAINTIMERTEXT_OFFSET))(this, data);
		}

		::System::Void OnGudieWidgetActivityEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONGUDIEWIDGETACTIVITYEND_OFFSET))(this);
		}

		::System::Void RefreshTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_REFRESHTITLE_OFFSET))(this);
		}

		::System::Void OpenDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_OPENDETAIL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_PlayFadeOut(::System::Action* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_PLAYFADEOUT_OFFSET))(this, P0, P1);
		}
	};
}
