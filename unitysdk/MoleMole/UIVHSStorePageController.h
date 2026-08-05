#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_4DECB930A0B265DC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVHSStoreWidgetWidgetController; }

#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x140D9CB0)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x140D9C20)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x140DA5D0)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x140D9CC0)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x140DA2B0)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x140D9D30)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x140D9F80)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x140DA210)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x140DA790)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x140DA7A0)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x140DA830)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x140DA860)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x140DA900)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x140DA910)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x140DA920)
#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x140DA930)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStorePageController_TypeDefinitionIndex = 86474;

	class UIVHSStorePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_4DECB930A0B265DC* _view; // 0x328
		::MoleMole::UIVHSStoreWidgetWidgetController* _storeWidget; // 0x330
		::System::Int64 _timeFlag; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::Enum_3_205B03D40B9BD873 get_MessageMatchPage()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
