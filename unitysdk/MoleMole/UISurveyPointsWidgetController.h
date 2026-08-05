#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_1AF3C5BF111F3525;
class Class_2_94911C7709AE6562_8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISurveyPointsContext; }

#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10EF32E0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x10EF2F30)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10EF3370)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10EF2C80)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10EF2D80)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_REFRESHCONTROBUTEVIEW_OFFSET UNITYSDK_OFFSET(0x10EF43D0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x10EF33F0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF52B0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER__ONUIOPEN_B__3_0_OFFSET UNITYSDK_OFFSET(0x10EF5310)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10EF5320)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10EF53B0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10EF5440)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10EF54D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISurveyPointsWidgetController_TypeDefinitionIndex = 76736;

	class UISurveyPointsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single _progressOffset; // 0x0
		::Class_2_94911C7709AE6562_8* _view; // 0x2C0
		::MoleMole::UISurveyPointsContext* _context; // 0x2C8
		::System::Single _maxControbutionProgressValue; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_1_1AF3C5BF111F3525* viewdata)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1AF3C5BF111F3525*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, viewdata);
		}

		::System::Void RefreshControbuteView(::System::Int32 groupid, ::System::Int32 addPoint, ::System::Int32 currentPoint, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_REFRESHCONTROBUTEVIEW_OFFSET))(this, groupid, addPoint, currentPoint, duration);
		}

		::System::Void _OnUIOpen_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER__ONUIOPEN_B__3_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
