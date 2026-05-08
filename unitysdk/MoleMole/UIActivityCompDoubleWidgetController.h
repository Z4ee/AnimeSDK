#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_B641922BEA7E7FD3_2;
namespace MoleMole { class ActivityWidgetContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_GOGUIDE_OFFSET UNITYSDK_OFFSET(0x158869E0)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15886760)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x158867F0)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x158865E0)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15886640)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_REFRESHBUFFINFO_OFFSET UNITYSDK_OFFSET(0x15886960)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_REFRESHCOMPWIDGET_OFFSET UNITYSDK_OFFSET(0x15886870)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15886A50)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15886AB0)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15886B40)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15886BD0)
#define MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15886C60)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompDoubleWidgetController_TypeDefinitionIndex = 61140;

	class UIActivityCompDoubleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B641922BEA7E7FD3_2* _view; // 0x2B8
		::Class_1_D375C91CCE5D3999* activityData; // 0x2C0
		::MoleMole::ActivityWidgetContext* activityWidgetContext; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshCompWidget(::MoleMole::ActivityWidgetContext* widgetContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_REFRESHCOMPWIDGET_OFFSET))(this, widgetContext);
		}

		::System::Void RefreshBuffInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_REFRESHBUFFINFO_OFFSET))(this);
		}

		::System::Void GoGuide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER_GOGUIDE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPDOUBLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
