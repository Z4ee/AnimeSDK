#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_48B050DF10EF36DD;
class Class_2_C7387D40D4120A48_1;
class Class_3_F92F6A6188E34427;
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGoldMiningDayCollectionBtnWidgetController; }
namespace MoleMole { class UIGoldMiningDayContext; }
namespace MoleMole { class UIGoldMiningDayStateRewardEffectItemWidgetController; }
namespace MoleMole { class UIGoldMiningDayTodoListBtnWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_DEALFRIENDINVITEMSG_OFFSET UNITYSDK_OFFSET(0x155BBEF0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_DNAUTOOPEN_OFFSET UNITYSDK_OFFSET(0x155BC730)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x155BB150)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ISALLOWJUMPTOINVITETEAMROOM_OFFSET UNITYSDK_OFFSET(0x155BE740)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ISALLOWSHOWINVITE_OFFSET UNITYSDK_OFFSET(0x155BE660)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCLICKMARCELADVENTURE_OFFSET UNITYSDK_OFFSET(0x155BDCD0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCLICKREWARDPANEL_OFFSET UNITYSDK_OFFSET(0x155BDB90)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCLICKRIDUBOO_OFFSET UNITYSDK_OFFSET(0x155BDFB0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155BB160)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONGOLDMININGDAYACTIVITYSYNC_OFFSET UNITYSDK_OFFSET(0x155BBC80)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x155BE240)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x155BBAA0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155BE460)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x155BB1F0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155BC670)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SETTIME_OFFSET UNITYSDK_OFFSET(0x155BD910)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWALLPROGRESSBTN_OFFSET UNITYSDK_OFFSET(0x155BD530)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWCOLLECTIONBTN_OFFSET UNITYSDK_OFFSET(0x155BC870)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWINVITE_OFFSET UNITYSDK_OFFSET(0x155BE780)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWMARCELADVENTUREBTN_OFFSET UNITYSDK_OFFSET(0x155BC8D0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWRIDUBOOBTN_OFFSET UNITYSDK_OFFSET(0x155BCF60)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWTODOLISTBTN_OFFSET UNITYSDK_OFFSET(0x155BC810)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_TRYJOINMARCELADVENTURE_OFFSET UNITYSDK_OFFSET(0x155BE880)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x155BF180)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__ISALLOWSHOWINVITE_B__22_0_OFFSET UNITYSDK_OFFSET(0x155BF280)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__ONUIINIT_B__10_1_OFFSET UNITYSDK_OFFSET(0x155BF190)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__SETTIME_B__14_0_OFFSET UNITYSDK_OFFSET(0x155BF240)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155BF290)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x155BF320)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x155BF3B0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155BF450)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x155BF460)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155BF470)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayMainPageController_TypeDefinitionIndex = 45839;

	class UIGoldMiningDayMainPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_C7387D40D4120A48_1* _view; // 0x320
		::Class_2_48B050DF10EF36DD* _model; // 0x328
		::MoleMole::UIGoldMiningDayTodoListBtnWidgetController* _todoListBtnWidgetController; // 0x330
		::MoleMole::UIGoldMiningDayCollectionBtnWidgetController* _collectionBtnWidgetController; // 0x338
		::MoleMole::UIActivityCompRewardBtnGroupWidgetController* _activityGroupController; // 0x340
		::MoleMole::UIGoldMiningDayContext* _context; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIGoldMiningDayStateRewardEffectItemWidgetController*>* _effectItemWidgetControllers; // 0x350
		::System::Boolean _isShowingInvite; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnGoldMiningDayActivitySync(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONGOLDMININGDAYACTIVITYSYNC_OFFSET))(this, eventArgs);
		}

		::System::Void SetTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SETTIME_OFFSET))(this);
		}

		::System::Void DnAutoOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_DNAUTOOPEN_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowTodoListBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWTODOLISTBTN_OFFSET))(this);
		}

		::System::Void ShowCollectionBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWCOLLECTIONBTN_OFFSET))(this);
		}

		::System::Void ShowMarcelAdventureBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWMARCELADVENTUREBTN_OFFSET))(this);
		}

		::System::Void DealFriendInviteMsg(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_DEALFRIENDINVITEMSG_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean IsAllowShowInvite(::System::Action*& onAcceptShowAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ISALLOWSHOWINVITE_OFFSET))(this, onAcceptShowAction);
		}

		::System::Boolean IsAllowJumpToInviteTeamRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ISALLOWJUMPTOINVITETEAMROOM_OFFSET))(this);
		}

		::System::Void ShowInvite(::Class_3_F92F6A6188E34427* nextInvite, ::System::Action* onAcceptShowAction, ::System::Action* recursiveShowInvite)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F92F6A6188E34427*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWINVITE_OFFSET))(this, nextInvite, onAcceptShowAction, recursiveShowInvite);
		}

		::System::Boolean TryJoinMarcelAdventure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_TRYJOINMARCELADVENTURE_OFFSET))(this);
		}

		::System::Void ShowRiduBooBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWRIDUBOOBTN_OFFSET))(this);
		}

		::System::Void ShowAllProgressBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWALLPROGRESSBTN_OFFSET))(this);
		}

		::System::Void OnClickRewardPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCLICKREWARDPANEL_OFFSET))(this);
		}

		::System::Void OnClickMarcelAdventure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCLICKMARCELADVENTURE_OFFSET))(this);
		}

		::System::Void OnClickRiduBoo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCLICKRIDUBOO_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__ONUIINIT_B__10_1_OFFSET))(this, args);
		}

		::System::Void _SetTime_b__14_0(::UnityEngine::UI::Extension::UITimeWidget* _)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__SETTIME_B__14_0_OFFSET))(this, _);
		}

		::System::Void _IsAllowShowInvite_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__ISALLOWSHOWINVITE_B__22_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
