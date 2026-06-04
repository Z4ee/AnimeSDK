#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompetitiveGamePlaySystemPriority.h"
#include "unitysdk/RPG/Client/PlayerIgnoreTimeRewindHitReason.h"
#include "unitysdk/RPG/Client/TimeRewindControlManagerActiveReason.h"
#include "unitysdk/RPG/Client/TimeRewindControlManager_ExitControlModeStep.h"
#include "unitysdk/RPG/Client/TimeRewindGlobalUnselectableReason.h"
#include "unitysdk/RPG/GameCore/BindTimeRewindMultiControlType.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/ForbidSelectTimeRewindReason.h"
#include "unitysdk/RPG/GameCore/TimeRewindEntityControlType.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
class Class_1_22DFC3839E157DF2;
class Class_1_4057065B3D76240A;
class Class_1_5863CECBF1A58D06;
class Class_1_E05E7A6D9DE9138B;
class Class_1_E45C207B1AC948BE;
class Class_2_7441D3F0EDA3D41C;
class Class_3_07C3C4D2990C49EE;
namespace ParticleRecorder { class BackwardParticlesInfoSO; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class EntityTimelineControlTrackInfo; }
namespace RPG::Client { class TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo; }
namespace RPG::Client { class TimeRewindControlManager_TimeRewindEntityPreload; }
namespace RPG::Client { class TimeRewindControlManager_TimeRewindEntityPreloadEffItem; }
namespace RPG::Client { class TimeRewindItemSingleClipData; }
namespace RPG::Client { class TimelineItemSingleData; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client { template <typename T> class TimeRewindObjLitePool_1; }
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OpenTimeRewindSnapPageParam; }
namespace RPG::GameCore { class ToastPile; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDREWINDBTNCD_OFFSET UNITYSDK_OFFSET(0xCA419F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDTIMELINEOBJECT_OFFSET UNITYSDK_OFFSET(0xCA3FB80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CALCTIMEREWINDTARGETSELECTABLE_OFFSET UNITYSDK_OFFSET(0xCA40690)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CLOSETIMEREWINDRECREATEWORLDPAGE_OFFSET UNITYSDK_OFFSET(0xCA3C5E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECREASEINCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0xCA41950)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECTIVETIMEREWINDMANAGER_OFFSET UNITYSDK_OFFSET(0xCA3BFD0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA3DF90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xCA3F2F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCA3CE10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_FIREBACKWARDEFFASYNC_OFFSET UNITYSDK_OFFSET(0xCA38630)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETCOMPETITIVEPRIORITY_OFFSET UNITYSDK_OFFSET(0xCA3E780)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETENTITYTIMELINETRACKINFO_OFFSET UNITYSDK_OFFSET(0xCA38B40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETTIMEREWINDVIEWMAT_OFFSET UNITYSDK_OFFSET(0xCA39A90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_CURRENTSELECTTARGETTIMEREWINDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCA422A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_IGNOREHITPLAYER_OFFSET UNITYSDK_OFFSET(0xCA422C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xCA422B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INPERFORMANCEMODE_OFFSET UNITYSDK_OFFSET(0xCA3D790)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_LOCKPERFORMANCETARGET_OFFSET UNITYSDK_OFFSET(0xCA3D780)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_MANAGERACTIVE_OFFSET UNITYSDK_OFFSET(0xCA3F3D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_TIMEREWINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xCA42290)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_INCREASEINCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0xCA418B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ISHITPLAYERSEQEXECUTION_OFFSET UNITYSDK_OFFSET(0xCA3F3E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADOVERRIDECLIPASSET_OFFSET UNITYSDK_OFFSET(0xCA38E70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADSINGLECLIPINFOASSET_OFFSET UNITYSDK_OFFSET(0xCA39020)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADTIMEREWINDENTITYANIMEVENTCONFIGS_OFFSET UNITYSDK_OFFSET(0xCA39290)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONENTERTOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xCA3E6E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONLEAVETOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xCA3E730)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONTIMEREWINDENTITYCONTROLOVERTIME_OFFSET UNITYSDK_OFFSET(0xCA41BA0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_PRELOADTIMEREWINDENTITYEFF_OFFSET UNITYSDK_OFFSET(0xCA376B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERBINDCHILDTIMEREWINDENTITY_OFFSET UNITYSDK_OFFSET(0xCA40220)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERTIMEREWINDCONTROLSWITCHER_OFFSET UNITYSDK_OFFSET(0xCA3EFE0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_RELEASETIMEREWINDENTITYPRELOADEFF_OFFSET UNITYSDK_OFFSET(0xCA37E70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REMOVETIMELINEOBJECT_OFFSET UNITYSDK_OFFSET(0xCA3F830)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETBACKWARDEFFFINISH_OFFSET UNITYSDK_OFFSET(0xCA38760)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETENABLETIMEREWINDSELECT_OFFSET UNITYSDK_OFFSET(0xCA41AA0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALOVERRIDESPECIALCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xCA40700)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALUNSELECTABLE_OFFSET UNITYSDK_OFFSET(0xCA3BDC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETPLAYERIGNORETIMEREWINDHIT_OFFSET UNITYSDK_OFFSET(0xCA41B30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCA3C640)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDRECREATEWORLDPAGE_OFFSET UNITYSDK_OFFSET(0xCA3C500)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDSNAPPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCA3CB40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xCA3E7D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYHITPLAYERSEQ_OFFSET UNITYSDK_OFFSET(0xCA3F470)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYONHITPLAYER_OFFSET UNITYSDK_OFFSET(0xCA3F790)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYATTACHSWITCHEROPENEFFONPLAYER_OFFSET UNITYSDK_OFFSET(0xCA40410)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYCONTROLTIMEREWINDENTITYBYTASK_OFFSET UNITYSDK_OFFSET(0xCA3B170)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYFINISHQUEST_OFFSET UNITYSDK_OFFSET(0xCA3D7A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYGETBACKWARDPARTICLESINFOSO_OFFSET UNITYSDK_OFFSET(0xCA38880)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYREMOVESWITCHEROPENEFFONPLAYER_OFFSET UNITYSDK_OFFSET(0xCA405E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYUNSELECTCURRENTTARGET_OFFSET UNITYSDK_OFFSET(0xCA3F200)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_UNREGISTERTIMEREWINDCONTROLSWITCHER_OFFSET UNITYSDK_OFFSET(0xCA3F170)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ADDPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xCA379D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__BTNINCD_OFFSET UNITYSDK_OFFSET(0xCA41A50)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CACHEBACKWARDEFFSOASSETASYNC_OFFSET UNITYSDK_OFFSET(0xCA37FA0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKCANCLICKREWINDBUTTON_OFFSET UNITYSDK_OFFSET(0xCA41C80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKSPECIALCONTROLTYPECANCONTROL_OFFSET UNITYSDK_OFFSET(0xCA41EA0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCA3DB40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISABLECONTROLLOOKATMODE_OFFSET UNITYSDK_OFFSET(0xCA40E30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISPOSETIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCA3D0F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DOINIT_OFFSET UNITYSDK_OFFSET(0xCA3FEA0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLECONTROLLOOKATMODE_OFFSET UNITYSDK_OFFSET(0xCA40890)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLESWITCHCAMERACONTROLMODE_OFFSET UNITYSDK_OFFSET(0xCA407D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXECUTEHITPLAYERSEQ_OFFSET UNITYSDK_OFFSET(0xCA3F4E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP1_OFFSET UNITYSDK_OFFSET(0xCA41830)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP2_OFFSET UNITYSDK_OFFSET(0xCA412C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__FIRESTARTCONTROLMODEEFF_OFFSET UNITYSDK_OFFSET(0xCA41080)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITEXTERNALSYSTEM_OFFSET UNITYSDK_OFFSET(0xCA3B950)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITQUEST_OFFSET UNITYSDK_OFFSET(0xCA3D960)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONGROUPLOADEND_OFFSET UNITYSDK_OFFSET(0xCA3E580)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONOPENMOBILEPHONE_OFFSET UNITYSDK_OFFSET(0xCA3C3B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONPERFORMANCEREWINDCOMPLETE_OFFSET UNITYSDK_OFFSET(0xCA3D5B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTEND_OFFSET UNITYSDK_OFFSET(0xCA3BF10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTSTART_OFFSET UNITYSDK_OFFSET(0xCA3BD60)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xCA3BF70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWREALAVATAR_OFFSET UNITYSDK_OFFSET(0xCA3C0D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMELINEENTITYEVENT_OFFSET UNITYSDK_OFFSET(0xCA3D610)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDPERFORMANCEPAGEENTER_OFFSET UNITYSDK_OFFSET(0xCA3D400)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xCA41CE0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONPRESS_OFFSET UNITYSDK_OFFSET(0xCA41F30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONRELEASE_OFFSET UNITYSDK_OFFSET(0xCA42240)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPLAYERLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xCA3CE90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xCA37960)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHSPECIALCONTROLMODEBALLEFFSTATE_OFFSET UNITYSDK_OFFSET(0xCA40570)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__RELEASEALLASSETS_OFFSET UNITYSDK_OFFSET(0xCA3A630)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVECACHEDBACKWARDEFFSO_OFFSET UNITYSDK_OFFSET(0xCA38420)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVEPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xCA37BC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWPERFORMANCEPAGE_OFFSET UNITYSDK_OFFSET(0xCA3C940)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWSNAPPERFORMANCEPAGE_OFFSET UNITYSDK_OFFSET(0xCA3CBF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTCONTROLTIMELINEENTITY_OFFSET UNITYSDK_OFFSET(0xCA3B260)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCA3C6E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKBTNCD_OFFSET UNITYSDK_OFFSET(0xCA3EB40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKCACHEDASSET_OFFSET UNITYSDK_OFFSET(0xCA383A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKEXITCONTROL_OFFSET UNITYSDK_OFFSET(0xCA3EF50)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKLOOPREWINDUIAUDIO_OFFSET UNITYSDK_OFFSET(0xCA3C130)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPERFORMANCECONTROL_OFFSET UNITYSDK_OFFSET(0xCA3D310)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPLAYERSTEER_OFFSET UNITYSDK_OFFSET(0xCA3EBB0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNPRESSDOWN_OFFSET UNITYSDK_OFFSET(0xCA3D450)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNRELEASE_OFFSET UNITYSDK_OFFSET(0xCA3D500)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYEXITCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xCA3C450)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYUNREGISTERBINDCHILDTIMEREWINDENTITY_OFFSET UNITYSDK_OFFSET(0xCA3F9F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__UNINITEXTERNALSYSTEM_OFFSET UNITYSDK_OFFSET(0xCA3BB30)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager_TypeDefinitionIndex = 56845;

	class TimeRewindControlManager : public ::System::Object
	{
	public:
		// static const ::System::String* StopLoopRewindAudio; // 0x0
		// static const ::System::String* RestartLoopRewindAudio; // 0x0
		// static const ::System::String* TimeRewindControlSwitcherTag; // 0x0
		// static const ::System::String* TimeRewindEntityTag; // 0x0
		::System::Collections::Generic::List_1<::RPG::GameCore::EntityTimeRewindComponent*>* _AllTimeRewindComponents; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* _RewindEntityClips; // 0x18
		::Class_1_E45C207B1AC948BE* _SwitchOpenAttachPlayerBallEff; // 0x20
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadEffItem*>* _TimeRewindEntityPreloadEffItemPool; // 0x28
		::RPG::Client::AdventurePhase* _Phase; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindItemSingleClipData*>* _RewindEntityClipInfos; // 0x38
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _TimeRewindEffBackwardSOAssetInfoPool; // 0x40
		::System::Action* _PerformanceFinishCallback; // 0x48
		::UnityEngine::Coroutine* _FrameAssetAsyncLoadCoroutine; // 0x50
		::Il2CppArray<::Class_1_E45C207B1AC948BE*>* _SwitchOpenAttachPlayerEff; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _ToFinishQuestIDs; // 0x60
		::RPG::Client::TwoKeyDictionary_3<::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType, ::System::String*>* _TimeRewindViewAttachMat; // 0x68
		::RPG::GameCore::ToastPile* InteractSwitcherWhenOpen; // 0x70
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreload*>* _TimeRewindEntityPreloadPool; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _PreloadEffInstCnt; // 0x80
		::Class_1_E05E7A6D9DE9138B* _GamePlayAssetLoader; // 0x88
		::Class_1_5863CECBF1A58D06* _TimeRewindLockTarget; // 0x90
		::RPG::GameCore::ToastPile* TimeRewindEntityStrikeToast; // 0x98
		::RPG::Client::UIController* _PerformancePageController; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TimelineItemSingleData*>* _TrackInfoDict; // 0xA8
		::RPG::Client::UIController* _RecreateWorldPageController; // 0xB0
		::Il2CppArray<::Class_1_E45C207B1AC948BE*>* _AttachPlayerEffs; // 0xB8
		::System::Collections::Generic::List_1<::Class_2_7441D3F0EDA3D41C*>* _TimeRewindControlSwitcherComponents; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_22DFC3839E157DF2*>* _TimeRewindAnimConfigs; // 0xC8
		::System::Collections::Generic::List_1<::Class_1_4057065B3D76240A*>* _MultiControllerRegisterInfos; // 0xD0
		::RPG::GameCore::EntityTimeRewindComponent* _PerformanceTargetTimeRewindComponent; // 0xD8
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LoopRewindSelectableTarget; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Material*>* _TimeRewindViewAttachMatAsset; // 0xE8
		::Class_3_07C3C4D2990C49EE* _OnHitPlayerSeq; // 0xF0
		::System::Collections::Generic::List_1<::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _ToAsyncLoadBackwardSoAssets; // 0xF8
		::RPG::GameCore::EntityTimeRewindComponent* _CurrentSelectTargetTimeRewindComponent; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreload*>* _TimeRewindEntityPreloads; // 0x108
		::RPG::GameCore::ToastPile* TimeRewindHitPlayerWhenRewindToast; // 0x110
		::RPG::GameCore::GameEntity* _CurrentSelectTarget; // 0x118
		::RPG::GameCore::ToastPile* TimeRewindFailToast; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _LoadBackwardSoAssets; // 0x128
		::System::Boolean _GlobalOverrideSpecialControlMode; // 0x130
		::System::Boolean _Inited; // 0x131
		::System::Boolean _PerformancePageEnter; // 0x132
		::System::Int32 _TimeRewindInControlCount; // 0x134
		::System::Single _TimeRewindCompletePerformTimer; // 0x138
		::System::Int32 _IgnoreHitPlayerCount; // 0x13C
		::System::Boolean _GamePlayBtnEnable; // 0x140
		::System::Boolean _IsCachedAssetAsyncLoading; // 0x141
		::System::UInt32 _TimeRewindOverTimeToastLastTime; // 0x144
		::System::Int32 _TimeRewindDisableSelectCount; // 0x148
		::System::Single _BtnCD; // 0x14C
		::System::Int32 _SpecialControlTypeBallEffControlParam; // 0x150
		::RPG::Client::TimeRewindControlManager_ExitControlModeStep _ExitControlModeStep; // 0x154
		::System::Int32 _SwitchAttachPlayerEffCount; // 0x158
		::UnityEngine::Vector3 _PlayerTurnToForward; // 0x15C
		::System::Int32 _ManagerDeactiveReason; // 0x168
		::System::Int32 _GlobalSelectableCount; // 0x16C
		::System::UInt32 _LastOvertimeRuntimeID; // 0x170
		::System::Int32 _ContinuousTimeout; // 0x174
		::System::Boolean _LockPerformanceTarget; // 0x178
		::System::Boolean _InControlMode; // 0x179
		::System::Boolean _HasLoopRewindUI; // 0x17A
		::System::Boolean _InPerformanceMode; // 0x17B

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean PreloadTimeRewindEntityEff(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_PRELOADTIMEREWINDENTITYEFF_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshPreloadEffCnt(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPRELOADEFFCNT_OFFSET))(this, a1, a2);
		}

		::System::Void _AddPreloadEffCnt(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ADDPRELOADEFFCNT_OFFSET))(this, a1);
		}

		::System::Void _RemovePreloadEffCnt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVEPRELOADEFFCNT_OFFSET))(this, a1);
		}

		::System::Void ReleaseTimeRewindEntityPreloadEff(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_RELEASETIMEREWINDENTITYPRELOADEFF_OFFSET))(this, a1);
		}

		::System::Void _CacheBackwardEffSoAssetAsync(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CACHEBACKWARDEFFSOASSETASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveCachedBackwardEffSo(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVECACHEDBACKWARDEFFSO_OFFSET))(this, a1, a2);
		}

		::System::Void FireBackwardEffAsync(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TriggerEffectParams* a2, ::Class_1_E45C207B1AC948BE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TriggerEffectParams*, ::Class_1_E45C207B1AC948BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_FIREBACKWARDEFFASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBackwardEffFinish(::RPG::GameCore::GameEntity* a1, ::Class_1_E45C207B1AC948BE* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_E45C207B1AC948BE*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETBACKWARDEFFFINISH_OFFSET))(this, a1, a2, a3);
		}

		::ParticleRecorder::BackwardParticlesInfoSO* TryGetBackwardParticlesInfoSO(::System::String* a1)
		{
			return ((::ParticleRecorder::BackwardParticlesInfoSO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYGETBACKWARDPARTICLESINFOSO_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* _TickCachedAsset()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKCACHEDASSET_OFFSET))(this);
		}

		::RPG::Client::EntityTimelineControlTrackInfo* GetEntityTimelineTrackInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::EntityTimelineControlTrackInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETENTITYTIMELINETRACKINFO_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationClip* LoadOverrideClipAsset(::System::String* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADOVERRIDECLIPASSET_OFFSET))(this, a1);
		}

		::RPG::Client::EntityTimelineControlNode* LoadSingleClipInfoAsset(::System::UInt32 a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::UInt32, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADSINGLECLIPINFOASSET_OFFSET))(this, a1, a2);
		}

		::Class_1_22DFC3839E157DF2* LoadTimeRewindEntityAnimEventConfigs(::System::String* a1)
		{
			return ((::Class_1_22DFC3839E157DF2*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADTIMEREWINDENTITYANIMEVENTCONFIGS_OFFSET))(this, a1);
		}

		::UnityEngine::Material* GetTimeRewindViewMat(::RPG::GameCore::TimeRewindView a1, ::RPG::GameCore::EraStateType a2)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETTIMEREWINDVIEWMAT_OFFSET))(this, a1, a2);
		}

		::System::Void _ReleaseAllAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__RELEASEALLASSETS_OFFSET))(this);
		}

		::System::Void TryControlTimeRewindEntityByTask(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYCONTROLTIMEREWINDENTITYBYTASK_OFFSET))(this, a1, a2);
		}

		::System::Void _InitExternalSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITEXTERNALSYSTEM_OFFSET))(this);
		}

		::System::Void _UnInitExternalSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__UNINITEXTERNALSYSTEM_OFFSET))(this);
		}

		::System::Void _OnQteCatchGhostStart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTSTART_OFFSET))(this, a1);
		}

		::System::Void _OnQteCatchGhostEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTEND_OFFSET))(this, a1);
		}

		::System::Void _OnShowFakeAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWFAKEAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnShowRealAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWREALAVATAR_OFFSET))(this, a1);
		}

		::System::Void _TickLoopRewindUIAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKLOOPREWINDUIAUDIO_OFFSET))(this);
		}

		::System::Void _OnOpenMobilePhone(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONOPENMOBILEPHONE_OFFSET))(this, a1);
		}

		::System::Void StartTimeRewindRecreateWorldPage(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDRECREATEWORLDPAGE_OFFSET))(this, a1);
		}

		::System::Void CloseTimeRewindRecreateWorldPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CLOSETIMEREWINDRECREATEWORLDPAGE_OFFSET))(this);
		}

		::System::Void StartTimeRewindPerformance(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDPERFORMANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartTimeRewindSnapPerformance(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::RPG::GameCore::OpenTimeRewindSnapPageParam* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::RPG::GameCore::OpenTimeRewindSnapPageParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDSNAPPERFORMANCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ExitTimeRewindPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITTIMEREWINDPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean _StartTimeRewindPerformance(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTTIMEREWINDPERFORMANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ShowPerformancePage(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWPERFORMANCEPAGE_OFFSET))(this, a1);
		}

		::System::Void _ShowSnapPerformancePage(::RPG::GameCore::EntityTimeRewindComponent* a1, ::RPG::GameCore::OpenTimeRewindSnapPageParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::RPG::GameCore::OpenTimeRewindSnapPageParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWSNAPPERFORMANCEPAGE_OFFSET))(this, a1, a2);
		}

		::System::Void _TickPerformanceControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPERFORMANCECONTROL_OFFSET))(this);
		}

		::System::Void _DisposeTimeRewindPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISPOSETIMEREWINDPERFORMANCE_OFFSET))(this);
		}

		::System::Void _OnTimeRewindPerformancePageEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDPERFORMANCEPAGEENTER_OFFSET))(this);
		}

		::System::Void _TimeRewindPerformanceBtnPressDown(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNPRESSDOWN_OFFSET))(this, a1);
		}

		::System::Void _TimeRewindPerformanceBtnRelease(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNRELEASE_OFFSET))(this, a1);
		}

		::System::Void _OnPerformanceRewindComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONPERFORMANCEREWINDCOMPLETE_OFFSET))(this);
		}

		::System::Void _OnTimelineEntityEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMELINEENTITYEVENT_OFFSET))(this, a1);
		}

		::System::Boolean get_LockPerformanceTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_LOCKPERFORMANCETARGET_OFFSET))(this);
		}

		::System::Boolean get_InPerformanceMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INPERFORMANCEMODE_OFFSET))(this);
		}

		::System::Void TryFinishQuest(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYFINISHQUEST_OFFSET))(this, a1);
		}

		::System::Void _InitQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITQUEST_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnGroupLoadEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONGROUPLOADEND_OFFSET))(this, a1);
		}

		::System::Void OnEnterTopOfPriority()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONENTERTOPOFPRIORITY_OFFSET))(this);
		}

		::System::Void OnLeaveTopOfPriority()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONLEAVETOPOFPRIORITY_OFFSET))(this);
		}

		::RPG::Client::CompetitiveGamePlaySystemPriority GetCompetitivePriority()
		{
			return ((::RPG::Client::CompetitiveGamePlaySystemPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETCOMPETITIVEPRIORITY_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void RegisterTimeRewindControlSwitcher(::Class_2_7441D3F0EDA3D41C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7441D3F0EDA3D41C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERTIMEREWINDCONTROLSWITCHER_OFFSET))(this, a1);
		}

		::System::Void UnRegisterTimeRewindControlSwitcher(::Class_2_7441D3F0EDA3D41C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7441D3F0EDA3D41C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_UNREGISTERTIMEREWINDCONTROLSWITCHER_OFFSET))(this, a1);
		}

		::System::Void TryUnselectCurrentTarget(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYUNSELECTCURRENTTARGET_OFFSET))(this, a1);
		}

		::System::Void DectiveTimeRewindManager(::System::Boolean a1, ::RPG::Client::TimeRewindControlManagerActiveReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::TimeRewindControlManagerActiveReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECTIVETIMEREWINDMANAGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsHitPlayerSeqExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ISHITPLAYERSEQEXECUTION_OFFSET))(this);
		}

		::System::Void TimeRewindEntityHitPlayerSeq(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYHITPLAYERSEQ_OFFSET))(this, a1);
		}

		::System::Void TimeRewindEntityOnHitPlayer(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYONHITPLAYER_OFFSET))(this, a1);
		}

		::System::Void RemoveTimelineObject(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REMOVETIMELINEOBJECT_OFFSET))(this, a1);
		}

		::System::Void AddTimelineObject(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDTIMELINEOBJECT_OFFSET))(this, a1);
		}

		::System::Void RegisterBindChildTimeRewindEntity(::RPG::GameCore::EntityTimeRewindComponent* a1, ::Il2CppArray<::System::UInt32>* a2, ::RPG::GameCore::BindTimeRewindMultiControlType a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::BindTimeRewindMultiControlType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERBINDCHILDTIMEREWINDENTITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _TryUnregisterBindChildTimeRewindEntity(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYUNREGISTERBINDCHILDTIMEREWINDENTITY_OFFSET))(this, a1);
		}

		::System::Void TryAttachSwitcherOpenEffOnPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYATTACHSWITCHEROPENEFFONPLAYER_OFFSET))(this);
		}

		::System::Void TryRemoveSwitcherOpenEffOnPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYREMOVESWITCHEROPENEFFONPLAYER_OFFSET))(this);
		}

		::System::Boolean CalcTimeRewindTargetSelectable(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CALCTIMEREWINDTARGETSELECTABLE_OFFSET))(this, a1);
		}

		::System::Void SetGlobalOverrideSpecialControlMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALOVERRIDESPECIALCONTROLMODE_OFFSET))(this, a1);
		}

		::System::Void _ExecuteHitPlayerSeq(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXECUTEHITPLAYERSEQ_OFFSET))(this, a1);
		}

		::System::Void _DoInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DOINIT_OFFSET))(this);
		}

		::System::Void _EnableSwitchCameraControlMode(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLESWITCHCAMERACONTROLMODE_OFFSET))(this, a1);
		}

		::System::Void _DisableControlLookAtMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISABLECONTROLLOOKATMODE_OFFSET))(this, a1);
		}

		::System::Void _EnableControlLookAtMode(::UnityEngine::Transform* a1, ::RPG::MVector3 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::MVector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLECONTROLLOOKATMODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _StartControlTimelineEntity(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTCONTROLTIMELINEENTITY_OFFSET))(this, a1);
		}

		::System::Void _FireStartControlModeEff(::RPG::GameCore::TimeRewindEntityControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindEntityControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__FIRESTARTCONTROLMODEEFF_OFFSET))(this, a1);
		}

		::System::Void _TickPlayerSteer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPLAYERSTEER_OFFSET))(this);
		}

		::System::Void ExitControlMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITCONTROLMODE_OFFSET))(this, a1);
		}

		::System::Void _TickExitControl(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKEXITCONTROL_OFFSET))(this, a1);
		}

		::System::Void _ExitControlModeStep1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP1_OFFSET))(this);
		}

		::System::Void _ExitControlModeStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP2_OFFSET))(this);
		}

		::System::Void IncreaseInControlCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_INCREASEINCONTROLCOUNT_OFFSET))(this);
		}

		::System::Void DecreaseInControlCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECREASEINCONTROLCOUNT_OFFSET))(this);
		}

		::System::Void AddRewindBtnCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDREWINDBTNCD_OFFSET))(this, a1);
		}

		::System::Void _TickBtnCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKBTNCD_OFFSET))(this, a1);
		}

		::System::Boolean _BtnInCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__BTNINCD_OFFSET))(this);
		}

		::System::Void _RefreshSpecialControlModeBallEffState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHSPECIALCONTROLMODEBALLEFFSTATE_OFFSET))(this, a1);
		}

		::System::Void _RefreshPlayerLockTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPLAYERLOCKTARGET_OFFSET))(this, a1);
		}

		::System::Void SetEnableTimeRewindSelect(::System::Boolean a1, ::RPG::GameCore::ForbidSelectTimeRewindReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::ForbidSelectTimeRewindReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETENABLETIMEREWINDSELECT_OFFSET))(this, a1, a2);
		}

		::System::Void SetPlayerIgnoreTimeRewindHit(::System::Boolean a1, ::RPG::Client::PlayerIgnoreTimeRewindHitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::PlayerIgnoreTimeRewindHitReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETPLAYERIGNORETIMEREWINDHIT_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalUnselectable(::System::Boolean a1, ::RPG::Client::TimeRewindGlobalUnselectableReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::TimeRewindGlobalUnselectableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALUNSELECTABLE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTimeRewindEntityControlOverTime(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONTIMEREWINDENTITYCONTROLOVERTIME_OFFSET))(this, a1);
		}

		::System::Boolean _CheckCanClickRewindButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKCANCLICKREWINDBUTTON_OFFSET))(this);
		}

		::System::Void _OnTimeRewindUIButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Boolean _CheckSpecialControlTypeCanControl(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKSPECIALCONTROLTYPECANCONTROL_OFFSET))(this, a1);
		}

		::System::Void _OnTimeRewindUIButtonPress(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnTimeRewindUIButtonRelease(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONRELEASE_OFFSET))(this, a1);
		}

		::System::Void _TryExitControlMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYEXITCONTROLMODE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EntityTimeRewindComponent*>* get_TimeRewindComponents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EntityTimeRewindComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_TIMEREWINDCOMPONENTS_OFFSET))(this);
		}

		::RPG::GameCore::EntityTimeRewindComponent* get_CurrentSelectTargetTimeRewindComponent()
		{
			return ((::RPG::GameCore::EntityTimeRewindComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_CURRENTSELECTTARGETTIMEREWINDCOMPONENT_OFFSET))(this);
		}

		::System::Boolean get_InControlMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INCONTROLMODE_OFFSET))(this);
		}

		::System::Boolean get_ManagerActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_MANAGERACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IgnoreHitPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_IGNOREHITPLAYER_OFFSET))(this);
		}
	};
}
