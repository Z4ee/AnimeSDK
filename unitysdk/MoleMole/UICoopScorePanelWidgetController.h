#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICoopScorePanelWidgetController_RecordData.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_62856C49DCD2E41A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1958BEE0)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1958BF70)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1958BE10)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1958BE70)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_REFRESHSCORE_OFFSET UNITYSDK_OFFSET(0x1958BFF0)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1958C110)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1958C170)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1958C200)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1958C290)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1958C320)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopScorePanelWidgetController_TypeDefinitionIndex = 66232;

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
