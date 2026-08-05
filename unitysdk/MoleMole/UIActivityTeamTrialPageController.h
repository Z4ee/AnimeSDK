#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIActivityTeamTrialPageController_PageState.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_E9529ED64113E4E9;
class Class_2_847BE8FDF454E853;
class Class_2_CFC1DA8C3898E356;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIActivityTeamTrialFightingWidgetController; }
namespace MoleMole { class UIActivityTeamTrialPageController_Context; }
namespace MoleMole { class UIActivityTeamTrialWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ADDCOMPENTERBTN_OFFSET UNITYSDK_OFFSET(0x1A621E20)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_CLEARCOMPONTNBTNS_OFFSET UNITYSDK_OFFSET(0x1A621660)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A621230)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_INITANDPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x1A6222F0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONABILITYSELECTCHANGE_OFFSET UNITYSDK_OFFSET(0x1A624170)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0x1A623440)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONACTIVITYEND_OFFSET UNITYSDK_OFFSET(0x1A6235A0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x1A6241B0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x1A624330)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONCLICKMAINCITY_OFFSET UNITYSDK_OFFSET(0x1A624210)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x1A624610)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A621240)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1A6231B0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1A623270)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONSELECTQUEST_OFFSET UNITYSDK_OFFSET(0x1A623FD0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A6230F0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1A622A80)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A6215C0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A6212D0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A621800)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_REFRESHGAMEPADBTN_OFFSET UNITYSDK_OFFSET(0x1A623D40)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_REFRESHOKBTN_OFFSET UNITYSDK_OFFSET(0x1A623BD0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_REFRESHREMAINTIMER_OFFSET UNITYSDK_OFFSET(0x1A6220B0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_SETTEAMTRIALSTATE_OFFSET UNITYSDK_OFFSET(0x1A622540)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_TRYCREATETEAMTRIALWIDGET_OFFSET UNITYSDK_OFFSET(0x1A623620)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A624880)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER__INITANDPLAYVIDEO_B__26_0_OFFSET UNITYSDK_OFFSET(0x1A624890)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER__INITANDPLAYVIDEO_B__26_1_OFFSET UNITYSDK_OFFSET(0x1A6248F0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER__SETTEAMTRIALSTATE_B__27_0_OFFSET UNITYSDK_OFFSET(0x1A624930)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A6249D0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1A624A60)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1A624AF0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A624B20)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1A624B30)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A624BF0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A624C00)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A624C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialPageController_TypeDefinitionIndex = 57304;

	class UIActivityTeamTrialPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* BgVideoUrl; // 0x0
		::Class_2_847BE8FDF454E853* _view; // 0x318
		::MoleMole::UIActivityTeamTrialPageController_Context* _context; // 0x320
		::System::Int32 _activityID; // 0x328
		::MoleMole::UIActivityTeamTrialPageController_PageState _curState; // 0x32C
		::MoleMole::UIActivityTeamTrialWidgetController* _teamTrialWidgetController; // 0x330
		::MoleMole::UIActivityTeamTrialFightingWidgetController* _teamTrialLevelInfoWidgetController; // 0x338
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _compRewardBtn; // 0x340
		::Class_1_E9529ED64113E4E9* _videoPlayerHelper; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnActivityClose(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONACTIVITYCLOSE_OFFSET))(this, obj);
		}

		::System::Void AddCompEnterBtn(::Class_2_CFC1DA8C3898E356* btnData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CFC1DA8C3898E356*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ADDCOMPENTERBTN_OFFSET))(this, btnData);
		}

		::System::Void ClearCompontnBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_CLEARCOMPONTNBTNS_OFFSET))(this);
		}

		::System::Void RefreshRemainTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_REFRESHREMAINTIMER_OFFSET))(this);
		}

		::System::Void OnActivityEnd(::UnityEngine::UI::Extension::UITimeWidget* timeWidget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONACTIVITYEND_OFFSET))(this, timeWidget);
		}

		::System::Void InitAndPlayVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_INITANDPLAYVIDEO_OFFSET))(this);
		}

		::System::Void SetTeamTrialState(::MoleMole::UIActivityTeamTrialPageController_PageState pageState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityTeamTrialPageController_PageState))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_SETTEAMTRIALSTATE_OFFSET))(this, pageState);
		}

		::System::Void TryCreateTeamTrialWidget(::MoleMole::UIActivityTeamTrialPageController_PageState pageState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityTeamTrialPageController_PageState))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_TRYCREATETEAMTRIALWIDGET_OFFSET))(this, pageState);
		}

		::System::Void OnSelectQuest(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONSELECTQUEST_OFFSET))(this, questID);
		}

		::System::Void OnAbilitySelectChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONABILITYSELECTCHANGE_OFFSET))(this);
		}

		::System::Void RefreshOkBtn(::MoleMole::UIActivityTeamTrialPageController_PageState pageState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityTeamTrialPageController_PageState))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_REFRESHOKBTN_OFFSET))(this, pageState);
		}

		::System::Void RefreshGamepadBtn(::MoleMole::UIActivityTeamTrialPageController_PageState pageState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityTeamTrialPageController_PageState))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_REFRESHGAMEPADBTN_OFFSET))(this, pageState);
		}

		::System::Void OnClickBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONCLICKBACK_OFFSET))(this);
		}

		::System::Void OnClickMainCity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONCLICKMAINCITY_OFFSET))(this);
		}

		::System::Void OnClickInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONCLICKINFO_OFFSET))(this);
		}

		::System::Void OnClickOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_ONCLICKOK_OFFSET))(this);
		}

		::System::Void _InitAndPlayVideo_b__26_0(::Class_1_E9529ED64113E4E9* helper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER__INITANDPLAYVIDEO_B__26_0_OFFSET))(this, helper);
		}

		::System::Void _InitAndPlayVideo_b__26_1(::Class_1_E9529ED64113E4E9* helper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER__INITANDPLAYVIDEO_B__26_1_OFFSET))(this, helper);
		}

		::System::Void _SetTeamTrialState_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER__SETTEAMTRIALSTATE_B__27_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
