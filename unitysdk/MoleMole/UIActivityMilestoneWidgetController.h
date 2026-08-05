#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_E41CA3CA3454C886;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192DD9D0)
#define MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192DDA60)
#define MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192DD7C0)
#define MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192DD820)
#define MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_SHOWPANEL_OFFSET UNITYSDK_OFFSET(0x192DD8A0)
#define MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192DDAE0)
#define MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192DDB40)
#define MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192DDBD0)
#define MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192DDC60)
#define MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192DDCF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMilestoneWidgetController_TypeDefinitionIndex = 71866;

	class UIActivityMilestoneWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E41CA3CA3454C886* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_SHOWPANEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
