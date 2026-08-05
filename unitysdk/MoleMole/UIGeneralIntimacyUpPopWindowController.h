#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_222675B5E8E17837;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralIntimacyChangeWidgetController; }
namespace MoleMole { class UIGeneralIntimacyUpPopWindowController_Context; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ADDCONTEXT_OFFSET UNITYSDK_OFFSET(0x17BCE580)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_GETINTIMACYUPWIDGET_OFFSET UNITYSDK_OFFSET(0x17BCE7A0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0x17BCDFF0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17BCDFE0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BCE350)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BCE510)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BCE000)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIOPENINNER_OFFSET UNITYSDK_OFFSET(0x17BCE2A0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BCE220)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17BCE940)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17BCE3E0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BCEBB0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER__REFRESHVIEW_G__SETUPWIDGET_14_0_OFFSET UNITYSDK_OFFSET(0x17BCEA80)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BCEBC0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BCEC50)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BCEC60)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BCEC70)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17BCED00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralIntimacyUpPopWindowController_TypeDefinitionIndex = 66238;

	class UIGeneralIntimacyUpPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_222675B5E8E17837* _view; // 0x318
		::MoleMole::UIGeneralIntimacyUpPopWindowController_Context* _context; // 0x320
		::MoleMole::UIGeneralIntimacyChangeWidgetController* _intimacyUpWidget01; // 0x328
		::MoleMole::UIGeneralIntimacyChangeWidgetController* _intimacyUpWidget02; // 0x330
		::MoleMole::UIGeneralIntimacyChangeWidgetController* _intimacyUpWidget03; // 0x338
		::MoleMole::UIGeneralIntimacyChangeWidgetController* _intimacyUpWidget04; // 0x340
		::MoleMole::UIGeneralIntimacyChangeWidgetController* _intimacyDownWidget; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralIntimacyUpPopWindowController_Context*>* _contextQueue; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void AddContext(::MoleMole::UIGeneralIntimacyUpPopWindowController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ADDCONTEXT_OFFSET))(this, context);
		}

		::MoleMole::UIGeneralIntimacyChangeWidgetController* GetIntimacyUpWidget()
		{
			return ((::MoleMole::UIGeneralIntimacyChangeWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_GETINTIMACYUPWIDGET_OFFSET))(this);
		}

		::System::Void OnUIOpenInner(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIOPENINNER_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _RefreshView_g__SetupWidget_14_0(::MoleMole::UIGeneralIntimacyChangeWidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralIntimacyChangeWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER__REFRESHVIEW_G__SETUPWIDGET_14_0_OFFSET))(this, widget);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
