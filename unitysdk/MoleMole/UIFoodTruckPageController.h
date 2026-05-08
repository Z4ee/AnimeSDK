#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_7B15B3118FE590CD_20;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_CHECKCB_OFFSET UNITYSDK_OFFSET(0x162B60A0)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x162B1520)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONACTIVECHANGEACTION_OFFSET UNITYSDK_OFFSET(0x162B6520)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONCLICKOKBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x162B6C10)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x162B6770)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x162B15D0)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x162B5800)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONSTARFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x162B2A00)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x162B5F50)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x162B65A0)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x162B1660)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x162B1940)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_REFRESHALLTABS_OFFSET UNITYSDK_OFFSET(0x162B2D40)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_REFRESHQUEST_OFFSET UNITYSDK_OFFSET(0x162B33C0)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x162B1530)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162B6F20)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x162B6F40)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x162B6FD0)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x162B6FE0)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x162B6FF0)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x162B7000)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x162B7010)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodTruckPageController_TypeDefinitionIndex = 49616;

	class UIFoodTruckPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_7B15B3118FE590CD_20* _view; // 0x320
		::DG::Tweening::Tween* _tween; // 0x328
		::System::Int32 _inQuestIndex; // 0x330
		::System::Boolean _waitClick; // 0x334
		::System::Int32 _firstTaskDayID; // 0x338
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _bigRewardBtnWidgetController; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnStarFadeInAnimation(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONSTARFADEINANIMATION_OFFSET))(this, index);
		}

		::System::Void OnFadeInAnimation(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONFADEINANIMATION_OFFSET))(this, index);
		}

		::System::Boolean CheckCb(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_CHECKCB_OFFSET))(this, index);
		}

		::System::Void OnActiveChangeAction(::Class_1_D375C91CCE5D3999* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONACTIVECHANGEACTION_OFFSET))(this, obj);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONCLICKTAB_OFFSET))(this, index);
		}

		::System::Void RefreshAllTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_REFRESHALLTABS_OFFSET))(this);
		}

		::System::Void RefreshQuest(::System::Int32 index, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_REFRESHQUEST_OFFSET))(this, index, init);
		}

		::System::Void OnClickOKButtonCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER_ONCLICKOKBUTTONCALLBACK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
