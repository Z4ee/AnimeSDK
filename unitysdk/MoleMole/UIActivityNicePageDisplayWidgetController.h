#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityGuideUIBaseWidgetController.h"

class Class_2_B41B42D5778E40E0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18BD8E00)
#define MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18BD8E90)
#define MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18BD8C80)
#define MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18BD8DA0)
#define MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD8F00)
#define MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18BD8F60)
#define MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18BD8FF0)
#define MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18BD9000)
#define MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18BD9090)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityNicePageDisplayWidgetController_TypeDefinitionIndex = 52140;

	class UIActivityNicePageDisplayWidgetController : public ::MoleMole::ActivityGuideUIBaseWidgetController
	{
	public:
		::Class_2_B41B42D5778E40E0* _view; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNICEPAGEDISPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
