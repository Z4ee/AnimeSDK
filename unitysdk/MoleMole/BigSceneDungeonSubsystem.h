#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F7D89F24B36C645D.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/BigSceneDungeonSubsystem_ZenkovHighQualityDisplayData.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_294;
class Class_1_0333092B652ED806;
class Class_1_49266A9AAF1C928E_Class_1_02F8008115ABA9CB;
class Class_1_A6DA851A9BDCFFDD;
class Class_3_0E7EF0781F9BE53A_1;
class Class_3_C93CC3D2C2AC4067;
class Class_3_EEEA5D633F6A23D6_23;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ADDCOUNTUPTIMERTASK_OFFSET UNITYSDK_OFFSET(0x14350D40)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ADDSTARTCDTIMERTASK_OFFSET UNITYSDK_OFFSET(0x1434F3C0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ADDTIMERTASK_OFFSET UNITYSDK_OFFSET(0x14350AC0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_APPLYVOZKREWARDPERFORMANCESETTINGS_OFFSET UNITYSDK_OFFSET(0x1434CD50)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_DEALONMAPCLOSE_OFFSET UNITYSDK_OFFSET(0x143503D0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ENTERSCENEPERFORM_OFFSET UNITYSDK_OFFSET(0x1434C9D0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_FIREZENKOVHIGHQUALITYPICKEVENT_OFFSET UNITYSDK_OFFSET(0x14351E30)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_FLUSHPENDINGZENKOVHIGHQUALITYPICKEVENTS_OFFSET UNITYSDK_OFFSET(0x14352130)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GETATTACHPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x14352E10)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_DUNGEONTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x1434F190)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_DUNGEONTIMER_OFFSET UNITYSDK_OFFSET(0x1434F170)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0x1434CBF0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_ISUITIMERSTARTED_OFFSET UNITYSDK_OFFSET(0x1434F0C0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_REMAININGTIME_OFFSET UNITYSDK_OFFSET(0x1434F1B0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_STARTCDREMAININGTIME_OFFSET UNITYSDK_OFFSET(0x14350CE0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_TIMERSTATUS_OFFSET UNITYSDK_OFFSET(0x1434ECE0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_UICOUNTDOWNREMAININGTIME_OFFSET UNITYSDK_OFFSET(0x1434F220)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_UICOUNTDOWNTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x1434F200)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_UICOUNTDOWNTIMER_OFFSET UNITYSDK_OFFSET(0x1434F1E0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_INITTIMER_OFFSET UNITYSDK_OFFSET(0x1434D000)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ISINSTATUS_OFFSET UNITYSDK_OFFSET(0x1434F630)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ISTIMERRUNNABLE_OFFSET UNITYSDK_OFFSET(0x1434F6D0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ISUITIMERRUNNABLE_OFFSET UNITYSDK_OFFSET(0x1434FA40)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ISZENKOVBAGSEARCHPAGEOPEN_OFFSET UNITYSDK_OFFSET(0x14351830)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_MARKSTARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x14351660)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1434CC00)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONBIGSCENEDUNGEONDONE_OFFSET UNITYSDK_OFFSET(0x14351240)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1434D9D0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1434E620)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONTELEPORTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x143516F0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONTIMESTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1434ED50)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1434E060)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONZENKOVHIGHQUALITYPICKNOTIFY_OFFSET UNITYSDK_OFFSET(0x14351B70)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REFRESHSTATUSONSTARTTIMERFINISH_OFFSET UNITYSDK_OFFSET(0x14350110)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REGISTERDUNGEONTICKABLE_OFFSET UNITYSDK_OFFSET(0x1434EBC0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REGISTERMAINDUNGEONTIMER_OFFSET UNITYSDK_OFFSET(0x1434F250)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REGISTERSETUPZENKOVHIGHQUALITYDROPITEMONREADY_OFFSET UNITYSDK_OFFSET(0x14353010)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REMOVEZENKOVHIGHQUALITYEVENTDISPLAY_OFFSET UNITYSDK_OFFSET(0x1434DCC0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_SETUPZENKOVHIGHQUALITYDROPITEM_OFFSET UNITYSDK_OFFSET(0x14353200)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_SET_ISUITIMERSTARTED_OFFSET UNITYSDK_OFFSET(0x1434F0D0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_SET_TIMERSTATUS_OFFSET UNITYSDK_OFFSET(0x1434ECF0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_SHOULDSHOWSTARTCD_OFFSET UNITYSDK_OFFSET(0x1434F680)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_STOPTIMER_OFFSET UNITYSDK_OFFSET(0x14350A70)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UNREGISTERDUNGEONTICKABLE_OFFSET UNITYSDK_OFFSET(0x1434EC50)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UNREGISTERMAINTIMER_OFFSET UNITYSDK_OFFSET(0x14351120)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATEDUNGEONTICKABLES_OFFSET UNITYSDK_OFFSET(0x1434E300)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATEMAINTIMERACTIONS_OFFSET UNITYSDK_OFFSET(0x143505E0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATESTARTCDTIMERACTIONS_OFFSET UNITYSDK_OFFSET(0x1434FF50)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATESTARTCD_OFFSET UNITYSDK_OFFSET(0x1434FC90)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATETIMER_OFFSET UNITYSDK_OFFSET(0x1434E0B0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATEUITIMERACTIONS_OFFSET UNITYSDK_OFFSET(0x14350900)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATEZENKOVHIGHQUALITYGADGETFOLLOW_OFFSET UNITYSDK_OFFSET(0x1434E680)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_WAITANDFIREZENKOVHIGHQUALITYPICKEVENTS_OFFSET UNITYSDK_OFFSET(0x143520B0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ZENKOVHIGHQUALITYEVENTDISPLAY_OFFSET UNITYSDK_OFFSET(0x14352280)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14353530)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM__ONTIMESTATUSCHANGE_B__49_0_OFFSET UNITYSDK_OFFSET(0x14353840)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14353850)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x143538E0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14353970)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14353A10)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonSubsystem_TypeDefinitionIndex = 44140;

	class BigSceneDungeonSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneDungeonSubsystem*>
	{
	public:
		// static const ::System::Single ReportTimerInterval; // 0x0
		::System::String* prefabPath; // 0x10
		::System::Collections::Generic::List_1<::Class_1_A6DA851A9BDCFFDD*>* _timerActionList; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_294*>* _dungeonTickablesToAdd; // 0x20
		::Class_1_0333092B652ED806* DungeonStartTimerData; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_294*>* _dungeonTickables; // 0x30
		::System::String* abilityEventParamKey; // 0x38
		::Class_1_0333092B652ED806* UICountDownTimerData; // 0x40
		::Class_1_49266A9AAF1C928E_Class_1_02F8008115ABA9CB* _performRuntime; // 0x48
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_294*>* _dungeonTickablesToRemove; // 0x50
		::System::Collections::Generic::List_1<::Class_1_A6DA851A9BDCFFDD*>* _mainTimerActionList; // 0x58
		::System::Collections::Generic::List_1<::Class_1_A6DA851A9BDCFFDD*>* _startCDTimerActionList; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::BigSceneDungeonSubsystem_ZenkovHighQualityDisplayData>* _zenkovHighQualityEntityList; // 0x68
		::System::Collections::Generic::List_1<::System::Int32>* _pendingZenkovHighQualityPickItemIds; // 0x70
		::Class_1_0333092B652ED806* DungeonTimerData; // 0x78
		::System::Boolean _isTimerStopped; // 0x80
		::System::Boolean pauseDialogKeepCountdown; // 0x81
		::Enum_3_F7D89F24B36C645D _timerStatus; // 0x84
		::System::Single _lastRealTime; // 0x88
		::Foundation::Coroutine::CoroutineHandle _zenkovHighQualityPickWaitHandle; // 0x8C
		::System::Boolean markDungeonTimerCanStart; // 0x90
		::System::Boolean _isUITimerStarted; // 0x91
		::System::Boolean countDownDecorDefaultStart; // 0x92
		::System::Boolean shouldShowXKovTimerUI; // 0x93
		::System::Int32 _zenkovHighQualityEventDisplayID; // 0x94
		::System::Single _reportTimer; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void EnterScenePerform(::System::String* shotTypeStr, ::System::Action* FinishAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ENTERSCENEPERFORM_OFFSET))(this, shotTypeStr, FinishAction);
		}

		::System::Boolean get_EnableUpdateWhenGamePause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void ApplyVoZkRewardPerformanceSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_APPLYVOZKREWARDPERFORMANCESETTINGS_OFFSET))();
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void RegisterDungeonTickable(::Class_0_16E4307DCC419505_294* tickable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_294*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REGISTERDUNGEONTICKABLE_OFFSET))(this, tickable);
		}

		::System::Void UnregisterDungeonTickable(::Class_0_16E4307DCC419505_294* tickable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_294*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UNREGISTERDUNGEONTICKABLE_OFFSET))(this, tickable);
		}

		::System::Void UpdateDungeonTickables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATEDUNGEONTICKABLES_OFFSET))(this);
		}

		::Enum_3_F7D89F24B36C645D get_TimerStatus()
		{
			return ((::Enum_3_F7D89F24B36C645D(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_TIMERSTATUS_OFFSET))(this);
		}

		::System::Void set_TimerStatus(::Enum_3_F7D89F24B36C645D value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F7D89F24B36C645D))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_SET_TIMERSTATUS_OFFSET))(this, value);
		}

		::System::Boolean get_isUITimerStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_ISUITIMERSTARTED_OFFSET))(this);
		}

		::System::Void set_isUITimerStarted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_SET_ISUITIMERSTARTED_OFFSET))(this, value);
		}

		::System::Single get_DungeonTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_DUNGEONTIMER_OFFSET))(this);
		}

		::System::Single get_DungeonTimeLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_DUNGEONTIMELIMIT_OFFSET))(this);
		}

		::System::Single get_RemainingTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_REMAININGTIME_OFFSET))(this);
		}

		::System::Single get_UICountDownTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_UICOUNTDOWNTIMER_OFFSET))(this);
		}

		::System::Single get_UICountDownTimeLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_UICOUNTDOWNTIMELIMIT_OFFSET))(this);
		}

		::System::Single get_UICountDownRemainingTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_UICOUNTDOWNREMAININGTIME_OFFSET))(this);
		}

		::System::Void InitTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_INITTIMER_OFFSET))(this);
		}

		::System::Void OnTimeStatusChange(::Enum_3_F7D89F24B36C645D oldStatus, ::Enum_3_F7D89F24B36C645D newStatus)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F7D89F24B36C645D, ::Enum_3_F7D89F24B36C645D))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONTIMESTATUSCHANGE_OFFSET))(this, oldStatus, newStatus);
		}

		::System::Boolean IsInStatus(::Enum_3_F7D89F24B36C645D status)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_F7D89F24B36C645D))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ISINSTATUS_OFFSET))(this, status);
		}

		::System::Boolean ShouldShowStartCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_SHOULDSHOWSTARTCD_OFFSET))(this);
		}

		::System::Boolean IsTimerRunnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ISTIMERRUNNABLE_OFFSET))(this);
		}

		::System::Boolean IsUITimerRunnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ISUITIMERRUNNABLE_OFFSET))(this);
		}

		::System::Void UpdateStartCD(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATESTARTCD_OFFSET))(this, dt);
		}

		::System::Void RefreshStatusOnStartTimerFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REFRESHSTATUSONSTARTTIMERFINISH_OFFSET))(this);
		}

		static ::System::Void DealOnMapClose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_DEALONMAPCLOSE_OFFSET))();
		}

		::System::Void UpdateTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATETIMER_OFFSET))(this);
		}

		::System::Void StopTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_STOPTIMER_OFFSET))(this);
		}

		::System::Void UpdateUITimerActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATEUITIMERACTIONS_OFFSET))(this);
		}

		::System::Void AddTimerTask(::System::Single leftSecond, ::System::Action* action, ::System::String* tagName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ADDTIMERTASK_OFFSET))(this, leftSecond, action, tagName);
		}

		::System::Single get_StartCDRemainingTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_STARTCDREMAININGTIME_OFFSET))(this);
		}

		::System::Void AddStartCDTimerTask(::System::Single leftSecond, ::System::Action* action, ::System::String* tagName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ADDSTARTCDTIMERTASK_OFFSET))(this, leftSecond, action, tagName);
		}

		::System::Void UpdateStartCDTimerActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATESTARTCDTIMERACTIONS_OFFSET))(this);
		}

		::System::Void AddCountUpTimerTask(::System::Single countUpTime, ::System::String* tagName, ::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ADDCOUNTUPTIMERTASK_OFFSET))(this, countUpTime, tagName, action);
		}

		::Class_1_A6DA851A9BDCFFDD* RegisterMainDungeonTimer(::System::Single durationSeconds, ::System::Action* callback)
		{
			return ((::Class_1_A6DA851A9BDCFFDD*(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REGISTERMAINDUNGEONTIMER_OFFSET))(this, durationSeconds, callback);
		}

		::System::Void UnregisterMainTimer(::Class_1_A6DA851A9BDCFFDD* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A6DA851A9BDCFFDD*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UNREGISTERMAINTIMER_OFFSET))(this, data);
		}

		::System::Void UpdateMainTimerActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATEMAINTIMERACTIONS_OFFSET))(this);
		}

		::System::Void OnBigSceneDungeonDone(::Class_3_EEEA5D633F6A23D6_23* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_EEEA5D633F6A23D6_23*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONBIGSCENEDUNGEONDONE_OFFSET))(this, notify);
		}

		::System::Void MarkStartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_MARKSTARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Void OnTeleportCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONTELEPORTCOMPLETED_OFFSET))(this);
		}

		static ::System::Boolean IsZenkovBagSearchPageOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ISZENKOVBAGSEARCHPAGEOPEN_OFFSET))();
		}

		::System::Void OnZenkovHighQualityPickNotify(::Class_3_0E7EF0781F9BE53A_1* redDotRecSync)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_0E7EF0781F9BE53A_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONZENKOVHIGHQUALITYPICKNOTIFY_OFFSET))(this, redDotRecSync);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitAndFireZenkovHighQualityPickEvents()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_WAITANDFIREZENKOVHIGHQUALITYPICKEVENTS_OFFSET))(this);
		}

		::System::Void FlushPendingZenkovHighQualityPickEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_FLUSHPENDINGZENKOVHIGHQUALITYPICKEVENTS_OFFSET))(this);
		}

		::System::Void FireZenkovHighQualityPickEvent(::System::UInt32 targetId, ::System::Int32 itemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_FIREZENKOVHIGHQUALITYPICKEVENT_OFFSET))(this, targetId, itemId);
		}

		::System::Int32 ZenkovHighQualityEventDisplay(::System::Int32 itemID, ::MoleMole::EntityHandle entity, ::System::String* attachPointName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ZENKOVHIGHQUALITYEVENTDISPLAY_OFFSET))(this, itemID, entity, attachPointName);
		}

		::System::Boolean RemoveZenkovHighQualityEventDisplay(::System::Int32 displayId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REMOVEZENKOVHIGHQUALITYEVENTDISPLAY_OFFSET))(this, displayId);
		}

		::System::Void UpdateZenkovHighQualityGadgetFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATEZENKOVHIGHQUALITYGADGETFOLLOW_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 GetAttachPointPosition(::Class_3_C93CC3D2C2AC4067* model, ::System::String* attachPointName)
		{
			return ((::UnityEngine::Vector3(*)(::Class_3_C93CC3D2C2AC4067*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GETATTACHPOINTPOSITION_OFFSET))(model, attachPointName);
		}

		static ::System::Void RegisterSetupZenkovHighQualityDropItemOnReady(::MoleMole::EntityHandle gadgetEntity, ::System::Int32 itemId)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REGISTERSETUPZENKOVHIGHQUALITYDROPITEMONREADY_OFFSET))(gadgetEntity, itemId);
		}

		static ::System::Void SetupZenkovHighQualityDropItem(::System::Int32 itemId, ::UnityEngine::GameObject* modelGo)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_SETUPZENKOVHIGHQUALITYDROPITEM_OFFSET))(itemId, modelGo);
		}

		::System::Void _OnTimeStatusChange_b__49_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM__ONTIMESTATUSCHANGE_B__49_0_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
