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

class Class_0_16E4307DCC419505_382;
class Class_1_22DFC3839E157DF2;
class Class_1_5863CECBF1A58D06;
class Class_1_89CF3D7005785E86;
class Class_1_DD81253E160EB8B2;
class Class_1_E05E7A6D9DE9138B;
class Class_2_7E6F98A8FA0DAC16;
class Class_3_E21F6DE9B7FA4D05;
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

#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDREWINDBTNCD_OFFSET UNITYSDK_OFFSET(0xB2EBAC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDTIMELINEOBJECT_OFFSET UNITYSDK_OFFSET(0xB2E9D80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CALCTIMEREWINDTARGETSELECTABLE_OFFSET UNITYSDK_OFFSET(0xB2EA740)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CLOSETIMEREWINDRECREATEWORLDPAGE_OFFSET UNITYSDK_OFFSET(0xB2E6B10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECREASEINCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0xB2EBA20)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECTIVETIMEREWINDMANAGER_OFFSET UNITYSDK_OFFSET(0xB2E64F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2E8380)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xB2E95A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB2E7310)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_FIREBACKWARDEFFASYNC_OFFSET UNITYSDK_OFFSET(0xB2E2590)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETCOMPETITIVEPRIORITY_OFFSET UNITYSDK_OFFSET(0xB2E8B10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETENTITYTIMELINETRACKINFO_OFFSET UNITYSDK_OFFSET(0xB2E2EA0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETTIMEREWINDVIEWMAT_OFFSET UNITYSDK_OFFSET(0xB2E3D80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_CURRENTSELECTTARGETTIMEREWINDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB2EC370)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_IGNOREHITPLAYER_OFFSET UNITYSDK_OFFSET(0xB2EC390)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xB2EC380)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INPERFORMANCEMODE_OFFSET UNITYSDK_OFFSET(0xB2E7BE0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_LOCKPERFORMANCETARGET_OFFSET UNITYSDK_OFFSET(0xB2E7BD0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_MANAGERACTIVE_OFFSET UNITYSDK_OFFSET(0xB2E9680)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_TIMEREWINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xB2EC360)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_INCREASEINCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0xB2EB980)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ISHITPLAYERSEQEXECUTION_OFFSET UNITYSDK_OFFSET(0xB2E9690)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADOVERRIDECLIPASSET_OFFSET UNITYSDK_OFFSET(0xB2E31C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADSINGLECLIPINFOASSET_OFFSET UNITYSDK_OFFSET(0xB2E3390)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADTIMEREWINDENTITYANIMEVENTCONFIGS_OFFSET UNITYSDK_OFFSET(0xB2E3610)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONENTERTOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xB2E8A70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONLEAVETOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xB2E8AC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONTIMEREWINDENTITYCONTROLOVERTIME_OFFSET UNITYSDK_OFFSET(0xB2EBC70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_PRELOADTIMEREWINDENTITYEFF_OFFSET UNITYSDK_OFFSET(0xB2E1040)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERBINDCHILDTIMEREWINDENTITY_OFFSET UNITYSDK_OFFSET(0xB2EA340)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERTIMEREWINDCONTROLSWITCHER_OFFSET UNITYSDK_OFFSET(0xB2E9360)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_RELEASETIMEREWINDENTITYPRELOADEFF_OFFSET UNITYSDK_OFFSET(0xB2E1CF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REMOVETIMELINEOBJECT_OFFSET UNITYSDK_OFFSET(0xB2E9AC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETBACKWARDEFFFINISH_OFFSET UNITYSDK_OFFSET(0xB2E28E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETENABLETIMEREWINDSELECT_OFFSET UNITYSDK_OFFSET(0xB2EBB70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALOVERRIDESPECIALCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xB2EA7B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALUNSELECTABLE_OFFSET UNITYSDK_OFFSET(0xB2E62E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETPLAYERIGNORETIMEREWINDHIT_OFFSET UNITYSDK_OFFSET(0xB2EBC00)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB2E6B70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDRECREATEWORLDPAGE_OFFSET UNITYSDK_OFFSET(0xB2E6A20)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDSNAPPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB2E7040)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xB2E8B60)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYHITPLAYERSEQ_OFFSET UNITYSDK_OFFSET(0xB2E9720)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYONHITPLAYER_OFFSET UNITYSDK_OFFSET(0xB2E9A20)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYATTACHSWITCHEROPENEFFONPLAYER_OFFSET UNITYSDK_OFFSET(0xB2EA4B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYCONTROLTIMEREWINDENTITYBYTASK_OFFSET UNITYSDK_OFFSET(0xB2E5770)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYFINISHQUEST_OFFSET UNITYSDK_OFFSET(0xB2E7BF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYGETBACKWARDPARTICLESINFOSO_OFFSET UNITYSDK_OFFSET(0xB2E2BF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYREMOVESWITCHEROPENEFFONPLAYER_OFFSET UNITYSDK_OFFSET(0xB2EA680)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYUNSELECTCURRENTTARGET_OFFSET UNITYSDK_OFFSET(0xB2E94B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_UNREGISTERTIMEREWINDCONTROLSWITCHER_OFFSET UNITYSDK_OFFSET(0xB2E9420)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ADDPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xB2E1820)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__BTNINCD_OFFSET UNITYSDK_OFFSET(0xB2EBB20)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CACHEBACKWARDEFFSOASSETASYNC_OFFSET UNITYSDK_OFFSET(0xB2E1E60)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKCANCLICKREWINDBUTTON_OFFSET UNITYSDK_OFFSET(0xB2EBD50)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKSPECIALCONTROLTYPECANCONTROL_OFFSET UNITYSDK_OFFSET(0xB2EBF70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2E7F40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISABLECONTROLLOOKATMODE_OFFSET UNITYSDK_OFFSET(0xB2EAEF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISPOSETIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB2E75F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DOINIT_OFFSET UNITYSDK_OFFSET(0xB2E9FE0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLECONTROLLOOKATMODE_OFFSET UNITYSDK_OFFSET(0xB2EA960)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLESWITCHCAMERACONTROLMODE_OFFSET UNITYSDK_OFFSET(0xB2EA8A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXECUTEHITPLAYERSEQ_OFFSET UNITYSDK_OFFSET(0xB2E9790)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP1_OFFSET UNITYSDK_OFFSET(0xB2EB900)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP2_OFFSET UNITYSDK_OFFSET(0xB2EB380)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__FIRESTARTCONTROLMODEEFF_OFFSET UNITYSDK_OFFSET(0xB2EB140)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITEXTERNALSYSTEM_OFFSET UNITYSDK_OFFSET(0xB2E5F50)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITQUEST_OFFSET UNITYSDK_OFFSET(0xB2E7D80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONGROUPLOADEND_OFFSET UNITYSDK_OFFSET(0xB2E8930)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONOPENMOBILEPHONE_OFFSET UNITYSDK_OFFSET(0xB2E68D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONPERFORMANCEREWINDCOMPLETE_OFFSET UNITYSDK_OFFSET(0xB2E7A80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTEND_OFFSET UNITYSDK_OFFSET(0xB2E6430)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTSTART_OFFSET UNITYSDK_OFFSET(0xB2E6280)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xB2E6490)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWREALAVATAR_OFFSET UNITYSDK_OFFSET(0xB2E6610)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMELINEENTITYEVENT_OFFSET UNITYSDK_OFFSET(0xB2E7AD0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDPERFORMANCEPAGEENTER_OFFSET UNITYSDK_OFFSET(0xB2E78D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xB2EBDB0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONPRESS_OFFSET UNITYSDK_OFFSET(0xB2EC000)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONRELEASE_OFFSET UNITYSDK_OFFSET(0xB2EC310)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPLAYERLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xB2E7390)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xB2E1320)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHSPECIALCONTROLMODEBALLEFFSTATE_OFFSET UNITYSDK_OFFSET(0xB2EA610)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__RELEASEALLASSETS_OFFSET UNITYSDK_OFFSET(0xB2E4920)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVECACHEDBACKWARDEFFSO_OFFSET UNITYSDK_OFFSET(0xB2E2330)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVEPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xB2E1A60)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWPERFORMANCEPAGE_OFFSET UNITYSDK_OFFSET(0xB2E6E40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWSNAPPERFORMANCEPAGE_OFFSET UNITYSDK_OFFSET(0xB2E70F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTCONTROLTIMELINEENTITY_OFFSET UNITYSDK_OFFSET(0xB2E5860)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB2E6C10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKBTNCD_OFFSET UNITYSDK_OFFSET(0xB2E8EC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKCACHEDASSET_OFFSET UNITYSDK_OFFSET(0xB2E22B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKEXITCONTROL_OFFSET UNITYSDK_OFFSET(0xB2E92D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKLOOPREWINDUIAUDIO_OFFSET UNITYSDK_OFFSET(0xB2E6670)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPERFORMANCECONTROL_OFFSET UNITYSDK_OFFSET(0xB2E77E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPLAYERSTEER_OFFSET UNITYSDK_OFFSET(0xB2E8F30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNPRESSDOWN_OFFSET UNITYSDK_OFFSET(0xB2E7920)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNRELEASE_OFFSET UNITYSDK_OFFSET(0xB2E79D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYEXITCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xB2E6970)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYUNREGISTERBINDCHILDTIMEREWINDENTITY_OFFSET UNITYSDK_OFFSET(0xB2E9C00)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__UNINITEXTERNALSYSTEM_OFFSET UNITYSDK_OFFSET(0xB2E60C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager_TypeDefinitionIndex = 56083;

	class TimeRewindControlManager : public ::System::Object
	{
	public:
		// static const ::System::String* StopLoopRewindAudio; // 0x0
		// static const ::System::String* RestartLoopRewindAudio; // 0x0
		// static const ::System::String* TimeRewindControlSwitcherTag; // 0x0
		// static const ::System::String* TimeRewindEntityTag; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TimelineItemSingleData*>* _TrackInfoDict; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::EntityTimeRewindComponent*>* _AllTimeRewindComponents; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_22DFC3839E157DF2*>* _TimeRewindAnimConfigs; // 0x20
		::RPG::GameCore::GameEntity* _CurrentSelectTarget; // 0x28
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreload*>* _TimeRewindEntityPreloadPool; // 0x30
		::Class_3_E21F6DE9B7FA4D05* _OnHitPlayerSeq; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Material*>* _TimeRewindViewAttachMatAsset; // 0x40
		::System::Action* _PerformanceFinishCallback; // 0x48
		::Il2CppArray<::Class_1_DD81253E160EB8B2*>* _SwitchOpenAttachPlayerEff; // 0x50
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LoopRewindSelectableTarget; // 0x58
		::RPG::GameCore::ToastPile* TimeRewindEntityStrikeToast; // 0x60
		::Class_1_E05E7A6D9DE9138B* _GamePlayAssetLoader; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindItemSingleClipData*>* _RewindEntityClipInfos; // 0x70
		::Class_1_DD81253E160EB8B2* _SwitchOpenAttachPlayerBallEff; // 0x78
		::System::Collections::Generic::List_1<::Class_1_89CF3D7005785E86*>* _MultiControllerRegisterInfos; // 0x80
		::RPG::Client::TwoKeyDictionary_3<::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType, ::System::String*>* _TimeRewindViewAttachMat; // 0x88
		::UnityEngine::Coroutine* _FrameAssetAsyncLoadCoroutine; // 0x90
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _TimeRewindEffBackwardSOAssetInfoPool; // 0x98
		::RPG::GameCore::EntityTimeRewindComponent* _CurrentSelectTargetTimeRewindComponent; // 0xA0
		::RPG::Client::UIController* _RecreateWorldPageController; // 0xA8
		::RPG::GameCore::EntityTimeRewindComponent* _PerformanceTargetTimeRewindComponent; // 0xB0
		::RPG::GameCore::ToastPile* TimeRewindFailToast; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _PreloadEffInstCnt; // 0xC0
		::System::Collections::Generic::List_1<::System::UInt32>* _ToFinishQuestIDs; // 0xC8
		::RPG::Client::AdventurePhase* _Phase; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _LoadBackwardSoAssets; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* _RewindEntityClips; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreload*>* _TimeRewindEntityPreloads; // 0xE8
		::System::Collections::Generic::List_1<::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _ToAsyncLoadBackwardSoAssets; // 0xF0
		::RPG::GameCore::ToastPile* InteractSwitcherWhenOpen; // 0xF8
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadEffItem*>* _TimeRewindEntityPreloadEffItemPool; // 0x100
		::Il2CppArray<::Class_1_DD81253E160EB8B2*>* _AttachPlayerEffs; // 0x108
		::Class_1_5863CECBF1A58D06* _TimeRewindLockTarget; // 0x110
		::RPG::GameCore::ToastPile* TimeRewindHitPlayerWhenRewindToast; // 0x118
		::System::Collections::Generic::List_1<::Class_2_7E6F98A8FA0DAC16*>* _TimeRewindControlSwitcherComponents; // 0x120
		::RPG::Client::UIController* _PerformancePageController; // 0x128
		::System::Boolean _HasLoopRewindUI; // 0x130
		::System::Boolean _GlobalOverrideSpecialControlMode; // 0x131
		::System::Boolean _PerformancePageEnter; // 0x132
		::System::Boolean _Inited; // 0x133
		::System::Int32 _TimeRewindDisableSelectCount; // 0x134
		::System::Int32 _IgnoreHitPlayerCount; // 0x138
		::System::Boolean _InControlMode; // 0x13C
		::System::Boolean _GamePlayBtnEnable; // 0x13D
		::UnityEngine::Vector3 _PlayerTurnToForward; // 0x140
		::System::UInt32 _TimeRewindOverTimeToastLastTime; // 0x14C
		::System::Int32 _SpecialControlTypeBallEffControlParam; // 0x150
		::System::UInt32 _LastOvertimeRuntimeID; // 0x154
		::System::Single _TimeRewindCompletePerformTimer; // 0x158
		::System::Boolean _InPerformanceMode; // 0x15C
		::System::Boolean _IsCachedAssetAsyncLoading; // 0x15D
		::System::Boolean _LockPerformanceTarget; // 0x15E
		::System::Int32 _TimeRewindInControlCount; // 0x160
		::System::Int32 _SwitchAttachPlayerEffCount; // 0x164
		::System::Int32 _ContinuousTimeout; // 0x168
		::RPG::Client::TimeRewindControlManager_ExitControlModeStep _ExitControlModeStep; // 0x16C
		::System::Int32 _ManagerDeactiveReason; // 0x170
		::System::Single _BtnCD; // 0x174
		::System::Int32 _GlobalSelectableCount; // 0x178

		::System::Void _ctor(::RPG::Client::AdventurePhase* phase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CTOR_OFFSET))(this, phase);
		}

		::System::Boolean PreloadTimeRewindEntityEff(::RPG::GameCore::GameEntity* entity, ::System::Collections::Generic::List_1<::System::String*>* effPaths)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_PRELOADTIMEREWINDENTITYEFF_OFFSET))(this, entity, effPaths);
		}

		::System::Void _RefreshPreloadEffCnt(::RPG::GameCore::GameEntity* entity, ::System::Collections::Generic::List_1<::System::String*>* effPaths)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPRELOADEFFCNT_OFFSET))(this, entity, effPaths);
		}

		::System::Void _AddPreloadEffCnt(::System::Collections::Generic::List_1<::System::String*>* effPaths)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ADDPRELOADEFFCNT_OFFSET))(this, effPaths);
		}

		::System::Void _RemovePreloadEffCnt(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVEPRELOADEFFCNT_OFFSET))(this, entity);
		}

		::System::Void ReleaseTimeRewindEntityPreloadEff(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_RELEASETIMEREWINDENTITYPRELOADEFF_OFFSET))(this, entity);
		}

		::System::Void _CacheBackwardEffSoAssetAsync(::System::String* assetPath, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CACHEBACKWARDEFFSOASSETASYNC_OFFSET))(this, assetPath, callback);
		}

		::System::Void _RemoveCachedBackwardEffSo(::System::String* assetPath, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVECACHEDBACKWARDEFFSO_OFFSET))(this, assetPath, callback);
		}

		::System::Void FireBackwardEffAsync(::RPG::GameCore::GameEntity* entity, ::RPG::Client::TriggerEffectParams* triggerEffectParams, ::Class_1_DD81253E160EB8B2* handler)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TriggerEffectParams*, ::Class_1_DD81253E160EB8B2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_FIREBACKWARDEFFASYNC_OFFSET))(this, entity, triggerEffectParams, handler);
		}

		::System::Void SetBackwardEffFinish(::RPG::GameCore::GameEntity* entity, ::Class_1_DD81253E160EB8B2* handler, ::System::Boolean needFadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_DD81253E160EB8B2*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETBACKWARDEFFFINISH_OFFSET))(this, entity, handler, needFadeOut);
		}

		::ParticleRecorder::BackwardParticlesInfoSO* TryGetBackwardParticlesInfoSO(::System::String* soPath)
		{
			return ((::ParticleRecorder::BackwardParticlesInfoSO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYGETBACKWARDPARTICLESINFOSO_OFFSET))(this, soPath);
		}

		::System::Collections::IEnumerator* _TickCachedAsset()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKCACHEDASSET_OFFSET))(this);
		}

		::RPG::Client::EntityTimelineControlTrackInfo* GetEntityTimelineTrackInfo(::System::UInt32 propID)
		{
			return ((::RPG::Client::EntityTimelineControlTrackInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETENTITYTIMELINETRACKINFO_OFFSET))(this, propID);
		}

		::UnityEngine::AnimationClip* LoadOverrideClipAsset(::System::String* clipPath)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADOVERRIDECLIPASSET_OFFSET))(this, clipPath);
		}

		::RPG::Client::EntityTimelineControlNode* LoadSingleClipInfoAsset(::System::UInt32 propID, ::UnityEngine::AnimationClip* clip)
		{
			return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::UInt32, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADSINGLECLIPINFOASSET_OFFSET))(this, propID, clip);
		}

		::Class_1_22DFC3839E157DF2* LoadTimeRewindEntityAnimEventConfigs(::System::String* path)
		{
			return ((::Class_1_22DFC3839E157DF2*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADTIMEREWINDENTITYANIMEVENTCONFIGS_OFFSET))(this, path);
		}

		::UnityEngine::Material* GetTimeRewindViewMat(::RPG::GameCore::TimeRewindView view, ::RPG::GameCore::EraStateType eraStateType)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETTIMEREWINDVIEWMAT_OFFSET))(this, view, eraStateType);
		}

		::System::Void _ReleaseAllAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__RELEASEALLASSETS_OFFSET))(this);
		}

		::System::Void TryControlTimeRewindEntityByTask(::System::Boolean control, ::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYCONTROLTIMEREWINDENTITYBYTASK_OFFSET))(this, control, entity);
		}

		::System::Void _InitExternalSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITEXTERNALSYSTEM_OFFSET))(this);
		}

		::System::Void _UnInitExternalSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__UNINITEXTERNALSYSTEM_OFFSET))(this);
		}

		::System::Void _OnQteCatchGhostStart(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTSTART_OFFSET))(this, arg);
		}

		::System::Void _OnQteCatchGhostEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTEND_OFFSET))(this, arg);
		}

		::System::Void _OnShowFakeAvatar(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWFAKEAVATAR_OFFSET))(this, arg);
		}

		::System::Void _OnShowRealAvatar(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWREALAVATAR_OFFSET))(this, arg);
		}

		::System::Void _TickLoopRewindUIAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKLOOPREWINDUIAUDIO_OFFSET))(this);
		}

		::System::Void _OnOpenMobilePhone(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONOPENMOBILEPHONE_OFFSET))(this, arg);
		}

		::System::Void StartTimeRewindRecreateWorldPage(::System::Action* exitCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDRECREATEWORLDPAGE_OFFSET))(this, exitCallback);
		}

		::System::Void CloseTimeRewindRecreateWorldPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CLOSETIMEREWINDRECREATEWORLDPAGE_OFFSET))(this);
		}

		::System::Void StartTimeRewindPerformance(::RPG::GameCore::GameEntity* rewindTarget, ::System::Action* rewindSuccessCallback, ::System::Boolean inverseUIProgress)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDPERFORMANCE_OFFSET))(this, rewindTarget, rewindSuccessCallback, inverseUIProgress);
		}

		::System::Void StartTimeRewindSnapPerformance(::RPG::GameCore::GameEntity* rewindTarget, ::System::Action* rewindSuccessCallback, ::RPG::GameCore::OpenTimeRewindSnapPageParam* param, ::System::Boolean inverseUIProgress)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::RPG::GameCore::OpenTimeRewindSnapPageParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDSNAPPERFORMANCE_OFFSET))(this, rewindTarget, rewindSuccessCallback, param, inverseUIProgress);
		}

		::System::Void ExitTimeRewindPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITTIMEREWINDPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean _StartTimeRewindPerformance(::RPG::GameCore::GameEntity* rewindTarget, ::System::Action* rewindSuccessCallback, ::System::Boolean inverseUIProgress)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTTIMEREWINDPERFORMANCE_OFFSET))(this, rewindTarget, rewindSuccessCallback, inverseUIProgress);
		}

		::System::Void _ShowPerformancePage(::RPG::GameCore::EntityTimeRewindComponent* timeRewindComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWPERFORMANCEPAGE_OFFSET))(this, timeRewindComponent);
		}

		::System::Void _ShowSnapPerformancePage(::RPG::GameCore::EntityTimeRewindComponent* timeRewindComponent, ::RPG::GameCore::OpenTimeRewindSnapPageParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::RPG::GameCore::OpenTimeRewindSnapPageParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWSNAPPERFORMANCEPAGE_OFFSET))(this, timeRewindComponent, param);
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

		::System::Void _TimeRewindPerformanceBtnPressDown(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNPRESSDOWN_OFFSET))(this, obj);
		}

		::System::Void _TimeRewindPerformanceBtnRelease(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNRELEASE_OFFSET))(this, obj);
		}

		::System::Void _OnPerformanceRewindComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONPERFORMANCEREWINDCOMPLETE_OFFSET))(this);
		}

		::System::Void _OnTimelineEntityEvent(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMELINEENTITYEVENT_OFFSET))(this, evt);
		}

		::System::Boolean get_LockPerformanceTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_LOCKPERFORMANCETARGET_OFFSET))(this);
		}

		::System::Boolean get_InPerformanceMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INPERFORMANCEMODE_OFFSET))(this);
		}

		::System::Void TryFinishQuest(::RPG::GameCore::GameEntity* timeRewindEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYFINISHQUEST_OFFSET))(this, timeRewindEntity);
		}

		::System::Void _InitQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITQUEST_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnGroupLoadEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONGROUPLOADEND_OFFSET))(this, arg);
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

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void RegisterTimeRewindControlSwitcher(::Class_2_7E6F98A8FA0DAC16* timeRewindControlSwitcherComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7E6F98A8FA0DAC16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERTIMEREWINDCONTROLSWITCHER_OFFSET))(this, timeRewindControlSwitcherComponent);
		}

		::System::Void UnRegisterTimeRewindControlSwitcher(::Class_2_7E6F98A8FA0DAC16* timeRewindControlSwitcherComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7E6F98A8FA0DAC16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_UNREGISTERTIMEREWINDCONTROLSWITCHER_OFFSET))(this, timeRewindControlSwitcherComponent);
		}

		::System::Void TryUnselectCurrentTarget(::RPG::GameCore::EntityTimeRewindComponent* timeRewindComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYUNSELECTCURRENTTARGET_OFFSET))(this, timeRewindComponent);
		}

		::System::Void DectiveTimeRewindManager(::System::Boolean deActive, ::RPG::Client::TimeRewindControlManagerActiveReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::TimeRewindControlManagerActiveReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECTIVETIMEREWINDMANAGER_OFFSET))(this, deActive, reason);
		}

		::System::Boolean IsHitPlayerSeqExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ISHITPLAYERSEQEXECUTION_OFFSET))(this);
		}

		::System::Void TimeRewindEntityHitPlayerSeq(::RPG::GameCore::GameEntity* hitSourceEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYHITPLAYERSEQ_OFFSET))(this, hitSourceEntity);
		}

		::System::Void TimeRewindEntityOnHitPlayer(::RPG::GameCore::GameEntity* hitSourceEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYONHITPLAYER_OFFSET))(this, hitSourceEntity);
		}

		::System::Void RemoveTimelineObject(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REMOVETIMELINEOBJECT_OFFSET))(this, entity);
		}

		::System::Void AddTimelineObject(::RPG::GameCore::EntityTimeRewindComponent* timeRewindComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDTIMELINEOBJECT_OFFSET))(this, timeRewindComponent);
		}

		::System::Void RegisterBindChildTimeRewindEntity(::RPG::GameCore::EntityTimeRewindComponent* parentObject, ::Il2CppArray<::System::UInt32>* childInstanceID, ::RPG::GameCore::BindTimeRewindMultiControlType controllerType, ::System::Object* bindParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::BindTimeRewindMultiControlType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERBINDCHILDTIMEREWINDENTITY_OFFSET))(this, parentObject, childInstanceID, controllerType, bindParam);
		}

		::System::Void _TryUnregisterBindChildTimeRewindEntity(::RPG::GameCore::EntityTimeRewindComponent* parentObject)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYUNREGISTERBINDCHILDTIMEREWINDENTITY_OFFSET))(this, parentObject);
		}

		::System::Void TryAttachSwitcherOpenEffOnPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYATTACHSWITCHEROPENEFFONPLAYER_OFFSET))(this);
		}

		::System::Void TryRemoveSwitcherOpenEffOnPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYREMOVESWITCHEROPENEFFONPLAYER_OFFSET))(this);
		}

		::System::Boolean CalcTimeRewindTargetSelectable(::RPG::GameCore::EntityTimeRewindComponent* timeRewindComponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CALCTIMEREWINDTARGETSELECTABLE_OFFSET))(this, timeRewindComponent);
		}

		::System::Void SetGlobalOverrideSpecialControlMode(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALOVERRIDESPECIALCONTROLMODE_OFFSET))(this, enable);
		}

		::System::Void _ExecuteHitPlayerSeq(::RPG::GameCore::GameEntity* hitEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXECUTEHITPLAYERSEQ_OFFSET))(this, hitEntity);
		}

		::System::Void _DoInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DOINIT_OFFSET))(this);
		}

		::System::Void _EnableSwitchCameraControlMode(::RPG::GameCore::GameEntity* controlEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLESWITCHCAMERACONTROLMODE_OFFSET))(this, controlEntity);
		}

		::System::Void _DisableControlLookAtMode(::System::Boolean needResetAxis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISABLECONTROLLOOKATMODE_OFFSET))(this, needResetAxis);
		}

		::System::Void _EnableControlLookAtMode(::UnityEngine::Transform* lookTransform, ::RPG::MVector3 lookAtOffsetOverride, ::System::Boolean disableDamp, ::System::Boolean optimizeCameraLookAt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::MVector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLECONTROLLOOKATMODE_OFFSET))(this, lookTransform, lookAtOffsetOverride, disableDamp, optimizeCameraLookAt);
		}

		::System::Void _StartControlTimelineEntity(::RPG::GameCore::EntityTimeRewindComponent* timeRewindComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTCONTROLTIMELINEENTITY_OFFSET))(this, timeRewindComponent);
		}

		::System::Void _FireStartControlModeEff(::RPG::GameCore::TimeRewindEntityControlType controlType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindEntityControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__FIRESTARTCONTROLMODEEFF_OFFSET))(this, controlType);
		}

		::System::Void _TickPlayerSteer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPLAYERSTEER_OFFSET))(this);
		}

		::System::Void ExitControlMode(::System::Boolean finishImmediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITCONTROLMODE_OFFSET))(this, finishImmediately);
		}

		::System::Void _TickExitControl(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKEXITCONTROL_OFFSET))(this, deltaTime);
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

		::System::Void AddRewindBtnCD(::System::Single coolTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDREWINDBTNCD_OFFSET))(this, coolTime);
		}

		::System::Void _TickBtnCD(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKBTNCD_OFFSET))(this, deltaTime);
		}

		::System::Boolean _BtnInCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__BTNINCD_OFFSET))(this);
		}

		::System::Void _RefreshSpecialControlModeBallEffState(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHSPECIALCONTROLMODEBALLEFFSTATE_OFFSET))(this, state);
		}

		::System::Void _RefreshPlayerLockTarget(::RPG::GameCore::GameEntity* newTarget)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPLAYERLOCKTARGET_OFFSET))(this, newTarget);
		}

		::System::Void SetEnableTimeRewindSelect(::System::Boolean enable, ::RPG::GameCore::ForbidSelectTimeRewindReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::ForbidSelectTimeRewindReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETENABLETIMEREWINDSELECT_OFFSET))(this, enable, reason);
		}

		::System::Void SetPlayerIgnoreTimeRewindHit(::System::Boolean ignore, ::RPG::Client::PlayerIgnoreTimeRewindHitReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::PlayerIgnoreTimeRewindHitReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETPLAYERIGNORETIMEREWINDHIT_OFFSET))(this, ignore, reason);
		}

		::System::Void SetGlobalUnselectable(::System::Boolean unselectable, ::RPG::Client::TimeRewindGlobalUnselectableReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::TimeRewindGlobalUnselectableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALUNSELECTABLE_OFFSET))(this, unselectable, reason);
		}

		::System::Void OnTimeRewindEntityControlOverTime(::RPG::GameCore::EntityTimeRewindComponent* target)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONTIMEREWINDENTITYCONTROLOVERTIME_OFFSET))(this, target);
		}

		::System::Boolean _CheckCanClickRewindButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKCANCLICKREWINDBUTTON_OFFSET))(this);
		}

		::System::Void _OnTimeRewindUIButtonClick(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONCLICK_OFFSET))(this, arg);
		}

		::System::Boolean _CheckSpecialControlTypeCanControl(::RPG::GameCore::EntityTimeRewindComponent* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKSPECIALCONTROLTYPECANCONTROL_OFFSET))(this, target);
		}

		::System::Void _OnTimeRewindUIButtonPress(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONPRESS_OFFSET))(this, arg);
		}

		::System::Void _OnTimeRewindUIButtonRelease(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONRELEASE_OFFSET))(this, arg);
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
