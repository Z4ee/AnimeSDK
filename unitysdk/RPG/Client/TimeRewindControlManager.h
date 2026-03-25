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

class Class_0_16E4307DCC419505_375;
class Class_1_22DFC3839E157DF2;
class Class_1_5863CECBF1A58D06;
class Class_1_89CF3D7005785E86;
class Class_1_DD81253E160EB8B2;
class Class_1_E05E7A6D9DE9138B;
class Class_2_7E6F98A8FA0DAC16;
class Class_3_5775A4FEC79026BC;
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

#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDREWINDBTNCD_OFFSET UNITYSDK_OFFSET(0xA5ACC00)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDTIMELINEOBJECT_OFFSET UNITYSDK_OFFSET(0xA5AAFE0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CALCTIMEREWINDTARGETSELECTABLE_OFFSET UNITYSDK_OFFSET(0xA5AB930)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CLOSETIMEREWINDRECREATEWORLDPAGE_OFFSET UNITYSDK_OFFSET(0xA5A7DF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECREASEINCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0xA5ACB50)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECTIVETIMEREWINDMANAGER_OFFSET UNITYSDK_OFFSET(0xA5A7820)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5A9620)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xA5AA840)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA5A85D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_FIREBACKWARDEFFASYNC_OFFSET UNITYSDK_OFFSET(0xA5A3920)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETCOMPETITIVEPRIORITY_OFFSET UNITYSDK_OFFSET(0xA5A9DB0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETENTITYTIMELINETRACKINFO_OFFSET UNITYSDK_OFFSET(0xA5A4230)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETTIMEREWINDVIEWMAT_OFFSET UNITYSDK_OFFSET(0xA5A50F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_CURRENTSELECTTARGETTIMEREWINDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA5AD4B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_IGNOREHITPLAYER_OFFSET UNITYSDK_OFFSET(0xA5AD4D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xA5AD4C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INPERFORMANCEMODE_OFFSET UNITYSDK_OFFSET(0xA5A8E80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_LOCKPERFORMANCETARGET_OFFSET UNITYSDK_OFFSET(0xA5A8E70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_MANAGERACTIVE_OFFSET UNITYSDK_OFFSET(0xA5AA920)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_TIMEREWINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xA5AD4A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_INCREASEINCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0xA5ACAB0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ISHITPLAYERSEQEXECUTION_OFFSET UNITYSDK_OFFSET(0xA5AA930)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADOVERRIDECLIPASSET_OFFSET UNITYSDK_OFFSET(0xA5A4530)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADSINGLECLIPINFOASSET_OFFSET UNITYSDK_OFFSET(0xA5A46F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADTIMEREWINDENTITYANIMEVENTCONFIGS_OFFSET UNITYSDK_OFFSET(0xA5A4980)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONENTERTOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xA5A9D10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONLEAVETOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xA5A9D60)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONTIMEREWINDENTITYCONTROLOVERTIME_OFFSET UNITYSDK_OFFSET(0xA5ACDB0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_PRELOADTIMEREWINDENTITYEFF_OFFSET UNITYSDK_OFFSET(0xA5A23E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERBINDCHILDTIMEREWINDENTITY_OFFSET UNITYSDK_OFFSET(0xA5AB510)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERTIMEREWINDCONTROLSWITCHER_OFFSET UNITYSDK_OFFSET(0xA5AA610)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_RELEASETIMEREWINDENTITYPRELOADEFF_OFFSET UNITYSDK_OFFSET(0xA5A3090)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REMOVETIMELINEOBJECT_OFFSET UNITYSDK_OFFSET(0xA5AAD80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETBACKWARDEFFFINISH_OFFSET UNITYSDK_OFFSET(0xA5A3C70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETENABLETIMEREWINDSELECT_OFFSET UNITYSDK_OFFSET(0xA5ACCB0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALOVERRIDESPECIALCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xA5AB9A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALUNSELECTABLE_OFFSET UNITYSDK_OFFSET(0xA5A7620)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETPLAYERIGNORETIMEREWINDHIT_OFFSET UNITYSDK_OFFSET(0xA5ACD40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA5A7E50)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDRECREATEWORLDPAGE_OFFSET UNITYSDK_OFFSET(0xA5A7D10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDSNAPPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA5A8310)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xA5A9E00)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYHITPLAYERSEQ_OFFSET UNITYSDK_OFFSET(0xA5AA9C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYONHITPLAYER_OFFSET UNITYSDK_OFFSET(0xA5AACE0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYATTACHSWITCHEROPENEFFONPLAYER_OFFSET UNITYSDK_OFFSET(0xA5AB680)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYCONTROLTIMEREWINDENTITYBYTASK_OFFSET UNITYSDK_OFFSET(0xA5A6AB0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYFINISHQUEST_OFFSET UNITYSDK_OFFSET(0xA5A8E90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYGETBACKWARDPARTICLESINFOSO_OFFSET UNITYSDK_OFFSET(0xA5A3F80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYREMOVESWITCHEROPENEFFONPLAYER_OFFSET UNITYSDK_OFFSET(0xA5AB860)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYUNSELECTCURRENTTARGET_OFFSET UNITYSDK_OFFSET(0xA5AA750)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_UNREGISTERTIMEREWINDCONTROLSWITCHER_OFFSET UNITYSDK_OFFSET(0xA5AA6C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ADDPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xA5A2BC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__BTNINCD_OFFSET UNITYSDK_OFFSET(0xA5ACC60)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CACHEBACKWARDEFFSOASSETASYNC_OFFSET UNITYSDK_OFFSET(0xA5A3200)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKCANCLICKREWINDBUTTON_OFFSET UNITYSDK_OFFSET(0xA5ACE90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKSPECIALCONTROLTYPECANCONTROL_OFFSET UNITYSDK_OFFSET(0xA5AD0B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A91E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISABLECONTROLLOOKATMODE_OFFSET UNITYSDK_OFFSET(0xA5AC070)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISPOSETIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA5A88A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DOINIT_OFFSET UNITYSDK_OFFSET(0xA5AB200)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLECONTROLLOOKATMODE_OFFSET UNITYSDK_OFFSET(0xA5ABB20)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLESWITCHCAMERACONTROLMODE_OFFSET UNITYSDK_OFFSET(0xA5ABA60)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXECUTEHITPLAYERSEQ_OFFSET UNITYSDK_OFFSET(0xA5AAA30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP1_OFFSET UNITYSDK_OFFSET(0xA5ACA30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP2_OFFSET UNITYSDK_OFFSET(0xA5AC4B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__FIRESTARTCONTROLMODEEFF_OFFSET UNITYSDK_OFFSET(0xA5AC270)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITEXTERNALSYSTEM_OFFSET UNITYSDK_OFFSET(0xA5A7290)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITQUEST_OFFSET UNITYSDK_OFFSET(0xA5A9020)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONGROUPLOADEND_OFFSET UNITYSDK_OFFSET(0xA5A9BD0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONOPENMOBILEPHONE_OFFSET UNITYSDK_OFFSET(0xA5A7BC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONPERFORMANCEREWINDCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA5A8D20)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTEND_OFFSET UNITYSDK_OFFSET(0xA5A7760)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTSTART_OFFSET UNITYSDK_OFFSET(0xA5A75C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xA5A77C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWREALAVATAR_OFFSET UNITYSDK_OFFSET(0xA5A7920)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMELINEENTITYEVENT_OFFSET UNITYSDK_OFFSET(0xA5A8D70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDPERFORMANCEPAGEENTER_OFFSET UNITYSDK_OFFSET(0xA5A8B70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA5ACEF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONPRESS_OFFSET UNITYSDK_OFFSET(0xA5AD140)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONRELEASE_OFFSET UNITYSDK_OFFSET(0xA5AD450)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPLAYERLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xA5A8640)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xA5A26C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHSPECIALCONTROLMODEBALLEFFSTATE_OFFSET UNITYSDK_OFFSET(0xA5AB7E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__RELEASEALLASSETS_OFFSET UNITYSDK_OFFSET(0xA5A5C70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVECACHEDBACKWARDEFFSO_OFFSET UNITYSDK_OFFSET(0xA5A36C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVEPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xA5A2E00)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWPERFORMANCEPAGE_OFFSET UNITYSDK_OFFSET(0xA5A8120)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWSNAPPERFORMANCEPAGE_OFFSET UNITYSDK_OFFSET(0xA5A83C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTCONTROLTIMELINEENTITY_OFFSET UNITYSDK_OFFSET(0xA5A6BA0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA5A7EF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKBTNCD_OFFSET UNITYSDK_OFFSET(0xA5AA170)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKCACHEDASSET_OFFSET UNITYSDK_OFFSET(0xA5A3640)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKEXITCONTROL_OFFSET UNITYSDK_OFFSET(0xA5AA580)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKLOOPREWINDUIAUDIO_OFFSET UNITYSDK_OFFSET(0xA5A7980)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPERFORMANCECONTROL_OFFSET UNITYSDK_OFFSET(0xA5A8A80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPLAYERSTEER_OFFSET UNITYSDK_OFFSET(0xA5AA1E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNPRESSDOWN_OFFSET UNITYSDK_OFFSET(0xA5A8BC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNRELEASE_OFFSET UNITYSDK_OFFSET(0xA5A8C70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYEXITCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xA5A7C60)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYUNREGISTERBINDCHILDTIMEREWINDENTITY_OFFSET UNITYSDK_OFFSET(0xA5AAE90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__UNINITEXTERNALSYSTEM_OFFSET UNITYSDK_OFFSET(0xA5A7400)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager_TypeDefinitionIndex = 49286;

	class TimeRewindControlManager : public ::System::Object
	{
	public:
		// static const ::System::String* StopLoopRewindAudio; // 0x0
		// static const ::System::String* RestartLoopRewindAudio; // 0x0
		// static const ::System::String* TimeRewindControlSwitcherTag; // 0x0
		// static const ::System::String* TimeRewindEntityTag; // 0x0
		::RPG::Client::UIController* _RecreateWorldPageController; // 0x10
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadEffItem*>* _TimeRewindEntityPreloadEffItemPool; // 0x18
		::System::Collections::Generic::List_1<::Class_1_89CF3D7005785E86*>* _MultiControllerRegisterInfos; // 0x20
		::RPG::GameCore::ToastPile* TimeRewindHitPlayerWhenRewindToast; // 0x28
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreload*>* _TimeRewindEntityPreloadPool; // 0x30
		::UnityEngine::Coroutine* _FrameAssetAsyncLoadCoroutine; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _ToAsyncLoadBackwardSoAssets; // 0x40
		::RPG::Client::UIController* _PerformancePageController; // 0x48
		::RPG::GameCore::ToastPile* InteractSwitcherWhenOpen; // 0x50
		::System::Collections::Generic::List_1<::Class_2_7E6F98A8FA0DAC16*>* _TimeRewindControlSwitcherComponents; // 0x58
		::RPG::GameCore::ToastPile* TimeRewindEntityStrikeToast; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* _RewindEntityClips; // 0x68
		::System::Action* _PerformanceFinishCallback; // 0x70
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LoopRewindSelectableTarget; // 0x78
		::RPG::GameCore::GameEntity* _CurrentSelectTarget; // 0x80
		::RPG::GameCore::EntityTimeRewindComponent* _CurrentSelectTargetTimeRewindComponent; // 0x88
		::RPG::GameCore::ToastPile* TimeRewindFailToast; // 0x90
		::RPG::Client::TwoKeyDictionary_3<::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType, ::System::String*>* _TimeRewindViewAttachMat; // 0x98
		::System::Collections::Generic::List_1<::RPG::GameCore::EntityTimeRewindComponent*>* _AllTimeRewindComponents; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_22DFC3839E157DF2*>* _TimeRewindAnimConfigs; // 0xA8
		::System::Collections::Generic::List_1<::System::UInt32>* _ToFinishQuestIDs; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Material*>* _TimeRewindViewAttachMatAsset; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _PreloadEffInstCnt; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreload*>* _TimeRewindEntityPreloads; // 0xC8
		::Class_1_5863CECBF1A58D06* _TimeRewindLockTarget; // 0xD0
		::RPG::GameCore::EntityTimeRewindComponent* _PerformanceTargetTimeRewindComponent; // 0xD8
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _TimeRewindEffBackwardSOAssetInfoPool; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindItemSingleClipData*>* _RewindEntityClipInfos; // 0xE8
		::Class_1_DD81253E160EB8B2* _SwitchOpenAttachPlayerBallEff; // 0xF0
		::Il2CppArray<::Class_1_DD81253E160EB8B2*>* _AttachPlayerEffs; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _LoadBackwardSoAssets; // 0x100
		::Il2CppArray<::Class_1_DD81253E160EB8B2*>* _SwitchOpenAttachPlayerEff; // 0x108
		::Class_1_E05E7A6D9DE9138B* _GamePlayAssetLoader; // 0x110
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TimelineItemSingleData*>* _TrackInfoDict; // 0x118
		::Class_3_5775A4FEC79026BC* _OnHitPlayerSeq; // 0x120
		::RPG::Client::AdventurePhase* _Phase; // 0x128
		::RPG::Client::TimeRewindControlManager_ExitControlModeStep _ExitControlModeStep; // 0x130
		::System::Int32 _GlobalSelectableCount; // 0x134
		::UnityEngine::Vector3 _PlayerTurnToForward; // 0x138
		::System::Int32 _SpecialControlTypeBallEffControlParam; // 0x144
		::System::UInt32 _LastOvertimeRuntimeID; // 0x148
		::System::Int32 _TimeRewindInControlCount; // 0x14C
		::System::Single _TimeRewindCompletePerformTimer; // 0x150
		::System::Int32 _IgnoreHitPlayerCount; // 0x154
		::System::Boolean _PerformancePageEnter; // 0x158
		::System::Boolean _LockPerformanceTarget; // 0x159
		::System::Boolean _InPerformanceMode; // 0x15A
		::System::Boolean _GamePlayBtnEnable; // 0x15B
		::System::Single _BtnCD; // 0x15C
		::System::Int32 _ManagerDeactiveReason; // 0x160
		::System::Boolean _Inited; // 0x164
		::System::Boolean _InControlMode; // 0x165
		::System::Boolean _IsCachedAssetAsyncLoading; // 0x166
		::System::Boolean _HasLoopRewindUI; // 0x167
		::System::Boolean _GlobalOverrideSpecialControlMode; // 0x168
		::System::Int32 _SwitchAttachPlayerEffCount; // 0x16C
		::System::UInt32 _TimeRewindOverTimeToastLastTime; // 0x170
		::System::Int32 _TimeRewindDisableSelectCount; // 0x174
		::System::Int32 _ContinuousTimeout; // 0x178

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

		::System::Void _OnTimelineEntityEvent(::Class_0_16E4307DCC419505_375* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMELINEENTITYEVENT_OFFSET))(this, evt);
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
