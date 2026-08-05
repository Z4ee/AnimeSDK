#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_1B1C05BC0A38A2D5_7;
class Class_2_AF5BA1C65F12F4B1;
namespace MoleMole { class UIActivityZenkovSeasonCompContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19762990)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_ONQUESTDATASYNC_OFFSET UNITYSDK_OFFSET(0x19762AB0)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19762900)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19762A20)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197625A0)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19762660)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0x197637F0)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_REFRESHSHOPITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x19763370)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_REFRESHSTAGEQUESTPROGRESS_OFFSET UNITYSDK_OFFSET(0x19762B00)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19762860)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x197639F0)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19763A50)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19763AE0)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19763B80)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19763C10)
#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19763CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityZenkovSeasonCompWidgetController_TypeDefinitionIndex = 85693;

	class UIActivityZenkovSeasonCompWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1B1C05BC0A38A2D5_7* _view; // 0x2C0
		::MoleMole::UIActivityZenkovSeasonCompContext* _context; // 0x2C8
		::Class_2_AF5BA1C65F12F4B1* _zenkovModel; // 0x2D0
		::UnityEngine::UI::Extension::UILocalizationText* _progressTitleText; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnQuestDataSync(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_ONQUESTDATASYNC_OFFSET))(this, args);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshStageQuestProgress(::System::Boolean seasonUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_REFRESHSTAGEQUESTPROGRESS_OFFSET))(this, seasonUnlocked);
		}

		::System::Void RefreshShopItemProgress(::System::Boolean seasonUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_REFRESHSHOPITEMPROGRESS_OFFSET))(this, seasonUnlocked);
		}

		::System::Void RefreshLevel(::System::Boolean seasonUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER_REFRESHLEVEL_OFFSET))(this, seasonUnlocked);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
