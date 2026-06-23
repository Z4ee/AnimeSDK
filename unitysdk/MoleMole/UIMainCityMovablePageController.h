#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_5E2FBACADDB625B7_14;
namespace MoleMole { class MovablePageContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainCityMovableChildWindowController; }
namespace System { class String; }

#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x174D3C30)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x174D4220)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x174D3C40)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x174D4000)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x174D3CD0)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174D4120)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x174D40D0)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x174D4190)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x174D4320)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x174D4330)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x174D43C0)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x174D4450)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174D4460)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x174D4470)
#define MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x174D4480)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMovablePageController_TypeDefinitionIndex = 73508;

	class UIMainCityMovablePageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* setupTag; // 0x0
		::Class_2_5E2FBACADDB625B7_14* _view; // 0x318
		::MoleMole::UIMainCityMovableChildWindowController* _childWindowController; // 0x320
		::MoleMole::MovablePageContext* _context; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnClickClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER_ONCLICKCLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
