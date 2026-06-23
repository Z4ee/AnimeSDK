#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9BDB9B3460BCD57E.h"
#include "unitysdk/MoleMole/AvatarSteerType.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/MoleMole/CharacterScriptConfig_NumberPositiveType.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/MoleMole/Config/ShoesType.h"
#include "unitysdk/MoleMole/SkillCharacterScriptConfig.h"

namespace MoleMole { class AvatarUIElementColorConfigs; }
namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUI; }
namespace MoleMole { class CharacterScriptConfig_HUDInfoDict; }
namespace MoleMole { class ConfigEnvironmentFeatureModifier; }
namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Config { class AudioRTPCConvert; }
namespace MoleMole::Config { class ConfigAttachmentItem; }
namespace MoleMole::Config { class ConfigAudioFetchAnimatorParam; }
namespace MoleMole::Config { class ConfigDynamicAttachItem; }
namespace MoleMole::Config { class ConfigMisc_InteractRotate; }
namespace MoleMole::Config { class HitRotationOverrideMapItem; }
namespace MoleMole::Config { class SceneAvatarCutSceneConfig; }
namespace MoleMole::LevelPerform { class DirectKillShakeSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12C53E30)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_TypeDefinitionIndex = 72217;

	class CharacterScriptConfig : public ::MoleMole::SkillCharacterScriptConfig
	{
	public:
		::System::Boolean MoveKeepDirection; // 0x278
		::MoleMole::AvatarSteerType SteerType; // 0x279
		::MoleMole::AvatarSteerType JoyStickDirLerpType; // 0x27A
		::System::Single JoyStickDirLerpSpeed; // 0x27C
		::MoleMole::AvatarSteerType JoyStickDirCameraLerpType; // 0x280
		::System::Single JoyStickDirCameraLerpSpeed; // 0x284
		::Il2CppArray<::System::String*>* JoyStickReleaseNotResetZeroParams; // 0x288
		::System::Single LockTargetCoolTime; // 0x290
		::System::Single LockTargetRemoteSwapAngle; // 0x294
		::System::Single LockTargetRemoteTargetAngle; // 0x298
		::System::Single LockTargetSelfWeight; // 0x29C
		::System::Single LockTargetOffsetScore; // 0x2A0
		::System::Single LockOnRadiusRatio; // 0x2A4
		::System::Single LockOnRadiusDelta; // 0x2A8
		::System::Boolean HideHintArrow; // 0x2AC
		::System::String* NomalCameraConfig; // 0x2B0
		::System::String* InLevelOverrideNomalCameraConfig; // 0x2B8
		::MoleMole::Battle::EntityBodySize EntityBodySize; // 0x2C0
		::System::Single ObserveCameraLookHeight; // 0x2C4
		::System::Single NormalCameraLookHeight; // 0x2C8
		::System::Single AvatarCameraLookHeight; // 0x2CC
		::System::Single FightLevel2CameraLookHeight; // 0x2D0
		::System::Single FightLevel3CameraLookHeight; // 0x2D4
		::System::Single MainCityNormalCameraLookHeight; // 0x2D8
		::System::Single MainCityIndoorCameraLookHeight; // 0x2DC
		::System::String* ObserveSphereCameraOverrideConfig; // 0x2E0
		::System::String* NomalSphereCameraConfig; // 0x2E8
		::System::String* FightLevel1SphereCameraOverrideConfig; // 0x2F0
		::System::String* FightLevel2SphereCameraOverrideConfig; // 0x2F8
		::System::String* FightLevel3SphereCameraOverrideConfig; // 0x300
		::System::String* MainCityNormalSphereCameraOverrideConfig; // 0x308
		::System::String* MainCityIndoorSphereCameraOverrideConfig; // 0x310
		::System::Boolean MuteHitGroundKnock; // 0x318
		::System::Boolean MuteGourndHitMovement; // 0x319
		::System::Boolean MuteHitRotate; // 0x31A
		::System::Collections::Generic::List_1<::MoleMole::Config::HitRotationOverrideMapItem*>* OverrideEffectHitDataList; // 0x320
		::System::Boolean MuteKillRotate; // 0x328
		::System::Boolean CanOverkillBeHit; // 0x329
		::System::Single OverkillBeHitDuration; // 0x32C
		::System::Int32 OverkillBeHitCount; // 0x330
		::System::Single GroundHitMovementCurveRatio; // 0x334
		::System::Boolean MuteHitSky; // 0x338
		::System::Boolean MuteAirHitMovement; // 0x339
		::System::Single AirHitMovementCurveRatio; // 0x33C
		::System::Single MaxDeathTime; // 0x340
		::System::Boolean ForceFrontHit; // 0x344
		::System::Boolean ForceBackHit; // 0x345
		::System::Boolean EnterDyingWhenDeadHit; // 0x346
		::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>* CustomProperties; // 0x348
		::System::Collections::Generic::HashSet_1<::System::String*>* MPCustomProperties; // 0x350
		::MoleMole::Config::ShoesType CharacterShoes; // 0x358
		::Enum_3_9BDB9B3460BCD57E DefendType; // 0x35C
		::System::Collections::Generic::List_1<::MoleMole::TwoDiffValue_2<::MoleMole::Config::ConfigAudioFetchAnimatorParam*, ::MoleMole::Config::AudioRTPCConvert*>*>* audioFetchAnimatorParams; // 0x360
		::System::String* TeamShieldHudAttachPoint; // 0x368
		::System::Single TeamShieldHudOffsetX; // 0x370
		::System::Single TeamShieldHudOffsetY; // 0x374
		::System::Single TeamShieldHudDynamicOffsetYSpeed; // 0x378
		::System::Single TeamShieldHudDynamicOffsetThresholdY; // 0x37C
		::System::Single TeamShieldHudDynamicOffsetXSpeed; // 0x380
		::System::Single TeamShieldHudDynamicOffsetThresholdX; // 0x384
		::System::Single HudOffsetX; // 0x388
		::System::Single HudOffsetY; // 0x38C
		::System::Single HudDynamicOffsetYSpeed; // 0x390
		::System::Single HudDynamicOffsetThresholdY; // 0x394
		::System::Single HudDynamicOffsetXSpeed; // 0x398
		::System::Single HudDynamicOffsetThresholdX; // 0x39C
		::System::Single HudOffsetDeltaX; // 0x3A0
		::UnityEngine::AnimationCurve* HudScreenOffsetCurveX; // 0x3A8
		::System::Single HudOffsetDeltaY; // 0x3B0
		::UnityEngine::AnimationCurve* HudScreenOffsetCurveY; // 0x3B8
		::System::String* Override_MONSTER_HUD_SCALE_CURVE; // 0x3C0
		::System::String* Override_MONSTER_HUD_ALPHA_CURVE; // 0x3C8
		::MoleMole::CharacterScriptConfig_HUDInfoDict* OverrideHUDInfo; // 0x3D0
		::System::Single PromoteHudOffsetY; // 0x3D8
		::MoleMole::AvatarUIElementColorConfigs* UIElementColorConfigs; // 0x3E0
		::System::Boolean CloseRepickBornPos; // 0x3E8
		::System::String* TimeSlowFallbackKey; // 0x3F0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* TimeSlowAnimEventIds; // 0x3F8
		::MoleMole::LevelPerform::DirectKillShakeSetting* fallbackShakeSetting; // 0x400
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>* levelSettlementShakeSetting; // 0x408
		::MoleMole::Config::SceneAvatarCutSceneConfig* scenePerformConfig; // 0x410
		::System::Int32 PhotoCameraConfig; // 0x418
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAttachmentItem*>* attachmentsGroup; // 0x420
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicAttachItem*>* dynamicAttachGroup; // 0x428
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>* overrideRunStates; // 0x430
		::System::String* overrideRunStateTiltBone; // 0x438
		::System::Boolean UseAnimationBlendTilt; // 0x440
		::System::String* AnimationBlendTiltParam; // 0x448
		::System::Boolean LeftJoyStickMode; // 0x450
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMisc_InteractRotate*>* OverrideInteractRotateInfo; // 0x458
		::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI* CustomPropertyUIParams; // 0x460
		::System::Boolean SingleAvatarShowPerfectSwitchEnergy; // 0x468
		::System::String* InLevelLocalRoleHudUICtrlName; // 0x470
		::MoleMole::CharacterScriptConfig_NumberPositiveType InLevelLocalRoleHudOffsetXPositiveType; // 0x478
		::MoleMole::CharacterScriptConfig_NumberPositiveType InLevelLocalRoleHudOffsetYPositiveType; // 0x47C
		::System::Boolean FisticuffUseNormalFrameHalt; // 0x480
		::System::Boolean ForceKeepCollisionDetectMode; // 0x481
		::System::String* AlertConfigKey; // 0x488
		::System::Boolean MuteMonsterLevelHUDOnIdle; // 0x490
		::System::Boolean ShowMonsterHPWhenLevelHUDShowOnIdle; // 0x491
		::System::Boolean MuteMonsterLevelHUDOnEnterBattle; // 0x492
		::MoleMole::ConfigEnvironmentFeatureModifier* EnvironmentFeatureModifier; // 0x498
		::System::Boolean EnableAvatarFlyHeightLimit; // 0x4A0
		::System::Single AvatarFlyHeightLimitStart; // 0x4A4
		::System::Single AvatarFlyHeightLimitMax; // 0x4A8
		::System::String* AvatarFlyHeightCurveKey; // 0x4B0
		::System::Boolean EnableAvatarAI; // 0x4B8
		::System::String* LifePointCustomProperty; // 0x4C0
		::System::Collections::Generic::List_1<::System::Int32>* DynamicWeapons; // 0x4C8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* DefaultDynamicAccs; // 0x4D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
