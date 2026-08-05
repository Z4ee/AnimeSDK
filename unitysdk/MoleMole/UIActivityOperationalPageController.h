#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_C832474F3EB70101_1;
namespace MoleMole { class UIActivityChainV2WidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x13884C20)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13884C30)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13884CC0)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13885270)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13884F90)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x138851D0)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x138852E0)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x138852F0)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13885380)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13885420)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13885430)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x13885440)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOperationalPageController_TypeDefinitionIndex = 78389;

	class UIActivityOperationalPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_C832474F3EB70101_1* _view; // 0x328
		::MoleMole::UIActivityChainV2WidgetController* _activityChainV2Widget; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
