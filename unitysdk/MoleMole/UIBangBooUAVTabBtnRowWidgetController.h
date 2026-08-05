#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_181FF645A3E1F2C4;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_GETBADGE_OFFSET UNITYSDK_OFFSET(0x1A63A620)
#define MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0x1A63A4D0)
#define MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A63A440)
#define MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A63A530)
#define MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A63A370)
#define MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A63A3D0)
#define MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1A63A5B0)
#define MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A63A680)
#define MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A63A6E0)
#define MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A63A770)
#define MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A63A800)
#define MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A63A890)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVTabBtnRowWidgetController_TypeDefinitionIndex = 65379;

	class UIBangBooUAVTabBtnRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_181FF645A3E1F2C4* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_SETTEXT_OFFSET))(this, text);
		}

		::MoleMole::NotificationBadge* GetBadge()
		{
			return ((::MoleMole::NotificationBadge*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER_GETBADGE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
