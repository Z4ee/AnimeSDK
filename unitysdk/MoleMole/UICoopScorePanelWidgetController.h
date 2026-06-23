#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICoopScorePanelWidgetController_RecordData.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_62856C49DCD2E41A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172E3000)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172E3090)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172E2F30)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172E2F90)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_REFRESHSCORE_OFFSET UNITYSDK_OFFSET(0x172E3110)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172E3230)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172E3290)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172E3320)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172E33B0)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172E3440)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopScorePanelWidgetController_TypeDefinitionIndex = 39783;

	class UICoopScorePanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_62856C49DCD2E41A* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshScore(::MoleMole::UICoopScorePanelWidgetController_RecordData recordData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopScorePanelWidgetController_RecordData))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_REFRESHSCORE_OFFSET))(this, recordData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
