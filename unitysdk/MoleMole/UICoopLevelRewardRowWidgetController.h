#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_163;
class Class_2_AFA01A100E02E0CD;
class Class_2_C04F87C132BA9A06;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoopLevelRewardRowWidgetController_Context; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x1565D240)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_INITOPTIONGIFT_OFFSET UNITYSDK_OFFSET(0x1565DEB0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_INITPERMANENTREWARDS_OFFSET UNITYSDK_OFFSET(0x1565E070)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ISITEMOWNED_OFFSET UNITYSDK_OFFSET(0x1565EAC0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONCLICKGETREWARD_ASYNC_OFFSET UNITYSDK_OFFSET(0x1565EA20)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONCLICKGETREWARD_OFFSET UNITYSDK_OFFSET(0x1565E560)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1565EBE0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1565D5C0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1565EC70)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1565D310)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1565D790)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_REFRESHBYCACHE_OFFSET UNITYSDK_OFFSET(0x1565D800)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET UNITYSDK_OFFSET(0x1565D720)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1565ECF0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x1565ED00)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONUIINIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x1565ED10)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__REFRESHBYCACHE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1565ED20)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1565ED30)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1565EDC0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1565EE60)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1565EEF0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1565EF80)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelRewardRowWidgetController_TypeDefinitionIndex = 49746;

	class UICoopLevelRewardRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_AFA01A100E02E0CD* _view; // 0x2E8
		::Class_2_208CC9941471731A_163* _cachedCfg; // 0x2F0
		::MoleMole::UIItemIconBtnWidgetController* m_rewardItem; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_C04F87C132BA9A06* get_Model()
		{
			return ((::Class_2_C04F87C132BA9A06*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshByContext(::MoleMole::UICoopLevelRewardRowWidgetController_Context* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopLevelRewardRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET))(this, ctx);
		}

		::System::Void RefreshByCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_REFRESHBYCACHE_OFFSET))(this);
		}

		::System::Void OnClickGetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONCLICKGETREWARD_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnClickGetReward_Async()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONCLICKGETREWARD_ASYNC_OFFSET))(this);
		}

		::System::Boolean IsItemOwned(::System::Int32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ISITEMOWNED_OFFSET))(this, itemID);
		}

		::System::Void InitPermanentRewards(::System::Int32 permanentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_INITPERMANENTREWARDS_OFFSET))(this, permanentID);
		}

		::System::Void InitOptionGift(::System::Int32 giftID, ::System::Boolean giftTaken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_INITOPTIONGIFT_OFFSET))(this, giftID, giftTaken);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONUIINIT_B__4_0_OFFSET))(this, _);
		}

		::System::Void _OnUIInit_b__4_1(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONUIINIT_B__4_1_OFFSET))(this, _);
		}

		::System::Void _RefreshByCache_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__REFRESHBYCACHE_B__9_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
