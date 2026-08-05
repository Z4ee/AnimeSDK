#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_B5D0ECEE985C39A7;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AD5950)
#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AD59E0)
#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER_SETURL_OFFSET UNITYSDK_OFFSET(0x18AD5A60)
#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD5C20)
#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AD5C80)
#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AD5D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralClickToProceed02WidgetController_TypeDefinitionIndex = 61558;

	class UIGeneralClickToProceed02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B5D0ECEE985C39A7* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetUrl(::System::String* url, ::System::Boolean webView, ::System::String* urlTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER_SETURL_OFFSET))(this, url, webView, urlTitle);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
