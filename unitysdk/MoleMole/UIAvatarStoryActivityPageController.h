#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_22B96EA7189A4400.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_0A16B249216FA488;
class Class_1_8A5136246E588D6D;
class Class_1_9F3D5D601B086F88;
class Class_2_208CC9941471731A_849;
class Class_2_4CE06B4AB01B1CFC;
class Class_2_DD2E0D8B9B474532;
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIActivityOVALighterWidgetController; }
namespace MoleMole { class UIActivityOVAMainBattleWidgetController; }
namespace MoleMole { class UIActivityOVAMainStoryWidgetController; }
namespace MoleMole { class UIAvatarActivityCoinBrushingWidgetController; }
namespace MoleMole { class UIAvatarStoryActivityPageContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x13E3C110)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_GET_PAGEWIDGETSTATE_OFFSET UNITYSDK_OFFSET(0x13E3B040)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x13E3B3F0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0x13E3FB90)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x13E3CAC0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKCOINBRUSHINGENTRY_OFFSET UNITYSDK_OFFSET(0x13E3D220)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKLEFTACTIVITYTAB_OFFSET UNITYSDK_OFFSET(0x13E3E4A0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKNEXTBTN_OFFSET UNITYSDK_OFFSET(0x13E3F780)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKRIGHTACTIVITYTAB_OFFSET UNITYSDK_OFFSET(0x13E3E630)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x13E3E270)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKTIMELIMISHOP_OFFSET UNITYSDK_OFFSET(0x13E3F400)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13E3B400)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONENTEROVA_OFFSET UNITYSDK_OFFSET(0x13E3D380)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONENTERSPECIALENTRY_OFFSET UNITYSDK_OFFSET(0x13E3CEA0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONENTERSTORY_OFFSET UNITYSDK_OFFSET(0x13E3DDD0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONSELECTBATTLEQUEST_OFFSET UNITYSDK_OFFSET(0x13E3CD50)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13E3CA50)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13E3C9D0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13E3B490)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13E3BD80)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_OPENAVATARWIDGETBYBTN_OFFSET UNITYSDK_OFFSET(0x13E3EFF0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_OPENMAINBATTLEWIDGET_OFFSET UNITYSDK_OFFSET(0x13E3E140)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_OPENSTORYWIDEGT_OFFSET UNITYSDK_OFFSET(0x13E3D9E0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_PERUNLOCKQUEST_OFFSET UNITYSDK_OFFSET(0x13E3D8E0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_RECOVERCURRENTAVATARWIDGET_OFFSET UNITYSDK_OFFSET(0x13E3CE00)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_SETAVATARACTIVITYTAB_OFFSET UNITYSDK_OFFSET(0x13E3E7C0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_SETBG_OFFSET UNITYSDK_OFFSET(0x13E3ECC0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_SETCOMPWEEKREWARDBTN_OFFSET UNITYSDK_OFFSET(0x13E3F7C0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_SET_PAGEWIDGETSTATE_OFFSET UNITYSDK_OFFSET(0x13E3B050)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_UPDATETAB_OFFSET UNITYSDK_OFFSET(0x13E3C2E0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13E40130)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER__ONACTIVITYCLOSE_B__53_0_OFFSET UNITYSDK_OFFSET(0x13E40330)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER__ONUIINIT_B__27_0_OFFSET UNITYSDK_OFFSET(0x13E40250)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER__ONUIINIT_B__27_1_OFFSET UNITYSDK_OFFSET(0x13E40260)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER__ONUIINIT_B__27_2_OFFSET UNITYSDK_OFFSET(0x13E402C0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___BASE_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x13E40400)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13E40410)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13E404A0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13E40540)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13E40550)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13E40560)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarStoryActivityPageController_TypeDefinitionIndex = 80239;

	class UIAvatarStoryActivityPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::Int32 ClickShopActionTypeValue = 0x2A; // 0x0
		::Enum_3_22B96EA7189A4400 pageWidgetState; // 0x320
		::Class_2_4CE06B4AB01B1CFC* _view; // 0x328
		::MoleMole::UIAvatarStoryActivityPageContext* _context; // 0x330
		::Class_2_DD2E0D8B9B474532* _model; // 0x338
		::MoleMole::UIGeneralButtonController* leftBtn; // 0x340
		::MoleMole::UIGeneralButtonController* rightBtn; // 0x348
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* bgDic; // 0x350
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* shop; // 0x358
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* task; // 0x360
		::MoleMole::UIActivityCompRewardBtnGroupWidgetController* activityBtnGroup; // 0x368
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIActivityOVALighterWidgetController*>* widgetDic; // 0x370
		::System::String* Shop_RewardFrameTextureKey; // 0x378
		::System::String* Shop_NormalFrameTextureKey; // 0x380
		::Class_1_9F3D5D601B086F88* selectBattle; // 0x388
		::Class_2_208CC9941471731A_849* aSAStoryDisplayConfig; // 0x390
		::Class_1_0A16B249216FA488* currentActivityData; // 0x398
		::MoleMole::UIWidgetController* currentMainActivityWidget; // 0x3A0
		::MoleMole::UIActivityOVAMainBattleWidgetController* mainBattleWidgetController; // 0x3A8
		::MoleMole::UIActivityOVAMainStoryWidgetController* storyWidgetController; // 0x3B0
		::MoleMole::UIAvatarActivityCoinBrushingWidgetController* coinBrushingWidgetController; // 0x3B8
		::System::Boolean isOpenActivityCloseTips; // 0x3C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_22B96EA7189A4400 get_PageWidgetState()
		{
			return ((::Enum_3_22B96EA7189A4400(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_GET_PAGEWIDGETSTATE_OFFSET))(this);
		}

		::System::Void set_PageWidgetState(::Enum_3_22B96EA7189A4400 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_22B96EA7189A4400))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_SET_PAGEWIDGETSTATE_OFFSET))(this, value);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_AFTERSHOW_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnClickBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKBACK_OFFSET))(this);
		}

		::System::Void OnSelectBattleQuest(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONSELECTBATTLEQUEST_OFFSET))(this, arg);
		}

		::System::Void RecoverCurrentAvatarWidget(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_RECOVERCURRENTAVATARWIDGET_OFFSET))(this, arg);
		}

		::System::Void OnEnterSpecialEntry(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONENTERSPECIALENTRY_OFFSET))(this, arg);
		}

		::System::Void OnClickCoinBrushingEntry(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKCOINBRUSHINGENTRY_OFFSET))(this, arg);
		}

		::System::Void OnEnterOVA(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONENTEROVA_OFFSET))(this, arg);
		}

		::System::Void PerUnlockQuest(::System::Int32 questID, ::System::Action* call)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_PERUNLOCKQUEST_OFFSET))(this, questID, call);
		}

		::System::Void OpenStoryWidegt(::Class_1_8A5136246E588D6D* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8A5136246E588D6D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_OPENSTORYWIDEGT_OFFSET))(this, data);
		}

		::System::Void OnEnterStory(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONENTERSTORY_OFFSET))(this, arg);
		}

		::System::Void OpenMainBattleWidget(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_OPENMAINBATTLEWIDGET_OFFSET))(this, arg);
		}

		::System::Void OnClickTab(::System::Int32 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKTAB_OFFSET))(this, key);
		}

		::System::Void SetAvatarActivityTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_SETAVATARACTIVITYTAB_OFFSET))(this);
		}

		::System::Void OnClickLeftActivityTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKLEFTACTIVITYTAB_OFFSET))(this);
		}

		::System::Void OnClickRightActivityTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKRIGHTACTIVITYTAB_OFFSET))(this);
		}

		::System::Void SetBG(::Class_1_0A16B249216FA488* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A16B249216FA488*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_SETBG_OFFSET))(this, data);
		}

		::System::Void OnClickTimeLimiShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKTIMELIMISHOP_OFFSET))(this);
		}

		::System::Void OnClickNextBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONCLICKNEXTBTN_OFFSET))(this);
		}

		::System::Void SetCompWeekRewardBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_SETCOMPWEEKREWARDBTN_OFFSET))(this);
		}

		::System::Void OpenAvatarWidgetByBtn(::Class_1_0A16B249216FA488* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A16B249216FA488*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_OPENAVATARWIDGETBYBTN_OFFSET))(this, data);
		}

		::System::Void UpdateTab(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_UPDATETAB_OFFSET))(this, obj);
		}

		::System::Void OnActivityClose(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER_ONACTIVITYCLOSE_OFFSET))(this, obj);
		}

		::System::Void _OnUIInit_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER__ONUIINIT_B__27_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__27_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER__ONUIINIT_B__27_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__27_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER__ONUIINIT_B__27_2_OFFSET))(this);
		}

		::System::Void _OnActivityClose_b__53_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER__ONACTIVITYCLOSE_B__53_0_OFFSET))(this);
		}

		::System::Void __base_AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___BASE_AFTERSHOW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
