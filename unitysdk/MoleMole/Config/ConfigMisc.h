#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_EffectMaterialControlConfig.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_HPBarLineColorParam.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_HPBarLineParam.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_LevelHUDOverrideParams.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_NapAnimatorUpdateMode.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_SearchValidBornPos.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/MoleMole/FuncSwitchType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class DitherConfig; }
namespace MoleMole { class Traffic_Area; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Config { class ConfigAvatarGround; }
namespace MoleMole::Config { class ConfigHollowLevelEnd; }
namespace MoleMole::Config { class ConfigMisc_InteractRotate; }
namespace MoleMole::Config { class ConfigMisc_PlayerInitSetting; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class ConfigTurnback; }
namespace MoleMole::Config { class ConfigUISettings; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Shader; }

#define MOLEMOLE_CONFIG_CONFIGMISC_GETMONSTERLEVELHUDSHOWDISTANCEONIDLE_OFFSET UNITYSDK_OFFSET(0x16C460F0)
#define MOLEMOLE_CONFIG_CONFIGMISC_TRYGETMONSTERLEVELHUDOVERRIDESHOWDURATIONONENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x16C46240)
#define MOLEMOLE_CONFIG_CONFIGMISC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C463A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_TypeDefinitionIndex = 48032;

	class ConfigMisc : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* mainCityStageEntryName; // 0x58
		::System::String* mainCitySectionEntryName; // 0x60
		::MoleMole::Config::ConfigMisc_PlayerInitSetting* mainCityAvatar; // 0x68
		::System::Single globalSwitchAvatarCD; // 0x70
		::System::Int32 SwitchAvatarMaxEP; // 0x74
		::System::Single SwitchAvatarSilenceCD; // 0x78
		::System::Single SwitchAvatarForceCD; // 0x7C
		::MoleMole::Config::ConfigPosRot* posRot; // 0x80
		::MoleMole::Config::ConfigPosRot* posRotAfterBuddyQTE; // 0x88
		::MoleMole::Config::ConfigPosRot* posRotAfterBuddyQTEAssaultAid; // 0x90
		::MoleMole::Battle::AnimatorParamControl* defaultSwitchOutAnimatorParamControl; // 0x98
		::MoleMole::Battle::AnimatorParamControl* defaultSwitchInAnimatorParamControl; // 0xA0
		::System::Single defaultMinVanishDelay; // 0xA8
		::System::Single defaultMaxVanishDelay; // 0xAC
		::System::Single defaultTriggerSwitchOutDelay; // 0xB0
		::System::Single defaultTriggerSwitchInDelay; // 0xB4
		::System::Single defaultFadeOutDuration; // 0xB8
		::System::Single defaultFadeInDuration; // 0xBC
		::System::Collections::Generic::List_1<::System::String*>* SwitchOutAnimatorZoneTags; // 0xC0
		::System::String* PerfectSwitchSPEnoughTag; // 0xC8
		::System::Single PerfectSwitchChargeValueLimit; // 0xD0
		::System::Single PerfectSwitchChargeRecoverySpeed; // 0xD4
		::System::Int32 PerfectSwitchInitEnergyPoint; // 0xD8
		::System::Int32 PerfectSwitchMaxEnergyPoint; // 0xDC
		::System::Single PerfectSwitchWindowCloseMuteSwitchTime; // 0xE0
		::System::String* PerfectSwitchCandidateLockTargetID; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* PerfectSwitchParryAttackLevelTagMap; // 0xF0
		::System::Collections::Generic::List_1<::System::String*>* PerfectSwitchMonsterParryAttackTag; // 0xF8
		::System::Single PerfectSwitchExitParrySpecialModeClearCDTime; // 0x100
		::System::Single PerfectSwitchParrySpecialModeRBLDelta; // 0x104
		::System::Boolean PerfectSwitchParrySpecialModeEnableHitNoEffect; // 0x108
		::System::Single qteTriggerDuration; // 0x10C
		::System::Int32 qteMaxPoint; // 0x110
		::System::Single defaultQTEWindowTime; // 0x114
		::System::Single defaultQTEBlockSwitchTime; // 0x118
		::System::Single defaultQTEBlockInterruptTime; // 0x11C
		::System::Single defaultQTEBlockSkillBtnTime; // 0x120
		::System::String* defaultQteStunResetLockTargetId; // 0x128
		::System::Collections::Generic::List_1<::System::String*>* OpenQTEWindowTagList; // 0x130
		::System::Collections::Generic::List_1<::System::String*>* OpenQTEWindowTagListInExQTE; // 0x138
		::System::Collections::Generic::List_1<::System::String*>* QTEHoldIgnoreTagList; // 0x140
		::System::Collections::Generic::List_1<::System::String*>* QTEHoldBlackTagList; // 0x148
		::System::Collections::Generic::List_1<::System::String*>* QTEHoldBlackAnimZoneTagList; // 0x150
		::System::Single QTECancelDoubleClickThresholdTime; // 0x158
		::System::Single AidAttackChainAidAvatarOutDelayTime; // 0x15C
		::System::Int32 AidAttackChainAidQTESwitchInIndex; // 0x160
		::System::Single SwitchTeamInBattleProtectTime; // 0x164
		::System::String* SwitchTeamInBattleDitherKey; // 0x168
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>* mainBuddyPosRots; // 0x170
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>* buddyTeamPosRots; // 0x178
		::MoleMole::Config::ConfigMisc_SearchValidBornPos BuddySearchValidBornPos; // 0x180
		::UnityEngine::Vector3 mainBuddyReviveOffset; // 0x198
		::System::Single mainBuddyReviveDelay; // 0x1A4
		::MoleMole::Battle::AnimatorParamControl* defaultBuddySwitchOutAnimatorParamControl; // 0x1A8
		::MoleMole::Battle::AnimatorParamControl* defaultBuddySwitchInAnimatorParamControl; // 0x1B0
		::System::Single defaultBuddyMinVanishDelay; // 0x1B8
		::System::Single defaultBuddyMaxVanishDelay; // 0x1BC
		::System::Single defaultTriggerBuddySwitchOutDelay; // 0x1C0
		::System::Single defaultTriggerBuddySwitchInDelay; // 0x1C4
		::System::Single defaultBuddyFadeOutDuration; // 0x1C8
		::System::Single defaultBuddyFadeInDuration; // 0x1CC
		::System::Single BuddyQTEGlobalCD; // 0x1D0
		::System::Single MaxSwitchPositionSearchLimitRadius; // 0x1D4
		::System::Single MaxSwitchPositionHeightDiff; // 0x1D8
		::System::Single MaxSwitchPositionSearchDistance; // 0x1DC
		::System::Single MaxSwitchPositionSearchDistanceQTE; // 0x1E0
		::System::Single MaxSwitchPositionSearchDistanceAidAttack; // 0x1E4
		::System::Single StartSwitchPositionTurnAngle; // 0x1E8
		::System::Single StartSwitchPositionTurnCheckDistance; // 0x1EC
		::System::Collections::Generic::List_1<::MoleMole::Config::AidAttackType>* AidAttackTypeLineSelectPosModeList; // 0x1F0
		::System::Single MaxLineSelectPosDistance; // 0x1F8
		::System::Boolean AidAttackUseLineSelectSwitchInPos; // 0x1FC
		::Cinemachine::CinemachineBlendDefinition SwitchAvatarStopCameraShotBlendOutConfig; // 0x200
		::Cinemachine::CinemachineBlendDefinition LevelEndStopCameraShotBlendOutConfig; // 0x210
		::System::Boolean IgnoreStreamingPageSkillButtonBlock; // 0x220
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GlobalSummonTagMax; // 0x228
		::MoleMole::Config::ConfigTurnback* defConfigTurnback; // 0x230
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigTurnback*>* avatarTurnbackOverrideMap; // 0x238
		::MoleMole::Config::ConfigAvatarGround* configAvatarGround; // 0x240
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ExclusivePropertyControllers; // 0x248
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* UnagiMagicValueFlameMaterial; // 0x250
		::System::Single QingYiMatChangePercantage; // 0x258
		::System::String* QingYiMatPath; // 0x260
		::System::String* JaneMatPath; // 0x268
		::System::Single SethChangePercantage; // 0x270
		::System::String* SethMatPath; // 0x278
		::MoleMole::Config::ConfigHollowLevelEnd* hollowLevelEnd; // 0x280
		::MoleMole::Config::ConfigUISettings* uiSettings; // 0x288
		::System::String* LookIKTargetKey; // 0x290
		::System::String* LookIKInMainCityPlayerTargetKey; // 0x298
		::System::String* LookIKInMainCityNpcTargetKey; // 0x2A0
		::System::String* LookIKInMainCityNpcCameraKey; // 0x2A8
		::System::String* LockExecuteCoreKey; // 0x2B0
		::System::UInt32 ExecuteCoreMonsterTemplateID; // 0x2B8
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>* mainBuddyBornPosRots; // 0x2C0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>* BuddyTeamBornPosRots; // 0x2C8
		::System::Int32 MaxFightingBuddyNum; // 0x2D0
		::System::Int32 MaxAssistingBuddyNum; // 0x2D4
		::System::Single HitOtherDistance1; // 0x2D8
		::System::Single HitOtherDistance2; // 0x2DC
		::System::Single HitOtherDistance3; // 0x2E0
		::System::Single EvadeToMoveTime; // 0x2E4
		::System::Single MoveToAttackTimeLow; // 0x2E8
		::System::Single MoveToAttackTimeHigh; // 0x2EC
		::System::Single AttackToEvadeTime; // 0x2F0
		::System::Single AttackToMoveTime; // 0x2F4
		::System::Single BuddyFollowToAttackTime; // 0x2F8
		::System::Single BuddyAttackToFollowTime; // 0x2FC
		::System::Single MonsterAttackToFollowTime; // 0x300
		::System::Single InBattleDis; // 0x304
		::System::Single OutBattleDis; // 0x308
		::System::Single OutBattleTime; // 0x30C
		::System::Single MonsterEnterBattleTime1; // 0x310
		::System::Single MonsterEnterBattleTime2; // 0x314
		::System::Single MonsterEnterBattleTime3; // 0x318
		::System::Single MonsterEnterBattleTime4; // 0x31C
		::System::Single AvatarEnterBattleDistance1; // 0x320
		::System::Single AvatarEnterBattleDistance2; // 0x324
		::System::Single AvatarEnterBattleTime1; // 0x328
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ACTOR_PROP_MIN_DICT; // 0x330
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ACTOR_PROP_MAX_DICT; // 0x338
		::System::String* MONSTER_HUD_SCALE_CURVE; // 0x340
		::System::String* MONSTER_HUD_ALPHA_CURVE; // 0x348
		::System::Single MonsterHudLockAlphaRatio; // 0x350
		::System::Single MonsterHudLockBeHitAlphaLerpTime; // 0x354
		::System::Single MonsterHudLockBeHitAlphaKeepTime; // 0x358
		::UnityEngine::AnimationCurve* MonsterHudGrowthCurve; // 0x360
		::System::Single MonsterHud1HpMin; // 0x368
		::UnityEngine::Vector2 MonsterHPNormalizeMap; // 0x36C
		::UnityEngine::Color MonsterHudStunColor; // 0x374
		::System::Boolean IsShowBuffRoot; // 0x384
		::UnityEngine::Color StunLabelColor; // 0x388
		::System::Single OverDriveStunFillFadeDelayFrame; // 0x398
		::System::Single OverDriveStunMaxLockDelayFrame; // 0x39C
		::System::Single OverDriveStunFadeSpeed; // 0x3A0
		::System::Single StunFadeSpeedForEtherBarrier; // 0x3A4
		::System::String* MonsterLineFadeCurveKey; // 0x3A8
		::System::Int32 LineDelayFrame; // 0x3B0
		::System::Int32 LineFrameLength; // 0x3B4
		::System::Single ElementAbnormalSwitchIconCdTime; // 0x3B8
		::System::Single StunDamageKeepTime; // 0x3BC
		::System::Single HudTagKeepTime; // 0x3C0
		::System::Single HudTagRequireTime; // 0x3C4
		::System::Boolean PreloadHUDInstance; // 0x3C8
		::System::Int32 PreloadCommonInstanceCount; // 0x3CC
		::System::Int32 PreloadBossInstanceCount; // 0x3D0
		::UnityEngine::Color damageLineColor1; // 0x3D4
		::UnityEngine::Color damageLineColor2; // 0x3E4
		::System::Single damageLineRecoverTime; // 0x3F4
		::UnityEngine::AnimationCurve* damageLineRecoverCurve; // 0x3F8
		::System::Single damageLineKeepTime; // 0x400
		::System::Single damageLineClearTime; // 0x404
		::System::Single multiHPDamageLineClearTime; // 0x408
		::MoleMole::Config::ConfigMisc_HPBarLineParam RecoverHPLineParam; // 0x410
		::MoleMole::Config::ConfigMisc_HPBarLineColorParam HPBarLineColor; // 0x438
		::System::Single SKILL_CD_RATIO_LIMIT_LOW; // 0x498
		::MoleMole::Config::ConfigPosRot* UltimatePosRot; // 0x4A0
		::System::String* UltimateBornLockKey; // 0x4A8
		::System::Single UltimateFadeInDuration; // 0x4B0
		::System::Single UltimateFadeOutDuration; // 0x4B4
		::System::Single StunResetCD; // 0x4B8
		::System::Single lastResetStunTime; // 0x4BC
		::System::Single lastResetStunRecoverCD; // 0x4C0
		::System::Single StunResetDistance; // 0x4C4
		::System::Boolean ForbidStunAutoAwake; // 0x4C8
		::System::Single CurStunResetParam; // 0x4CC
		::System::Single CostStunResetParam; // 0x4D0
		::System::Boolean StunResetLimit; // 0x4D4
		::System::Boolean IsBulletHitEnableMultiRecovery; // 0x4D5
		::System::Boolean IsBulletExplodeHitEnableMultiRecovery; // 0x4D6
		::System::Single bulletHitStageCDTime; // 0x4D8
		::MoleMole::Config::ConfigMisc_NapAnimatorUpdateMode AnimatorUpdateMode; // 0x4DC
		::System::Boolean IsAnimatorEventUseFrame; // 0x4E0
		::System::Boolean IsAnimatorZoneUseFrame; // 0x4E1
		::System::Single MinTurnAroundAngle; // 0x4E4
		::System::Single MaxTurnAroundAngle; // 0x4E8
		::System::Single NPCNameUIOffset; // 0x4EC
		::System::Single NPCMaxShowDistance; // 0x4F0
		::System::Single NPCMinShowDistance; // 0x4F4
		::System::Single NPCNameUIOffsetOnlyBubble; // 0x4F8
		::System::Single NPCHUDVerticalOffset; // 0x4FC
		::System::Single NPCHUDMinTrackIconDistance; // 0x500
		::System::Single NPCHUDMaxTrackIconDistance; // 0x504
		::System::Single NPCHUDMinGuideIndicatorDistance; // 0x508
		::System::Single NPCHUDPixelGuideIndicatorDistance; // 0x50C
		::System::Single NPCHUDMaxNameTextDistance; // 0x510
		::System::Single NPCHUDMaxNameTextFadeOutDistance; // 0x514
		::System::Single NPCHUDMaxActiveDistance; // 0x518
		::System::Single NPCHUDChatBubbleInterruptDistance; // 0x51C
		::System::Single NPCHUDOcclusionSphereCastRadius; // 0x520
		::System::Single NPCHUDOcclusionSphereCastTargetOffset; // 0x524
		::System::Single NPCHUDOcclusionSphereCastCameraOffset; // 0x528
		::System::Single NPCHUDOcclusionHideRatio; // 0x52C
		::System::Single NPCHUDOcclusionShowRatio; // 0x530
		::System::Single NPCHUDOcclusionRaycastInterval; // 0x534
		::System::Single NPCHUDOcclusionIconOpacity; // 0x538
		::System::Single NPCHUDGuideOffset; // 0x53C
		::System::Single NPCHUDGuideOffsetWithoutName; // 0x540
		::System::Collections::Generic::List_1<::System::UInt32>* TrashbinNPCTagIDs; // 0x548
		::System::Single TrashbinNPCTriggerTurnDistance; // 0x550
		::System::Single TrashbinNPCTriggerTurnAngle; // 0x554
		::System::String* TrashbinNPCTurnLeftTrigger; // 0x558
		::System::String* TrashbinNPCTurnRightTrigger; // 0x560
		::System::Single NpcMdbInitialBlendTime; // 0x568
		::System::Single InteractMaxTime; // 0x56C
		::System::Single WalkFarAwayTime; // 0x570
		::System::Single InteractSpeed; // 0x574
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMisc_InteractRotate*>* RotateInfo; // 0x578
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMisc_InteractRotate*>* FemaleRotateInfo; // 0x580
		::System::Single ChatTime; // 0x588
		::System::Single ResetNPCDistance; // 0x58C
		::MoleMole::UIAvatarAnimatorParamsSetting* ResetAnimatorParamsSetting; // 0x590
		::System::Single ResetAngle; // 0x598
		::System::String* SundryTitle; // 0x5A0
		::System::String* SundryEnTitle; // 0x5A8
		::System::String* TeleportTitle; // 0x5B0
		::System::String* TeleportEnTitle; // 0x5B8
		::System::String* SundryLoopText; // 0x5C0
		::System::String* TeleportLoopText; // 0x5C8
		::System::String* EnemyIndicatorModelPath; // 0x5D0
		::System::Single EnemyIndicatorRadius; // 0x5D8
		::System::Single EnemyIndicatorHeight; // 0x5DC
		::System::Single EnemyIndicatorAppearDis; // 0x5E0
		::System::Single EnemyIndicatorDisappearDis; // 0x5E4
		::UnityEngine::Color EnemyIndicatorNormalColorA; // 0x5E8
		::UnityEngine::Color EnemyIndicatorNormalColorB; // 0x5F8
		::UnityEngine::Color EnemyIndicatorAttackColorA; // 0x608
		::UnityEngine::Color EnemyIndicatorAttackColorB; // 0x618
		::MoleMole::DitherConfig* EnemyIndicatorDitherConfig; // 0x628
		::UnityEngine::Color EnemyIndicatorTwinkleColorA; // 0x630
		::UnityEngine::Color EnemyIndicatorTwinkleColorB; // 0x640
		::System::Single EnemyIndicatorTwinkleFrequency; // 0x650
		::System::Int32 EnemyIndicatorTwinkleCount; // 0x654
		::System::Single EnemyIndicatorDelayHideTime; // 0x658
		::UnityEngine::Color EnemyIndicatorAttackColor02A; // 0x65C
		::UnityEngine::Color EnemyIndicatorAttackColor02B; // 0x66C
		::System::Single EnemyIndicatorAttackTwinkleFrequency; // 0x67C
		::System::String* LevelResultCameraScreenOffsetKey; // 0x680
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InputGroup, ::System::Collections::Generic::List_1<::System::String*>*>* InputMuteResetParams; // 0x688
		::System::Int32 ReconnectTime; // 0x690
		::System::Single ShowReconnectTime; // 0x694
		::System::Boolean IsLevelConditionOpen; // 0x698
		::System::Single BeHitFlyConditionProtectTime; // 0x69C
		::System::Single FlyHeightLimitStart; // 0x6A0
		::System::Single FlyHeightLimitMax; // 0x6A4
		::System::String* FlyHeightCurveKey; // 0x6A8
		::System::Single WitchSlowFlyHeightLimitStart; // 0x6B0
		::System::Single WitchSlowFlyHeightLimitMax; // 0x6B4
		::System::String* WitchSlowFlyHeightCurveKey; // 0x6B8
		::System::Boolean EnableAssistQTE; // 0x6C0
		::System::Boolean IsToggleAssistQTELongPress; // 0x6C1
		::System::Boolean DisableAssistQTECameraMoveAndInputBlock; // 0x6C2
		::System::Single AssistQTELongPressTime; // 0x6C4
		::System::Int32 AvatarID; // 0x6C8
		::System::Collections::Generic::List_1<::System::Int32>* ForbiddenTrapChessID; // 0x6D0
		::System::Collections::Generic::Dictionary_2<::MoleMole::FuncSwitchType, ::System::Boolean>* funcSwitchs; // 0x6D8
		::System::String* HighlightGoPath; // 0x6E0
		::System::Boolean GalForbidClickWhenPlay; // 0x6E8
		::System::Single GalAllowClickNarratorTime; // 0x6EC
		::System::Single GalAllowClickTextTime; // 0x6F0
		::System::Single GalDefaultAllowClickTextTimeWhenClose; // 0x6F4
		::System::Boolean ComicForbidClickWhenPlay; // 0x6F8
		::System::Single ComicAllowClickNarratorTime; // 0x6FC
		::System::Single AttackDistanceAttenuationRatioMin; // 0x700
		::System::Single AttackDistanceAttenuationRatioMax; // 0x704
		::System::Single WitchSlowDownProtectedTime; // 0x708
		::System::Single AttackResultFilterNavMaxDistance; // 0x70C
		::System::Single AttackResultFilterCoreDistance; // 0x710
		::System::String* LaserBlockPointAttachPoint; // 0x718
		::System::Single AttackPatternHitColliderDistanceWeight; // 0x720
		::System::Single AttackPatternHitColliderAngleWeight; // 0x724
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* ResetAnimCtrlerTriggers; // 0x728
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* ResetAnimCtrlerBools; // 0x730
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ResetAnimCtrlerInts; // 0x738
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ResetAnimCtrlerFloats; // 0x740
		::System::String* DisableAlliesCollisionAbilityKey; // 0x748
		::System::String* DisableAlliesCollisionDitherKey; // 0x750
		::System::Single LerpLogicVelocityThreshold; // 0x758
		::System::Single LogicVelocityResetLerpDiff; // 0x75C
		::System::Single RightJoyStickRatio; // 0x760
		::System::Single RightJoyStickThreshold; // 0x764
		::System::Single LeftJoyStickRatio; // 0x768
		::System::Boolean OpenMatCapFade; // 0x76C
		::System::Single MatCapFadeDuration; // 0x770
		::System::Single MinRopeMixinTimeScale; // 0x774
		::System::Boolean UseTestRopeDampingScale; // 0x778
		::System::Single TestYiXuanUIFadeoutDelay; // 0x77C
		::System::Boolean SpecialEffectForceCheckDestroyEveryFrame; // 0x780
		::System::Single TeleportSelectDelay; // 0x784
		::System::Boolean OpenTestGhost; // 0x788
		::System::Int32 MaxGhostCount; // 0x78C
		::System::Single GhostEchoTime; // 0x790
		::System::Single GhostLifeTime; // 0x794
		::System::Boolean NameEffectsMgrEnable; // 0x798
		::System::Boolean RoleHudUltGoHandleEnable; // 0x799
		::System::Boolean AttachPointsRegisterHandleEnable; // 0x79A
		::System::Boolean HandleInitDynamicAccsRenderers; // 0x79B
		::System::Boolean OutsideModelAttachPointFallbackEnable; // 0x79C
		::System::Boolean MatPropMdfUvSpeedFirstFrameFixEnable; // 0x79D
		::System::Boolean EnableZenkovAlertPoint; // 0x79E
		::System::Boolean MonsterAlertCheckEnemyWhenBeingHit; // 0x79F
		::System::Single MonsterHudDistanceCullSqr; // 0x7A0
		::System::Boolean CustomTagsUseAnimator; // 0x7A4
		::System::Boolean MonsterAlertDistUseDirectDist; // 0x7A5
		::System::Int32 MonsterEnterBattleNavmeshFraneSkipCount; // 0x7A8
		::System::Collections::Generic::HashSet_1<::System::Int32>* DynamicAccRequiredMonsterSubIDs; // 0x7B0
		::System::Int32 ElementEffectiveResistThreshold; // 0x7B8
		::System::Int32 ElementIneffectiveResistThreshold; // 0x7BC
		::System::Collections::Generic::HashSet_1<::System::String*>* ElementAllActorPropertyList; // 0x7C0
		::System::String* SolidProjectileTagName; // 0x7C8
		::System::String* IndicatedLightModelPath; // 0x7D0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Shader*>* Shaders; // 0x7D8
		::System::Boolean isOpenTrafficArea; // 0x7E0
		::System::Collections::Generic::List_1<::MoleMole::Traffic_Area*>* TrafficAreas; // 0x7E8
		::System::Int32 CloudPlatformPerfectSwitchExtentFrame; // 0x7F0
		::System::Collections::Generic::List_1<::System::String*>* PromoteMonsterEnableTags; // 0x7F8
		::System::Single BigSceneReportPropertiesTime; // 0x800
		::System::String* ReplaceTeamMatAniKey; // 0x808
		::System::Single MonsterLevelHUDShowDistanceOnIdle; // 0x810
		::System::Single MonsterLevelHUDHideDelayOnIdle; // 0x814
		::System::Single MonsterLevelHUDShowDurationOnEnterBattle; // 0x818
		::System::String* MonsterLevelHUDRedMatPath; // 0x820
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMisc_LevelHUDOverrideParams>* MonsterLevelHUDOverrideParams; // 0x828
		::System::String* IgnisFatuusEffAttachPoint; // 0x830
		::System::String* IgnisFatuusMatPropertyModifierKey; // 0x838
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::String*>* EntityIgnisFatuusEffects; // 0x840
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMisc_EffectMaterialControlConfig>* IgnisFatuusEffectMaterialControls; // 0x848
		::System::Single SocialCirlceMsgCacheTime; // 0x850

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC__CTOR_OFFSET))(this);
		}

		::System::Single GetMonsterLevelHUDShowDistanceOnIdle(::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_GETMONSTERLEVELHUDSHOWDISTANCEONIDLE_OFFSET))(this, key);
		}

		::System::Boolean TryGetMonsterLevelHUDOverrideShowDurationOnEnterBattle(::System::String* key, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_TRYGETMONSTERLEVELHUDOVERRIDESHOWDURATIONONENTERBATTLE_OFFSET))(this, key, value);
		}
	};
}
