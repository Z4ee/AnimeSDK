#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterVOType.h"
#include "unitysdk/RPG/GameCore/AudioGameState.h"
#include "unitysdk/RPG/GameCore/CharacterVOType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/RPG/GameCore/UIAudioStage.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class AvatarHeightRTPCConfig; }
namespace RPG::GameCore { class BattleStageConfig; }
namespace RPG::GameCore { class ChallengeBossDifficultyStateConfig; }
namespace RPG::GameCore { class JukeBoxConfig; }
namespace RPG::GameCore { class MazeMonsterAlertConfig; }
namespace RPG::GameCore { class PerformanceAudioEventConfig; }
namespace RPG::GameCore { class PlayerSpaceConfig; }
namespace RPG::GameCore { class SerialBellsConfig; }
namespace RPG::GameCore { class StepOnPoseConfig; }
namespace RPG::GameCore { class StoryStateConfig; }
namespace RPG::GameCore { class ToneAudioEventConfig; }
namespace RPG::GameCore { class VibrationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AUDIOCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19488F80)
#define RPG_GAMECORE_AUDIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1948C460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioConfig_TypeDefinitionIndex = 15559;

	class AudioConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* GlobalSoundBank; // 0x10
		::Il2CppArray<::System::String*>* PreLoadEvent; // 0x18
		::System::String* FullPCkNameSoundBank; // 0x20
		::System::String* FullPCkNameMusic; // 0x28
		::System::String* FullPCkNameStream; // 0x30
		::System::String* FullPCkNameExternal; // 0x38
		::System::String* FullPCkNameVOBank; // 0x40
		::System::String* FullPCkNameExtra; // 0x48
		::System::UInt32 FullPckCount; // 0x50
		::System::UInt32 FullPckCountPS; // 0x54
		::System::UInt32 ExtraExternalPckCount; // 0x58
		::System::String* MinimumPckName; // 0x60
		::System::String* MinimumSoundBankName; // 0x68
		::System::String* InitSoundBankName; // 0x70
		::System::Boolean UsePCKMode; // 0x78
		::System::String* MotionShareSet; // 0x80
		::System::String* EventBGMMute; // 0x88
		::System::String* EventBGMUnmute; // 0x90
		::System::String* EventBGMMuteWithFadeOut; // 0x98
		::System::String* EventBGMUnmuteWithFadeOut; // 0xA0
		::System::String* EventSFXMute; // 0xA8
		::System::String* EventSFXUnmute; // 0xB0
		::System::String* EventVOMute; // 0xB8
		::System::String* EventVOUnmute; // 0xC0
		::System::String* EventBattleVOMute; // 0xC8
		::System::String* EventBattleVOUnmute; // 0xD0
		::System::String* EventCGSFXMute; // 0xD8
		::System::String* EventCGSFXUnmute; // 0xE0
		::System::String* DefaultBGMEvent; // 0xE8
		::System::String* LoginBGMEvent; // 0xF0
		::System::String* GameStateGroupName; // 0xF8
		::System::String* MenuGroupName; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MenuBGMStates; // 0x108
		::System::String* MazePlaneTypeGroupName; // 0x110
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlaneType, ::System::String*>* MazePlaneTypeStates; // 0x118
		::System::String* EventBattleBegin; // 0x120
		::System::String* EventBattleExit; // 0x128
		::System::String* EventBattleTurnBeginLight; // 0x130
		::System::String* EventBattleTurnBeginDark; // 0x138
		::System::String* CombatStateGroupName; // 0x140
		::System::String* BGMWorldStateGroupName; // 0x148
		::System::String* CutSceneStateGroupName; // 0x150
		::RPG::GameCore::StoryStateConfig* StoryState; // 0x158
		::System::String* NoneState; // 0x160
		::System::String* DistrictTransitionState; // 0x168
		::System::String* DistrictNPCCrowdRTPCName; // 0x170
		::System::String* BattleSpeedStateGroupName; // 0x178
		::System::String* BattleSpeedDoubleState; // 0x180
		::System::String* BattleSpeedNormalState; // 0x188
		::System::String* AutoBattleStateGroupName; // 0x190
		::System::String* AutoBattleOnState; // 0x198
		::System::String* AutoBattleOffState; // 0x1A0
		::System::String* DeviceStateGroupName; // 0x1A8
		::System::String* DeviceStateHeadphone; // 0x1B0
		::System::String* DeviceStateSpeaker; // 0x1B8
		::System::Single LightHitVODelayTime; // 0x1C0
		::System::String* FootStepSurfaceSwitchGroup; // 0x1C8
		::System::String* ShoesTypeSwitchGroup; // 0x1D0
		::System::String* EventFootStepSurface; // 0x1D8
		::RPG::GameCore::MazeMonsterAlertConfig* MazeMonsterAlert; // 0x1E0
		::System::String* MasterVolumeRTPCName; // 0x1E8
		::System::String* BGMVolumeRTPCName; // 0x1F0
		::System::String* SFXVolumeRTPCName; // 0x1F8
		::System::String* VOVolumeRTPCName; // 0x200
		::RPG::GameCore::VibrationConfig* Vibration; // 0x208
		::RPG::GameCore::AudioStateConfig* DefaultEmotionState; // 0x210
		::RPG::GameCore::AudioStateConfig* SoundEffectState; // 0x218
		::System::String* AvatarGenderGroupName; // 0x220
		::System::String* AvatarGenterStateMale; // 0x228
		::System::String* AvatarGenterStateFamale; // 0x230
		::System::String* LanguageGroupName; // 0x238
		::System::String* EventBGMStop; // 0x240
		::System::String* EventVOStop; // 0x248
		::System::String* EventSFXStop; // 0x250
		::System::String* EventAmbStop; // 0x258
		::System::String* EventAmbBattleStop; // 0x260
		::System::String* EventBGMBattleStop; // 0x268
		::System::String* EventBattleEnd; // 0x270
		::System::String* EventBGMPause; // 0x278
		::System::String* EventVOPause; // 0x280
		::System::String* EventSFXPause; // 0x288
		::System::String* EventBGMResume; // 0x290
		::System::String* EventVOResume; // 0x298
		::System::String* EventSFXResume; // 0x2A0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::UIAudioStage, ::System::String*>* UIAudioStageStartEventMap; // 0x2A8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::UIAudioStage, ::System::String*>* UIAudioStageEndEventMap; // 0x2B0
		::System::String* EventUISliderPlus; // 0x2B8
		::System::String* EventUISliderMinus; // 0x2C0
		::System::Single UISliderCD; // 0x2C8
		::System::String* UINavigationSoundEvent; // 0x2D0
		::System::String* UINavigationChangeSoundEvent; // 0x2D8
		::System::String* UIWheelChangeSoundEvent; // 0x2E0
		::System::String* UIShortCutSoundEvent; // 0x2E8
		::System::String* EventBattlePassSelectLightCone; // 0x2F0
		::System::String* EventBattlePassClickLightCone; // 0x2F8
		::System::String* EventPhoneMessageItemReceived; // 0x300
		::System::String* EventPhoneMessageItemSent; // 0x308
		::System::String* SoundHitEvent; // 0x310
		::System::String* CriticalHitEvent; // 0x318
		::System::String* EventBattleRoundEnd; // 0x320
		::System::String* EventBattleAttack; // 0x328
		::System::String* EventBattleSkill; // 0x330
		::System::String* EventBattleUltral; // 0x338
		::System::String* EventBattleCheckModeStart; // 0x340
		::System::String* EventBattleCheckModeend; // 0x348
		::System::String* EventGameObjectFadeOut; // 0x350
		::System::String* EventGameObjectFadeIn; // 0x358
		::RPG::GameCore::BattleStageConfig* BattleStage; // 0x360
		::System::String* EffectScaleRTPCName; // 0x368
		::System::String* BattleStingerEvent; // 0x370
		::System::String* ExternalSourceName; // 0x378
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CharacterVOType, ::System::String*>* CharacterVOEventMap; // 0x380
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureCharacterVOType, ::System::String*>* AdventureCharacterVOEventMap; // 0x388
		::System::String* EventStopJoinTeamWithSpecialTemate; // 0x390
		::System::String* AdventureCharacterVOSpeakerRTPC; // 0x398
		::System::Single BattleWinVOReduceProb; // 0x3A0
		::System::Single BattleWinVOAddProb; // 0x3A4
		::System::Single LookAtThreatVOReduceProb; // 0x3A8
		::System::Single LookAtThreatAddProb; // 0x3AC
		::System::Int32 LookAtThreatCD; // 0x3B0
		::System::Single OpenChestVOProb; // 0x3B4
		::System::Single SolvePuzzleVOProb; // 0x3B8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* UIButtonSoundEventMap; // 0x3C0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AudioGameState, ::System::String*>* AudioGameStateMap; // 0x3C8
		::RPG::GameCore::PerformanceAudioEventConfig* PerformanceAudioEvents; // 0x3D0
		::RPG::GameCore::ToneAudioEventConfig* ToneAudioEvents; // 0x3D8
		::RPG::GameCore::JukeBoxConfig* JukeBoxInfo; // 0x3E0
		::RPG::GameCore::PlayerSpaceConfig* PlayerSpaceInfo; // 0x3E8
		::RPG::GameCore::SerialBellsConfig* SerialBellsInfo; // 0x3F0
		::RPG::GameCore::AvatarHeightRTPCConfig* AvatarHeightRTPCConfig; // 0x3F8
		::System::String* CameraToAvatarRTPCName; // 0x400
		::System::Single CameraToAvatarRTPCUpdateThreshold; // 0x408
		::System::String* SeaLevelAltitudeRTPCName; // 0x410
		::System::String* CharacterBodySizeRTPCName; // 0x418
		::System::String* BattleMonsterStanceRTPCName; // 0x420
		::System::String* BattleMonsterStanceCountRTPCName; // 0x428
		::System::String* ADVLightIntensityRTPCName; // 0x430
		::RPG::GameCore::StepOnPoseConfig* StepOnPoseConfig; // 0x438
		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* DefaultStateConfigList; // 0x440
		::System::String* SoundEventMarkerPrefix; // 0x448
		::RPG::GameCore::ChallengeBossDifficultyStateConfig* ChallengeBossDifficultyStateConfig; // 0x450
		::System::String* EventAdvNPCHide; // 0x458
		::System::String* EventAdvNPCShow; // 0x460
		::System::String* EventAdvPropHide; // 0x468
		::System::String* EventAdvPropShow; // 0x470
		::System::String* EventEraFlipperSpotDayToNight; // 0x478
		::System::String* EventEraFlipperSpotNightToDay; // 0x480
		::System::String* EventEraFlipperExit; // 0x488
		::System::String* EventEraFlipperEnter; // 0x490
		::System::String* EventEraFlipperRaidEnter; // 0x498
		::System::String* EraFlipperStateGroupName; // 0x4A0
		::System::String* EraFlipperSpotRTPCName; // 0x4A8
		::System::String* EventEraFlipperDeviceSwitchStart; // 0x4B0
		::System::String* EventEraFlipperDeviceSwitchEnd; // 0x4B8
		::System::String* EraFlipperStateLightFollowPlayer; // 0x4C0
		::System::Boolean DisableVibration; // 0x4C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
