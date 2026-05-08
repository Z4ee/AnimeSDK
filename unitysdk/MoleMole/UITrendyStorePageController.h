#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/MoleMole/UITrendyStorePageController_ETabIndex.h"

class Class_2_065F6532BB8853AC_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITrendyStrore3DModelController; }
namespace MoleMole { class UIWindowController; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x12E44A60)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONCLOSEFILTER_OFFSET UNITYSDK_OFFSET(0x12E45230)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E44A70)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONOPENFILTER_OFFSET UNITYSDK_OFFSET(0x12E451A0)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E44FD0)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E44B00)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12E45040)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_OPENBLACKSMITHWIDGET_OFFSET UNITYSDK_OFFSET(0x12E459F0)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_OPENTRENDYSTOREWIDGET_OFFSET UNITYSDK_OFFSET(0x12E452C0)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_OPENWEAPONPREVIEWWIDGET_OFFSET UNITYSDK_OFFSET(0x12E45CD0)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_SHOWBACKBTNGAMEPADTIP_OFFSET UNITYSDK_OFFSET(0x12E45130)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E45FC0)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__OPENBLACKSMITHWIDGET_B__14_0_OFFSET UNITYSDK_OFFSET(0x12E46100)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__OPENTRENDYSTOREWIDGET_B__13_0_OFFSET UNITYSDK_OFFSET(0x12E45FD0)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__OPENWEAPONPREVIEWWIDGET_B__15_0_OFFSET UNITYSDK_OFFSET(0x12E46250)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONCLOSEFILTER_OFFSET UNITYSDK_OFFSET(0x12E46380)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E46410)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONOPENFILTER_OFFSET UNITYSDK_OFFSET(0x12E464A0)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E46530)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E46540)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12E46550)

namespace MoleMole
{
	inline static constexpr unsigned int UITrendyStorePageController_TypeDefinitionIndex = 56398;

	class UITrendyStorePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_065F6532BB8853AC_1* _view; // 0x320
		::MoleMole::UITrendyStrore3DModelController* _trendyStrore3DModelController; // 0x328
		::UnityEngine::UI::Extension::UITabButtonGroup* _tabButtonGroup; // 0x330
		::MoleMole::UIWindowController* _curWidget; // 0x338
		::System::Boolean _isSwitchingWidget; // 0x340
		::MoleMole::UITrendyStorePageController_ETabIndex _tabIndex; // 0x344
		::System::Int32 _selectWeaponPro; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void ShowBackBtnGamepadTip(::System::Boolean open)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_SHOWBACKBTNGAMEPADTIP_OFFSET))(this, open);
		}

		::System::Void OnOpenFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONOPENFILTER_OFFSET))(this);
		}

		::System::Void OnCloseFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONCLOSEFILTER_OFFSET))(this);
		}

		::System::Void OpenTrendyStoreWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_OPENTRENDYSTOREWIDGET_OFFSET))(this);
		}

		::System::Void OpenBlackSmithWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_OPENBLACKSMITHWIDGET_OFFSET))(this);
		}

		::System::Void OpenWeaponPreviewWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_OPENWEAPONPREVIEWWIDGET_OFFSET))(this);
		}

		::System::Void _OpenTrendyStoreWidget_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__OPENTRENDYSTOREWIDGET_B__13_0_OFFSET))(this);
		}

		::System::Void _OpenBlackSmithWidget_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__OPENBLACKSMITHWIDGET_B__14_0_OFFSET))(this);
		}

		::System::Void _OpenWeaponPreviewWidget_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__OPENWEAPONPREVIEWWIDGET_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCloseFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONCLOSEFILTER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnOpenFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONOPENFILTER_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
