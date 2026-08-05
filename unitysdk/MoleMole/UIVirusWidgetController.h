#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIVirusWidgetController_PageState.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_156;
class Class_2_CFC1DA8C3898E356;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIVirusCollectWidgetController; }
namespace MoleMole { class UIVirusMainWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ADDCOMPENTERBTN_OFFSET UNITYSDK_OFFSET(0x12E3FE00)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_CLEARCOMPBTN_OFFSET UNITYSDK_OFFSET(0x12E3F150)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x12E3E630)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_LOADCUSTOMBACKGROUND_OFFSET UNITYSDK_OFFSET(0x12E3F820)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0x12E432C0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONACTIVITYEND_OFFSET UNITYSDK_OFFSET(0x12E40DC0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x12E42B10)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKCOLLECT_OFFSET UNITYSDK_OFFSET(0x12E42E50)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKHARD_OFFSET UNITYSDK_OFFSET(0x12E422C0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKLEVEL_OFFSET UNITYSDK_OFFSET(0x12E42D00)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKMAINCITY_OFFSET UNITYSDK_OFFSET(0x12E42BE0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKNORMAL_OFFSET UNITYSDK_OFFSET(0x12E42080)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x12E42EB0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E3E640)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONSELECTQUESTCHANGE_OFFSET UNITYSDK_OFFSET(0x12E42330)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x12E40470)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E3EE60)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E3E6D0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12E3F2F0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONVIRUSLEVELSTARTTIME_OFFSET UNITYSDK_OFFSET(0x12E43470)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONVIRUSLEVELUPOPEN_OFFSET UNITYSDK_OFFSET(0x12E43420)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x12E405F0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_RECORDTABCLICK_OFFSET UNITYSDK_OFFSET(0x12E420F0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHBACKGROUND_OFFSET UNITYSDK_OFFSET(0x12E408A0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHBOTTOMBTN_OFFSET UNITYSDK_OFFSET(0x12E40E50)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHLEVELBTNNEW_OFFSET UNITYSDK_OFFSET(0x12E426E0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHLEVELTYPE_OFFSET UNITYSDK_OFFSET(0x12E41330)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHOKBTN_OFFSET UNITYSDK_OFFSET(0x12E42390)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHREMAINTIMER_OFFSET UNITYSDK_OFFSET(0x12E3FBE0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHTABNEW_OFFSET UNITYSDK_OFFSET(0x12E41A50)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHTABTRACK_OFFSET UNITYSDK_OFFSET(0x12E418A0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHTAB_OFFSET UNITYSDK_OFFSET(0x12E41430)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_SELECTTAB_OFFSET UNITYSDK_OFFSET(0x12E415F0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_SETVIRUSSTATE_OFFSET UNITYSDK_OFFSET(0x12E40030)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER_TRYCREATETEAMTRIALWIDGET_OFFSET UNITYSDK_OFFSET(0x12E40F10)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E434D0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER__ONCLICKBACK_B__40_0_OFFSET UNITYSDK_OFFSET(0x12E43530)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E43600)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x12E43690)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E436A0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E43730)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12E437C0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___BASE_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x12E43850)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusWidgetController_TypeDefinitionIndex = 69815;

	class UIVirusWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_156* _view; // 0x2C0
		::MoleMole::UIVirusWidgetController_PageState _pageState; // 0x2C8
		::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 _levelType; // 0x2CC
		::UnityEngine::GameObject* _normalBg; // 0x2D0
		::UnityEngine::GameObject* _difficultyBg; // 0x2D8
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _compRewardBtn; // 0x2E0
		::MoleMole::UIVirusMainWidgetController* _virusMainWidgetController; // 0x2E8
		::MoleMole::UIVirusCollectWidgetController* _virusCollectWidgetController; // 0x2F0
		::MoleMole::UIGeneralNewHintWidgetController* _newHintCtrlNormal; // 0x2F8
		::MoleMole::UIGeneralNewHintWidgetController* _newHintCtrlHard; // 0x300
		::MoleMole::UIGeneralNewHintWidgetController* _newHintCtrlLevelBtn; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_PLAYFADEIN_OFFSET))(this, callback);
		}

		::System::Void LoadCustomBackground(::System::Int32 activityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_LOADCUSTOMBACKGROUND_OFFSET))(this, activityID);
		}

		::System::Void RefreshBackground(::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 levelType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHBACKGROUND_OFFSET))(this, levelType);
		}

		::System::Void AddCompEnterBtn(::Class_2_CFC1DA8C3898E356* btnData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CFC1DA8C3898E356*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ADDCOMPENTERBTN_OFFSET))(this, btnData);
		}

		::System::Void ClearCompBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_CLEARCOMPBTN_OFFSET))(this);
		}

		::System::Void RefreshRemainTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHREMAINTIMER_OFFSET))(this);
		}

		::System::Void OnActivityEnd(::UnityEngine::UI::Extension::UITimeWidget* timeWidget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONACTIVITYEND_OFFSET))(this, timeWidget);
		}

		::System::Void SetVirusState(::MoleMole::UIVirusWidgetController_PageState pageState, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 levelType, ::System::Int32 questID, ::System::Boolean selectTab)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVirusWidgetController_PageState, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_SETVIRUSSTATE_OFFSET))(this, pageState, levelType, questID, selectTab);
		}

		::System::Void TryCreateTeamTrialWidget(::MoleMole::UIVirusWidgetController_PageState pageState, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 levelType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVirusWidgetController_PageState, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_TRYCREATETEAMTRIALWIDGET_OFFSET))(this, pageState, levelType);
		}

		::System::Void RefreshLevelType(::MoleMole::UIVirusWidgetController_PageState pageState, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 levelType, ::System::Int32 questID, ::System::Boolean selectTab)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVirusWidgetController_PageState, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHLEVELTYPE_OFFSET))(this, pageState, levelType, questID, selectTab);
		}

		::System::Void RefreshTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHTAB_OFFSET))(this);
		}

		::System::Void RefreshTabTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHTABTRACK_OFFSET))(this);
		}

		::System::Void RefreshTabNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHTABNEW_OFFSET))(this);
		}

		::System::Void OnClickNormal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKNORMAL_OFFSET))(this);
		}

		::System::Void OnClickHard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKHARD_OFFSET))(this);
		}

		::System::Void RecordTabClick(::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 levelType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_RECORDTABCLICK_OFFSET))(this, levelType);
		}

		::System::Void SelectTab(::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 levelType, ::System::Boolean withAni, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_SELECTTAB_OFFSET))(this, levelType, withAni, questID);
		}

		::System::Void OnSelectQuestChange(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONSELECTQUESTCHANGE_OFFSET))(this, questID);
		}

		::System::Void RefreshBottomBtn(::MoleMole::UIVirusWidgetController_PageState pageState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVirusWidgetController_PageState))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHBOTTOMBTN_OFFSET))(this, pageState);
		}

		::System::Void RefreshOkBtn(::MoleMole::UIVirusWidgetController_PageState pageState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVirusWidgetController_PageState))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHOKBTN_OFFSET))(this, pageState);
		}

		::System::Void RefreshLevelBtnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_REFRESHLEVELBTNNEW_OFFSET))(this);
		}

		::System::Void OnClickBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKBACK_OFFSET))(this);
		}

		::System::Void OnClickMainCity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKMAINCITY_OFFSET))(this);
		}

		::System::Void OnClickLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKLEVEL_OFFSET))(this);
		}

		::System::Void OnClickCollect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKCOLLECT_OFFSET))(this);
		}

		::System::Void OnClickOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONCLICKOK_OFFSET))(this);
		}

		::System::Void OnActivityClose(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONACTIVITYCLOSE_OFFSET))(this, obj);
		}

		::System::Void OnVirusLevelUpOpen(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONVIRUSLEVELUPOPEN_OFFSET))(this, obj);
		}

		::System::Void OnVirusLevelStartTime(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER_ONVIRUSLEVELSTARTTIME_OFFSET))(this, obj);
		}

		::System::Void _OnClickBack_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER__ONCLICKBACK_B__40_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_PlayFadeIn(::System::Action* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER___BASE_PLAYFADEIN_OFFSET))(this, P0);
		}
	};
}
