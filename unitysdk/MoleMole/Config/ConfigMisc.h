#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_EffectMaterialControlConfig.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_HPBarLineColorParam.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_HPBarLineParam.h"
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

#define MOLEMOLE_CONFIG_CONFIGMISC__CTOR_OFFSET UNITYSDK_OFFSET(0x16B35540)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_TypeDefinitionIndex = 63723;

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
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>* mainBuddyPosRots; // 0x168
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>* buddyTeamPosRots; // 0x170
		::MoleMole::Config::ConfigMisc_SearchValidBornPos BuddySearchValidBornPos; // 0x178
		::UnityEngine::Vector3 mainBuddyReviveOffset; // 0x190
		::System::Single mainBuddyReviveDelay; // 0x19C
		::MoleMole::Battle::AnimatorParamControl* defaultBuddySwitchOutAnimatorParamControl; // 0x1A0
		::MoleMole::Battle::AnimatorParamControl* defaultBuddySwitchInAnimatorParamControl; // 0x1A8
		::System::Single defaultBuddyMinVanishDelay; // 0x1B0
		::System::Single defaultBuddyMaxVanishDelay; // 0x1B4
		::System::Single defaultTriggerBuddySwitchOutDelay; // 0x1B8
		::System::Single defaultTriggerBuddySwitchInDelay; // 0x1BC
		::System::Single defaultBuddyFadeOutDuration; // 0x1C0
		::System::Single defaultBuddyFadeInDuration; // 0x1C4
		::System::Single BuddyQTEGlobalCD; // 0x1C8
		::System::Single MaxSwitchPositionSearchLimitRadius; // 0x1CC
		::System::Single MaxSwitchPositionHeightDiff; // 0x1D0
		::System::Single MaxSwitchPositionSearchDistance; // 0x1D4
		::System::Single MaxSwitchPositionSearchDistanceQTE; // 0x1D8
		::System::Single MaxSwitchPositionSearchDistanceAidAttack; // 0x1DC
		::System::Single StartSwitchPositionTurnAngle; // 0x1E0
		::System::Single StartSwitchPositionTurnCheckDistance; // 0x1E4
		::System::Collections::Generic::List_1<::MoleMole::Config::AidAttackType>* AidAttackTypeLineSelectPosModeList; // 0x1E8
		::System::Single MaxLineSelectPosDistance; // 0x1F0
		::System::Boolean AidAttackUseLineSelectSwitchInPos; // 0x1F4
		::Cinemachine::CinemachineBlendDefinition SwitchAvatarStopCameraShotBlendOutConfig; // 0x1F8
		::Cinemachine::CinemachineBlendDefinition LevelEndStopCameraShotBlendOutConfig; // 0x208
		::System::Boolean IgnoreStreamingPageSkillButtonBlock; // 0x218
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GlobalSummonTagMax; // 0x220
		::MoleMole::Config::ConfigTurnback* defConfigTurnback; // 0x228
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigTurnback*>* avatarTurnbackOverrideMap; // 0x230
		::MoleMole::Config::ConfigAvatarGround* configAvatarGround; // 0x238
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ExclusivePropertyControllers; // 0x240
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* UnagiMagicValueFlameMaterial; // 0x248
		::System::Single QingYiMatChangePercantage; // 0x250
		::System::String* QingYiMatPath; // 0x258
		::System::String* JaneMatPath; // 0x260
		::System::Single SethChangePercantage; // 0x268
		::System::String* SethMatPath; // 0x270
		::MoleMole::Config::ConfigHollowLevelEnd* hollowLevelEnd; // 0x278
		::MoleMole::Config::ConfigUISettings* uiSettings; // 0x280
		::System::String* LookIKTargetKey; // 0x288
		::System::String* LookIKInMainCityPlayerTargetKey; // 0x290
		::System::String* LookIKInMainCityNpcTargetKey; // 0x298
		::System::String* LookIKInMainCityNpcCameraKey; // 0x2A0
		::System::String* LockExecuteCoreKey; // 0x2A8
		::System::UInt32 ExecuteCoreMonsterTemplateID; // 0x2B0
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>* mainBuddyBornPosRots; // 0x2B8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>* BuddyTeamBornPosRots; // 0x2C0
		::System::Int32 MaxFightingBuddyNum; // 0x2C8
		::System::Int32 MaxAssistingBuddyNum; // 0x2CC
		::System::Single HitOtherDistance1; // 0x2D0
		::System::Single HitOtherDistance2; // 0x2D4
		::System::Single HitOtherDistance3; // 0x2D8
		::System::Single EvadeToMoveTime; // 0x2DC
		::System::Single MoveToAttackTimeLow; // 0x2E0
		::System::Single MoveToAttackTimeHigh; // 0x2E4
		::System::Single AttackToEvadeTime; // 0x2E8
		::System::Single AttackToMoveTime; // 0x2EC
		::System::Single BuddyFollowToAttackTime; // 0x2F0
		::System::Single BuddyAttackToFollowTime; // 0x2F4
		::System::Single MonsterAttackToFollowTime; // 0x2F8
		::System::Single InBattleDis; // 0x2FC
		::System::Single OutBattleDis; // 0x300
		::System::Single OutBattleTime; // 0x304
		::System::Single MonsterEnterBattleTime1; // 0x308
		::System::Single MonsterEnterBattleTime2; // 0x30C
		::System::Single MonsterEnterBattleTime3; // 0x310
		::System::Single MonsterEnterBattleTime4; // 0x314
		::System::Single AvatarEnterBattleDistance1; // 0x318
		::System::Single AvatarEnterBattleDistance2; // 0x31C
		::System::Single AvatarEnterBattleTime1; // 0x320
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ACTOR_PROP_MIN_DICT; // 0x328
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ACTOR_PROP_MAX_DICT; // 0x330
		::System::String* MONSTER_HUD_SCALE_CURVE; // 0x338
		::System::String* MONSTER_HUD_ALPHA_CURVE; // 0x340
		::System::Single MonsterHudLockAlphaRatio; // 0x348
		::System::Single MonsterHudLockBeHitAlphaLerpTime; // 0x34C
		::System::Single MonsterHudLockBeHitAlphaKeepTime; // 0x350
		::UnityEngine::AnimationCurve* MonsterHudGrowthCurve; // 0x358
		::System::Single MonsterHud1HpMin; // 0x360
		::UnityEngine::Vector2 MonsterHPNormalizeMap; // 0x364
		::UnityEngine::Color MonsterHudStunColor; // 0x36C
		::System::Boolean IsShowBuffRoot; // 0x37C
		::UnityEngine::Color StunLabelColor; // 0x380
		::System::Single OverDriveStunFillFadeDelayFrame; // 0x390
		::System::Single OverDriveStunMaxLockDelayFrame; // 0x394
		::System::Single OverDriveStunFadeSpeed; // 0x398
		::System::Single StunFadeSpeedForEtherBarrier; // 0x39C
		::System::String* MonsterLineFadeCurveKey; // 0x3A0
		::System::Int32 LineDelayFrame; // 0x3A8
		::System::Int32 LineFrameLength; // 0x3AC
		::System::Single ElementAbnormalSwitchIconCdTime; // 0x3B0
		::System::Single StunDamageKeepTime; // 0x3B4
		::System::Single HudTagKeepTime; // 0x3B8
		::System::Single HudTagRequireTime; // 0x3BC
		::System::Boolean PreloadHUDInstance; // 0x3C0
		::System::Int32 PreloadCommonInstanceCount; // 0x3C4
		::System::Int32 PreloadBossInstanceCount; // 0x3C8
		::UnityEngine::Color damageLineColor1; // 0x3CC
		::UnityEngine::Color damageLineColor2; // 0x3DC
		::System::Single damageLineRecoverTime; // 0x3EC
		::UnityEngine::AnimationCurve* damageLineRecoverCurve; // 0x3F0
		::System::Single damageLineKeepTime; // 0x3F8
		::System::Single damageLineClearTime; // 0x3FC
		::System::Single multiHPDamageLineClearTime; // 0x400
		::MoleMole::Config::ConfigMisc_HPBarLineParam RecoverHPLineParam; // 0x408
		::MoleMole::Config::ConfigMisc_HPBarLineColorParam HPBarLineColor; // 0x430
		::System::Single SKILL_CD_RATIO_LIMIT_LOW; // 0x470
		::MoleMole::Config::ConfigPosRot* UltimatePosRot; // 0x478
		::System::String* UltimateBornLockKey; // 0x480
		::System::Single UltimateFadeInDuration; // 0x488
		::System::Single UltimateFadeOutDuration; // 0x48C
		::System::Single StunResetCD; // 0x490
		::System::Single lastResetStunTime; // 0x494
		::System::Single lastResetStunRecoverCD; // 0x498
		::System::Single StunResetDistance; // 0x49C
		::System::Boolean ForbidStunAutoAwake; // 0x4A0
		::System::Single CurStunResetParam; // 0x4A4
		::System::Single CostStunResetParam; // 0x4A8
		::System::Boolean StunResetLimit; // 0x4AC
		::System::Boolean IsBulletHitEnableMultiRecovery; // 0x4AD
		::System::Boolean IsBulletExplodeHitEnableMultiRecovery; // 0x4AE
		::System::Single bulletHitStageCDTime; // 0x4B0
		::MoleMole::Config::ConfigMisc_NapAnimatorUpdateMode AnimatorUpdateMode; // 0x4B4
		::System::Boolean IsAnimatorEventUseFrame; // 0x4B8
		::System::Boolean IsAnimatorZoneUseFrame; // 0x4B9
		::System::Single MinTurnAroundAngle; // 0x4BC
		::System::Single MaxTurnAroundAngle; // 0x4C0
		::System::Single NPCNameUIOffset; // 0x4C4
		::System::Single NPCMaxShowDistance; // 0x4C8
		::System::Single NPCMinShowDistance; // 0x4CC
		::System::Single NPCNameUIOffsetOnlyBubble; // 0x4D0
		::System::Single NPCHUDVerticalOffset; // 0x4D4
		::System::Single NPCHUDMinTrackIconDistance; // 0x4D8
		::System::Single NPCHUDMaxTrackIconDistance; // 0x4DC
		::System::Single NPCHUDMinGuideIndicatorDistance; // 0x4E0
		::System::Single NPCHUDPixelGuideIndicatorDistance; // 0x4E4
		::System::Single NPCHUDMaxNameTextDistance; // 0x4E8
		::System::Single NPCHUDMaxNameTextFadeOutDistance; // 0x4EC
		::System::Single NPCHUDMaxActiveDistance; // 0x4F0
		::System::Single NPCHUDChatBubbleInterruptDistance; // 0x4F4
		::System::Single NPCHUDOcclusionSphereCastRadius; // 0x4F8
		::System::Single NPCHUDOcclusionSphereCastTargetOffset; // 0x4FC
		::System::Single NPCHUDOcclusionSphereCastCameraOffset; // 0x500
		::System::Single NPCHUDOcclusionHideRatio; // 0x504
		::System::Single NPCHUDOcclusionShowRatio; // 0x508
		::System::Single NPCHUDOcclusionRaycastInterval; // 0x50C
		::System::Single NPCHUDOcclusionIconOpacity; // 0x510
		::System::Single NPCHUDGuideOffset; // 0x514
		::System::Single NPCHUDGuideOffsetWithoutName; // 0x518
		::System::Collections::Generic::List_1<::System::UInt32>* TrashbinNPCTagIDs; // 0x520
		::System::Single TrashbinNPCTriggerTurnDistance; // 0x528
		::System::Single TrashbinNPCTriggerTurnAngle; // 0x52C
		::System::String* TrashbinNPCTurnLeftTrigger; // 0x530
		::System::String* TrashbinNPCTurnRightTrigger; // 0x538
		::System::Single NpcMdbInitialBlendTime; // 0x540
		::System::Single InteractMaxTime; // 0x544
		::System::Single WalkFarAwayTime; // 0x548
		::System::Single InteractSpeed; // 0x54C
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMisc_InteractRotate*>* RotateInfo; // 0x550
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMisc_InteractRotate*>* FemaleRotateInfo; // 0x558
		::System::Single ChatTime; // 0x560
		::System::Single ResetNPCDistance; // 0x564
		::MoleMole::UIAvatarAnimatorParamsSetting* ResetAnimatorParamsSetting; // 0x568
		::System::Single ResetAngle; // 0x570
		::System::String* SundryTitle; // 0x578
		::System::String* SundryEnTitle; // 0x580
		::System::String* TeleportTitle; // 0x588
		::System::String* TeleportEnTitle; // 0x590
		::System::String* SundryLoopText; // 0x598
		::System::String* TeleportLoopText; // 0x5A0
		::System::String* EnemyIndicatorModelPath; // 0x5A8
		::System::Single EnemyIndicatorRadius; // 0x5B0
		::System::Single EnemyIndicatorHeight; // 0x5B4
		::System::Single EnemyIndicatorAppearDis; // 0x5B8
		::System::Single EnemyIndicatorDisappearDis; // 0x5BC
		::UnityEngine::Color EnemyIndicatorNormalColorA; // 0x5C0
		::UnityEngine::Color EnemyIndicatorNormalColorB; // 0x5D0
		::UnityEngine::Color EnemyIndicatorAttackColorA; // 0x5E0
		::UnityEngine::Color EnemyIndicatorAttackColorB; // 0x5F0
		::MoleMole::DitherConfig* EnemyIndicatorDitherConfig; // 0x600
		::UnityEngine::Color EnemyIndicatorTwinkleColorA; // 0x608
		::UnityEngine::Color EnemyIndicatorTwinkleColorB; // 0x618
		::System::Single EnemyIndicatorTwinkleFrequency; // 0x628
		::System::Int32 EnemyIndicatorTwinkleCount; // 0x62C
		::System::Single EnemyIndicatorDelayHideTime; // 0x630
		::UnityEngine::Color EnemyIndicatorAttackColor02A; // 0x634
		::UnityEngine::Color EnemyIndicatorAttackColor02B; // 0x644
		::System::Single EnemyIndicatorAttackTwinkleFrequency; // 0x654
		::System::String* LevelResultCameraScreenOffsetKey; // 0x658
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InputGroup, ::System::Collections::Generic::List_1<::System::String*>*>* InputMuteResetParams; // 0x660
		::System::Int32 ReconnectTime; // 0x668
		::System::Single ShowReconnectTime; // 0x66C
		::System::Boolean IsLevelConditionOpen; // 0x670
		::System::Single BeHitFlyConditionProtectTime; // 0x674
		::System::Single FlyHeightLimitStart; // 0x678
		::System::Single FlyHeightLimitMax; // 0x67C
		::System::String* FlyHeightCurveKey; // 0x680
		::System::Single WitchSlowFlyHeightLimitStart; // 0x688
		::System::Single WitchSlowFlyHeightLimitMax; // 0x68C
		::System::String* WitchSlowFlyHeightCurveKey; // 0x690
		::System::Boolean EnableAssistQTE; // 0x698
		::System::Boolean IsToggleAssistQTELongPress; // 0x699
		::System::Boolean DisableAssistQTECameraMoveAndInputBlock; // 0x69A
		::System::Single AssistQTELongPressTime; // 0x69C
		::System::Int32 AvatarID; // 0x6A0
		::System::Collections::Generic::List_1<::System::Int32>* ForbiddenTrapChessID; // 0x6A8
		::System::Collections::Generic::Dictionary_2<::MoleMole::FuncSwitchType, ::System::Boolean>* funcSwitchs; // 0x6B0
		::System::String* HighlightGoPath; // 0x6B8
		::System::Boolean GalForbidClickWhenPlay; // 0x6C0
		::System::Single GalAllowClickNarratorTime; // 0x6C4
		::System::Single GalAllowClickTextTime; // 0x6C8
		::System::Single GalDefaultAllowClickTextTimeWhenClose; // 0x6CC
		::System::Boolean ComicForbidClickWhenPlay; // 0x6D0
		::System::Single ComicAllowClickNarratorTime; // 0x6D4
		::System::Single AttackDistanceAttenuationRatioMin; // 0x6D8
		::System::Single AttackDistanceAttenuationRatioMax; // 0x6DC
		::System::Single WitchSlowDownProtectedTime; // 0x6E0
		::System::Single AttackResultFilterNavMaxDistance; // 0x6E4
		::System::Single AttackResultFilterCoreDistance; // 0x6E8
		::System::String* LaserBlockPointAttachPoint; // 0x6F0
		::System::Single AttackPatternHitColliderDistanceWeight; // 0x6F8
		::System::Single AttackPatternHitColliderAngleWeight; // 0x6FC
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* ResetAnimCtrlerTriggers; // 0x700
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* ResetAnimCtrlerBools; // 0x708
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ResetAnimCtrlerInts; // 0x710
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ResetAnimCtrlerFloats; // 0x718
		::System::String* DisableAlliesCollisionAbilityKey; // 0x720
		::System::String* DisableAlliesCollisionDitherKey; // 0x728
		::System::Single LerpLogicVelocityThreshold; // 0x730
		::System::Single LogicVelocityResetLerpDiff; // 0x734
		::System::Single RightJoyStickRatio; // 0x738
		::System::Single RightJoyStickThreshold; // 0x73C
		::System::Single LeftJoyStickRatio; // 0x740
		::System::Boolean OpenMatCapFade; // 0x744
		::System::Single MatCapFadeDuration; // 0x748
		::System::Single MinRopeMixinTimeScale; // 0x74C
		::System::Boolean UseTestRopeDampingScale; // 0x750
		::System::Single TestYiXuanUIFadeoutDelay; // 0x754
		::System::Boolean SpecialEffectForceCheckDestroyEveryFrame; // 0x758
		::System::Single TeleportSelectDelay; // 0x75C
		::System::Boolean OpenTestGhost; // 0x760
		::System::Int32 MaxGhostCount; // 0x764
		::System::Single GhostEchoTime; // 0x768
		::System::Single GhostLifeTime; // 0x76C
		::System::Boolean NameEffectsMgrEnable; // 0x770
		::System::Boolean RoleHudUltGoHandleEnable; // 0x771
		::System::Boolean AttachPointsRegisterHandleEnable; // 0x772
		::System::Int32 ElementEffectiveResistThreshold; // 0x774
		::System::Int32 ElementIneffectiveResistThreshold; // 0x778
		::System::Collections::Generic::HashSet_1<::System::String*>* ElementAllActorPropertyList; // 0x780
		::System::String* SolidProjectileTagName; // 0x788
		::System::String* IndicatedLightModelPath; // 0x790
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Shader*>* Shaders; // 0x798
		::System::Boolean isOpenTrafficArea; // 0x7A0
		::System::Collections::Generic::List_1<::MoleMole::Traffic_Area*>* TrafficAreas; // 0x7A8
		::System::Int32 CloudPlatformPerfectSwitchExtentFrame; // 0x7B0
		::System::Collections::Generic::List_1<::System::String*>* PromoteMonsterEnableTags; // 0x7B8
		::System::Single BigSceneReportPropertiesTime; // 0x7C0
		::System::String* ReplaceTeamMatAniKey; // 0x7C8
		::System::Single MonsterLevelHUDShowDistanceOnIdle; // 0x7D0
		::System::Single MonsterLevelHUDHideDelayOnIdle; // 0x7D4
		::System::Single MonsterLevelHUDShowDurationOnEnterBattle; // 0x7D8
		::System::String* MonsterLevelHUDRedMatPath; // 0x7E0
		::System::String* IgnisFatuusEffAttachPoint; // 0x7E8
		::System::String* IgnisFatuusMatPropertyModifierKey; // 0x7F0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::String*>* EntityIgnisFatuusEffects; // 0x7F8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMisc_EffectMaterialControlConfig>* IgnisFatuusEffectMaterialControls; // 0x800
		::System::Single SocialCirlceMsgCacheTime; // 0x808

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC__CTOR_OFFSET))(this);
		}
	};
}
