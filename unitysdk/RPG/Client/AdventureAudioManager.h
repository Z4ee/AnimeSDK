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
class Class_0_16E4307DCC419505_401;
class Class_1_42A859F1CFE8581B;
class Class_1_A4735193F3DD293E;
class Class_1_E6E7D50288DDC3E7;
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

#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_CHECKENTITYCANPLAYSOUND_OFFSET UNITYSDK_OFFSET(0xB225490)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_CLEARBGMSTATE_OFFSET UNITYSDK_OFFSET(0xB225ED0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2229E0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ENTERDISTRICTBGMEMOTION_OFFSET UNITYSDK_OFFSET(0xB2264B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_EXITDISTRICTBGMEMOTION_OFFSET UNITYSDK_OFFSET(0xB226570)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_FORCESETCURRENTTRACKGRIDSTATE_OFFSET UNITYSDK_OFFSET(0xB21E870)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXLOUDNESS_OFFSET UNITYSDK_OFFSET(0xB2252A0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXPLAYINGBPM_OFFSET UNITYSDK_OFFSET(0xB225330)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXPLAYINGPOSITION_OFFSET UNITYSDK_OFFSET(0xB225430)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXRYTHMTYPE_OFFSET UNITYSDK_OFFSET(0xB2253B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETMRMENUPROGRESSINGRID_OFFSET UNITYSDK_OFFSET(0xB21F760)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETSUBMISSIONIDFROMENTITY_OFFSET UNITYSDK_OFFSET(0xB226910)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_ATMOSPHERECENTERAUDIOENTITY_OFFSET UNITYSDK_OFFSET(0xB229D00)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MISSIONEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0xB229D20)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MISSIONSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0xB229D30)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRCURRENTGRID_OFFSET UNITYSDK_OFFSET(0xB220E00)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRGRIDDURATION_OFFSET UNITYSDK_OFFSET(0xB221180)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRPLAYINGSTAGEBGMEVENTID_OFFSET UNITYSDK_OFFSET(0xB2213F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRSTAGEBGMVISUALIZEDATA_OFFSET UNITYSDK_OFFSET(0xB21EE70)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET__STEPONPOSESTATEA_OFFSET UNITYSDK_OFFSET(0xB2294B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET__STEPONPOSESTATEB_OFFSET UNITYSDK_OFFSET(0xB229910)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_INITMAZEAUDIO_OFFSET UNITYSDK_OFFSET(0xB224580)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xB221400)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONALERTEDMONSTERADD_OFFSET UNITYSDK_OFFSET(0xB227200)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONALERTEDMONSTERREMOVE_OFFSET UNITYSDK_OFFSET(0xB227480)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONENTERTRANSITIONDISTRICT_OFFSET UNITYSDK_OFFSET(0xB225610)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONEXITTRANSITIONDISTRICT_OFFSET UNITYSDK_OFFSET(0xB225CF0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONMONSTERDESTROY_OFFSET UNITYSDK_OFFSET(0xB227730)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_OVERRIDEATMOSPHERECENTERAUDIO_OFFSET UNITYSDK_OFFSET(0xB226CB0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_OVERRIDEFLOORDEFAULTEMOTION_OFFSET UNITYSDK_OFFSET(0xB226030)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PAUSEMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xB21EF00)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMAZECHARACTERVO_OFFSET UNITYSDK_OFFSET(0xB224940)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMUSICCOMPOSITIONSTAGEBGM_OFFSET UNITYSDK_OFFSET(0xB21EA50)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xB21E540)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYVOSEQUENCE_OFFSET UNITYSDK_OFFSET(0xB224E20)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_REGISTERTARGETASJUKEBOXEMITTER_OFFSET UNITYSDK_OFFSET(0xB225230)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESETGAMEPLAYBGMEMOTION_OFFSET UNITYSDK_OFFSET(0xB226800)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESETSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0xB2263F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESUMEMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xB21EFA0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0xB220EB0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETGAMEPLAYBGMEMOTION_OFFSET UNITYSDK_OFFSET(0xB226680)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMISSIONBGMEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0xB2262E0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUSICCOMPOSITIONTOGRID_OFFSET UNITYSDK_OFFSET(0xB21F040)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUSICEDITMODE_OFFSET UNITYSDK_OFFSET(0xB21E4E0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0xB226330)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETUPSOUNDATTENUATION_OFFSET UNITYSDK_OFFSET(0xB226B60)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SET_ATMOSPHERECENTERAUDIOENTITY_OFFSET UNITYSDK_OFFSET(0xB229D10)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SET_MISSIONSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0xB229D40)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPALLUIMENUBGM_OFFSET UNITYSDK_OFFSET(0xB21E910)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xB21E8C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPUIMENUBGM_OFFSET UNITYSDK_OFFSET(0xB211D00)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPVOSEQUENCE_OFFSET UNITYSDK_OFFSET(0xB223880)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHJUKEBOXTOCURRENT_OFFSET UNITYSDK_OFFSET(0xB225170)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHJUKEBOX_OFFSET UNITYSDK_OFFSET(0xB2251D0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHUIMENUBGM_OFFSET UNITYSDK_OFFSET(0xB211A50)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xB2243D0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_TRYSWITCHNORMALBGM_OFFSET UNITYSDK_OFFSET(0xB2237C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB229FB0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__CREATEATMOSPHERECENTERAUDIOENTITY_OFFSET UNITYSDK_OFFSET(0xB226F50)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB229D50)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__INITFLOORSETTINGS_OFFSET UNITYSDK_OFFSET(0xB221D80)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__INITMRMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xB21F980)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ISCURRENTINTOWN_OFFSET UNITYSDK_OFFSET(0xB227FB0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__LOGACTIVESUBMISSIONSINFO_OFFSET UNITYSDK_OFFSET(0xB229B70)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xB227DC0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONAUDIOGAMESTATECHANGEMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xB220FA0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONAUDIOGAMESTATECHANGE_OFFSET UNITYSDK_OFFSET(0xB228A10)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONBATTLETOMAZETRANSITFADEOUTEND_OFFSET UNITYSDK_OFFSET(0xB228C20)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONBGMEMOTIONSTATECHANGEINTRAIN_OFFSET UNITYSDK_OFFSET(0xB228A70)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xB2284D0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONLEAVEPOSESWITCHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB2296E0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMAZETOBATTLETRANSITBEGIN_OFFSET UNITYSDK_OFFSET(0xB228980)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICCOMPOSITIONSYNC_OFFSET UNITYSDK_OFFSET(0xB2203F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICRHYTHMINFOREFRESH_OFFSET UNITYSDK_OFFSET(0xB220E60)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICSYNC_OFFSET UNITYSDK_OFFSET(0xB2299D0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONONROTATABLEREGIONIGNOREAIRLOCKCHANGED_OFFSET UNITYSDK_OFFSET(0xB224780)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONOPENCHEST_OFFSET UNITYSDK_OFFSET(0xB227870)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYERLOCKNEWTARGET_OFFSET UNITYSDK_OFFSET(0xB228640)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYTALKFINISH_OFFSET UNITYSDK_OFFSET(0xB2290B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYTALK_OFFSET UNITYSDK_OFFSET(0xB229060)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPUZZLESOLVED_OFFSET UNITYSDK_OFFSET(0xB227C50)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONSTEPONPOSESWITCHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB229570)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONTEAMLEADERCHANGED_OFFSET UNITYSDK_OFFSET(0xB223EB0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONTEAMLEADERSWITCHED_OFFSET UNITYSDK_OFFSET(0xB229100)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONUISETMUSICSUCCESS_OFFSET UNITYSDK_OFFSET(0xB2288F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__PLAYSEQUENCEVOCALLBACK_OFFSET UNITYSDK_OFFSET(0xB229310)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__REFRESHBGMEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0xB226080)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETBGMEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0xB229A60)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETCOMPOSITIONSTAGEBGMSTATE_OFFSET UNITYSDK_OFFSET(0xB21F9D0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETDEFAULTSTATES_OFFSET UNITYSDK_OFFSET(0xB222140)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETMRCURRENTGRID_OFFSET UNITYSDK_OFFSET(0xB21E800)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETTRACKGRIDSTATEARLIETRANSITION_OFFSET UNITYSDK_OFFSET(0xB220040)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETTRACKGRIDSTATE_OFFSET UNITYSDK_OFFSET(0xB21F230)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SMOOTHBUSYRTPCVALUE_OFFSET UNITYSDK_OFFSET(0xB223DA0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__STARTBGM_OFFSET UNITYSDK_OFFSET(0xB222560)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKMONSTERALERT_OFFSET UNITYSDK_OFFSET(0xB223950)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xB21FDE0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKPLAYERDISTANCE_OFFSET UNITYSDK_OFFSET(0xB224050)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKSTEPONPOSE_OFFSET UNITYSDK_OFFSET(0xB224470)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TRYSWITCHBUSYBGM_OFFSET UNITYSDK_OFFSET(0xB2273C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONADVENTUREPHASEENTERED_B__87_0_OFFSET UNITYSDK_OFFSET(0xB22A010)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONBATTLETOMAZETRANSITFADEOUTEND_B__95_0_OFFSET UNITYSDK_OFFSET(0xB22A030)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONHIDELOADINGPAGE_B__88_0_OFFSET UNITYSDK_OFFSET(0xB22A020)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONPUZZLESOLVED_B__86_0_OFFSET UNITYSDK_OFFSET(0xB22A000)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___PLAYSEQUENCEVOCALLBACK_B__99_0_OFFSET UNITYSDK_OFFSET(0xB22A040)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureAudioManager_TypeDefinitionIndex = 56527;

	class AdventureAudioManager : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_s_VisibleReasons()
		{
			return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(AdventureAudioManager_TypeDefinitionIndex)->GetStaticField(0x5BD30);
		}
		// static const ::System::String* TRACK_GRID_GROUP_NAME; // 0x0
		// static const ::System::String* TRACK_GRID_STATE_ON_NAME; // 0x0
		// static const ::System::String* TRACK_GRID_STATE_OFF_NAME; // 0x0
		// static const ::System::String* _STAGE_BGM_STATE_GROUP_NAME; // 0x0
		::System::String* _OverrideCenterSourceName; // 0x10
		::System::String* _OverrideFloorDefaultEmotion; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _DistrictTransitionEntities; // 0x20
		::System::String* _MissionEmotionState; // 0x28
		::System::String* _OverrideStepOnPoseStateA; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _AdventureAudioStateDict; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AdventureAudioManager_AlertedMonsterInfo*>* _AlertedMonsterDict; // 0x40
		::RPG::GameCore::GameEntity* _AtmosphereCenterAudioEntity_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* _GameplayEmotionStack; // 0x50
		::System::Collections::Generic::Queue_1<::System::UInt32>* _VOSequence; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _LookAtThreatVOTriggered; // 0x60
		::System::String* _CurrentEmotionState; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* _DistrictEmotionStack; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* _UIMenuBGMStack; // 0x78
		::System::Object* _PendingUserParam; // 0x80
		::System::String* _OverrideStepOnPoseStateB; // 0x88
		::System::String* _WalkOnWallEmotionState; // 0x90
		::Il2CppArray<::System::Boolean>* _CurrentGrids; // 0x98
		::RPG::GameCore::GameEntity* _CacheCurTeamLeader; // 0xA0
		::RPG::Client::AdventurePhase* _Phase; // 0xA8
		::Class_1_42A859F1CFE8581B* _SpaceChecker; // 0xB0
		::RPG::GameCore::MazeFloorRow* _FloorRow; // 0xB8
		::Class_1_A4735193F3DD293E* _JukeBoxController; // 0xC0
		::System::String* _MissionSoundEffectState_k__BackingField; // 0xC8
		::UnityEngine::Transform* _CacheTeamLeaderTrans; // 0xD0
		::RPG::GameCore::MazePlaneRow* _PlanRow; // 0xD8
		::RPG::Client::MusicRhythmSong* _MRCurrentPlayingSong; // 0xE0
		::System::Int32 _MRCurrentBar; // 0xE8
		::System::UInt32 _MRPlayingStageBGMEventID; // 0xEC
		::System::Single _StepOnPosePercent; // 0xF0
		::System::Single _BusyVolumeRTPCValue; // 0xF4
		::System::Boolean _BackgroundTalking; // 0xF8
		::System::Boolean _IsStepOnPoseChanged; // 0xF9
		::System::Single _VOSequenceInterval; // 0xFC
		::System::Int32 _MRStageCurrentGrid; // 0x100
		::System::UInt32 _PlayingVOSequenceID; // 0x104
		::System::Int32 _MRCurrentGrid; // 0x108
		::System::Boolean _IsStepOnPoseProcessing; // 0x10C
		::System::Boolean _IsMenuBGMPlaying; // 0x10D
		::System::Boolean _BusyFlag; // 0x10E
		::System::Single _PlayerDistanceRTPCValue; // 0x110
		::System::Single _RTPCRangeFactor; // 0x114
		::System::Single _MRBarDuration; // 0x118
		::System::UInt32 _CurrentTeamLeaderAvatarID; // 0x11C
		::RPG::Client::MRMusicCompositionMode _MusicCompositionMode; // 0x120
		::RPG::GameCore::AdventureCharacterVOType _PendingMazeVOType; // 0x124
		::System::Single _RTPCRangeMin; // 0x128
		::RPG::Client::AudioBGMEmotionSourceType _CurrentEmotionSourceType; // 0x12C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SetMusicEditMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUSICEDITMODE_OFFSET))(this, a1);
		}

		::System::Void PlayMusicComposition(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMUSICCOMPOSITION_OFFSET))(this, a1);
		}

		::System::Void StopMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Void PlayMusicCompositionStageBGM(::System::String* a1, ::UnityEngine::GameObject* a2, ::AkCallbackType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMUSICCOMPOSITIONSTAGEBGM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PauseMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PAUSEMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Void ResumeMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESUMEMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Void SetMusicCompositionToGrid(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUSICCOMPOSITIONTOGRID_OFFSET))(this, a1);
		}

		::System::Void ForceSetCurrentTrackGridState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_FORCESETCURRENTTRACKGRIDSTATE_OFFSET))(this);
		}

		::System::Single GetMRMenuProgressInGrid(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETMRMENUPROGRESSINGRID_OFFSET))(this, a1);
		}

		::System::Void _InitMRMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__INITMRMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Void _TickMusicComposition(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKMUSICCOMPOSITION_OFFSET))(this, a1);
		}

		::System::Void _OnMusicCompositionSync(::AkMusicSyncCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkMusicSyncCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICCOMPOSITIONSYNC_OFFSET))(this, a1);
		}

		::System::Void _OnMusicRhythmInfoRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICRHYTHMINFOREFRESH_OFFSET))(this, a1);
		}

		::System::Void _SetMRCurrentGrid(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETMRCURRENTGRID_OFFSET))(this, a1);
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

		::Class_1_E6E7D50288DDC3E7* get_MRStageBGMVisualizeData()
		{
			return ((::Class_1_E6E7D50288DDC3E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRSTAGEBGMVISUALIZEDATA_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void _TickMonsterAlert(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKMONSTERALERT_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderChanged(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONTEAMLEADERCHANGED_OFFSET))(this, a1);
		}

		::System::Void _TickPlayerDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKPLAYERDISTANCE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void TrySwitchNormalBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_TRYSWITCHNORMALBGM_OFFSET))(this);
		}

		::System::Void InitMazeAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_INITMAZEAUDIO_OFFSET))(this);
		}

		::System::Void SetAudioState(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETAUDIOSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SwitchUIMenuBGM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHUIMENUBGM_OFFSET))(this, a1);
		}

		::System::Void StopAllUIMenuBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPALLUIMENUBGM_OFFSET))(this);
		}

		::System::Void StopUIMenuBGM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPUIMENUBGM_OFFSET))(this, a1);
		}

		::System::Void PlayMazeCharacterVO(::RPG::GameCore::AdventureCharacterVOType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterVOType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMAZECHARACTERVO_OFFSET))(this, a1);
		}

		::System::Void PlayVOSequence(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Single a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYVOSEQUENCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StopVOSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPVOSEQUENCE_OFFSET))(this);
		}

		::System::Void SwitchJukeBoxToCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHJUKEBOXTOCURRENT_OFFSET))(this);
		}

		::System::Void SwitchJukeBox(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHJUKEBOX_OFFSET))(this, a1);
		}

		::System::Void RegisterTargetAsJukeboxEmitter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_REGISTERTARGETASJUKEBOXEMITTER_OFFSET))(this, a1);
		}

		::System::Single GetJukeBoxLoudness(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXLOUDNESS_OFFSET))(this, a1, a2);
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

		::System::Boolean CheckEntityCanPlaySound(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_CHECKENTITYCANPLAYSOUND_OFFSET))(this, a1);
		}

		::System::Void OnEnterTransitionDistrict(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONENTERTRANSITIONDISTRICT_OFFSET))(this, a1);
		}

		::System::Void OnExitTransitionDistrict(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONEXITTRANSITIONDISTRICT_OFFSET))(this, a1);
		}

		::System::Void ClearBGMState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_CLEARBGMSTATE_OFFSET))(this);
		}

		::System::Void OverrideFloorDefaultEmotion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_OVERRIDEFLOORDEFAULTEMOTION_OFFSET))(this, a1);
		}

		::System::Void SetMissionBGMEmotionState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMISSIONBGMEMOTIONSTATE_OFFSET))(this, a1);
		}

		::System::Void SetSoundEffectState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETSOUNDEFFECTSTATE_OFFSET))(this, a1);
		}

		::System::Void ResetSoundEffectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESETSOUNDEFFECTSTATE_OFFSET))(this);
		}

		::System::Void EnterDistrictBGMEmotion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ENTERDISTRICTBGMEMOTION_OFFSET))(this, a1);
		}

		::System::Void ExitDistrictBGMEmotion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_EXITDISTRICTBGMEMOTION_OFFSET))(this, a1);
		}

		::System::Void SetGameplayBGMEmotion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETGAMEPLAYBGMEMOTION_OFFSET))(this, a1);
		}

		::System::Void ResetGameplayBGMEmotion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESETGAMEPLAYBGMEMOTION_OFFSET))(this, a1);
		}

		::System::UInt32 GetSubmissionIDFromEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETSUBMISSIONIDFROMENTITY_OFFSET))(this, a1);
		}

		::System::Void SetupSoundAttenuation(::RPG::GameCore::PropSoundAttenuation* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSoundAttenuation*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETUPSOUNDATTENUATION_OFFSET))(this, a1, a2);
		}

		::System::Void OverrideAtmosphereCenterAudio(::System::Nullable_1<::UnityEngine::Vector3> a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_OVERRIDEATMOSPHERECENTERAUDIO_OFFSET))(this, a1, a2);
		}

		::System::Void _InitFloorSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__INITFLOORSETTINGS_OFFSET))(this);
		}

		::System::Void _SetDefaultStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETDEFAULTSTATES_OFFSET))(this);
		}

		::System::Void OnAlertedMonsterAdd(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONALERTEDMONSTERADD_OFFSET))(this, a1);
		}

		::System::Void OnAlertedMonsterRemove(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONALERTEDMONSTERREMOVE_OFFSET))(this, a1);
		}

		::System::Void OnMonsterDestroy(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONMONSTERDESTROY_OFFSET))(this, a1);
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

		::System::Single _SmoothBusyRTPCValue(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SMOOTHBUSYRTPCVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnOpenChest(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONOPENCHEST_OFFSET))(this, a1);
		}

		::System::Void _OnPuzzleSolved(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPUZZLESOLVED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Boolean _IsCurrentInTown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ISCURRENTINTOWN_OFFSET))(this);
		}

		::System::Void _OnUISetMusicSuccess(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONUISETMUSICSUCCESS_OFFSET))(this, a1);
		}

		::System::Void _OnMazeToBattleTransitBegin(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMAZETOBATTLETRANSITBEGIN_OFFSET))(this, a1);
		}

		::System::Void _OnAudioGameStateChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONAUDIOGAMESTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnBGMEmotionStateChangeInTrain(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONBGMEMOTIONSTATECHANGEINTRAIN_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerLockNewTarget(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYERLOCKNEWTARGET_OFFSET))(this, a1);
		}

		::System::Void _OnBattleToMazeTransitFadeOutEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONBATTLETOMAZETRANSITFADEOUTEND_OFFSET))(this, a1);
		}

		::System::Void _OnPlayTalk(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYTALK_OFFSET))(this, a1);
		}

		::System::Void _OnPlayTalkFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYTALKFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONTEAMLEADERSWITCHED_OFFSET))(this, a1);
		}

		::System::Void _PlaySequenceVOCallback(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__PLAYSEQUENCEVOCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnOnRotatableRegionIgnoreAirlockChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONONROTATABLEREGIONIGNOREAIRLOCKCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnStepOnPoseSwitcherCollider(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONSTEPONPOSESWITCHERCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void _OnLeavePoseSwitcherCollider(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONLEAVEPOSESWITCHERCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void _OnMusicSync(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICSYNC_OFFSET))(this, a1);
		}

		::System::Void _TickStepOnPose(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKSTEPONPOSE_OFFSET))(this, a1);
		}

		::System::Void _SetBGMEmotionState(::RPG::Client::AudioBGMEmotionSourceType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioBGMEmotionSourceType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETBGMEMOTIONSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshBGMEmotionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__REFRESHBGMEMOTIONSTATE_OFFSET))(this);
		}

		::System::Void _LogActiveSubmissionsInfo(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__LOGACTIVESUBMISSIONSINFO_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* get_AtmosphereCenterAudioEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_ATMOSPHERECENTERAUDIOENTITY_OFFSET))(this);
		}

		::System::Void set_AtmosphereCenterAudioEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SET_ATMOSPHERECENTERAUDIOENTITY_OFFSET))(this, a1);
		}

		::System::String* get_MissionEmotionState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MISSIONEMOTIONSTATE_OFFSET))(this);
		}

		::System::String* get_MissionSoundEffectState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MISSIONSOUNDEFFECTSTATE_OFFSET))(this);
		}

		::System::Void set_MissionSoundEffectState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SET_MISSIONSOUNDEFFECTSTATE_OFFSET))(this, a1);
		}

		::System::String* get__StepOnPoseStateA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET__STEPONPOSESTATEA_OFFSET))(this);
		}

		::System::String* get__StepOnPoseStateB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET__STEPONPOSESTATEB_OFFSET))(this);
		}

		::System::Void __OnPuzzleSolved_b__86_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONPUZZLESOLVED_B__86_0_OFFSET))(this);
		}

		::System::Void __OnAdventurePhaseEntered_b__87_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONADVENTUREPHASEENTERED_B__87_0_OFFSET))(this);
		}

		::System::Void __OnHideLoadingPage_b__88_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONHIDELOADINGPAGE_B__88_0_OFFSET))(this);
		}

		::System::Void __OnBattleToMazeTransitFadeOutEnd_b__95_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONBATTLETOMAZETRANSITFADEOUTEND_B__95_0_OFFSET))(this);
		}

		::System::Void __PlaySequenceVOCallback_b__99_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___PLAYSEQUENCEVOCALLBACK_B__99_0_OFFSET))(this);
		}
	};
}
