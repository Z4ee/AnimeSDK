#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_2A2C381DC80A91DF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralIntimacyUpPopWindowController_Context; }

#define MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER_LOADTRUSTICON_OFFSET UNITYSDK_OFFSET(0x187F4EF0)
#define MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187F4970)
#define MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187F4A00)
#define MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187F48A0)
#define MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187F4900)
#define MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x187F4A80)
#define MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x187F50F0)
#define MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187F5150)
#define MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187F51E0)
#define MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187F5270)
#define MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187F5300)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralIntimacyChangeWidgetController_TypeDefinitionIndex = 82928;

	class UIGeneralIntimacyChangeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_2A2C381DC80A91DF* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIGeneralIntimacyUpPopWindowController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, context);
		}

		::System::Void LoadTrustIcon(::MoleMole::UIGeneralIntimacyUpPopWindowController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER_LOADTRUSTICON_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYCHANGEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
