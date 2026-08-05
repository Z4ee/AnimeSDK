#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_1155;
class Class_2_AFA01A100E02E0CD;
class Class_2_C66E4DE78E6562C8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoopLevelRewardRowWidgetController_Context; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x18D39820)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_INITOPTIONGIFT_OFFSET UNITYSDK_OFFSET(0x18D3A470)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_INITPERMANENTREWARDS_OFFSET UNITYSDK_OFFSET(0x18D3A640)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ISITEMOWNED_OFFSET UNITYSDK_OFFSET(0x18D3B0B0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONCLICKGETREWARD_ASYNC_OFFSET UNITYSDK_OFFSET(0x18D3B010)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONCLICKGETREWARD_OFFSET UNITYSDK_OFFSET(0x18D3AB50)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18D3B1D0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18D39B90)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D3B260)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18D398E0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18D39D60)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_REFRESHBYCACHE_OFFSET UNITYSDK_OFFSET(0x18D39DD0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET UNITYSDK_OFFSET(0x18D39CF0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3B2E0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x18D3B2F0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONUIINIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x18D3B300)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__REFRESHBYCACHE_B__9_0_OFFSET UNITYSDK_OFFSET(0x18D3B310)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18D3B320)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18D3B3B0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D3B450)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18D3B4E0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18D3B570)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelRewardRowWidgetController_TypeDefinitionIndex = 82019;

	class UICoopLevelRewardRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_AFA01A100E02E0CD* _view; // 0x2F0
		::Class_2_208CC9941471731A_1155* _cachedCfg; // 0x2F8
		::MoleMole::UIItemIconBtnWidgetController* m_rewardItem; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_C66E4DE78E6562C8* get_Model()
		{
			return ((::Class_2_C66E4DE78E6562C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_GET_MODEL_OFFSET))(this);
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
