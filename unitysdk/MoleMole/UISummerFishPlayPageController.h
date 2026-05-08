#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/MoleMole/UISummerFishPlayPageController_ECloseReason.h"
#include "unitysdk/MoleMole/UISummerFishPlayPageController_EState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_336;
class Class_1_677BD2A1DAB39F39;
class Class_2_60638234271CCDB8_129;
class Class_3_BC65147800193919;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISummerFishClickButtonWidgetController; }
namespace MoleMole { class UISummerFishPlayClickCircleWidgetController; }
namespace MoleMole { class UISummerFishPlayPressCircleWidgetController; }
namespace MoleMole { class UISummerFishRewardDialogPopWindowController; }
namespace MoleMole { class UISummerFishSkillButtonWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CHANGETOFISHQTE_OFFSET UNITYSDK_OFFSET(0x13040AA0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CHANGETOSTARTFISH_OFFSET UNITYSDK_OFFSET(0x13040880)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CHANGETOWAITFISH_OFFSET UNITYSDK_OFFSET(0x13040240)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CLEARALLSTATE_OFFSET UNITYSDK_OFFSET(0x1303EBD0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CLOSEUI_OFFSET UNITYSDK_OFFSET(0x13040D50)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1303D430)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1303FDC0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1303D4E0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHBEGINWAITIDLEHANDLE_OFFSET UNITYSDK_OFFSET(0x13040770)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHENDWAITIDLEHANDLE_OFFSET UNITYSDK_OFFSET(0x130407E0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGBATTLEPROGRESSHANDLE_OFFSET UNITYSDK_OFFSET(0x13043D30)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGBOSSSHIELDUPDATE_OFFSET UNITYSDK_OFFSET(0x13044930)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGENDCOUNTDOWNHANDLE_OFFSET UNITYSDK_OFFSET(0x13044FC0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGENDTIMELINEHANDLE_OFFSET UNITYSDK_OFFSET(0x13041BE0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGFAILPRESSHANDLE_OFFSET UNITYSDK_OFFSET(0x13044470)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGHPUPDATE_OFFSET UNITYSDK_OFFSET(0x13044820)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGMATCHFINALTIMEHANDLE_OFFSET UNITYSDK_OFFSET(0x13045350)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGMATCHTIMEOUTHANDLE_OFFSET UNITYSDK_OFFSET(0x130451E0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGMATCHTIMEUPDATEHANDLE_OFFSET UNITYSDK_OFFSET(0x13045110)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGPRESSPROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0x130453F0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGQTERESULTHANDLE_OFFSET UNITYSDK_OFFSET(0x13043280)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGQTETIMERATEHANDLE_OFFSET UNITYSDK_OFFSET(0x130431C0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGQUEUEENDHANDLE_OFFSET UNITYSDK_OFFSET(0x13044B90)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSHIELDRECOVERHINT_OFFSET UNITYSDK_OFFSET(0x13044B20)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSINGLEBATTLEENDHANDLE_OFFSET UNITYSDK_OFFSET(0x13044000)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTBATTLELOOPHANDLE_OFFSET UNITYSDK_OFFSET(0x13043370)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTCOUNTDOWNHANDLE_OFFSET UNITYSDK_OFFSET(0x13044DA0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTSINGLEBATTLEHANDLE_OFFSET UNITYSDK_OFFSET(0x130420E0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTSKILLHANDLE_OFFSET UNITYSDK_OFFSET(0x13044C70)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTTIMELINEHANDLE_OFFSET UNITYSDK_OFFSET(0x13041B90)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSUCCESSCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x13043E00)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSUCCESSPRESSHANDLE_OFFSET UNITYSDK_OFFSET(0x13044620)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONGOINGTRIGGER_OFFSET UNITYSDK_OFFSET(0x13041B00)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1303F310)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1303FF80)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x13040FF0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1303DAC0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1303D570)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1303DB30)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_REGISTERCONTROLEVENTS_OFFSET UNITYSDK_OFFSET(0x1303E8D0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1303D440)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SHOWBIGSCENETUTORIALDIALOG_OFFSET UNITYSDK_OFFSET(0x1303F1E0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SHOWFOLLOWTIPS_OFFSET UNITYSDK_OFFSET(0x13041610)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SHOWNEWTIPS_OFFSET UNITYSDK_OFFSET(0x13041710)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_UPDATEBAR_OFFSET UNITYSDK_OFFSET(0x13041FE0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_UPDATEFOLLOWTIPSPOS_OFFSET UNITYSDK_OFFSET(0x130416D0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x13041C30)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_WAITMESSAGECENTERFREE_OFFSET UNITYSDK_OFFSET(0x13040CD0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__CHANGETOWAITFISH_B__51_0_OFFSET UNITYSDK_OFFSET(0x13045A50)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__CHANGETOWAITFISH_B__51_2_OFFSET UNITYSDK_OFFSET(0x13045C20)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x130454B0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONFISHINGSTARTCOUNTDOWNHANDLE_B__76_0_OFFSET UNITYSDK_OFFSET(0x13045EC0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x13045500)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIINIT_B__5_1_OFFSET UNITYSDK_OFFSET(0x13045640)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIOPEN_B__7_0_OFFSET UNITYSDK_OFFSET(0x13045780)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIOPEN_B__7_1_OFFSET UNITYSDK_OFFSET(0x13045800)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13045F00)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x13045F90)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13045FC0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x13046060)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13046070)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13046080)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13046090)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x130460A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController_TypeDefinitionIndex = 62370;

	class UISummerFishPlayPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_60638234271CCDB8_129* _view; // 0x320
		::MoleMole::UISummerFishRewardDialogPopWindowController* _autoRewardWindowController; // 0x328
		::System::String* _currentTips; // 0x330
		::UnityEngine::Coroutine* _animCoroutine; // 0x338
		::MoleMole::UISummerFishClickButtonWidgetController* _leftButtonController; // 0x340
		::MoleMole::UISummerFishClickButtonWidgetController* _rightButtonController; // 0x348
		::MoleMole::UISummerFishPlayClickCircleWidgetController* _clickCircleWidgetController; // 0x350
		::MoleMole::UISummerFishPlayPressCircleWidgetController* _pressCircleWidgetController; // 0x358
		::MoleMole::UISummerFishSkillButtonWidgetController* _skillButtonWidgetController; // 0x360
		::Class_1_677BD2A1DAB39F39* _chatPlayer; // 0x368
		::UnityEngine::Vector3 _followTipsPos; // 0x370
		::Foundation::Coroutine::CoroutineHandle _waitMessageCenterHandle; // 0x37C
		::System::Boolean _startFishDown; // 0x380
		::System::Boolean _startFishCurrentDown; // 0x381
		::System::String* _lastSoundState; // 0x388
		::MoleMole::UISummerFishPlayPageController_EState _state; // 0x390
		::Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3 _mode; // 0x394
		::System::Int32 _leftOrRight; // 0x398
		::System::Single _battleProgress; // 0x39C
		::System::Boolean _waitAutoRestart; // 0x3A0
		::Foundation::Coroutine::CoroutineHandle _rowAnimationHandle; // 0x3A4
		::UnityEngine::Coroutine* _pressLoopHandle; // 0x3A8
		::System::Boolean _oldDebugMode; // 0x3B0
		::System::Int32 _oldDebugFishId; // 0x3B4
		::System::Int32 _oldLevelId; // 0x3B8
		::System::Int32 _oldDebugOverrideChallangeId; // 0x3BC
		::System::UInt32 _oldInteractId; // 0x3C0
		::System::Single _bossBarTargetValue; // 0x3C4
		::System::Single _bossBarFromValue; // 0x3C8
		::System::Single _bossBarAnimTimeLeft; // 0x3CC
		::System::Single _bossBarToZeroAnimTime; // 0x3D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUIOPEN_OFFSET))(this, showCtrlContext);
		}

		::System::Void ShowBigSceneTutorialDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SHOWBIGSCENETUTORIALDIALOG_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitMessageCenterFree(::System::Action* callback)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_WAITMESSAGECENTERFREE_OFFSET))(this, callback);
		}

		::System::Void CloseUI(::System::Int32 levelId, ::System::UInt32 fishUid, ::MoleMole::UISummerFishPlayPageController_ECloseReason reason, ::System::Single passTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::MoleMole::UISummerFishPlayPageController_ECloseReason, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CLOSEUI_OFFSET))(this, levelId, fishUid, reason, passTime);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void ShowFollowTips(::System::String* key, ::UnityEngine::Vector3 worldPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SHOWFOLLOWTIPS_OFFSET))(this, key, worldPos);
		}

		::System::Void UpdateFollowTipsPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_UPDATEFOLLOWTIPSPOS_OFFSET))(this);
		}

		::System::Void ShowNewTips(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SHOWNEWTIPS_OFFSET))(this, key);
		}

		::System::Void OnGoingTrigger(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONGOINGTRIGGER_OFFSET))(this, obj);
		}

		::System::Void OnFishingStartTimelineHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTTIMELINEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingEndTimelineHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGENDTIMELINEHANDLE_OFFSET))(this, obj);
		}

		::System::Void RegisterControlEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_REGISTERCONTROLEVENTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void ChangeToWaitFish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CHANGETOWAITFISH_OFFSET))(this, args);
		}

		::System::Void ChangeToStartFish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CHANGETOSTARTFISH_OFFSET))(this, args);
		}

		::System::Void ChangeToFishQTE(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CHANGETOFISHQTE_OFFSET))(this, args);
		}

		::System::Void OnFishingStartSingleBattleHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTSINGLEBATTLEHANDLE_OFFSET))(this, obj);
		}

		::System::Void ClearAllState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CLEARALLSTATE_OFFSET))(this);
		}

		::System::Void OnFishingQTETimeRateHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGQTETIMERATEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingQTEResultHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGQTERESULTHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingStartBattleLoopHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTBATTLELOOPHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingBattleProgressHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGBATTLEPROGRESSHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingSuccessClickHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSUCCESSCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingSingleBattleEndHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSINGLEBATTLEENDHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingFailPressHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGFAILPRESSHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingSuccessPressHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSUCCESSPRESSHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingHpUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGHPUPDATE_OFFSET))(this, obj);
		}

		::System::Void OnFishingBossShieldUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGBOSSSHIELDUPDATE_OFFSET))(this, obj);
		}

		::System::Void UpdateBar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_UPDATEBAR_OFFSET))(this);
		}

		::System::Void OnFishingShieldRecoverHint(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSHIELDRECOVERHINT_OFFSET))(this, obj);
		}

		::System::Void OnFishBeginWaitIdleHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHBEGINWAITIDLEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishEndWaitIdleHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHENDWAITIDLEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingQueueEndHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGQUEUEENDHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingStartSkillHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTSKILLHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingStartCountDownHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTCOUNTDOWNHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingEndCountDownHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGENDCOUNTDOWNHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingMatchTimeUpdateHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGMATCHTIMEUPDATEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingMatchTimeOutHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGMATCHTIMEOUTHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingMatchFinalTimeHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGMATCHFINALTIMEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingPressProgressUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGPRESSPROGRESSUPDATE_OFFSET))(this, obj);
		}

		::System::Void _OnUIInit_b__5_0(::System::EventArgs* var)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET))(this, var);
		}

		::System::Void _OnUIInit_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIINIT_B__5_1_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_336* _OnUIOpen_b__7_0()
		{
			return ((::Class_0_16E4307DCC419505_336*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIOPEN_B__7_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__7_1(::Class_3_BC65147800193919* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_BC65147800193919*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIOPEN_B__7_1_OFFSET))(this, rsp);
		}

		::System::Void _ChangeToWaitFish_b__51_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__CHANGETOWAITFISH_B__51_0_OFFSET))(this);
		}

		::System::Void _ChangeToWaitFish_b__51_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__CHANGETOWAITFISH_B__51_2_OFFSET))(this);
		}

		::System::Void _OnFishingStartCountDownHandle_b__76_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONFISHINGSTARTCOUNTDOWNHANDLE_B__76_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
