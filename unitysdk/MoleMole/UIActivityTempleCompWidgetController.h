#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_C31FD6B589034893_1;
namespace MoleMole { class UIActivityTempleCompContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18BDF870)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18BDF0D0)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18BDF900)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18BDEED0)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18BDEFE0)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER_REFRESHTEMPLEINFO_OFFSET UNITYSDK_OFFSET(0x18BDF160)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BDF980)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18BDF9E0)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18BDFA70)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18BDFB10)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18BDFBA0)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18BDFC30)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTempleCompWidgetController_TypeDefinitionIndex = 74321;

	class UIActivityTempleCompWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C31FD6B589034893_1* _view; // 0x2C0
		::MoleMole::UIActivityTempleCompContext* _context; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshTempleInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER_REFRESHTEMPLEINFO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
