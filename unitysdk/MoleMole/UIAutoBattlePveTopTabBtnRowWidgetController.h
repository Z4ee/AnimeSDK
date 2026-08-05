#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_778327478C55D555;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0x197E2D80)
#define MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197E2C70)
#define MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197E2D00)
#define MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197E2BA0)
#define MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197E2C00)
#define MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x197E2DE0)
#define MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_SHOWPOPUP_OFFSET UNITYSDK_OFFSET(0x197E3060)
#define MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x197E3370)
#define MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197E33D0)
#define MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197E3460)
#define MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197E34F0)
#define MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197E3580)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePveTopTabBtnRowWidgetController_TypeDefinitionIndex = 48714;

	class UIAutoBattlePveTopTabBtnRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_778327478C55D555* _view; // 0x2C0
		::MoleMole::UIGeneralNewHintWidgetController* _newHint; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void SetText(::System::String* text, ::System::Boolean unlock, ::System::Boolean showDay)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_SETTEXT_OFFSET))(this, text, unlock, showDay);
		}

		::System::Void ShowPopup(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER_SHOWPOPUP_OFFSET))(this, show);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETOPTABBTNROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
