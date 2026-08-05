#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaBgRowWidget.h"

class Class_2_52BF5A8E97668B1D_2;
class Class_2_84CEDCEF739506C1_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaWidgetContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183FC020)
#define MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183FBBC0)
#define MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183FC0B0)
#define MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183FBA90)
#define MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183FBB50)
#define MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x183FBD20)
#define MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183FC130)
#define MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x183FC190)
#define MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183FC1A0)
#define MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183FC230)
#define MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183FC2D0)
#define MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183FC360)
#define MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183FC3F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaBangbooBgRowWidgetController_TypeDefinitionIndex = 48645;

	class UIGachaBangbooBgRowWidgetController : public ::MoleMole::UIGachaBgRowWidget
	{
	public:
		::Class_2_52BF5A8E97668B1D_2* _view; // 0x2C0
		::Class_2_84CEDCEF739506C1_1* _uiConfig; // 0x2C8
		::MoleMole::UIGachaWidgetContextBase* _context; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABANGBOOBGROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
