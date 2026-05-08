#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A472E51DCF07A558.h"
#include "unitysdk/Enum_3_EC9E7818B91C3AA0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_21918336DBB42BE8;
class Class_1_25479A17D745887B;
class Class_1_4784321C3B7F2731;
class Class_1_677BD2A1DAB39F39;
class Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1;
class Class_1_7AD164144758E750;
class Class_1_ABFA099FFDF04A09;
class Class_1_C376DB68B1C74261;
namespace MoleMole { class UIBaseScenePageController_Context; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralChapterFinishWidgetController_Context; }
namespace MoleMole { class UIGeneralLevelUp02WidgetController; }
namespace MoleMole { class UIGeneralLevelUp02WidgetController_Context; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UIInLevelTimerWidgetController_Context; }
namespace MoleMole { class UIMessageChildWindowController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIRewardTipsWidgetController; }
namespace MoleMole { class UIWorldLevelUpWidgetController_Context; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_APPLYPAGECONTEXTDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x16ED1110)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_BINDTWEENSLOT_OFFSET UNITYSDK_OFFSET(0x16ED17E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_DISPATCHTOCHILD_OFFSET UNITYSDK_OFFSET(0x16ED1CD0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0x16ED16E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPS_OFFSET UNITYSDK_OFFSET(0x16ED1C90)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x16ED1760)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETLEVELUPROOT_OFFSET UNITYSDK_OFFSET(0x16ED1720)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETMISSIONTIPS_OFFSET UNITYSDK_OFFSET(0x16ED1430)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETREWARDTIPS_OFFSET UNITYSDK_OFFSET(0x16ED1480)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_BASESCENEPAGELOGIC_OFFSET UNITYSDK_OFFSET(0x16ED09F0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CANPLAYONGOINGCHATIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x16ED0900)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_COMMONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x16ED08C0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x16ED0970)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_HUDLOGICMANAGER_OFFSET UNITYSDK_OFFSET(0x16ED0950)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_INPUTACTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x16ED09D0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISBEFOREPAGEFADEOUTING_OFFSET UNITYSDK_OFFSET(0x16ED0990)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISINOPENOTHERPAGETRANSITION_OFFSET UNITYSDK_OFFSET(0x16ED09B0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ONGOINGCHATPLAYER_OFFSET UNITYSDK_OFFSET(0x16ED08E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_PAGECONTEXT_OFFSET UNITYSDK_OFFSET(0x16ED08B0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_SCRIPTABLEANIMATIONPLAYER_OFFSET UNITYSDK_OFFSET(0x16ED0910)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_UNITMANAGER_OFFSET UNITYSDK_OFFSET(0x16ED0930)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_WHEELSHORTCUTPOP_OFFSET UNITYSDK_OFFSET(0x16ED0980)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_HASANYBUBBLETIPEXCLUDECTRL_OFFSET UNITYSDK_OFFSET(0x16ED1340)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_INITSLOT_OFFSET UNITYSDK_OFFSET(0x16ED1150)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_MUTEMENUBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16ED14C0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x16ED1BF0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0x16ED1BA0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_1_OFFSET UNITYSDK_OFFSET(0x16ED0D00)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x16ED0C90)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16ED1510)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONTIMELINEFORCESTOPONGOINGCHAT_OFFSET UNITYSDK_OFFSET(0x16ED1190)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16ED0D50)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16ED0F90)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16ED0A10)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16ED0B00)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x16ED17A0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENMESSAGETIP_OFFSET UNITYSDK_OFFSET(0x16ED1390)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_PLAYBLOCKFAIRYFADEOUT_OFFSET UNITYSDK_OFFSET(0x16ED1B50)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SETCONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x16ED13E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_BASESCENEPAGELOGIC_OFFSET UNITYSDK_OFFSET(0x16ED0A00)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_COMMONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x16ED08D0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_HUDLOGICMANAGER_OFFSET UNITYSDK_OFFSET(0x16ED0960)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_INPUTACTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x16ED09E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISBEFOREPAGEFADEOUTING_OFFSET UNITYSDK_OFFSET(0x16ED09A0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISINOPENOTHERPAGETRANSITION_OFFSET UNITYSDK_OFFSET(0x16ED09C0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ONGOINGCHATPLAYER_OFFSET UNITYSDK_OFFSET(0x16ED08F0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_SCRIPTABLEANIMATIONPLAYER_OFFSET UNITYSDK_OFFSET(0x16ED0920)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_UNITMANAGER_OFFSET UNITYSDK_OFFSET(0x16ED0940)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWCHAPTERFINISHEFFECT_OFFSET UNITYSDK_OFFSET(0x16ED12F0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWINLEVELTIMEREFFECT_OFFSET UNITYSDK_OFFSET(0x16ED1250)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWLEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0x16ED1200)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWWORLDLEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0x16ED12A0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_TRYBLOCKFAIRY_OFFSET UNITYSDK_OFFSET(0x16ED1C40)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED1E70)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER__WARMUPWIDGETS_ONOPEN_OFFSET UNITYSDK_OFFSET(0x16ED10D0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x16ED1EC0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0x16ED1F50)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16ED1FE0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16ED2070)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16ED2130)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16ED2140)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16ED2150)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseScenePageController_TypeDefinitionIndex = 42919;

	class UIBaseScenePageController : public ::MoleMole::UIWindowController
	{
	public:
		::MoleMole::UIBaseScenePageController_Context* _pageContext; // 0x310
		::Class_1_21918336DBB42BE8* _CommonEventHandler_k__BackingField; // 0x318
		::MoleMole::UIGeneralLevelUp02WidgetController* LevelUpController; // 0x320
		::Class_1_677BD2A1DAB39F39* _OngoingChatPlayer_k__BackingField; // 0x328
		::Class_1_C376DB68B1C74261* _ScriptableAnimationPlayer_k__BackingField; // 0x330
		::Class_1_ABFA099FFDF04A09* _UnitManager_k__BackingField; // 0x338
		::Class_1_4784321C3B7F2731* _HudLogicManager_k__BackingField; // 0x340
		::MoleMole::UIMissionTipsContainerWidgetController* _missionTipsContainer; // 0x348
		::System::Boolean _consoleActive; // 0x350
		::System::Boolean _IsBeforePageFadeOuting_k__BackingField; // 0x351
		::System::Boolean _IsInOpenOtherPageTransition_k__BackingField; // 0x352
		::Class_1_25479A17D745887B* _InputActionHandler_k__BackingField; // 0x358
		::Class_1_7AD164144758E750* _BaseScenePageLogic_k__BackingField; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIBaseScenePageController_Context* get_PageContext()
		{
			return ((::MoleMole::UIBaseScenePageController_Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_PAGECONTEXT_OFFSET))(this);
		}

		::Class_1_21918336DBB42BE8* get_CommonEventHandler()
		{
			return ((::Class_1_21918336DBB42BE8*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_COMMONEVENTHANDLER_OFFSET))(this);
		}

		::System::Void set_CommonEventHandler(::Class_1_21918336DBB42BE8* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21918336DBB42BE8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_COMMONEVENTHANDLER_OFFSET))(this, value);
		}

		::Class_1_677BD2A1DAB39F39* get_OngoingChatPlayer()
		{
			return ((::Class_1_677BD2A1DAB39F39*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ONGOINGCHATPLAYER_OFFSET))(this);
		}

		::System::Void set_OngoingChatPlayer(::Class_1_677BD2A1DAB39F39* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_677BD2A1DAB39F39*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ONGOINGCHATPLAYER_OFFSET))(this, value);
		}

		::System::Boolean get_CanPlayOngoingChatImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CANPLAYONGOINGCHATIMMEDIATELY_OFFSET))(this);
		}

		::Class_1_C376DB68B1C74261* get_ScriptableAnimationPlayer()
		{
			return ((::Class_1_C376DB68B1C74261*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_SCRIPTABLEANIMATIONPLAYER_OFFSET))(this);
		}

		::System::Void set_ScriptableAnimationPlayer(::Class_1_C376DB68B1C74261* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_SCRIPTABLEANIMATIONPLAYER_OFFSET))(this, value);
		}

		::Class_1_ABFA099FFDF04A09* get_UnitManager()
		{
			return ((::Class_1_ABFA099FFDF04A09*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_UNITMANAGER_OFFSET))(this);
		}

		::System::Void set_UnitManager(::Class_1_ABFA099FFDF04A09* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ABFA099FFDF04A09*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_UNITMANAGER_OFFSET))(this, value);
		}

		::Class_1_4784321C3B7F2731* get_HudLogicManager()
		{
			return ((::Class_1_4784321C3B7F2731*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_HUDLOGICMANAGER_OFFSET))(this);
		}

		::System::Void set_HudLogicManager(::Class_1_4784321C3B7F2731* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4784321C3B7F2731*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_HUDLOGICMANAGER_OFFSET))(this, value);
		}

		::System::Boolean get_ConsoleActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CONSOLEACTIVE_OFFSET))(this);
		}

		::System::Boolean get_WheelShortcutPop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_WHEELSHORTCUTPOP_OFFSET))(this);
		}

		::System::Boolean get_IsBeforePageFadeOuting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISBEFOREPAGEFADEOUTING_OFFSET))(this);
		}

		::System::Void set_IsBeforePageFadeOuting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISBEFOREPAGEFADEOUTING_OFFSET))(this, value);
		}

		::System::Boolean get_IsInOpenOtherPageTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISINOPENOTHERPAGETRANSITION_OFFSET))(this);
		}

		::System::Void set_IsInOpenOtherPageTransition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISINOPENOTHERPAGETRANSITION_OFFSET))(this, value);
		}

		::Class_1_25479A17D745887B* get_InputActionHandler()
		{
			return ((::Class_1_25479A17D745887B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_INPUTACTIONHANDLER_OFFSET))(this);
		}

		::System::Void set_InputActionHandler(::Class_1_25479A17D745887B* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_25479A17D745887B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_INPUTACTIONHANDLER_OFFSET))(this, value);
		}

		::Class_1_7AD164144758E750* get_BaseScenePageLogic()
		{
			return ((::Class_1_7AD164144758E750*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_BASESCENEPAGELOGIC_OFFSET))(this);
		}

		::System::Void set_BaseScenePageLogic(::Class_1_7AD164144758E750* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7AD164144758E750*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_BASESCENEPAGELOGIC_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnFadeTransitionChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_OFFSET))(this, args);
		}

		::System::Void OnFadeTransitionChange_1(::System::Boolean isStart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_1_OFFSET))(this, isStart);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _WarmUpWidgets_OnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER__WARMUPWIDGETS_ONOPEN_OFFSET))(this);
		}

		::System::Void ApplyPageContextDefaultState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_APPLYPAGECONTEXTDEFAULTSTATE_OFFSET))(this);
		}

		::System::Void InitSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_INITSLOT_OFFSET))(this);
		}

		::System::Void OnTimelineForceStopOngoingChat(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONTIMELINEFORCESTOPONGOINGCHAT_OFFSET))(this, args);
		}

		::System::Void ShowLevelUpEffect(::MoleMole::UIGeneralLevelUp02WidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralLevelUp02WidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWLEVELUPEFFECT_OFFSET))(this, context);
		}

		::System::Void ShowInLevelTimerEffect(::MoleMole::UIInLevelTimerWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelTimerWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWINLEVELTIMEREFFECT_OFFSET))(this, context);
		}

		::System::Void ShowWorldLevelUpEffect(::MoleMole::UIWorldLevelUpWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWorldLevelUpWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWWORLDLEVELUPEFFECT_OFFSET))(this, context);
		}

		::System::Void ShowChapterFinishEffect(::MoleMole::UIGeneralChapterFinishWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralChapterFinishWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWCHAPTERFINISHEFFECT_OFFSET))(this, context);
		}

		::System::Boolean HasAnyBubbleTipExcludeCtrl(::MoleMole::UIGeneralNewsBubbleRowWidgetController* excludeCtrl)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_HASANYBUBBLETIPEXCLUDECTRL_OFFSET))(this, excludeCtrl);
		}

		::MoleMole::UIMessageChildWindowController* OpenMessageTip(::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1*>* userList)
		{
			return ((::MoleMole::UIMessageChildWindowController*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENMESSAGETIP_OFFSET))(this, userList);
		}

		::System::Void SetConsoleActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SETCONSOLEACTIVE_OFFSET))(this, active);
		}

		::MoleMole::UIMissionTipsContainerWidgetController* GetMissionTips()
		{
			return ((::MoleMole::UIMissionTipsContainerWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETMISSIONTIPS_OFFSET))(this);
		}

		::MoleMole::UIRewardTipsWidgetController* GetRewardTips()
		{
			return ((::MoleMole::UIRewardTipsWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETREWARDTIPS_OFFSET))(this);
		}

		::System::Boolean MuteMenuBtnClick(::System::Boolean showLog)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_MUTEMENUBTNCLICK_OFFSET))(this, showLog);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetBottomTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLevelUpRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETLEVELUPROOT_OFFSET))(this);
		}

		::MoleMole::UIGeneralNewsBubbleWidgetController* GetBubbleWidget()
		{
			return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBUBBLEWIDGET_OFFSET))(this);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* OpenBubbleRow()
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENBUBBLEROW_OFFSET))(this);
		}

		::System::Void BindTweenSlot(::UnityEngine::Transform* transform, ::System::Func_1<::System::Int32>* getSlotLeftCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_BINDTWEENSLOT_OFFSET))(this, transform, getSlotLeftCount);
		}

		::System::Void PlayBlockFairyFadeout(::System::Boolean isNewbie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_PLAYBLOCKFAIRYFADEOUT_OFFSET))(this, isNewbie);
		}

		::System::Void OnBeforePageFadeOut(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEOUT_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Void OnBeforePageFadeIn(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEIN_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Boolean TryBlockFairy(::System::Boolean isNewbie)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_TRYBLOCKFAIRY_OFFSET))(this, isNewbie);
		}

		::UnityEngine::Transform* GetBottomTips()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPS_OFFSET))(this);
		}

		::System::Void DispatchToChild(::Enum_3_EC9E7818B91C3AA0 eventNotifyType, ::Enum_3_A472E51DCF07A558 slotEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EC9E7818B91C3AA0, ::Enum_3_A472E51DCF07A558))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_DISPATCHTOCHILD_OFFSET))(this, eventNotifyType, slotEvent);
		}

		::System::Void __base_OnBeforePageFadeIn(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEIN_OFFSET))(this, P0);
		}

		::System::Void __base_OnBeforePageFadeOut(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEOUT_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
