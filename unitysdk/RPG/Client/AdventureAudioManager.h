#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/Client/AudioBGMEmotionSourceType.h"
#include "unitysdk/RPG/Client/MRMusicCompositionMode.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterVOType.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/RhythmType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkCallbackInfo;
class AkMusicSyncCallbackInfo;
class Class_0_16E4307DCC419505_382;
class Class_1_42A859F1CFE8581B;
class Class_1_4DFA3B729C6644B8;
class Class_1_FBA2F7F034B595FB;
namespace RPG::Client { class AdventureAudioManager_AlertedMonsterInfo; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MusicRhythmSong; }
namespace RPG::Client { class PlayingMusicItemsInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MazeFloorRow; }
namespace RPG::GameCore { class MazePlaneRow; }
namespace RPG::GameCore { class PropSoundAttenuation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_CHECKENTITYCANPLAYSOUND_OFFSET UNITYSDK_OFFSET(0x9C83710)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_CLEARBGMSTATE_OFFSET UNITYSDK_OFFSET(0x9C83FA0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C80E30)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ENTERDISTRICTBGMEMOTION_OFFSET UNITYSDK_OFFSET(0x9C84520)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_EXITDISTRICTBGMEMOTION_OFFSET UNITYSDK_OFFSET(0x9C84590)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_FORCESETCURRENTTRACKGRIDSTATE_OFFSET UNITYSDK_OFFSET(0x9C7CE20)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXLOUDNESS_OFFSET UNITYSDK_OFFSET(0x9C83520)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXPLAYINGBPM_OFFSET UNITYSDK_OFFSET(0x9C835B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXPLAYINGPOSITION_OFFSET UNITYSDK_OFFSET(0x9C836B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXRYTHMTYPE_OFFSET UNITYSDK_OFFSET(0x9C83630)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETMRMENUPROGRESSINGRID_OFFSET UNITYSDK_OFFSET(0x9C7DD20)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETSUBMISSIONIDFROMENTITY_OFFSET UNITYSDK_OFFSET(0x9C847D0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_ATMOSPHERECENTERAUDIOENTITY_OFFSET UNITYSDK_OFFSET(0x9C87990)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MISSIONEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9C879B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MISSIONSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0x9C879C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRCURRENTGRID_OFFSET UNITYSDK_OFFSET(0x9C7F390)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRGRIDDURATION_OFFSET UNITYSDK_OFFSET(0x9C7F700)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRPLAYINGSTAGEBGMEVENTID_OFFSET UNITYSDK_OFFSET(0x9C7F980)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRSTAGEBGMVISUALIZEDATA_OFFSET UNITYSDK_OFFSET(0x9C7D420)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET__STEPONPOSESTATEA_OFFSET UNITYSDK_OFFSET(0x9C87100)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET__STEPONPOSESTATEB_OFFSET UNITYSDK_OFFSET(0x9C87560)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_INITMAZEAUDIO_OFFSET UNITYSDK_OFFSET(0x9C82910)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9C7F990)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONALERTEDMONSTERADD_OFFSET UNITYSDK_OFFSET(0x9C850D0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONALERTEDMONSTERREMOVE_OFFSET UNITYSDK_OFFSET(0x9C85340)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONENTERTRANSITIONDISTRICT_OFFSET UNITYSDK_OFFSET(0x9C83890)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONEXITTRANSITIONDISTRICT_OFFSET UNITYSDK_OFFSET(0x9C83E70)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONMONSTERDESTROY_OFFSET UNITYSDK_OFFSET(0x9C855C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_OVERRIDEATMOSPHERECENTERAUDIO_OFFSET UNITYSDK_OFFSET(0x9C84B70)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_OVERRIDEFLOORDEFAULTEMOTION_OFFSET UNITYSDK_OFFSET(0x9C840F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PAUSEMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0x9C7D4B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMAZECHARACTERVO_OFFSET UNITYSDK_OFFSET(0x9C82CC0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMUSICCOMPOSITIONSTAGEBGM_OFFSET UNITYSDK_OFFSET(0x9C7D000)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0x9C7CAF0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYVOSEQUENCE_OFFSET UNITYSDK_OFFSET(0x9C83190)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESETGAMEPLAYBGMEMOTION_OFFSET UNITYSDK_OFFSET(0x9C84720)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESETSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0x9C84470)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESUMEMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0x9C7D550)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x9C7F440)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETGAMEPLAYBGMEMOTION_OFFSET UNITYSDK_OFFSET(0x9C84650)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMISSIONBGMEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9C84360)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUSICCOMPOSITIONTOGRID_OFFSET UNITYSDK_OFFSET(0x9C7D5F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUSICEDITMODE_OFFSET UNITYSDK_OFFSET(0x9C7CA90)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0x9C843B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETUPSOUNDATTENUATION_OFFSET UNITYSDK_OFFSET(0x9C84A30)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SET_ATMOSPHERECENTERAUDIOENTITY_OFFSET UNITYSDK_OFFSET(0x9C879A0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SET_MISSIONSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0x9C879D0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPALLUIMENUBGM_OFFSET UNITYSDK_OFFSET(0x9C7CEC0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0x9C7CE70)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPUIMENUBGM_OFFSET UNITYSDK_OFFSET(0x9C707C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPVOSEQUENCE_OFFSET UNITYSDK_OFFSET(0x9C81C10)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHJUKEBOXTOCURRENT_OFFSET UNITYSDK_OFFSET(0x9C83460)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHJUKEBOX_OFFSET UNITYSDK_OFFSET(0x9C834C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHUIMENUBGM_OFFSET UNITYSDK_OFFSET(0x9C705E0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x9C82760)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_TRYSWITCHNORMALBGM_OFFSET UNITYSDK_OFFSET(0x9C81B50)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C87C40)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__CREATEATMOSPHERECENTERAUDIOENTITY_OFFSET UNITYSDK_OFFSET(0x9C84E20)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9C879E0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__INITFLOORSETTINGS_OFFSET UNITYSDK_OFFSET(0x9C80200)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__INITMRMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0x9C7DF50)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ISCURRENTINTOWN_OFFSET UNITYSDK_OFFSET(0x9C85D40)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__LOGACTIVESUBMISSIONSINFO_OFFSET UNITYSDK_OFFSET(0x9C877C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x9C85BB0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONAUDIOGAMESTATECHANGEMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0x9C7F530)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONAUDIOGAMESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9C86710)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONBATTLETOMAZETRANSITFADEOUTEND_OFFSET UNITYSDK_OFFSET(0x9C86920)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONBGMEMOTIONSTATECHANGEINTRAIN_OFFSET UNITYSDK_OFFSET(0x9C86770)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x9C86250)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONLEAVEPOSESWITCHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x9C87330)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMAZETOBATTLETRANSITBEGIN_OFFSET UNITYSDK_OFFSET(0x9C86680)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICCOMPOSITIONSYNC_OFFSET UNITYSDK_OFFSET(0x9C7E980)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICRHYTHMINFOREFRESH_OFFSET UNITYSDK_OFFSET(0x9C7F3F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICSYNC_OFFSET UNITYSDK_OFFSET(0x9C87620)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONONROTATABLEREGIONIGNOREAIRLOCKCHANGED_OFFSET UNITYSDK_OFFSET(0x9C82B00)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONOPENCHEST_OFFSET UNITYSDK_OFFSET(0x9C85740)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYERLOCKNEWTARGET_OFFSET UNITYSDK_OFFSET(0x9C86380)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYTALKFINISH_OFFSET UNITYSDK_OFFSET(0x9C86D30)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYTALK_OFFSET UNITYSDK_OFFSET(0x9C86CE0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPUZZLESOLVED_OFFSET UNITYSDK_OFFSET(0x9C85A60)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONSTEPONPOSESWITCHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x9C871C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONTEAMLEADERCHANGED_OFFSET UNITYSDK_OFFSET(0x9C82250)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONTEAMLEADERSWITCHED_OFFSET UNITYSDK_OFFSET(0x9C86D80)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONUISETMUSICSUCCESS_OFFSET UNITYSDK_OFFSET(0x9C865F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__PLAYSEQUENCEVOCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C86FA0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__REFRESHBGMEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9C84140)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETBGMEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9C876B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETCOMPOSITIONSTAGEBGMSTATE_OFFSET UNITYSDK_OFFSET(0x9C7DFA0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETDEFAULTSTATES_OFFSET UNITYSDK_OFFSET(0x9C805C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETMRCURRENTGRID_OFFSET UNITYSDK_OFFSET(0x9C7CDB0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETTRACKGRIDSTATEARLIETRANSITION_OFFSET UNITYSDK_OFFSET(0x9C7E5D0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETTRACKGRIDSTATE_OFFSET UNITYSDK_OFFSET(0x9C7D7E0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SMOOTHBUSYRTPCVALUE_OFFSET UNITYSDK_OFFSET(0x9C82140)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__STARTBGM_OFFSET UNITYSDK_OFFSET(0x9C809E0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKMONSTERALERT_OFFSET UNITYSDK_OFFSET(0x9C81CE0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0x9C7E370)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKPLAYERDISTANCE_OFFSET UNITYSDK_OFFSET(0x9C823F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKSTEPONPOSE_OFFSET UNITYSDK_OFFSET(0x9C82800)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TRYSWITCHBUSYBGM_OFFSET UNITYSDK_OFFSET(0x9C85280)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONADVENTUREPHASEENTERED_B__86_0_OFFSET UNITYSDK_OFFSET(0x9C87CC0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONBATTLETOMAZETRANSITFADEOUTEND_B__94_0_OFFSET UNITYSDK_OFFSET(0x9C87CE0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONHIDELOADINGPAGE_B__87_0_OFFSET UNITYSDK_OFFSET(0x9C87CD0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONPUZZLESOLVED_B__85_0_OFFSET UNITYSDK_OFFSET(0x9C87CB0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___PLAYSEQUENCEVOCALLBACK_B__98_0_OFFSET UNITYSDK_OFFSET(0x9C87CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureAudioManager_TypeDefinitionIndex = 55772;

	class AdventureAudioManager : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_s_VisibleReasons()
		{
			return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(AdventureAudioManager_TypeDefinitionIndex)->GetStaticField(0x3E8B0);
		}
		// static const ::System::String* TRACK_GRID_GROUP_NAME; // 0x0
		// static const ::System::String* TRACK_GRID_STATE_ON_NAME; // 0x0
		// static const ::System::String* TRACK_GRID_STATE_OFF_NAME; // 0x0
		// static const ::System::String* _STAGE_BGM_STATE_GROUP_NAME; // 0x0
		::System::String* _CurrentEmotionState; // 0x10
		::System::Object* _PendingUserParam; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* _UIMenuBGMStack; // 0x20
		::System::String* _MissionEmotionState; // 0x28
		::RPG::GameCore::GameEntity* _AtmosphereCenterAudioEntity_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* _GameplayEmotionStack; // 0x38
		::RPG::GameCore::MazeFloorRow* _FloorRow; // 0x40
		::System::String* _OverrideFloorDefaultEmotion; // 0x48
		::Class_1_42A859F1CFE8581B* _SpaceChecker; // 0x50
		::Il2CppArray<::System::Boolean>* _CurrentGrids; // 0x58
		::System::Collections::Generic::Queue_1<::System::UInt32>* _VOSequence; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _LookAtThreatVOTriggered; // 0x68
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _DistrictTransitionEntities; // 0x70
		::System::String* _MissionSoundEffectState_k__BackingField; // 0x78
		::System::Collections::Generic::List_1<::System::String*>* _DistrictEmotionStack; // 0x80
		::RPG::GameCore::GameEntity* _CacheCurTeamLeader; // 0x88
		::RPG::Client::AdventurePhase* _Phase; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AdventureAudioManager_AlertedMonsterInfo*>* _AlertedMonsterDict; // 0x98
		::RPG::Client::MusicRhythmSong* _MRCurrentPlayingSong; // 0xA0
		::System::String* _OverrideStepOnPoseStateA; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _AdventureAudioStateDict; // 0xB0
		::Class_1_4DFA3B729C6644B8* _JukeBoxController; // 0xB8
		::System::String* _OverrideStepOnPoseStateB; // 0xC0
		::RPG::GameCore::MazePlaneRow* _PlanRow; // 0xC8
		::UnityEngine::Transform* _CacheTeamLeaderTrans; // 0xD0
		::System::String* _WalkOnWallEmotionState; // 0xD8
		::System::String* _OverrideCenterSourceName; // 0xE0
		::System::UInt32 _CurrentTeamLeaderAvatarID; // 0xE8
		::System::Boolean _BackgroundTalking; // 0xEC
		::System::Boolean _IsStepOnPoseProcessing; // 0xED
		::System::Single _PlayerDistanceRTPCValue; // 0xF0
		::System::Single _StepOnPosePercent; // 0xF4
		::System::UInt32 _MRPlayingStageBGMEventID; // 0xF8
		::System::Int32 _MRCurrentBar; // 0xFC
		::System::Single _RTPCRangeFactor; // 0x100
		::System::UInt32 _PlayingVOSequenceID; // 0x104
		::System::Boolean _BusyFlag; // 0x108
		::System::Boolean _IsMenuBGMPlaying; // 0x109
		::System::Boolean _IsStepOnPoseChanged; // 0x10A
		::System::Single _RTPCRangeMin; // 0x10C
		::RPG::Client::AudioBGMEmotionSourceType _CurrentEmotionSourceType; // 0x110
		::System::Int32 _MRStageCurrentGrid; // 0x114
		::RPG::GameCore::AdventureCharacterVOType _PendingMazeVOType; // 0x118
		::RPG::Client::MRMusicCompositionMode _MusicCompositionMode; // 0x11C
		::System::Single _MRBarDuration; // 0x120
		::System::Int32 _MRCurrentGrid; // 0x124
		::System::Single _BusyVolumeRTPCValue; // 0x128
		::System::Single _VOSequenceInterval; // 0x12C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SetMusicEditMode(::System::Boolean isStart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUSICEDITMODE_OFFSET))(this, isStart);
		}

		::System::Void PlayMusicComposition(::System::UInt32 songID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMUSICCOMPOSITION_OFFSET))(this, songID);
		}

		::System::Void StopMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Void PlayMusicCompositionStageBGM(::System::String* eventName, ::UnityEngine::GameObject* emitter, ::AkCallbackType callbackType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMUSICCOMPOSITIONSTAGEBGM_OFFSET))(this, eventName, emitter, callbackType);
		}

		::System::Void PauseMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PAUSEMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Void ResumeMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESUMEMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Void SetMusicCompositionToGrid(::System::Int32 gridNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUSICCOMPOSITIONTOGRID_OFFSET))(this, gridNum);
		}

		::System::Void ForceSetCurrentTrackGridState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_FORCESETCURRENTTRACKGRIDSTATE_OFFSET))(this);
		}

		::System::Single GetMRMenuProgressInGrid(::System::Int32 gridNum)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETMRMENUPROGRESSINGRID_OFFSET))(this, gridNum);
		}

		::System::Void _InitMRMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__INITMRMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Void _TickMusicComposition(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKMUSICCOMPOSITION_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _OnMusicCompositionSync(::AkMusicSyncCallbackInfo* musicCBInfo)
		{
			return ((::System::Void(*)(::PVOID, ::AkMusicSyncCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICCOMPOSITIONSYNC_OFFSET))(this, musicCBInfo);
		}

		::System::Void _OnMusicRhythmInfoRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICRHYTHMINFOREFRESH_OFFSET))(this, arg);
		}

		::System::Void _SetMRCurrentGrid(::System::Int32 grid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETMRCURRENTGRID_OFFSET))(this, grid);
		}

		::System::Void _SetCompositionStageBGMState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETCOMPOSITIONSTAGEBGMSTATE_OFFSET))(this);
		}

		::System::Void _SetTrackGridState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETTRACKGRIDSTATE_OFFSET))(this);
		}

		::System::Void _SetTrackGridStatEarlieTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETTRACKGRIDSTATEARLIETRANSITION_OFFSET))(this);
		}

		::System::Void _OnAudioGameStateChangeMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONAUDIOGAMESTATECHANGEMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Int32 get_MRCurrentGrid()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRCURRENTGRID_OFFSET))(this);
		}

		::System::Single get_MRGridDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRGRIDDURATION_OFFSET))(this);
		}

		::System::UInt32 get_MRPlayingStageBGMEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRPLAYINGSTAGEBGMEVENTID_OFFSET))(this);
		}

		::Class_1_FBA2F7F034B595FB* get_MRStageBGMVisualizeData()
		{
			return ((::Class_1_FBA2F7F034B595FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRSTAGEBGMVISUALIZEDATA_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::AdventurePhase* phase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_INIT_OFFSET))(this, phase);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void _TickMonsterAlert(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKMONSTERALERT_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _OnTeamLeaderChanged(::RPG::GameCore::GameEntity* newTeamLeader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONTEAMLEADERCHANGED_OFFSET))(this, newTeamLeader);
		}

		::System::Void _TickPlayerDistance(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKPLAYERDISTANCE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void TrySwitchNormalBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_TRYSWITCHNORMALBGM_OFFSET))(this);
		}

		::System::Void InitMazeAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_INITMAZEAUDIO_OFFSET))(this);
		}

		::System::Void SetAudioState(::System::String* groupName, ::System::String* stateName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETAUDIOSTATE_OFFSET))(this, groupName, stateName);
		}

		::System::Void SwitchUIMenuBGM(::System::String* menuState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHUIMENUBGM_OFFSET))(this, menuState);
		}

		::System::Void StopAllUIMenuBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPALLUIMENUBGM_OFFSET))(this);
		}

		::System::Void StopUIMenuBGM(::System::String* menuState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPUIMENUBGM_OFFSET))(this, menuState);
		}

		::System::Void PlayMazeCharacterVO(::RPG::GameCore::AdventureCharacterVOType vOType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterVOType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMAZECHARACTERVO_OFFSET))(this, vOType);
		}

		::System::Void PlayVOSequence(::System::Collections::Generic::IList_1<::System::UInt32>* voIDList, ::System::Single intervalTime, ::UnityEngine::GameObject* emitter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYVOSEQUENCE_OFFSET))(this, voIDList, intervalTime, emitter);
		}

		::System::Void StopVOSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPVOSEQUENCE_OFFSET))(this);
		}

		::System::Void SwitchJukeBoxToCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHJUKEBOXTOCURRENT_OFFSET))(this);
		}

		::System::Void SwitchJukeBox(::RPG::Client::PlayingMusicItemsInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHJUKEBOX_OFFSET))(this, info);
		}

		::System::Single GetJukeBoxLoudness(::System::Single outMin, ::System::Single outMax)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXLOUDNESS_OFFSET))(this, outMin, outMax);
		}

		::System::UInt32 GetJukeBoxPlayingBPM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXPLAYINGBPM_OFFSET))(this);
		}

		::RPG::GameCore::RhythmType GetJukeBoxRythmType()
		{
			return ((::RPG::GameCore::RhythmType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXRYTHMTYPE_OFFSET))(this);
		}

		::System::Int32 GetJukeBoxPlayingPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXPLAYINGPOSITION_OFFSET))(this);
		}

		::System::Boolean CheckEntityCanPlaySound(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_CHECKENTITYCANPLAYSOUND_OFFSET))(this, entity);
		}

		::System::Void OnEnterTransitionDistrict(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONENTERTRANSITIONDISTRICT_OFFSET))(this, entity);
		}

		::System::Void OnExitTransitionDistrict(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONEXITTRANSITIONDISTRICT_OFFSET))(this, entity);
		}

		::System::Void ClearBGMState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_CLEARBGMSTATE_OFFSET))(this);
		}

		::System::Void OverrideFloorDefaultEmotion(::System::String* emotionState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_OVERRIDEFLOORDEFAULTEMOTION_OFFSET))(this, emotionState);
		}

		::System::Void SetMissionBGMEmotionState(::System::String* emotionState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMISSIONBGMEMOTIONSTATE_OFFSET))(this, emotionState);
		}

		::System::Void SetSoundEffectState(::System::String* stateName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETSOUNDEFFECTSTATE_OFFSET))(this, stateName);
		}

		::System::Void ResetSoundEffectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESETSOUNDEFFECTSTATE_OFFSET))(this);
		}

		::System::Void EnterDistrictBGMEmotion(::System::String* enterState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ENTERDISTRICTBGMEMOTION_OFFSET))(this, enterState);
		}

		::System::Void ExitDistrictBGMEmotion(::System::String* exitState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_EXITDISTRICTBGMEMOTION_OFFSET))(this, exitState);
		}

		::System::Void SetGameplayBGMEmotion(::System::String* audioState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETGAMEPLAYBGMEMOTION_OFFSET))(this, audioState);
		}

		::System::Void ResetGameplayBGMEmotion(::System::String* audioState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESETGAMEPLAYBGMEMOTION_OFFSET))(this, audioState);
		}

		::System::UInt32 GetSubmissionIDFromEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETSUBMISSIONIDFROMENTITY_OFFSET))(this, entity);
		}

		::System::Void SetupSoundAttenuation(::RPG::GameCore::PropSoundAttenuation* config, ::UnityEngine::GameObject* unityGO)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSoundAttenuation*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETUPSOUNDATTENUATION_OFFSET))(this, config, unityGO);
		}

		::System::Void OverrideAtmosphereCenterAudio(::System::Nullable_1<::UnityEngine::Vector3> pos, ::System::String* sourceName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_OVERRIDEATMOSPHERECENTERAUDIO_OFFSET))(this, pos, sourceName);
		}

		::System::Void _InitFloorSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__INITFLOORSETTINGS_OFFSET))(this);
		}

		::System::Void _SetDefaultStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETDEFAULTSTATES_OFFSET))(this);
		}

		::System::Void OnAlertedMonsterAdd(::Class_0_16E4307DCC419505_382* e)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONALERTEDMONSTERADD_OFFSET))(this, e);
		}

		::System::Void OnAlertedMonsterRemove(::Class_0_16E4307DCC419505_382* e)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONALERTEDMONSTERREMOVE_OFFSET))(this, e);
		}

		::System::Void OnMonsterDestroy(::Class_0_16E4307DCC419505_382* e)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONMONSTERDESTROY_OFFSET))(this, e);
		}

		::System::Void _CreateAtmosphereCenterAudioEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__CREATEATMOSPHERECENTERAUDIOENTITY_OFFSET))(this);
		}

		::System::Void _StartBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__STARTBGM_OFFSET))(this);
		}

		::System::Void _TrySwitchBusyBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TRYSWITCHBUSYBGM_OFFSET))(this);
		}

		::System::Single _SmoothBusyRTPCValue(::System::Single cur, ::System::Single target, ::System::Single fElapsedTimeInSec)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SMOOTHBUSYRTPCVALUE_OFFSET))(this, cur, target, fElapsedTimeInSec);
		}

		::System::Void _OnOpenChest(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONOPENCHEST_OFFSET))(this, userParam);
		}

		::System::Void _OnPuzzleSolved(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPUZZLESOLVED_OFFSET))(this, userParam);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONADVENTUREPHASEENTERED_OFFSET))(this, userParam);
		}

		::System::Void _OnHideLoadingPage(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONHIDELOADINGPAGE_OFFSET))(this, userParam);
		}

		::System::Boolean _IsCurrentInTown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ISCURRENTINTOWN_OFFSET))(this);
		}

		::System::Void _OnUISetMusicSuccess(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONUISETMUSICSUCCESS_OFFSET))(this, userParam);
		}

		::System::Void _OnMazeToBattleTransitBegin(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMAZETOBATTLETRANSITBEGIN_OFFSET))(this, userParam);
		}

		::System::Void _OnAudioGameStateChange(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONAUDIOGAMESTATECHANGE_OFFSET))(this, userParam);
		}

		::System::Void _OnBGMEmotionStateChangeInTrain(::System::Boolean isOverJukeBox)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONBGMEMOTIONSTATECHANGEINTRAIN_OFFSET))(this, isOverJukeBox);
		}

		::System::Void _OnPlayerLockNewTarget(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYERLOCKNEWTARGET_OFFSET))(this, userParam);
		}

		::System::Void _OnBattleToMazeTransitFadeOutEnd(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONBATTLETOMAZETRANSITFADEOUTEND_OFFSET))(this, userParam);
		}

		::System::Void _OnPlayTalk(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYTALK_OFFSET))(this, userParam);
		}

		::System::Void _OnPlayTalkFinish(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYTALKFINISH_OFFSET))(this, userParam);
		}

		::System::Void _OnTeamLeaderSwitched(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONTEAMLEADERSWITCHED_OFFSET))(this, userParam);
		}

		::System::Void _PlaySequenceVOCallback(::System::UInt32 eventID, ::AkCallbackType cbType, ::AkCallbackInfo* cbInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__PLAYSEQUENCEVOCALLBACK_OFFSET))(this, eventID, cbType, cbInfo);
		}

		::System::Void _OnOnRotatableRegionIgnoreAirlockChanged(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONONROTATABLEREGIONIGNOREAIRLOCKCHANGED_OFFSET))(this, userParam);
		}

		::System::Void _OnStepOnPoseSwitcherCollider(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONSTEPONPOSESWITCHERCOLLIDER_OFFSET))(this, userParam);
		}

		::System::Void _OnLeavePoseSwitcherCollider(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONLEAVEPOSESWITCHERCOLLIDER_OFFSET))(this, userParam);
		}

		::System::Void _OnMusicSync(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICSYNC_OFFSET))(this, arg);
		}

		::System::Void _TickStepOnPose(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKSTEPONPOSE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _SetBGMEmotionState(::RPG::Client::AudioBGMEmotionSourceType sourceType, ::System::String* emotionState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioBGMEmotionSourceType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETBGMEMOTIONSTATE_OFFSET))(this, sourceType, emotionState);
		}

		::System::Void _RefreshBGMEmotionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__REFRESHBGMEMOTIONSTATE_OFFSET))(this);
		}

		::System::Void _LogActiveSubmissionsInfo(::System::Collections::Generic::HashSet_1<::System::UInt32>* activeSubMissions, ::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__LOGACTIVESUBMISSIONSINFO_OFFSET))(this, activeSubMissions, groupID);
		}

		::RPG::GameCore::GameEntity* get_AtmosphereCenterAudioEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_ATMOSPHERECENTERAUDIOENTITY_OFFSET))(this);
		}

		::System::Void set_AtmosphereCenterAudioEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SET_ATMOSPHERECENTERAUDIOENTITY_OFFSET))(this, value);
		}

		::System::String* get_MissionEmotionState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MISSIONEMOTIONSTATE_OFFSET))(this);
		}

		::System::String* get_MissionSoundEffectState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MISSIONSOUNDEFFECTSTATE_OFFSET))(this);
		}

		::System::Void set_MissionSoundEffectState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SET_MISSIONSOUNDEFFECTSTATE_OFFSET))(this, value);
		}

		::System::String* get__StepOnPoseStateA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET__STEPONPOSESTATEA_OFFSET))(this);
		}

		::System::String* get__StepOnPoseStateB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET__STEPONPOSESTATEB_OFFSET))(this);
		}

		::System::Void __OnPuzzleSolved_b__85_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONPUZZLESOLVED_B__85_0_OFFSET))(this);
		}

		::System::Void __OnAdventurePhaseEntered_b__86_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONADVENTUREPHASEENTERED_B__86_0_OFFSET))(this);
		}

		::System::Void __OnHideLoadingPage_b__87_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONHIDELOADINGPAGE_B__87_0_OFFSET))(this);
		}

		::System::Void __OnBattleToMazeTransitFadeOutEnd_b__94_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONBATTLETOMAZETRANSITFADEOUTEND_B__94_0_OFFSET))(this);
		}

		::System::Void __PlaySequenceVOCallback_b__98_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___PLAYSEQUENCEVOCALLBACK_B__98_0_OFFSET))(this);
		}
	};
}
