#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/FloatCurveFrame.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/RPG/IVec3.h"
#include "unitysdk/RPG/MColor.h"
#include "unitysdk/RPG/MRect.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/RPG/Vector3CurveFrame.h"
#include "unitysdk/RPG/Vector4CurveFrame.h"
#include "unitysdk/Struct_2_0ACB88BD1D804FF7.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"
#include "unitysdk/System/Object.h"

class Class_1_1C30CE192ABE4C54;
class Class_4_0574869B1174019D;
class Class_4_07BF628E2777E08D;
class Class_4_0EB17C6B86E340AC;
class Class_4_0EB17C6B86E340AC_1;
class Class_4_1C3EE1F1A65C0138;
class Class_4_25AFD46360DAAFAC;
class Class_4_274CDECA9C90F714;
class Class_4_289799916215ACDF;
class Class_4_2A80E417D1F3E66A;
class Class_4_2AFBB0F2564F9E40;
class Class_4_2C6327E657DA8BCC;
class Class_4_2FE6CDD388B56E6B;
class Class_4_327F75E212567CB8;
class Class_4_472E12A36DB951F3;
class Class_4_4DA9E17D85B134D8;
class Class_4_52F0D25B8A5C0616;
class Class_4_5354087FF9599135;
class Class_4_5FBF198A62EBF789;
class Class_4_6F740814D9094F5F;
class Class_4_6F740814D9094F5F_1;
class Class_4_6F740814D9094F5F_2;
class Class_4_7346DBE182E81BAF;
class Class_4_74E928004BF9D3ED;
class Class_4_77F0E8B5F821AE63;
class Class_4_7A69A90A7D03F542;
class Class_4_87568F4B1AE1BC50;
class Class_4_875AAC2B190E37C1;
class Class_4_890BC79DA352586D;
class Class_4_94CC15BFDD928D3E;
class Class_4_962A171D9D578327;
class Class_4_962A171D9D578327_1;
class Class_4_9DD8B93ABE3B223B;
class Class_4_A98F0D4F1FD3451C;
class Class_4_A98F0D4F1FD3451C_10;
class Class_4_A98F0D4F1FD3451C_11;
class Class_4_A98F0D4F1FD3451C_12;
class Class_4_A98F0D4F1FD3451C_13;
class Class_4_A98F0D4F1FD3451C_14;
class Class_4_A98F0D4F1FD3451C_1;
class Class_4_A98F0D4F1FD3451C_2;
class Class_4_A98F0D4F1FD3451C_3;
class Class_4_A98F0D4F1FD3451C_4;
class Class_4_A98F0D4F1FD3451C_5;
class Class_4_A98F0D4F1FD3451C_6;
class Class_4_A98F0D4F1FD3451C_7;
class Class_4_A98F0D4F1FD3451C_8;
class Class_4_A98F0D4F1FD3451C_9;
class Class_4_AF570AE2DDBD035B;
class Class_4_B6CB548C28900B6D;
class Class_4_B6CB548C28900B6D_1;
class Class_4_BA267B1408695E90;
class Class_4_BC87E1E104C4A2A7;
class Class_4_C2B07AE0C1DDDAA6;
class Class_4_C2B07AE0C1DDDAA6_1;
class Class_4_C458873EDD189557;
class Class_4_C52396BE76BDF2EA;
class Class_4_CCCC7AB2EA54CF7B;
class Class_4_CDB72451CBF92DF2;
class Class_4_D06A8FE0880035FA;
class Class_4_D4509F067C456928;
class Class_4_D6619DB5A2E78AE5;
class Class_4_DB9508DE847AEC59;
class Class_4_DD662316DDE274DE;
class Class_4_E5320A584E778351;
class Class_4_E7FA572F81E53DA8;
class Class_4_E96CE06DD2A46EC2;
class Class_4_F0E2079A5547C5F3;
class Class_4_F42D15D617E4F9D4;
class Class_4_F63E984E4BA70BD4;
class Class_4_F9B012EBD64B96B0;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class ByCanPlanetFesLevelUp; }
namespace RPG::Client { class ByCanPlanetFesSkillLevelUp; }
namespace RPG::Client { class ByCompareMatchThreeV2BirdLocation; }
namespace RPG::Client { class ByComparePlanetFesEventProgressLeft; }
namespace RPG::Client { class ByIsPlanetFesBusinessDayFinished; }
namespace RPG::Client { class ByIsPlanetFesLandAvailableForPurchase; }
namespace RPG::Client { class ByPlantFesIsInMove; }
namespace RPG::Client { class ByPlantFesIsInSpineAnim; }
namespace RPG::Client { class ST_Parkour_ByCompareDistanceToPlayer; }
namespace RPG::Client { class ST_Parkour_ByCompareHitFlyCount; }
namespace RPG::Client { class ST_Parkour_ByCompareLapCount; }
namespace RPG::Client { class ST_Parkour_ByCompareProjectileHitCount; }
namespace RPG::Client { class ST_Parkour_ByCompareRank; }
namespace RPG::Client::LittleGameShare { class LittleGamePredicateConfig; }
namespace RPG::Client::LittleGameShare { class ST_ByRandom; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCanEnterLock; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareHasEffect; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatBehindDistance; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatID; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatRank; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIdleCanEnterAIState; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIsAIState; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIsSkillCD; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByPropertyCompare; }
namespace RPG::GameCore { class AdvByCheckFarmElementActive; }
namespace RPG::GameCore { class AdvByCheckGameMode; }
namespace RPG::GameCore { class AdvByCheckNeedWaitServerCheckSkillResult; }
namespace RPG::GameCore { class AdvByCheckWindowInSlot; }
namespace RPG::GameCore { class AdvByCheckWindowPermCodes; }
namespace RPG::GameCore { class AdvByCompareCharacterID; }
namespace RPG::GameCore { class AdvByCompareDimensionID; }
namespace RPG::GameCore { class AdvByCompareDynamicValue; }
namespace RPG::GameCore { class AdvByCompareEnhancedID; }
namespace RPG::GameCore { class AdvByCompareInvasionLevel; }
namespace RPG::GameCore { class AdvByContainBehaviorFlag; }
namespace RPG::GameCore { class AdvByEntitiesExist; }
namespace RPG::GameCore { class AdvByEntityExist; }
namespace RPG::GameCore { class AdvByFastDeliverFinish; }
namespace RPG::GameCore { class AdvByFastDeliverHasMultiRoute; }
namespace RPG::GameCore { class AdvByHasMoveSinceLastTeleport; }
namespace RPG::GameCore { class AdvByInCustomZone; }
namespace RPG::GameCore { class AdvByIsEliteMonster; }
namespace RPG::GameCore { class AdvByIsInPhantomFrozen; }
namespace RPG::GameCore { class AdvByPerceiveValueReachMax; }
namespace RPG::GameCore { class AdvByPlayerHide; }
namespace RPG::GameCore { class AdvByPlayerInVisionZone; }
namespace RPG::GameCore { class AdvByRollShopResult; }
namespace RPG::GameCore { class AdvByTriggeredTrackedSearch; }
namespace RPG::GameCore { class AdvGroupFetchTargetByString; }
namespace RPG::GameCore { class AdvGroupFetchTargetByStringList; }
namespace RPG::GameCore { class AdvTriggerEffectList; }
namespace RPG::GameCore { class AdventureByCheckMoveInput; }
namespace RPG::GameCore { class AdventureByCompareHPRatio; }
namespace RPG::GameCore { class AdventureByCompareMP; }
namespace RPG::GameCore { class AdventureByCompareSPRatio; }
namespace RPG::GameCore { class AdventureByInAnimZone; }
namespace RPG::GameCore { class AdventureByInMotionState; }
namespace RPG::GameCore { class AdventureByIsBattlePostureType; }
namespace RPG::GameCore { class AdventureByIsBattleSkillType; }
namespace RPG::GameCore { class AdventureByIsInPosition; }
namespace RPG::GameCore { class AdventureByIsInRotation; }
namespace RPG::GameCore { class AdventureByIsLocateAtArea; }
namespace RPG::GameCore { class AdventureByIsNPCControlled; }
namespace RPG::GameCore { class AdventureByIsPropertyValueMinOrMax; }
namespace RPG::GameCore { class AdventureByIsWeakTypeActive; }
namespace RPG::GameCore { class AdventureByMazeSkillUseCheck; }
namespace RPG::GameCore { class AdventureByMotionHitColliderWall; }
namespace RPG::GameCore { class AdventureByMoveInputTowardsTarget; }
namespace RPG::GameCore { class AdventureByNPCMonsterPurposeType; }
namespace RPG::GameCore { class AdventureByNpcMazeSkillCooldown; }
namespace RPG::GameCore { class AdventureByPlayerCurrentSkillType; }
namespace RPG::GameCore { class AdventureByPropInPosition; }
namespace RPG::GameCore { class AdventureByPropShowInfoId; }
namespace RPG::GameCore { class AdventureIsTriggerBattleByNpcMonster; }
namespace RPG::GameCore { class AssistWayPoint; }
namespace RPG::GameCore { class AssistWayPointCondition; }
namespace RPG::GameCore { class AssistWayPointConditionMain; }
namespace RPG::GameCore { class AssistWayPointConditionPack; }
namespace RPG::GameCore { class AssistWayPointDistanceCondition; }
namespace RPG::GameCore { class AssistWayPointFCVCondition; }
namespace RPG::GameCore { class AssistWayPointFastComplete; }
namespace RPG::GameCore { class AssistWayPointGroupPropertyCondition; }
namespace RPG::GameCore { class AssistWayPointLittleGameCondition; }
namespace RPG::GameCore { class AssistWayPointPack; }
namespace RPG::GameCore { class AssistWayPointPropEraFlipShowCondition; }
namespace RPG::GameCore { class AssistWayPointPropStateCondition; }
namespace RPG::GameCore { class AssistWayPointRegionEraFlipStateCondition; }
namespace RPG::GameCore { class AssistWayPointTimelineStateCondition; }
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class ByAdvCharacterLogicState; }
namespace RPG::GameCore { class ByAlertValueInRange; }
namespace RPG::GameCore { class ByAllowInstantKill; }
namespace RPG::GameCore { class ByAnchorAngleDiffWithMainCameraOverThan; }
namespace RPG::GameCore { class ByAnd; }
namespace RPG::GameCore { class ByAngle; }
namespace RPG::GameCore { class ByAnimStateLogicType; }
namespace RPG::GameCore { class ByAnimatorParam; }
namespace RPG::GameCore { class ByAny; }
namespace RPG::GameCore { class ByAnyNpcMonsterInRange; }
namespace RPG::GameCore { class ByAttackSkillEffect; }
namespace RPG::GameCore { class ByAttackType; }
namespace RPG::GameCore { class ByAvatarBaseType; }
namespace RPG::GameCore { class ByBattleHasCertainResult; }
namespace RPG::GameCore { class ByBattleMissionTalkFinish; }
namespace RPG::GameCore { class ByBreakStanceDamageType; }
namespace RPG::GameCore { class ByCanAutoUseItemToRecoverMP; }
namespace RPG::GameCore { class ByCasterAliveOrLimbo; }
namespace RPG::GameCore { class ByCharacterDamageType; }
namespace RPG::GameCore { class ByCharacterSomatoWidthType; }
namespace RPG::GameCore { class ByCheckActionDelayChanged; }
namespace RPG::GameCore { class ByCheckActionDelayEffectType; }
namespace RPG::GameCore { class ByCheckAdditionalConditions; }
namespace RPG::GameCore { class ByCheckAdvModifierCallBackBehaviorFlag; }
namespace RPG::GameCore { class ByCheckBloodLinkDead; }
namespace RPG::GameCore { class ByCheckCharacterDie; }
namespace RPG::GameCore { class ByCheckCharacterFly; }
namespace RPG::GameCore { class ByCheckColonyMirrorTakenDiff; }
namespace RPG::GameCore { class ByCheckColonyTrace; }
namespace RPG::GameCore { class ByCheckCustomValueBool; }
namespace RPG::GameCore { class ByCheckDarkTeamDestroy; }
namespace RPG::GameCore { class ByCheckElfTodayManaged; }
namespace RPG::GameCore { class ByCheckFightFinish; }
namespace RPG::GameCore { class ByCheckFloorCustomBool; }
namespace RPG::GameCore { class ByCheckFloorCustomBoolV2; }
namespace RPG::GameCore { class ByCheckIsLimboRevivable; }
namespace RPG::GameCore { class ByCheckLastBattleSkillDrop; }
namespace RPG::GameCore { class ByCheckLineupAvatarBaseType; }
namespace RPG::GameCore { class ByCheckMechanismBarPhase; }
namespace RPG::GameCore { class ByCheckModifierCallBackBehaviorFlag; }
namespace RPG::GameCore { class ByCheckModifierCallBackIsInfected; }
namespace RPG::GameCore { class ByCheckModifierCallBackIsSelf; }
namespace RPG::GameCore { class ByCheckModifierCallBackModifierValue; }
namespace RPG::GameCore { class ByCheckModifierCallBackName; }
namespace RPG::GameCore { class ByCheckModifierCallBackStatusType; }
namespace RPG::GameCore { class ByCheckModifierDeathSource; }
namespace RPG::GameCore { class ByCheckMonsterDie; }
namespace RPG::GameCore { class ByCheckMonsterHurt; }
namespace RPG::GameCore { class ByCheckRogueExploreWin; }
namespace RPG::GameCore { class ByCheckRoleTrialNormalWaveShowDetail; }
namespace RPG::GameCore { class ByCheckTargetHPCanBeDamage; }
namespace RPG::GameCore { class ByCheckTimeRewindEntityPauseBySkillCount; }
namespace RPG::GameCore { class ByCheckTimelineEntityState; }
namespace RPG::GameCore { class ByCheckTrialCharacterDie; }
namespace RPG::GameCore { class ByCheckTurnCountMatch; }
namespace RPG::GameCore { class ByChimeraDuelIsMasterSelected; }
namespace RPG::GameCore { class ByCompareAIVariableInt; }
namespace RPG::GameCore { class ByCompareAbilityProperty; }
namespace RPG::GameCore { class ByCompareAlertValue; }
namespace RPG::GameCore { class ByCompareAliveEnemyNumber; }
namespace RPG::GameCore { class ByCompareAllWaveMonsterRank; }
namespace RPG::GameCore { class ByCompareAngleBetweenVCameraAndDir; }
namespace RPG::GameCore { class ByCompareBP; }
namespace RPG::GameCore { class ByCompareBaseTypeCount; }
namespace RPG::GameCore { class ByCompareBattleEventID; }
namespace RPG::GameCore { class ByCompareCarryMazebuff; }
namespace RPG::GameCore { class ByCompareChallengeGroupType; }
namespace RPG::GameCore { class ByCompareChallengeLeft; }
namespace RPG::GameCore { class ByCompareChangeValue; }
namespace RPG::GameCore { class ByCompareCharacterID; }
namespace RPG::GameCore { class ByCompareCharacterNumber; }
namespace RPG::GameCore { class ByCompareCharacterSpeed; }
namespace RPG::GameCore { class ByCompareCityAtmosphereSubwayArrived; }
namespace RPG::GameCore { class ByCompareControlSkillEffect; }
namespace RPG::GameCore { class ByCompareControlSkillEffectIsDamaging; }
namespace RPG::GameCore { class ByCompareCountOfBaseType; }
namespace RPG::GameCore { class ByCompareCurrentModifierStatusType; }
namespace RPG::GameCore { class ByCompareCurrentSkillEffectIsDamaging; }
namespace RPG::GameCore { class ByCompareCurrentSkillUseParam; }
namespace RPG::GameCore { class ByCompareCurrentTeammemberCount; }
namespace RPG::GameCore { class ByCompareCustomString; }
namespace RPG::GameCore { class ByCompareDamageCustomName; }
namespace RPG::GameCore { class ByCompareDamageTag; }
namespace RPG::GameCore { class ByCompareDynamicValue; }
namespace RPG::GameCore { class ByCompareEnhancedID; }
namespace RPG::GameCore { class ByCompareEntityAuthoritySide; }
namespace RPG::GameCore { class ByCompareEnvProfilePath; }
namespace RPG::GameCore { class ByCompareEvolveBuildGearLevel; }
namespace RPG::GameCore { class ByCompareEvolveBuildProperty; }
namespace RPG::GameCore { class ByCompareFSVwithGP; }
namespace RPG::GameCore { class ByCompareFearCharacterCount; }
namespace RPG::GameCore { class ByCompareFirstPerformance; }
namespace RPG::GameCore { class ByCompareFiveDimContainerDynamicFloat; }
namespace RPG::GameCore { class ByCompareFloorCustomFloat; }
namespace RPG::GameCore { class ByCompareFloorCustomFloatV2; }
namespace RPG::GameCore { class ByCompareFloorCustomString; }
namespace RPG::GameCore { class ByCompareFloorCustomStringV2; }
namespace RPG::GameCore { class ByCompareFloorSavedValue; }
namespace RPG::GameCore { class ByCompareFloorSavedValueV2; }
namespace RPG::GameCore { class ByCompareFourRotateVoxelCurrentDirection; }
namespace RPG::GameCore { class ByCompareGPwithGP; }
namespace RPG::GameCore { class ByCompareGraphDynamicFloat; }
namespace RPG::GameCore { class ByCompareGraphDynamicString; }
namespace RPG::GameCore { class ByCompareGridFightProperty; }
namespace RPG::GameCore { class ByCompareGroupProperty; }
namespace RPG::GameCore { class ByCompareGroupState; }
namespace RPG::GameCore { class ByCompareHP; }
namespace RPG::GameCore { class ByCompareHPRatio; }
namespace RPG::GameCore { class ByCompareHeartDialScriptEmo; }
namespace RPG::GameCore { class ByCompareHeartDialScriptStep; }
namespace RPG::GameCore { class ByCompareHeartDialTracingNPC; }
namespace RPG::GameCore { class ByCompareHipplenEnergy; }
namespace RPG::GameCore { class ByCompareInfiniteWaveSummonProgress; }
namespace RPG::GameCore { class ByCompareIsBookAvailable; }
namespace RPG::GameCore { class ByCompareIsEntityInDialogue; }
namespace RPG::GameCore { class ByCompareIsWolfBroBulletActivated; }
namespace RPG::GameCore { class ByCompareIsWolfBroPuzzleAvatar; }
namespace RPG::GameCore { class ByCompareItemNum; }
namespace RPG::GameCore { class ByCompareItemNumber; }
namespace RPG::GameCore { class ByCompareItemPair; }
namespace RPG::GameCore { class ByCompareLastKillSkill; }
namespace RPG::GameCore { class ByCompareLastKillType; }
namespace RPG::GameCore { class ByCompareLineupAvatarHpRatio; }
namespace RPG::GameCore { class ByCompareLittleGameLevelVarFixPoint; }
namespace RPG::GameCore { class ByCompareLittleGameLevelVarShort; }
namespace RPG::GameCore { class ByCompareMainMissionState; }
namespace RPG::GameCore { class ByCompareMatchThreeBirdLocation; }
namespace RPG::GameCore { class ByCompareMissionBattleWin; }
namespace RPG::GameCore { class ByCompareMissionCustomValue; }
namespace RPG::GameCore { class ByCompareModifierCallBackDynamicValue; }
namespace RPG::GameCore { class ByCompareModifierCustomEvent; }
namespace RPG::GameCore { class ByCompareModifierValue; }
namespace RPG::GameCore { class ByCompareMonsterID; }
namespace RPG::GameCore { class ByCompareMonsterPhase; }
namespace RPG::GameCore { class ByCompareMonsterRank; }
namespace RPG::GameCore { class ByCompareMonsterTemplateID; }
namespace RPG::GameCore { class ByCompareMonsterUniqueID; }
namespace RPG::GameCore { class ByCompareMusicRhythmSongID; }
namespace RPG::GameCore { class ByCompareNPCMonsterCheckState; }
namespace RPG::GameCore { class ByCompareNPCMonsterID; }
namespace RPG::GameCore { class ByCompareNextUnusedInsertAction; }
namespace RPG::GameCore { class ByCompareNpcMonsterRank; }
namespace RPG::GameCore { class ByCompareParamString; }
namespace RPG::GameCore { class ByCompareParamValue; }
namespace RPG::GameCore { class ByComparePerformance; }
namespace RPG::GameCore { class ByComparePerformanceResult; }
namespace RPG::GameCore { class ByComparePhoneMessageItem; }
namespace RPG::GameCore { class ByComparePreShowStanceBreakMonsterRank; }
namespace RPG::GameCore { class ByCompareProjectileLifetime; }
namespace RPG::GameCore { class ByComparePropAnimState; }
namespace RPG::GameCore { class ByComparePropFastDeliverCheckSimplifiedMode; }
namespace RPG::GameCore { class ByComparePropHPRatio; }
namespace RPG::GameCore { class ByComparePropID; }
namespace RPG::GameCore { class ByComparePropPuzzleCreated; }
namespace RPG::GameCore { class ByComparePropState; }
namespace RPG::GameCore { class ByComparePropStateNumber; }
namespace RPG::GameCore { class ByComparePropType; }
namespace RPG::GameCore { class ByCompareQuestGetReward; }
namespace RPG::GameCore { class ByCompareQuestProgress; }
namespace RPG::GameCore { class ByCompareRedStanceCount; }
namespace RPG::GameCore { class ByCompareResistChance; }
namespace RPG::GameCore { class ByCompareRogueDiceRotateImmediately; }
namespace RPG::GameCore { class ByCompareRogueMode; }
namespace RPG::GameCore { class ByCompareRotatableRegionLoadingState; }
namespace RPG::GameCore { class ByCompareSPChangeTag; }
namespace RPG::GameCore { class ByCompareSPRatio; }
namespace RPG::GameCore { class ByCompareScepterFuncType; }
namespace RPG::GameCore { class ByCompareScepterMainUnitEffectTag; }
namespace RPG::GameCore { class ByCompareScreenRatio; }
namespace RPG::GameCore { class ByCompareSelectSkillEffect; }
namespace RPG::GameCore { class ByCompareSeriesID; }
namespace RPG::GameCore { class ByCompareSkillBPChangePreview; }
namespace RPG::GameCore { class ByCompareSkillLevel; }
namespace RPG::GameCore { class ByCompareSkillUsageLimit; }
namespace RPG::GameCore { class ByCompareSomatoType; }
namespace RPG::GameCore { class ByCompareSoundEventInCD; }
namespace RPG::GameCore { class ByCompareSpecialAvatarType; }
namespace RPG::GameCore { class ByCompareSpecialSPRatio; }
namespace RPG::GameCore { class ByCompareStageID; }
namespace RPG::GameCore { class ByCompareStageType; }
namespace RPG::GameCore { class ByCompareStance; }
namespace RPG::GameCore { class ByCompareStanceCount; }
namespace RPG::GameCore { class ByCompareStanceRatio; }
namespace RPG::GameCore { class ByCompareStoryLineID; }
namespace RPG::GameCore { class ByCompareSubMissionState; }
namespace RPG::GameCore { class ByCompareSummonUnitCount; }
namespace RPG::GameCore { class ByCompareSwitchHandCatchItem; }
namespace RPG::GameCore { class ByCompareSwitchHandGestureType; }
namespace RPG::GameCore { class ByCompareSwitchMascotPickupCount; }
namespace RPG::GameCore { class ByCompareTarget; }
namespace RPG::GameCore { class ByCompareTargetCount; }
namespace RPG::GameCore { class ByCompareTargetCountClientOnly; }
namespace RPG::GameCore { class ByCompareTargetNatureID; }
namespace RPG::GameCore { class ByCompareTeamFormationRowIndex; }
namespace RPG::GameCore { class ByCompareTeamFormationWidth; }
namespace RPG::GameCore { class ByCompareTeamLeaderBodySize; }
namespace RPG::GameCore { class ByCompareTeamLeaderPath; }
namespace RPG::GameCore { class ByCompareTextJoinValue; }
namespace RPG::GameCore { class ByCompareTurnActionEntityTeamType; }
namespace RPG::GameCore { class ByCompareUnusedInsertAbilityCount; }
namespace RPG::GameCore { class ByCompareUnusedUltraSkillCount; }
namespace RPG::GameCore { class ByCompareValue; }
namespace RPG::GameCore { class ByCompareVersionFinalMainMission; }
namespace RPG::GameCore { class ByCompareWaveCount; }
namespace RPG::GameCore { class ByContainBehaviorFlag; }
namespace RPG::GameCore { class ByContainCustomString; }
namespace RPG::GameCore { class ByContainMonsterOnWave; }
namespace RPG::GameCore { class ByContainOpInSkill; }
namespace RPG::GameCore { class ByContainResistBehaviorFlag; }
namespace RPG::GameCore { class ByContainsCharacterState; }
namespace RPG::GameCore { class ByContainsParamFlag; }
namespace RPG::GameCore { class ByContainsRedStance; }
namespace RPG::GameCore { class ByCurrentAudioLanguage; }
namespace RPG::GameCore { class ByCurrentContainAbilityTag; }
namespace RPG::GameCore { class ByCurrentRogueHasMiracle; }
namespace RPG::GameCore { class ByCurrentRogueShopHasStage; }
namespace RPG::GameCore { class ByCurrentSkillEffect; }
namespace RPG::GameCore { class ByCurrentSkillName; }
namespace RPG::GameCore { class ByCurrentSkillTargetType; }
namespace RPG::GameCore { class ByCurrentSkillType; }
namespace RPG::GameCore { class ByCurrentTurnState; }
namespace RPG::GameCore { class ByCurrentVCameraConfigCaster; }
namespace RPG::GameCore { class ByDamageSourceContainBehaviorFlag; }
namespace RPG::GameCore { class ByDeployPuzzleBasePointIsAnswer; }
namespace RPG::GameCore { class ByDieAnimFinished; }
namespace RPG::GameCore { class ByDistance; }
namespace RPG::GameCore { class ByDrinkMakerCheersStoryDrinkHasMade; }
namespace RPG::GameCore { class ByDrinkMakerCheersStoryLastMakedDrinkIsPositive; }
namespace RPG::GameCore { class ByDynamicSkillButtonInputSlot; }
namespace RPG::GameCore { class ByDynamicValueDefined; }
namespace RPG::GameCore { class ByEnableStoryStreamingSource; }
namespace RPG::GameCore { class ByEntityCreated; }
namespace RPG::GameCore { class ByEntityOriginalEraConfig; }
namespace RPG::GameCore { class ByEntityTimeScaleZero; }
namespace RPG::GameCore { class ByFromBattleViewModeChange; }
namespace RPG::GameCore { class ByFuncUnlockCheck; }
namespace RPG::GameCore { class ByGameEntityNotCreated; }
namespace RPG::GameCore { class ByGridFightCharacterIsPreset; }
namespace RPG::GameCore { class ByGridFightCompareRoleExtInfo; }
namespace RPG::GameCore { class ByGridFightHasSameTrait; }
namespace RPG::GameCore { class ByGridFightHasTrait; }
namespace RPG::GameCore { class ByGridFightTraitSelectedCharacter; }
namespace RPG::GameCore { class ByHasActiveUnitOnScepter; }
namespace RPG::GameCore { class ByHasAssistAvatar; }
namespace RPG::GameCore { class ByHasBillboard; }
namespace RPG::GameCore { class ByHasCharacterRevived; }
namespace RPG::GameCore { class ByHasInsertAbilityExecutingDuringGameModePause; }
namespace RPG::GameCore { class ByHasInsertAbilityPending; }
namespace RPG::GameCore { class ByHasInsertActionByTarget; }
namespace RPG::GameCore { class ByHasInsertBattlePerform; }
namespace RPG::GameCore { class ByHasPausedElationTime; }
namespace RPG::GameCore { class ByHasPlayerMoveInput; }
namespace RPG::GameCore { class ByHasSecretWeak; }
namespace RPG::GameCore { class ByHasSkillTag; }
namespace RPG::GameCore { class ByHasSkillType; }
namespace RPG::GameCore { class ByHasSpareTeamFormation; }
namespace RPG::GameCore { class ByHasStanceWeak; }
namespace RPG::GameCore { class ByHasStanceWeakPreview; }
namespace RPG::GameCore { class ByHasSummonRelation; }
namespace RPG::GameCore { class ByHasUnGottenLevelReward; }
namespace RPG::GameCore { class ByHaveAbilityTarget; }
namespace RPG::GameCore { class ByHaveDyingEntity; }
namespace RPG::GameCore { class ByHaveEnemyAlive; }
namespace RPG::GameCore { class ByHaveInsertUltraWait; }
namespace RPG::GameCore { class ByHaveLockTargetInCamera; }
namespace RPG::GameCore { class ByHaveObstacle; }
namespace RPG::GameCore { class ByHaveSkillPointEntity; }
namespace RPG::GameCore { class ByHaveUniqueNameEffect; }
namespace RPG::GameCore { class ByHeroGender; }
namespace RPG::GameCore { class ByIfGroupIsOccupied; }
namespace RPG::GameCore { class ByInAttackRange; }
namespace RPG::GameCore { class ByInTimelinePerform; }
namespace RPG::GameCore { class ByInTrackCamera; }
namespace RPG::GameCore { class ByInTrackCameraByPathID; }
namespace RPG::GameCore { class ByInTurnBasedGameModeState; }
namespace RPG::GameCore { class ByInVision; }
namespace RPG::GameCore { class ByInfiniteMonsterWaveLeft; }
namespace RPG::GameCore { class ByIsActivityInSchedule; }
namespace RPG::GameCore { class ByIsAllLightTeamDied; }
namespace RPG::GameCore { class ByIsAllPuzzleStateMatchedClientOnly; }
namespace RPG::GameCore { class ByIsAllowUseSkill; }
namespace RPG::GameCore { class ByIsAutoBattle; }
namespace RPG::GameCore { class ByIsBattleEventEntity; }
namespace RPG::GameCore { class ByIsBattleReStart; }
namespace RPG::GameCore { class ByIsBodyPart; }
namespace RPG::GameCore { class ByIsBodyPartClientOnly; }
namespace RPG::GameCore { class ByIsBodyPartOwner; }
namespace RPG::GameCore { class ByIsCharacterChangeSource; }
namespace RPG::GameCore { class ByIsCharacterChangeTarget; }
namespace RPG::GameCore { class ByIsCharacterWeaknessActivated; }
namespace RPG::GameCore { class ByIsContainAdventureModifier; }
namespace RPG::GameCore { class ByIsContainModifier; }
namespace RPG::GameCore { class ByIsControlSkillDisable; }
namespace RPG::GameCore { class ByIsConvertDamage; }
namespace RPG::GameCore { class ByIsCurrentModifierAlive; }
namespace RPG::GameCore { class ByIsCurrentSkillActive; }
namespace RPG::GameCore { class ByIsCurrentSkillAllowMultiTarget; }
namespace RPG::GameCore { class ByIsDamageCritical; }
namespace RPG::GameCore { class ByIsDamageLuckCritical; }
namespace RPG::GameCore { class ByIsDamageType; }
namespace RPG::GameCore { class ByIsDirectKillBattle; }
namespace RPG::GameCore { class ByIsElfRestaurantFarmPlantFull; }
namespace RPG::GameCore { class ByIsElfRestaurantHasFarmer; }
namespace RPG::GameCore { class ByIsElfRestaurantRecipeCooked; }
namespace RPG::GameCore { class ByIsEnableNegativeHP; }
namespace RPG::GameCore { class ByIsEnemy; }
namespace RPG::GameCore { class ByIsEntityActionState; }
namespace RPG::GameCore { class ByIsEraFlipperEntityShow; }
namespace RPG::GameCore { class ByIsEvolveBuildCountDownItemShow; }
namespace RPG::GameCore { class ByIsExcludeInMultiCharacterFormation; }
namespace RPG::GameCore { class ByIsFakeSkillByName; }
namespace RPG::GameCore { class ByIsFakeSkillBySlot; }
namespace RPG::GameCore { class ByIsFirstChallengeBattle; }
namespace RPG::GameCore { class ByIsFirstInsertAbilityInQueue; }
namespace RPG::GameCore { class ByIsGenderType; }
namespace RPG::GameCore { class ByIsHealCallBackStack; }
namespace RPG::GameCore { class ByIsHitAllCallBackStack; }
namespace RPG::GameCore { class ByIsInAnimZone; }
namespace RPG::GameCore { class ByIsInCharacterIDGroup; }
namespace RPG::GameCore { class ByIsInCharmAction; }
namespace RPG::GameCore { class ByIsInCustomTeamFormation; }
namespace RPG::GameCore { class ByIsInDistrict; }
namespace RPG::GameCore { class ByIsInElationTime; }
namespace RPG::GameCore { class ByIsInEraFlipperSpotArea; }
namespace RPG::GameCore { class ByIsInModifierCallback; }
namespace RPG::GameCore { class ByIsInStoryMode; }
namespace RPG::GameCore { class ByIsIndirectDamage; }
namespace RPG::GameCore { class ByIsInfiniteBattle; }
namespace RPG::GameCore { class ByIsInsertAction; }
namespace RPG::GameCore { class ByIsMatchTeammateCount; }
namespace RPG::GameCore { class ByIsMazeSkillAffectCurrentWave; }
namespace RPG::GameCore { class ByIsMultiTargetCustomTeamFormation; }
namespace RPG::GameCore { class ByIsProjectileHitTarget; }
namespace RPG::GameCore { class ByIsPropLockable; }
namespace RPG::GameCore { class ByIsPropertyValueMinOrMax; }
namespace RPG::GameCore { class ByIsRebuiltSummonUnit; }
namespace RPG::GameCore { class ByIsRogueTournCollectionDisplayingCollection; }
namespace RPG::GameCore { class ByIsRogueTournCurRoomFinish; }
namespace RPG::GameCore { class ByIsRogueTournLastRoom; }
namespace RPG::GameCore { class ByIsRootHitCallback; }
namespace RPG::GameCore { class ByIsRotatableTimeRewindTarget; }
namespace RPG::GameCore { class ByIsScepter; }
namespace RPG::GameCore { class ByIsShowInActionBar; }
namespace RPG::GameCore { class ByIsSkillTypeDisable; }
namespace RPG::GameCore { class ByIsSplitDamage; }
namespace RPG::GameCore { class ByIsStageBuffAffectCurrentWave; }
namespace RPG::GameCore { class ByIsStageFirstWave; }
namespace RPG::GameCore { class ByIsSubTargetOfHpSharedGroup; }
namespace RPG::GameCore { class ByIsSwordTrainingSkillCanLearn; }
namespace RPG::GameCore { class ByIsTargetAbleToAction; }
namespace RPG::GameCore { class ByIsTargetCustomUnselectable; }
namespace RPG::GameCore { class ByIsTargetUnselectable; }
namespace RPG::GameCore { class ByIsTargetValid; }
namespace RPG::GameCore { class ByIsTeamLeader; }
namespace RPG::GameCore { class ByIsTeamLocationIndexType; }
namespace RPG::GameCore { class ByIsTeammate; }
namespace RPG::GameCore { class ByIsTopActionDelayTarget; }
namespace RPG::GameCore { class ByIsTriggerBattleAttacker; }
namespace RPG::GameCore { class ByIsTriggeredBlockDamage; }
namespace RPG::GameCore { class ByIsTurnActionEntity; }
namespace RPG::GameCore { class ByIsTurnOwnerEntity; }
namespace RPG::GameCore { class ByIsTutorialFinish; }
namespace RPG::GameCore { class ByIsUIPageOpen; }
namespace RPG::GameCore { class ByLevelLoseCheck; }
namespace RPG::GameCore { class ByLocalPlayerAvatarID; }
namespace RPG::GameCore { class ByLocalPlayerIsFakeAvatar; }
namespace RPG::GameCore { class ByLocalPlayerIsHero; }
namespace RPG::GameCore { class ByLocalWin; }
namespace RPG::GameCore { class ByMainMissionFinish; }
namespace RPG::GameCore { class ByMuseumProjectorThemeNum; }
namespace RPG::GameCore { class ByNPCStatus; }
namespace RPG::GameCore { class ByNot; }
namespace RPG::GameCore { class ByPamActionPhaseTalk; }
namespace RPG::GameCore { class ByPamAnchorContinous; }
namespace RPG::GameCore { class ByPamCurrentActionAnyDirection; }
namespace RPG::GameCore { class ByPamMovePhaseTalk; }
namespace RPG::GameCore { class ByPamNormalAction; }
namespace RPG::GameCore { class ByPamNormalActionSwitch; }
namespace RPG::GameCore { class ByPamOnlineFirst; }
namespace RPG::GameCore { class ByPartialFlipDeviceState; }
namespace RPG::GameCore { class ByPhotoGraphConditionSuccess; }
namespace RPG::GameCore { class ByPhotoGraphFovLevel; }
namespace RPG::GameCore { class ByPhotoGraphFovLevelRange; }
namespace RPG::GameCore { class ByPlayerGravityOppositeToCurrentSurface; }
namespace RPG::GameCore { class ByPreShowRedStanceBreak; }
namespace RPG::GameCore { class ByPreShowStanceBreak; }
namespace RPG::GameCore { class ByPropIsCreateByActiveSkill; }
namespace RPG::GameCore { class ByRandomChance; }
namespace RPG::GameCore { class ByRandomChanceClientOnly; }
namespace RPG::GameCore { class ByRankActivated; }
namespace RPG::GameCore { class ByRankActivatedFromLineup; }
namespace RPG::GameCore { class ByRegionEraState; }
namespace RPG::GameCore { class BySaveModelWhenDead; }
namespace RPG::GameCore { class BySharedSummonUnitInUse; }
namespace RPG::GameCore { class ByShowChallengeSelectPage; }
namespace RPG::GameCore { class BySimulateSpeedUp; }
namespace RPG::GameCore { class BySkillPointActivated; }
namespace RPG::GameCore { class BySkipNextTeleportEffect; }
namespace RPG::GameCore { class ByStatusCount; }
namespace RPG::GameCore { class BySwitchMascotCanShootTarget; }
namespace RPG::GameCore { class ByTargetAliveState; }
namespace RPG::GameCore { class ByTargetContainerRatioInRect; }
namespace RPG::GameCore { class ByTargetEntityType; }
namespace RPG::GameCore { class ByTargetHitBoxActive; }
namespace RPG::GameCore { class ByTargetInCameraScreenScope; }
namespace RPG::GameCore { class ByTargetIsBetweenCameraAndAnother; }
namespace RPG::GameCore { class ByTargetIsStanceWeak; }
namespace RPG::GameCore { class ByTargetIsStanceWeakForCurrentHit; }
namespace RPG::GameCore { class ByTargetIsStanceWeakForCurrentSkill; }
namespace RPG::GameCore { class ByTargetListAll; }
namespace RPG::GameCore { class ByTargetListAny; }
namespace RPG::GameCore { class ByTargetListIntersects; }
namespace RPG::GameCore { class ByTargetLockHP; }
namespace RPG::GameCore { class ByTargetLockStance; }
namespace RPG::GameCore { class ByTargetNpcExists; }
namespace RPG::GameCore { class ByTargetTeam; }
namespace RPG::GameCore { class ByTargetVisible; }
namespace RPG::GameCore { class ByTimeRewindTargetCurrentState; }
namespace RPG::GameCore { class ByTimeRewindTargetMotionPause; }
namespace RPG::GameCore { class ByTrainVisitorIsMeet; }
namespace RPG::GameCore { class ByTurnOwnerActionPhaseEnd; }
namespace RPG::GameCore { class ByTurnOwnerHasActionInTurn; }
namespace RPG::GameCore { class ByTurnOwnerHasPendingOneMore; }
namespace RPG::GameCore { class ByUsedFiveDimHoldDash; }
namespace RPG::GameCore { class ByViewModeSwitchEmptyServant; }
namespace RPG::GameCore { class ByWaitCustomString; }
namespace RPG::GameCore { class CRPVirtualCameraTargetConfig; }
namespace RPG::GameCore { class CheckFloorSavedValueConfig; }
namespace RPG::GameCore { class ChenLingFesPredicateItemCondition; }
namespace RPG::GameCore { class ConvinceByCompareHp; }
namespace RPG::GameCore { class DebugLogInPredicates; }
namespace RPG::GameCore { class DynamicBool; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class EffectModifyData; }
namespace RPG::GameCore { class FetchAdvMonsterData; }
namespace RPG::GameCore { class FetchAdvNPCData; }
namespace RPG::GameCore { class FetchAdvNPCDataEx; }
namespace RPG::GameCore { class FetchAdvPropData; }
namespace RPG::GameCore { class FilePath; }
namespace RPG::GameCore { class FinishActionConfig; }
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FloorCustomBoolConfig; }
namespace RPG::GameCore { class FloorCustomFloatConfig; }
namespace RPG::GameCore { class FloorCustomStringConfig; }
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace RPG::GameCore { class FloorTargetAgentConfig; }
namespace RPG::GameCore { class GroupFetchLocalTarget; }
namespace RPG::GameCore { class GroupPropertyConfig; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class IslandStateConditionSet; }
namespace RPG::GameCore { class IslandStateConfig; }
namespace RPG::GameCore { class IslandStateSavedValueCondition; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class LittleGameFetchProxyByID; }
namespace RPG::GameCore { class MainMissionInfoConfig; }
namespace RPG::GameCore { class MainMissionPartialInfoConfig; }
namespace RPG::GameCore { class MissionCustomValue; }
namespace RPG::GameCore { class MissionCustomValueGroupConfig; }
namespace RPG::GameCore { class MissionCustomValueGroupConfigPack; }
namespace RPG::GameCore { class MissionCustomValueRewardConfig; }
namespace RPG::GameCore { class MissionCustomValueTuple; }
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class MissionWaypointDataPack; }
namespace RPG::GameCore { class OfflineCullingConfig; }
namespace RPG::GameCore { class OverrideMonoEffectConfig; }
namespace RPG::GameCore { class PckFileList; }
namespace RPG::GameCore { class PckPatchConfig; }
namespace RPG::GameCore { class PckPatchPlatform; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class PropDestructItem; }
namespace RPG::GameCore { class PropPredicateWithEntity; }
namespace RPG::GameCore { class PropStateItem; }
namespace RPG::GameCore { class QueryHoyoTag; }
namespace RPG::GameCore { class RA_ByAIStatus; }
namespace RPG::GameCore { class RA_ByAlertLevel; }
namespace RPG::GameCore { class RA_ByCompareVariableBool; }
namespace RPG::GameCore { class RA_ByCompareVariableFloat; }
namespace RPG::GameCore { class RA_ByContainEntityTag; }
namespace RPG::GameCore { class RA_ByDistance; }
namespace RPG::GameCore { class RtArcShapeConfig; }
namespace RPG::GameCore { class RtBattleTargetCameraFocusTarget; }
namespace RPG::GameCore { class RtBattleTargetFetchGridByTag; }
namespace RPG::GameCore { class RtByCanMove; }
namespace RPG::GameCore { class RtByCompareProperty; }
namespace RPG::GameCore { class RtByComparePropertyRatio; }
namespace RPG::GameCore { class RtByCurrentSkillName; }
namespace RPG::GameCore { class RtByHasLockTarget; }
namespace RPG::GameCore { class RtByHasSelectSkill; }
namespace RPG::GameCore { class RtByHasTargetInAlertRange; }
namespace RPG::GameCore { class RtByInAlertRange; }
namespace RPG::GameCore { class RtByInSkillRange; }
namespace RPG::GameCore { class RtByIsMoving; }
namespace RPG::GameCore { class RtByIsSkillUsing; }
namespace RPG::GameCore { class RtByIsTriggeredBlockDamage; }
namespace RPG::GameCore { class RtBySkillCanUse; }
namespace RPG::GameCore { class RtCircleShapeConfig; }
namespace RPG::GameCore { class RtCollision2DShapeConfig; }
namespace RPG::GameCore { class RtDirConfig; }
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class RtPointShapeConfig; }
namespace RPG::GameCore { class RtRectShapeConfig; }
namespace RPG::GameCore { class RtTargetFetchGridAt; }
namespace RPG::GameCore { class RtTargetFetchModifierBindSnapshot; }
namespace RPG::GameCore { class RtTargetFetchPosWithMaxTargetCount; }
namespace RPG::GameCore { class RtTargetFetchTargetInArea; }
namespace RPG::GameCore { class RtTargetFetchTrigger; }
namespace RPG::GameCore { class RtTargetMapBelongGrid; }
namespace RPG::GameCore { class RtTargetMapBornPoint; }
namespace RPG::GameCore { class RtTargetMapEmptyGridNearby; }
namespace RPG::GameCore { class RtTargetMapEntityInGrid; }
namespace RPG::GameCore { class RtTargetMapGridNearby; }
namespace RPG::GameCore { class RtTargetMapGridOwner; }
namespace RPG::GameCore { class RtTargetMapLockTarget; }
namespace RPG::GameCore { class RtTargetMapMoveTarget; }
namespace RPG::GameCore { class RtTargetMapPosWithMaxTargetCount; }
namespace RPG::GameCore { class RtTargetMapPosWithOffset; }
namespace RPG::GameCore { class RtTargetMapSkillAbortSource; }
namespace RPG::GameCore { class RtTargetMapSkillCastPos; }
namespace RPG::GameCore { class RtTargetMapSkillTarget; }
namespace RPG::GameCore { class RtTargetMapTargetInTrigger; }
namespace RPG::GameCore { class ST_ByAIHangUp; }
namespace RPG::GameCore { class ST_ByAlertLevel; }
namespace RPG::GameCore { class ST_ByCompareVariableBool; }
namespace RPG::GameCore { class ST_ByCompareVariableFloat; }
namespace RPG::GameCore { class ST_ByCompareVariableString; }
namespace RPG::GameCore { class ST_ByContainAbnormalState; }
namespace RPG::GameCore { class ST_ByDistToGuardPosition; }
namespace RPG::GameCore { class ST_ByDistanceToEnchantTarget; }
namespace RPG::GameCore { class ST_ByDistanceToTarget; }
namespace RPG::GameCore { class ST_ByEnterCombat; }
namespace RPG::GameCore { class ST_ByExitCombat; }
namespace RPG::GameCore { class ST_ByForceExitCombat; }
namespace RPG::GameCore { class ST_ByFoundSmartObject; }
namespace RPG::GameCore { class ST_ByHasAbnormalState; }
namespace RPG::GameCore { class ST_ByHasAdvBehaviorFlag; }
namespace RPG::GameCore { class ST_ByHasBornSmartObject; }
namespace RPG::GameCore { class ST_ByHasPatrolPath; }
namespace RPG::GameCore { class ST_ByHasTarget; }
namespace RPG::GameCore { class ST_ByInAIStatus; }
namespace RPG::GameCore { class ST_ByInAttackAngle; }
namespace RPG::GameCore { class ST_ByInAttackDistance; }
namespace RPG::GameCore { class ST_ByOnHit; }
namespace RPG::GameCore { class ST_BySkillInCD; }
namespace RPG::GameCore { class ST_ElfByIsCustomerState; }
namespace RPG::GameCore { class ST_ElfByIsTakeOutState; }
namespace RPG::GameCore { class ST_ElfByIsWaiterState; }
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StageConfig; }
namespace RPG::GameCore { class StageGrassOverrideConfig; }
namespace RPG::GameCore { class StageIslandConfig; }
namespace RPG::GameCore { class StageIslandHLODConfig; }
namespace RPG::GameCore { class StageVersionData; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace RPG::GameCore { class StageVolumeConfig; }
namespace RPG::GameCore { class StreamingBlockVolumeComponentData; }
namespace RPG::GameCore { class StreamingForceHLODVolumeData; }
namespace RPG::GameCore { class StreamingGroupVolumeComponentData; }
namespace RPG::GameCore { class StreamingLightVolumeData; }
namespace RPG::GameCore { class StreamingRatioVolumeData; }
namespace RPG::GameCore { class StreamingSceneObjLodScaleVolumeComponentData; }
namespace RPG::GameCore { class StreamingSceneScaleData; }
namespace RPG::GameCore { class StreamingVolumeComponentData; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace RPG::GameCore { class SubMissionRelationConfig; }
namespace RPG::GameCore { class SubStageData; }
namespace RPG::GameCore { class SubStageMetaData; }
namespace RPG::GameCore { class TargetAlias; }
namespace RPG::GameCore { class TargetCompute; }
namespace RPG::GameCore { class TargetConcat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetFetchAbilityGroup; }
namespace RPG::GameCore { class TargetFetchAbilityTarget; }
namespace RPG::GameCore { class TargetFetchAbilityTargetLeader; }
namespace RPG::GameCore { class TargetFetchActionDelayExceed; }
namespace RPG::GameCore { class TargetFetchActualOwner; }
namespace RPG::GameCore { class TargetFetchAdvAITarget; }
namespace RPG::GameCore { class TargetFetchAdvAllNPCMonsters; }
namespace RPG::GameCore { class TargetFetchAdvFakeAvatar; }
namespace RPG::GameCore { class TargetFetchAdvFakeAvatarPlayerStub; }
namespace RPG::GameCore { class TargetFetchAdvLineup; }
namespace RPG::GameCore { class TargetFetchAdvLocalPlayer; }
namespace RPG::GameCore { class TargetFetchAdvLockTarget; }
namespace RPG::GameCore { class TargetFetchAdvMonster; }
namespace RPG::GameCore { class TargetFetchAdvMonsterEx; }
namespace RPG::GameCore { class TargetFetchAdvNPC; }
namespace RPG::GameCore { class TargetFetchAdvNpcEx; }
namespace RPG::GameCore { class TargetFetchAdvPillarPuzzleInteractingPillar; }
namespace RPG::GameCore { class TargetFetchAdvProp; }
namespace RPG::GameCore { class TargetFetchAdvPropEx; }
namespace RPG::GameCore { class TargetFetchAdvSkillTargetEntityList; }
namespace RPG::GameCore { class TargetFetchAdvTeamLeader; }
namespace RPG::GameCore { class TargetFetchAdvTeamMembers; }
namespace RPG::GameCore { class TargetFetchAidAttacker; }
namespace RPG::GameCore { class TargetFetchAidDefender; }
namespace RPG::GameCore { class TargetFetchAidProtector; }
namespace RPG::GameCore { class TargetFetchAimAtTargetList; }
namespace RPG::GameCore { class TargetFetchAliveSourceEntity; }
namespace RPG::GameCore { class TargetFetchAllCustomUnselectable; }
namespace RPG::GameCore { class TargetFetchAllStanceBreakEntity; }
namespace RPG::GameCore { class TargetFetchAllUnselectable; }
namespace RPG::GameCore { class TargetFetchAnchor; }
namespace RPG::GameCore { class TargetFetchAnchorByName; }
namespace RPG::GameCore { class TargetFetchAvatarAssistant; }
namespace RPG::GameCore { class TargetFetchAvatarByID; }
namespace RPG::GameCore { class TargetFetchBattleEventCaster; }
namespace RPG::GameCore { class TargetFetchBattleEventEntityList; }
namespace RPG::GameCore { class TargetFetchBloodLinkTargets; }
namespace RPG::GameCore { class TargetFetchByTauntAndAggro; }
namespace RPG::GameCore { class TargetFetchCallBackModifierCaster; }
namespace RPG::GameCore { class TargetFetchCameraAimTargetList; }
namespace RPG::GameCore { class TargetFetchCameraAnchorTargetList; }
namespace RPG::GameCore { class TargetFetchCaster; }
namespace RPG::GameCore { class TargetFetchContextDialogueTalkTrigger; }
namespace RPG::GameCore { class TargetFetchCurrentDamageAttacker; }
namespace RPG::GameCore { class TargetFetchCurrentDamageDefender; }
namespace RPG::GameCore { class TargetFetchCurrentGroupNPCMonsters; }
namespace RPG::GameCore { class TargetFetchCurrentInsertTurnSource; }
namespace RPG::GameCore { class TargetFetchCurrentPlayerMazeSkillLockTarget; }
namespace RPG::GameCore { class TargetFetchDataViewUISelectEnter; }
namespace RPG::GameCore { class TargetFetchDataViewUISelectLeave; }
namespace RPG::GameCore { class TargetFetchDialogueEntity; }
namespace RPG::GameCore { class TargetFetchElationTimeAllTargets; }
namespace RPG::GameCore { class TargetFetchElationTimeSource; }
namespace RPG::GameCore { class TargetFetchFarmElementEntity; }
namespace RPG::GameCore { class TargetFetchFateRinCardCaster; }
namespace RPG::GameCore { class TargetFetchFateRinCardSkillMainTargetList; }
namespace RPG::GameCore { class TargetFetchFateRinCardSkillSubTargetList; }
namespace RPG::GameCore { class TargetFetchFateRinCardSkillTargetList; }
namespace RPG::GameCore { class TargetFetchFightMVPEntity; }
namespace RPG::GameCore { class TargetFetchInstigator; }
namespace RPG::GameCore { class TargetFetchLastKillCaster; }
namespace RPG::GameCore { class TargetFetchLastKillTarget; }
namespace RPG::GameCore { class TargetFetchLastSearchEntity; }
namespace RPG::GameCore { class TargetFetchLastZombieEntity; }
namespace RPG::GameCore { class TargetFetchLatestEnterStageAvatar; }
namespace RPG::GameCore { class TargetFetchLevelEntity; }
namespace RPG::GameCore { class TargetFetchLockTarget; }
namespace RPG::GameCore { class TargetFetchMainMonster; }
namespace RPG::GameCore { class TargetFetchMazeBuffTargets; }
namespace RPG::GameCore { class TargetFetchModifierOwner; }
namespace RPG::GameCore { class TargetFetchMonsterByID; }
namespace RPG::GameCore { class TargetFetchNextSkillCaster; }
namespace RPG::GameCore { class TargetFetchNextTurnOwnerEntity; }
namespace RPG::GameCore { class TargetFetchNone; }
namespace RPG::GameCore { class TargetFetchNormalPam; }
namespace RPG::GameCore { class TargetFetchNpcMonsterWithMazeBuff; }
namespace RPG::GameCore { class TargetFetchOwnerEntity; }
namespace RPG::GameCore { class TargetFetchParamEntity; }
namespace RPG::GameCore { class TargetFetchParamEntityByIndex; }
namespace RPG::GameCore { class TargetFetchParamEntityList; }
namespace RPG::GameCore { class TargetFetchPartner; }
namespace RPG::GameCore { class TargetFetchPassiveEntity; }
namespace RPG::GameCore { class TargetFetchProjectileHitEntity; }
namespace RPG::GameCore { class TargetFetchProjectileHitPos; }
namespace RPG::GameCore { class TargetFetchPropFarmElement; }
namespace RPG::GameCore { class TargetFetchPuzzleEntity; }
namespace RPG::GameCore { class TargetFetchRogueMagicScepterList; }
namespace RPG::GameCore { class TargetFetchSnapshotEntityList; }
namespace RPG::GameCore { class TargetFetchStanceBreakTargetEntity; }
namespace RPG::GameCore { class TargetFetchSummonMonsters; }
namespace RPG::GameCore { class TargetFetchSummonUnit; }
namespace RPG::GameCore { class TargetFetchTaskActionTarget; }
namespace RPG::GameCore { class TargetFetchTeamEntity; }
namespace RPG::GameCore { class TargetFetchTemplateEntityList; }
namespace RPG::GameCore { class TargetFetchTimeRewindStrikeSource; }
namespace RPG::GameCore { class TargetFetchTrailblazer; }
namespace RPG::GameCore { class TargetFetchTurnActionEntity; }
namespace RPG::GameCore { class TargetFetchTurnOwnerEntity; }
namespace RPG::GameCore { class TargetFetchUniqueNameEntity; }
namespace RPG::GameCore { class TargetFetchUnstageTarget; }
namespace RPG::GameCore { class TargetFilter; }
namespace RPG::GameCore { class TargetFilterAliveState; }
namespace RPG::GameCore { class TargetFilterTargetType; }
namespace RPG::GameCore { class TargetIndex; }
namespace RPG::GameCore { class TargetMapActionBarAdjoinEntityList; }
namespace RPG::GameCore { class TargetMapAdjoinEntity; }
namespace RPG::GameCore { class TargetMapAllOffTeamMember; }
namespace RPG::GameCore { class TargetMapAllTeamMember; }
namespace RPG::GameCore { class TargetMapAllTeamMemberFromFirstEntity; }
namespace RPG::GameCore { class TargetMapAttackTargetList; }
namespace RPG::GameCore { class TargetMapBattleEventCaster; }
namespace RPG::GameCore { class TargetMapBattleEventCreator; }
namespace RPG::GameCore { class TargetMapBetweenEntity; }
namespace RPG::GameCore { class TargetMapCharacterChangeSource; }
namespace RPG::GameCore { class TargetMapCharacterChangeTarget; }
namespace RPG::GameCore { class TargetMapCreatedBattleEvent; }
namespace RPG::GameCore { class TargetMapCreator; }
namespace RPG::GameCore { class TargetMapDamageAttacker; }
namespace RPG::GameCore { class TargetMapDamageChunkTargetList; }
namespace RPG::GameCore { class TargetMapDamageDefender; }
namespace RPG::GameCore { class TargetMapDummyEntity; }
namespace RPG::GameCore { class TargetMapDynamicEntityParam; }
namespace RPG::GameCore { class TargetMapEnemyTeamEntity; }
namespace RPG::GameCore { class TargetMapPartEntity; }
namespace RPG::GameCore { class TargetMapPartOwnerEntity; }
namespace RPG::GameCore { class TargetMapPartToOwner; }
namespace RPG::GameCore { class TargetMapSkillActualAttacker; }
namespace RPG::GameCore { class TargetMapSkillIndicatorTarget; }
namespace RPG::GameCore { class TargetMapSkillPointEntity; }
namespace RPG::GameCore { class TargetMapSkillSubTarget; }
namespace RPG::GameCore { class TargetMapSkillTarget; }
namespace RPG::GameCore { class TargetMapSnapshotEntity; }
namespace RPG::GameCore { class TargetMapSummonedMinions; }
namespace RPG::GameCore { class TargetMapSummoner; }
namespace RPG::GameCore { class TargetMapTeamEntity; }
namespace RPG::GameCore { class TargetMapTeamFormation; }
namespace RPG::GameCore { class TargetQuery; }
namespace RPG::GameCore { class TargetRemoveUnselectable; }
namespace RPG::GameCore { class TargetReverse; }
namespace RPG::GameCore { class TargetSelector; }
namespace RPG::GameCore { class TargetSeqOperation; }
namespace RPG::GameCore { class TargetSequence; }
namespace RPG::GameCore { class TargetShuffle; }
namespace RPG::GameCore { class TargetSortByAITag; }
namespace RPG::GameCore { class TargetSortByActionOrder; }
namespace RPG::GameCore { class TargetSortByCustomFormationIndexClientOnly; }
namespace RPG::GameCore { class TargetSortByDeathOrder; }
namespace RPG::GameCore { class TargetSortByDistance; }
namespace RPG::GameCore { class TargetSortByElationPriority; }
namespace RPG::GameCore { class TargetSortByFormation; }
namespace RPG::GameCore { class TargetSortByGridFightPower; }
namespace RPG::GameCore { class TargetSortByGridFightRoleTotalDamage; }
namespace RPG::GameCore { class TargetSortByModifierStatusCount; }
namespace RPG::GameCore { class TargetSortByModifierValue; }
namespace RPG::GameCore { class TargetSortByMultiModifierValueSum; }
namespace RPG::GameCore { class TargetSortByPredicate; }
namespace RPG::GameCore { class TargetSortByProperty; }
namespace RPG::GameCore { class TargetSortByPropertyRatio; }
namespace RPG::GameCore { class TargetSortByValueEvaluator; }
namespace RPG::GameCore { class TargetSortByWeaknessMatch; }
namespace RPG::GameCore { class TargetSortMonsterRank; }
namespace RPG::GameCore { class TargetSortSequence; }
namespace RPG::GameCore { class TargetTake; }
namespace RPG::GameCore { class TriggerEffect; }
namespace RPG::GameCore { class TriggerEffectForUI; }
namespace RPG::GameCore { class TriggerEffectList; }
namespace RPG::GameCore { class TriggerEffectListForUI; }
namespace RPG::GameCore { class TriggerSDFTextEffect; }
namespace RPG::GameCore { class UniversalHotFixBasePredicate; }
namespace RPG::GameCore { class UniversalHotFixPredicateA; }
namespace RPG::GameCore { class UniversalHotFixPredicateB; }
namespace RPG::GameCore { class UniversalHotFixPredicateC; }
namespace RPG::GameCore { class UniversalHotFixTaskConfig; }
namespace RPG::GameCore { class VE_CharacterID; }
namespace RPG::GameCore { class VE_Const; }
namespace RPG::GameCore { class VE_FactorGroup; }
namespace RPG::GameCore { class VE_Group; }
namespace RPG::GameCore { class VE_Predicate; }
namespace RPG::GameCore { class VE_Random; }
namespace RPG::GameCore { class VE_RtAngleBetween; }
namespace RPG::GameCore { class VE_RtBattleGridOrder; }
namespace RPG::GameCore { class VE_RtBattleLevelByCharacterID; }
namespace RPG::GameCore { class VE_RtBattleProperty; }
namespace RPG::GameCore { class VE_RtBattlePropertyRatio; }
namespace RPG::GameCore { class VE_RtBattleRankByCharacterID; }
namespace RPG::GameCore { class VE_RtBattleRankParamByCharacterID; }
namespace RPG::GameCore { class VE_RtBattleSkillParamByCharacterID; }
namespace RPG::GameCore { class VE_RtDistance; }
namespace RPG::GameCore { class VE_RtGridDistance; }
namespace RPG::GameCore { class VE_RtModifierProperty; }
namespace RPG::GameCore { class VE_RtSkillProperty; }
namespace RPG::GameCore { class VE_RtTimeStamp; }
namespace RPG::GameCore { class VE_TargetCount; }
namespace RPG::GameCore { class VE_Value; }
namespace RPG::GameCore { class VP_Abs; }
namespace RPG::GameCore { class VP_Add; }
namespace RPG::GameCore { class VP_Clamp; }
namespace RPG::GameCore { class VP_ConstMap; }
namespace RPG::GameCore { class VP_Div; }
namespace RPG::GameCore { class VP_Exp; }
namespace RPG::GameCore { class VP_Invert; }
namespace RPG::GameCore { class VP_LinearMap; }
namespace RPG::GameCore { class VP_Max; }
namespace RPG::GameCore { class VP_Min; }
namespace RPG::GameCore { class VP_Mul; }
namespace RPG::GameCore { class VP_Pow; }
namespace RPG::GameCore { class VP_Sigmoid; }
namespace RPG::GameCore { class VP_Sub; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace RPG::GameCore { class ValueEvaluatorVec3; }
namespace RPG::GameCore { class ValuePostProcessConfig; }
namespace RPG::GameCore { template <typename T> class NativeContainer_1; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

#define CLASS_1_D837DED66799FBE3_METHOD_1_000CEBD13932B58F_OFFSET UNITYSDK_OFFSET(0x1CABFDD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_00B6B408F45CF4DA_OFFSET UNITYSDK_OFFSET(0x1CABF5E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_00E1DA095B1E2D88_OFFSET UNITYSDK_OFFSET(0x1CAB2E40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_00E9D23E00A5D6E8_OFFSET UNITYSDK_OFFSET(0x1CABB680)
#define CLASS_1_D837DED66799FBE3_METHOD_1_00F1E4D06FFD47D4_OFFSET UNITYSDK_OFFSET(0x1CAB8A20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0106DD444772739F_OFFSET UNITYSDK_OFFSET(0x1CAC1D10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_01172CE0B51DA08A_OFFSET UNITYSDK_OFFSET(0x1CAB8D30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_012CABF8530AF330_OFFSET UNITYSDK_OFFSET(0x1CABDC70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_01347C146E95CF88_OFFSET UNITYSDK_OFFSET(0x1CABA1D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_01642F4B17DBD7C2_OFFSET UNITYSDK_OFFSET(0x1CAC0D30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_01782926F36D8F24_OFFSET UNITYSDK_OFFSET(0x1CABDCE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_01BEB1066C64AAC3_OFFSET UNITYSDK_OFFSET(0x1CAC2E40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0208A8C81B084F34_OFFSET UNITYSDK_OFFSET(0x1CAC1DA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_021E248F8B2D32CE_OFFSET UNITYSDK_OFFSET(0x1CABDC80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_02B30785BD0A3C46_OFFSET UNITYSDK_OFFSET(0x1CAC02C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_02CB0385A8A7402F_OFFSET UNITYSDK_OFFSET(0x1CAB5220)
#define CLASS_1_D837DED66799FBE3_METHOD_1_03D6026FFB27BE08_OFFSET UNITYSDK_OFFSET(0x1CABECD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0479390A1370BC13_OFFSET UNITYSDK_OFFSET(0x1CAC1C50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_04AB1870464A6BA2_OFFSET UNITYSDK_OFFSET(0x1CABB4B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_050A727B77F7B9F1_OFFSET UNITYSDK_OFFSET(0x1CAB9E30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_050F0D8CA83D07BD_OFFSET UNITYSDK_OFFSET(0x1CAB7150)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0531CD42610DDCE4_OFFSET UNITYSDK_OFFSET(0x1CABEAE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0556A85D31899424_OFFSET UNITYSDK_OFFSET(0x1CAB94F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_058491206EA3EABD_OFFSET UNITYSDK_OFFSET(0x1CAC3000)
#define CLASS_1_D837DED66799FBE3_METHOD_1_05E2C1FFBABACDBF_OFFSET UNITYSDK_OFFSET(0x1CABE1D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_05ECD7E575083F26_OFFSET UNITYSDK_OFFSET(0x1CABC3A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_063A90E6D64405A6_OFFSET UNITYSDK_OFFSET(0x1CAB8B50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_06F64597AF7238C3_OFFSET UNITYSDK_OFFSET(0x1CAC2C90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_06FF06254573283E_OFFSET UNITYSDK_OFFSET(0x1CABC760)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0713B4F64B01FD79_OFFSET UNITYSDK_OFFSET(0x1CABBCA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_081E81317B154048_OFFSET UNITYSDK_OFFSET(0x1CABB790)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0856BE86AB8B1C5E_OFFSET UNITYSDK_OFFSET(0x1CAC1D60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_08EB00F1208A71E4_OFFSET UNITYSDK_OFFSET(0x1CAB6DC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_09118ACE54583013_OFFSET UNITYSDK_OFFSET(0x1CAC0070)
#define CLASS_1_D837DED66799FBE3_METHOD_1_09118BDE3FC85942_OFFSET UNITYSDK_OFFSET(0x1CAB8A50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0993906567F599B0_OFFSET UNITYSDK_OFFSET(0x1CAC1D30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0A7A9C07107D227D_OFFSET UNITYSDK_OFFSET(0x1CAC2F70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0A85B371B0FAC072_OFFSET UNITYSDK_OFFSET(0x1CABBF40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0A8FA96807155CA4_OFFSET UNITYSDK_OFFSET(0x1CAC1CB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0AA49AE794563DC2_OFFSET UNITYSDK_OFFSET(0x1CABF2A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0BA604B637879A0A_OFFSET UNITYSDK_OFFSET(0x1CABEEE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0BEF7B0D6B938E55_OFFSET UNITYSDK_OFFSET(0x1CAC1310)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0C33D8F949300978_OFFSET UNITYSDK_OFFSET(0x1CAC17B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0C4B7DF62BE9B570_OFFSET UNITYSDK_OFFSET(0x1CAB53E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0C7D55FCF5096503_OFFSET UNITYSDK_OFFSET(0x1CAB7EC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0D2387D6085CABF0_OFFSET UNITYSDK_OFFSET(0x1CABBE10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0D4366DA38CEB1F4_OFFSET UNITYSDK_OFFSET(0x1CAC14D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0D7054043E9DE45B_OFFSET UNITYSDK_OFFSET(0x1CABEF70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0D828D086C30A04D_OFFSET UNITYSDK_OFFSET(0x1CABD0E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0D9CF3E739A130D6_OFFSET UNITYSDK_OFFSET(0x1CABCDC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0E116B107F97CF93_OFFSET UNITYSDK_OFFSET(0x1CABC2B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_0F3778604904073B_OFFSET UNITYSDK_OFFSET(0x1CABA770)
#define CLASS_1_D837DED66799FBE3_METHOD_1_10647AA5E3ED92F3_OFFSET UNITYSDK_OFFSET(0x1CAC2E70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1066E12C64BCCDA8_OFFSET UNITYSDK_OFFSET(0x1CAC0A10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_107E6176EA54CFDD_OFFSET UNITYSDK_OFFSET(0x1CABC370)
#define CLASS_1_D837DED66799FBE3_METHOD_1_10D63DFB6C293422_OFFSET UNITYSDK_OFFSET(0x1CABAF60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_10F2684111BDACA3_OFFSET UNITYSDK_OFFSET(0x1CAC0F50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_112143E8280FEAD6_OFFSET UNITYSDK_OFFSET(0x1CAB88D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_114ADA0F957EB749_OFFSET UNITYSDK_OFFSET(0x1CABFD60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_11A85539676321E1_OFFSET UNITYSDK_OFFSET(0x1CAB6F00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_11C65EC5ED91E9C9_OFFSET UNITYSDK_OFFSET(0x1CAB8780)
#define CLASS_1_D837DED66799FBE3_METHOD_1_120AD4F08FD628A6_OFFSET UNITYSDK_OFFSET(0x1CAB7010)
#define CLASS_1_D837DED66799FBE3_METHOD_1_121829884F20C639_OFFSET UNITYSDK_OFFSET(0x1CABA1A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_12AD134207A30FF1_OFFSET UNITYSDK_OFFSET(0x1CABA690)
#define CLASS_1_D837DED66799FBE3_METHOD_1_12C3053DB3D2BC85_OFFSET UNITYSDK_OFFSET(0x1CABEDF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_12C73044BC9F8E48_OFFSET UNITYSDK_OFFSET(0x1CAC1860)
#define CLASS_1_D837DED66799FBE3_METHOD_1_12C840EF41BBCCC5_OFFSET UNITYSDK_OFFSET(0x1CAC1B90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1350383F6C78486C_OFFSET UNITYSDK_OFFSET(0x1CAC1E60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1367F63C44FBE49C_OFFSET UNITYSDK_OFFSET(0x1CABAE40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_136964C71B3D38CC_OFFSET UNITYSDK_OFFSET(0x1CABEEB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_13DF4C4C98949419_OFFSET UNITYSDK_OFFSET(0x1CAB7AF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_13F2C7361EC7E96D_OFFSET UNITYSDK_OFFSET(0x1CABF670)
#define CLASS_1_D837DED66799FBE3_METHOD_1_14337D20A862058C_OFFSET UNITYSDK_OFFSET(0x1CAB82B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_14597F59B14A759B_OFFSET UNITYSDK_OFFSET(0x1CAB6DD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_14AEFC38C84628CC_OFFSET UNITYSDK_OFFSET(0x1CABEF40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_14E21DA96CA92B8E_OFFSET UNITYSDK_OFFSET(0x1CAC0470)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1511A825EEA6BEFB_OFFSET UNITYSDK_OFFSET(0x1CAB7360)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1571C310B8936227_OFFSET UNITYSDK_OFFSET(0x1CAB7880)
#define CLASS_1_D837DED66799FBE3_METHOD_1_15B19C7D72978E5A_OFFSET UNITYSDK_OFFSET(0x1CAB9610)
#define CLASS_1_D837DED66799FBE3_METHOD_1_15DB15100D900805_OFFSET UNITYSDK_OFFSET(0x1CAC3180)
#define CLASS_1_D837DED66799FBE3_METHOD_1_15F676E355FF4236_OFFSET UNITYSDK_OFFSET(0x1CAB73E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_16EE6E2A35D8C9C7_OFFSET UNITYSDK_OFFSET(0x1CAC0DB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_170B98E9538DAF67_OFFSET UNITYSDK_OFFSET(0x1CABB6C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1740694434AD743F_OFFSET UNITYSDK_OFFSET(0x1CAB8510)
#define CLASS_1_D837DED66799FBE3_METHOD_1_175C6E9943355E58_OFFSET UNITYSDK_OFFSET(0x1CABE110)
#define CLASS_1_D837DED66799FBE3_METHOD_1_176198D9B99BE32A_OFFSET UNITYSDK_OFFSET(0x1CABC620)
#define CLASS_1_D837DED66799FBE3_METHOD_1_17C78B4108E93C21_OFFSET UNITYSDK_OFFSET(0x1CABEE80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1800A3982D6A3551_OFFSET UNITYSDK_OFFSET(0x1CABD0A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1824FE5BEBD1D479_OFFSET UNITYSDK_OFFSET(0x1CABF490)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1828EB7095350F86_OFFSET UNITYSDK_OFFSET(0x1CABC8A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_182D027A9B96A9FD_OFFSET UNITYSDK_OFFSET(0x1CAB74A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18332F5523BD995A_OFFSET UNITYSDK_OFFSET(0x1CAC0450)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1856C8264679E592_OFFSET UNITYSDK_OFFSET(0x1CAB7D00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1865C9D3C269805D_OFFSET UNITYSDK_OFFSET(0x1CABFD00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_188BB4A7FD717D2E_OFFSET UNITYSDK_OFFSET(0x1CAC2C40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_189DBDA144C2D559_OFFSET UNITYSDK_OFFSET(0x1CABD560)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_10_OFFSET UNITYSDK_OFFSET(0x1CABB420)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_11_OFFSET UNITYSDK_OFFSET(0x1CABBFF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_12_OFFSET UNITYSDK_OFFSET(0x1CABD530)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_13_OFFSET UNITYSDK_OFFSET(0x1CAC1F40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_14_OFFSET UNITYSDK_OFFSET(0x1CAC21F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_15_OFFSET UNITYSDK_OFFSET(0x1CAC2480)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_16_OFFSET UNITYSDK_OFFSET(0x1CAC2540)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_17_OFFSET UNITYSDK_OFFSET(0x1CAC27A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_1_OFFSET UNITYSDK_OFFSET(0x1CAB7530)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_2_OFFSET UNITYSDK_OFFSET(0x1CAB7560)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_3_OFFSET UNITYSDK_OFFSET(0x1CAB7590)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_4_OFFSET UNITYSDK_OFFSET(0x1CAB75D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_5_OFFSET UNITYSDK_OFFSET(0x1CAB7600)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_6_OFFSET UNITYSDK_OFFSET(0x1CAB7630)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_7_OFFSET UNITYSDK_OFFSET(0x1CAB77F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_8_OFFSET UNITYSDK_OFFSET(0x1CABA610)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_9_OFFSET UNITYSDK_OFFSET(0x1CABA6E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_OFFSET UNITYSDK_OFFSET(0x1CAB7500)
#define CLASS_1_D837DED66799FBE3_METHOD_1_192738CCF053E8D2_OFFSET UNITYSDK_OFFSET(0x1CABC2E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1928C942BE7E5075_OFFSET UNITYSDK_OFFSET(0x1CAB7A30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1955E9206A6AB249_OFFSET UNITYSDK_OFFSET(0x1CAB6C50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_195B904260F83870_OFFSET UNITYSDK_OFFSET(0x1CABF880)
#define CLASS_1_D837DED66799FBE3_METHOD_1_19729582A8E13A85_OFFSET UNITYSDK_OFFSET(0x1CABD850)
#define CLASS_1_D837DED66799FBE3_METHOD_1_19E3DA203AFE74B1_OFFSET UNITYSDK_OFFSET(0x1CABCF10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_19E93960D86042E5_OFFSET UNITYSDK_OFFSET(0x1CABA110)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1A2DD080E5E0C90B_OFFSET UNITYSDK_OFFSET(0x1CAB0890)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1AD8E884CD02065C_OFFSET UNITYSDK_OFFSET(0x1CAB96C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1AFB29A9621D3A91_OFFSET UNITYSDK_OFFSET(0x1CAC2C00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1B0CEA42BFAAB751_OFFSET UNITYSDK_OFFSET(0x1CAB6EC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1B27AD835A09C885_OFFSET UNITYSDK_OFFSET(0x1CAB61E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1B37D6C51D9FE809_OFFSET UNITYSDK_OFFSET(0x1CABDED0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1B8B3FE750153E10_OFFSET UNITYSDK_OFFSET(0x1CAB5040)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1BB4B594E0BF66E7_OFFSET UNITYSDK_OFFSET(0x1CABF610)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1BB8E6C2AF39A92C_OFFSET UNITYSDK_OFFSET(0x1CABD3A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1BE811B163AC49C3_OFFSET UNITYSDK_OFFSET(0x1CABA3B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1BFACEF27F42B791_OFFSET UNITYSDK_OFFSET(0x1CAB9C40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1C0D7763C1857056_OFFSET UNITYSDK_OFFSET(0x1CAB72D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1C327DD7AAE1D8B8_OFFSET UNITYSDK_OFFSET(0x1CAB8100)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1CDC792D1EAC4254_OFFSET UNITYSDK_OFFSET(0x1CABFD10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1D06DA6B04E1A6E0_OFFSET UNITYSDK_OFFSET(0x1CABEDC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1DAA222659CC2643_OFFSET UNITYSDK_OFFSET(0x1CAC30F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1DB2418A411E2330_OFFSET UNITYSDK_OFFSET(0x1CAB7430)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1DB9E82778BFD0C0_OFFSET UNITYSDK_OFFSET(0x1CAC29E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1E40B02EFE1CEA5B_OFFSET UNITYSDK_OFFSET(0x1CABEA20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1E98110C73F93C03_OFFSET UNITYSDK_OFFSET(0x1CAB6EB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1F12B8DFABA1E8DA_OFFSET UNITYSDK_OFFSET(0x1CABCDF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1F434A0C0ACE8A81_OFFSET UNITYSDK_OFFSET(0x1CAB70C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1F81F4E1455DE863_OFFSET UNITYSDK_OFFSET(0x1CAC1AF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1FCC187A080F796E_OFFSET UNITYSDK_OFFSET(0x1CAB3740)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1FCE4B48C93B0EED_OFFSET UNITYSDK_OFFSET(0x1CABBD00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_1FEABD662137DB23_OFFSET UNITYSDK_OFFSET(0x1CABB760)
#define CLASS_1_D837DED66799FBE3_METHOD_1_20138CD28B737CC1_OFFSET UNITYSDK_OFFSET(0x1CAB69C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_205327766052338B_OFFSET UNITYSDK_OFFSET(0x1CABD920)
#define CLASS_1_D837DED66799FBE3_METHOD_1_206061BDD2876D3A_OFFSET UNITYSDK_OFFSET(0x1CAC0A80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_216640FAD1D4AA1D_OFFSET UNITYSDK_OFFSET(0x1CAB9520)
#define CLASS_1_D837DED66799FBE3_METHOD_1_217450E1CB534F55_OFFSET UNITYSDK_OFFSET(0x1CABB300)
#define CLASS_1_D837DED66799FBE3_METHOD_1_21CCC867EB8455E2_OFFSET UNITYSDK_OFFSET(0x1CABBC10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_22151552E4BE0339_OFFSET UNITYSDK_OFFSET(0x1CABF6D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2245CBE33D7FB5BE_OFFSET UNITYSDK_OFFSET(0x1CAC1A80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_22F71A1C35A0732B_OFFSET UNITYSDK_OFFSET(0x1CAB80D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2332ED9C7ED0E751_OFFSET UNITYSDK_OFFSET(0x1CAB9470)
#define CLASS_1_D837DED66799FBE3_METHOD_1_234F2B7F1D6579F9_OFFSET UNITYSDK_OFFSET(0x1CAC2B80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_23554CDF7305F7F9_OFFSET UNITYSDK_OFFSET(0x1CAC0F10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_23CB2E079811CA42_OFFSET UNITYSDK_OFFSET(0x1CABBFC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_23DA4797A4DD9CAF_OFFSET UNITYSDK_OFFSET(0x1CABB0E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_23E4D6026F3795F1_OFFSET UNITYSDK_OFFSET(0x1CABA140)
#define CLASS_1_D837DED66799FBE3_METHOD_1_244930E141B0B0B5_OFFSET UNITYSDK_OFFSET(0x1CABAFF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2459AC284258D36E_OFFSET UNITYSDK_OFFSET(0x1CAB9E00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_245A8B7F14CA4855_OFFSET UNITYSDK_OFFSET(0x1CAB51B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_24CD3E5BC3DC4EEF_OFFSET UNITYSDK_OFFSET(0x1CABDBD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2550AC7A27BD3EC8_OFFSET UNITYSDK_OFFSET(0x1CABA3E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_257288C8C01C3283_OFFSET UNITYSDK_OFFSET(0x1CABD110)
#define CLASS_1_D837DED66799FBE3_METHOD_1_258C5F8635893DE3_OFFSET UNITYSDK_OFFSET(0x1CAC1BC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_262157CE715DF7E7_OFFSET UNITYSDK_OFFSET(0x1CAC15B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_26798C3E8EA50B08_OFFSET UNITYSDK_OFFSET(0x1CABC180)
#define CLASS_1_D837DED66799FBE3_METHOD_1_26A81FE03226B7A4_OFFSET UNITYSDK_OFFSET(0x1CAB40B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_274E0E36572365ED_OFFSET UNITYSDK_OFFSET(0x1CABB480)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2773DCAD18C3D795_OFFSET UNITYSDK_OFFSET(0x1CAB89C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_27902ED612432387_OFFSET UNITYSDK_OFFSET(0x1CABADE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_27905C31AD505595_OFFSET UNITYSDK_OFFSET(0x1CAB9D70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_279830467368037B_OFFSET UNITYSDK_OFFSET(0x1CABDD10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_27B2FC9789CFE512_OFFSET UNITYSDK_OFFSET(0x1CAB7DD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_27C0A1ACF2AD2246_OFFSET UNITYSDK_OFFSET(0x1CAB83A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2838FFC276DA7BCF_OFFSET UNITYSDK_OFFSET(0x1CAB9760)
#define CLASS_1_D837DED66799FBE3_METHOD_1_289320A29465FF07_OFFSET UNITYSDK_OFFSET(0x1CAC0FA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_28DF939C0710956F_OFFSET UNITYSDK_OFFSET(0x1CAB48A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2933C4A8C00EC582_OFFSET UNITYSDK_OFFSET(0x1CAB7E00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_29379D95BD177F01_OFFSET UNITYSDK_OFFSET(0x1CAC2960)
#define CLASS_1_D837DED66799FBE3_METHOD_1_29B5A997C4864221_OFFSET UNITYSDK_OFFSET(0x1CABD9C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_29B60B545947C1E7_OFFSET UNITYSDK_OFFSET(0x1CABC900)
#define CLASS_1_D837DED66799FBE3_METHOD_1_29B61EFCD46F4A67_OFFSET UNITYSDK_OFFSET(0x1CAC0C00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_29D1F5F8ABB6C806_OFFSET UNITYSDK_OFFSET(0x1CABE290)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2A31FDEB06231733_OFFSET UNITYSDK_OFFSET(0x1CAB71B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2A52EAA1A8950A66_OFFSET UNITYSDK_OFFSET(0x1CAC3300)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2A779F28A034942B_OFFSET UNITYSDK_OFFSET(0x1CABBB60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2A816F1517AD7380_OFFSET UNITYSDK_OFFSET(0x1CAB7180)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2B9B98B41C57B79B_OFFSET UNITYSDK_OFFSET(0x1CABC790)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2BB5923F79CDA0C9_OFFSET UNITYSDK_OFFSET(0x1CABE200)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2D3FCEB7190A1451_OFFSET UNITYSDK_OFFSET(0x1CAC2740)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2D6B44385D8B2DC4_OFFSET UNITYSDK_OFFSET(0x1CABE350)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2D6C191CAF4D8591_OFFSET UNITYSDK_OFFSET(0x1CAB6130)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2DBF3EE75EE75E5C_OFFSET UNITYSDK_OFFSET(0x1CAB07F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2DCF552AEDD8DA59_OFFSET UNITYSDK_OFFSET(0x1CAC1910)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2DFAE29688620EC0_OFFSET UNITYSDK_OFFSET(0x1CAB98E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2DFED8C2CCA24E37_OFFSET UNITYSDK_OFFSET(0x1CAB9FB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2E9CC781EB5170D9_OFFSET UNITYSDK_OFFSET(0x1CAB86C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2EACFDCFAE2979D0_OFFSET UNITYSDK_OFFSET(0x1CABC5F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2F4FD4897BB6F124_OFFSET UNITYSDK_OFFSET(0x1CAB87E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2F95CABC1547A0EA_OFFSET UNITYSDK_OFFSET(0x1CAC0C50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2FB1603012135530_OFFSET UNITYSDK_OFFSET(0x1CABBC40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2FD5AE5AAFF6E92A_OFFSET UNITYSDK_OFFSET(0x1CABBA60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_2FE6FF6428195C75_OFFSET UNITYSDK_OFFSET(0x1CAB6A00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3025C325438C1838_OFFSET UNITYSDK_OFFSET(0x1CAB78E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3040DEED8A11D295_OFFSET UNITYSDK_OFFSET(0x1CAB8220)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3115995BD6F90BC1_OFFSET UNITYSDK_OFFSET(0x1CABCE90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_314C294DC84BB44C_OFFSET UNITYSDK_OFFSET(0x1CAB7230)
#define CLASS_1_D837DED66799FBE3_METHOD_1_31C98C34FD00136E_OFFSET UNITYSDK_OFFSET(0x1CABE0B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_32068CB750248638_OFFSET UNITYSDK_OFFSET(0x1CABDC60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3207749256369034_OFFSET UNITYSDK_OFFSET(0x1CAB09B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_32C8BD2F7A4A9D61_OFFSET UNITYSDK_OFFSET(0x1CABC1B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3336D9E0FAD01F76_OFFSET UNITYSDK_OFFSET(0x1CAB1700)
#define CLASS_1_D837DED66799FBE3_METHOD_1_334CFFAA2E26C839_OFFSET UNITYSDK_OFFSET(0x1CAC0720)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3371DB6E2AEFCEEE_OFFSET UNITYSDK_OFFSET(0x1CABFE10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_33DE390C63886E7D_OFFSET UNITYSDK_OFFSET(0x1CABBEA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_33EC9A8074130CF8_OFFSET UNITYSDK_OFFSET(0x1CABE2F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3454DD4BED52B546_OFFSET UNITYSDK_OFFSET(0x1CABA200)
#define CLASS_1_D837DED66799FBE3_METHOD_1_34F3C558639A9F3D_OFFSET UNITYSDK_OFFSET(0x1CAB68C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_354F48C73F35BC96_OFFSET UNITYSDK_OFFSET(0x1CABD260)
#define CLASS_1_D837DED66799FBE3_METHOD_1_356793A98A26D514_OFFSET UNITYSDK_OFFSET(0x1CAB9A90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_35BD0D3AC78C5412_OFFSET UNITYSDK_OFFSET(0x1CAC1960)
#define CLASS_1_D837DED66799FBE3_METHOD_1_35E2458A4202DC4F_OFFSET UNITYSDK_OFFSET(0x1CAC0620)
#define CLASS_1_D837DED66799FBE3_METHOD_1_35EE094DB9C5B5E9_OFFSET UNITYSDK_OFFSET(0x1CAB9C00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_35FC0FC06BD5D211_OFFSET UNITYSDK_OFFSET(0x1CAC2D80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_361C9DF326070109_OFFSET UNITYSDK_OFFSET(0x1CABD2D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3647AC3A1EBF4E95_OFFSET UNITYSDK_OFFSET(0x1CABEFE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_368BEF7021140038_OFFSET UNITYSDK_OFFSET(0x1CAC0740)
#define CLASS_1_D837DED66799FBE3_METHOD_1_36970B05CD3FD1C6_OFFSET UNITYSDK_OFFSET(0x1CABD310)
#define CLASS_1_D837DED66799FBE3_METHOD_1_36AC0F843718E960_OFFSET UNITYSDK_OFFSET(0x1CABC020)
#define CLASS_1_D837DED66799FBE3_METHOD_1_36E3BC990138A0D1_OFFSET UNITYSDK_OFFSET(0x1CABC440)
#define CLASS_1_D837DED66799FBE3_METHOD_1_380092D98CB34F8B_OFFSET UNITYSDK_OFFSET(0x1CAC2570)
#define CLASS_1_D837DED66799FBE3_METHOD_1_388A5E38131D05FA_OFFSET UNITYSDK_OFFSET(0x1CABB7C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_38B87B3CE4AA02F6_OFFSET UNITYSDK_OFFSET(0x1CAC2120)
#define CLASS_1_D837DED66799FBE3_METHOD_1_393A43275D828BA8_OFFSET UNITYSDK_OFFSET(0x1CABA170)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3942F216B30FC1B1_OFFSET UNITYSDK_OFFSET(0x1CABE2C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3976BC2F9AD70599_OFFSET UNITYSDK_OFFSET(0x1CAB80A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3A1314EB0129375C_OFFSET UNITYSDK_OFFSET(0x1CAC2E10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3A3101F92F181664_OFFSET UNITYSDK_OFFSET(0x1CAC2A20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3A605AE750C9D84E_OFFSET UNITYSDK_OFFSET(0x1CAB0600)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3AAC38F2503D01E6_OFFSET UNITYSDK_OFFSET(0x1CAC1240)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3B3D4F3326AD21E9_OFFSET UNITYSDK_OFFSET(0x1CAC0590)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3BA30B421AD50DD7_OFFSET UNITYSDK_OFFSET(0x1CAB6290)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3BB0106A8AEE93AB_OFFSET UNITYSDK_OFFSET(0x1CABAEA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3C6032FAE9D5211A_OFFSET UNITYSDK_OFFSET(0x1CAB8C70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3C6B48B7F2803188_OFFSET UNITYSDK_OFFSET(0x1CAC03A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3D021E9AB4A2876D_OFFSET UNITYSDK_OFFSET(0x1CAB1A80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3D029ADB3F70A002_OFFSET UNITYSDK_OFFSET(0x1CAB8D00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3D3C184F97EDADC2_OFFSET UNITYSDK_OFFSET(0x1CABB650)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3D711D253DFD2D25_OFFSET UNITYSDK_OFFSET(0x1CABAE10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3D77E6915B0F8E0F_OFFSET UNITYSDK_OFFSET(0x1CAC1AE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3D91FC67106E89B4_OFFSET UNITYSDK_OFFSET(0x1CAB8B70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3DBB2CEA387AA667_OFFSET UNITYSDK_OFFSET(0x1CABE320)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3DF17D840518F7BA_OFFSET UNITYSDK_OFFSET(0x1CABA830)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3E7C531D3F0077A0_OFFSET UNITYSDK_OFFSET(0x1CAC0CE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3E9E85BB9A92923D_OFFSET UNITYSDK_OFFSET(0x1CABC4E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3EB618E07CCB252C_OFFSET UNITYSDK_OFFSET(0x1CAB0760)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3ED5690476160643_OFFSET UNITYSDK_OFFSET(0x1CAB97F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3F01DA90688DECF5_OFFSET UNITYSDK_OFFSET(0x1CAB6410)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3F442A5B42AD42B4_OFFSET UNITYSDK_OFFSET(0x1CABD960)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3F7AD1BFD7842930_OFFSET UNITYSDK_OFFSET(0x1CAB7EF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3F93DE41B5B6B853_OFFSET UNITYSDK_OFFSET(0x1CAC0350)
#define CLASS_1_D837DED66799FBE3_METHOD_1_3FCDE4EB9CCA8204_OFFSET UNITYSDK_OFFSET(0x1CAB9050)
#define CLASS_1_D837DED66799FBE3_METHOD_1_403A3AC3DC22CBA4_OFFSET UNITYSDK_OFFSET(0x1CABC930)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4040AB59F4C34E3F_OFFSET UNITYSDK_OFFSET(0x1CABC120)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4045053AAD92E3E1_OFFSET UNITYSDK_OFFSET(0x1CAB9A50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_40583F1EBFA0A5A6_OFFSET UNITYSDK_OFFSET(0x1CABBDE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_40868C0950B70332_OFFSET UNITYSDK_OFFSET(0x1CABF910)
#define CLASS_1_D837DED66799FBE3_METHOD_1_417FFE90E85AD7DF_OFFSET UNITYSDK_OFFSET(0x1CABE1A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_41E14F5B051FFE73_OFFSET UNITYSDK_OFFSET(0x1CAB8870)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4267789D67B7BB52_OFFSET UNITYSDK_OFFSET(0x1CABDF60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_42F5ECB4D10A9E96_OFFSET UNITYSDK_OFFSET(0x1CAB6DF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_43A369266C439582_OFFSET UNITYSDK_OFFSET(0x1CABD820)
#define CLASS_1_D837DED66799FBE3_METHOD_1_43DAF783517768DF_OFFSET UNITYSDK_OFFSET(0x1CAB8280)
#define CLASS_1_D837DED66799FBE3_METHOD_1_43E82D25D25D6153_OFFSET UNITYSDK_OFFSET(0x1CABACA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_443C8BC5E15DE355_OFFSET UNITYSDK_OFFSET(0x1CABBDB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_44B8B82B63FE72CD_OFFSET UNITYSDK_OFFSET(0x1CAB99C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4521979BFBAD0286_OFFSET UNITYSDK_OFFSET(0x1CAC0E50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_453AF4C31EAEB7EB_OFFSET UNITYSDK_OFFSET(0x1CABAD00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_458338C3E0EEBCC2_OFFSET UNITYSDK_OFFSET(0x1CAB8CD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_45B8AE829E7FE648_OFFSET UNITYSDK_OFFSET(0x1CAB8690)
#define CLASS_1_D837DED66799FBE3_METHOD_1_46408169AA11FCC4_OFFSET UNITYSDK_OFFSET(0x1CABAD60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4650B8DBD2CDC8AA_OFFSET UNITYSDK_OFFSET(0x1CAB8250)
#define CLASS_1_D837DED66799FBE3_METHOD_1_468DFFD258397608_OFFSET UNITYSDK_OFFSET(0x1CAC14F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_46C9F541BE27DB2C_OFFSET UNITYSDK_OFFSET(0x1CAB7CD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_47765121E61C1EE3_OFFSET UNITYSDK_OFFSET(0x1CAB7270)
#define CLASS_1_D837DED66799FBE3_METHOD_1_47F94D18D4AC2FBA_OFFSET UNITYSDK_OFFSET(0x1CAB9CF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_481D392C488DF32C_OFFSET UNITYSDK_OFFSET(0x1CAB8D70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_483DC8DB014C4E0D_OFFSET UNITYSDK_OFFSET(0x1CABF410)
#define CLASS_1_D837DED66799FBE3_METHOD_1_483EE1E0DE3AEFD2_OFFSET UNITYSDK_OFFSET(0x1CAC11B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_485C22311D5E4496_OFFSET UNITYSDK_OFFSET(0x1CAB8FE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_48AEDB4CF72198DB_OFFSET UNITYSDK_OFFSET(0x1CABAB00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_48D53956F839A05B_OFFSET UNITYSDK_OFFSET(0x1CABDCB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_493458E058AEC03C_OFFSET UNITYSDK_OFFSET(0x1CAB0570)
#define CLASS_1_D837DED66799FBE3_METHOD_1_49B0D05DE5CA543C_OFFSET UNITYSDK_OFFSET(0x1CAC1980)
#define CLASS_1_D837DED66799FBE3_METHOD_1_49ED4755CAE23118_OFFSET UNITYSDK_OFFSET(0x1CAB9DD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_49F96BA70984DC40_OFFSET UNITYSDK_OFFSET(0x1CABB280)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4A34F929D44846E7_OFFSET UNITYSDK_OFFSET(0x1CABEFA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4A4E99C75BB354CF_OFFSET UNITYSDK_OFFSET(0x1CABE260)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4B3BC8ABF290F6B9_OFFSET UNITYSDK_OFFSET(0x1CAC2EA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4B899A9B80CAD443_OFFSET UNITYSDK_OFFSET(0x1CABF510)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4C5D7E5ECA42E279_OFFSET UNITYSDK_OFFSET(0x1CAB6EA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4CB63D77556D47EB_OFFSET UNITYSDK_OFFSET(0x1CABB850)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4D15A10B7139F3D3_OFFSET UNITYSDK_OFFSET(0x1CAC0410)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4D182CB262BC1140_OFFSET UNITYSDK_OFFSET(0x1CAC1750)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4D56FDA5D7994384_OFFSET UNITYSDK_OFFSET(0x1CABEBE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4D8316750F80A731_OFFSET UNITYSDK_OFFSET(0x1CABFA30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4E07BC9D2F0A75AA_OFFSET UNITYSDK_OFFSET(0x1CAC32A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4E100FAD46D4F5ED_OFFSET UNITYSDK_OFFSET(0x1CAC09D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4EE3D334C2F87998_OFFSET UNITYSDK_OFFSET(0x1CAC1E30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4EEB3AB386CEF9F4_OFFSET UNITYSDK_OFFSET(0x1CABCD00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4F21E8E9642AD374_OFFSET UNITYSDK_OFFSET(0x1CABB880)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4F71478528B23EB8_OFFSET UNITYSDK_OFFSET(0x1CAB8E20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4FC77738C1BD7082_OFFSET UNITYSDK_OFFSET(0x1CAC2D50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_4FF1D693A26A4C37_OFFSET UNITYSDK_OFFSET(0x1CABB7F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5046EE61CDCBA1CA_OFFSET UNITYSDK_OFFSET(0x1CAB6080)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5083258C09AB39B9_OFFSET UNITYSDK_OFFSET(0x1CAB8AD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_51801E32AA615D17_OFFSET UNITYSDK_OFFSET(0x1CAB7F20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_51DBF00C99C01D11_OFFSET UNITYSDK_OFFSET(0x1CAC07A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5275CF047A0DC778_OFFSET UNITYSDK_OFFSET(0x1CAB92F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_52E1F7F184A61BAC_OFFSET UNITYSDK_OFFSET(0x1CABDEA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5302C01C8526E668_OFFSET UNITYSDK_OFFSET(0x1CABF3D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5340986F924D72A2_OFFSET UNITYSDK_OFFSET(0x1CAB5000)
#define CLASS_1_D837DED66799FBE3_METHOD_1_53679C80B3430A62_OFFSET UNITYSDK_OFFSET(0x1CAC1510)
#define CLASS_1_D837DED66799FBE3_METHOD_1_53ABD16D7F9A840E_OFFSET UNITYSDK_OFFSET(0x1CABAB60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_53B3B352AB60F255_OFFSET UNITYSDK_OFFSET(0x1CAB6E20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_53BCEA178FE070B5_OFFSET UNITYSDK_OFFSET(0x1CAB9170)
#define CLASS_1_D837DED66799FBE3_METHOD_1_543B12DFF3941E7D_OFFSET UNITYSDK_OFFSET(0x1CAB8600)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5487B853AA0A77E7_OFFSET UNITYSDK_OFFSET(0x1CABBBE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5559B4D6F48541EC_OFFSET UNITYSDK_OFFSET(0x1CAB3BF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_55C949550FA40EC6_OFFSET UNITYSDK_OFFSET(0x1CAB7DA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_55CF779BAE212242_OFFSET UNITYSDK_OFFSET(0x1CAB6FF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_55ED2202904DD76C_OFFSET UNITYSDK_OFFSET(0x1CABE050)
#define CLASS_1_D837DED66799FBE3_METHOD_1_55FA5F210AC6EC96_OFFSET UNITYSDK_OFFSET(0x1CABDE40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_565B5F070BF5A659_OFFSET UNITYSDK_OFFSET(0x1CABE0E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5693CC7851C09A3E_OFFSET UNITYSDK_OFFSET(0x1CAB7030)
#define CLASS_1_D837DED66799FBE3_METHOD_1_56B86E0C8FD46412_OFFSET UNITYSDK_OFFSET(0x1CABD880)
#define CLASS_1_D837DED66799FBE3_METHOD_1_571E0B261F5ADBD5_OFFSET UNITYSDK_OFFSET(0x1CAB9110)
#define CLASS_1_D837DED66799FBE3_METHOD_1_575D78A2E938E78D_OFFSET UNITYSDK_OFFSET(0x1CAB8BD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_579122B04A06A11D_OFFSET UNITYSDK_OFFSET(0x1CABB700)
#define CLASS_1_D837DED66799FBE3_METHOD_1_587B1CA49C6A943B_OFFSET UNITYSDK_OFFSET(0x1CAB9F80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5897A32B4225D5D4_OFFSET UNITYSDK_OFFSET(0x1CAC0990)
#define CLASS_1_D837DED66799FBE3_METHOD_1_59160A5F3D86B0B1_OFFSET UNITYSDK_OFFSET(0x1CAB1CF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_591A7AA2A43D6CD0_OFFSET UNITYSDK_OFFSET(0x1CABD680)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5925264D39FFA1E4_OFFSET UNITYSDK_OFFSET(0x1CAB8B60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5A303CC1C961CEF5_OFFSET UNITYSDK_OFFSET(0x1CABCE20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5A3FFA54DD350DA7_OFFSET UNITYSDK_OFFSET(0x1CAC1B60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5A564F581C56BA66_OFFSET UNITYSDK_OFFSET(0x1CABB820)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5ABFE8E95CEE0BB6_OFFSET UNITYSDK_OFFSET(0x1CABF700)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5ADA801AD5EB5382_OFFSET UNITYSDK_OFFSET(0x1CABB550)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5AE8CDE9A09C958A_OFFSET UNITYSDK_OFFSET(0x1CABFAF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5B856EA6DAC78EB9_OFFSET UNITYSDK_OFFSET(0x1CABE080)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5BB1B665EA74DBD4_OFFSET UNITYSDK_OFFSET(0x1CAC2DB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5BDEE3513804AC72_OFFSET UNITYSDK_OFFSET(0x1CAB8340)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5CC645515A6CB012_OFFSET UNITYSDK_OFFSET(0x1CABA010)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5CF84FF71A109B16_OFFSET UNITYSDK_OFFSET(0x1CAC3240)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5DC292E4B4EA6A1E_OFFSET UNITYSDK_OFFSET(0x1CAC2640)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5DF85947CF2521C1_OFFSET UNITYSDK_OFFSET(0x1CABFE90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5E3711823738BBF0_OFFSET UNITYSDK_OFFSET(0x1CAB82E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5E69928AAD604E30_OFFSET UNITYSDK_OFFSET(0x1CAC0830)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5E6B8C74B5521BF7_OFFSET UNITYSDK_OFFSET(0x1CABCA40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_5FF8C229BA3FE030_OFFSET UNITYSDK_OFFSET(0x1CAB85A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_600014668428C9E1_OFFSET UNITYSDK_OFFSET(0x1CABF1B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_602A2B6A12E99DB0_OFFSET UNITYSDK_OFFSET(0x1CAB8190)
#define CLASS_1_D837DED66799FBE3_METHOD_1_602F478E4FE5F5C7_OFFSET UNITYSDK_OFFSET(0x1CABFFE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6043EA1614531414_OFFSET UNITYSDK_OFFSET(0x1CABDA20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6090DA95753B00A5_OFFSET UNITYSDK_OFFSET(0x1CAB6C10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_61033AF00E136848_OFFSET UNITYSDK_OFFSET(0x1CABDF00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6112A888C5B98EBD_OFFSET UNITYSDK_OFFSET(0x1CABF760)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6117EA756D921B41_OFFSET UNITYSDK_OFFSET(0x1CAC0140)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6119F52CA8E03A99_OFFSET UNITYSDK_OFFSET(0x1CAB7A90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_61210D99F8FEC6AF_OFFSET UNITYSDK_OFFSET(0x1CAB42C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_61B78DF61E9DAFEE_OFFSET UNITYSDK_OFFSET(0x1CAB9720)
#define CLASS_1_D837DED66799FBE3_METHOD_1_61F6BB80BD73D32A_OFFSET UNITYSDK_OFFSET(0x1CAC1050)
#define CLASS_1_D837DED66799FBE3_METHOD_1_620D272EA63DC9D9_OFFSET UNITYSDK_OFFSET(0x1CAC0F30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_621F8C537ADFFB72_OFFSET UNITYSDK_OFFSET(0x1CAB6900)
#define CLASS_1_D837DED66799FBE3_METHOD_1_62240149679DD0CB_OFFSET UNITYSDK_OFFSET(0x1CABDAE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_624A0BEA5BEC3B57_OFFSET UNITYSDK_OFFSET(0x1CABB200)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6271A56AB7F12775_OFFSET UNITYSDK_OFFSET(0x1CAB7D30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_627856C01D5E9B6D_OFFSET UNITYSDK_OFFSET(0x1CAC1AA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6372B9CA3C3EB1FB_OFFSET UNITYSDK_OFFSET(0x1CABFC70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_63BAC2F92B942293_OFFSET UNITYSDK_OFFSET(0x1CABFF50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_63BDE955035B743C_OFFSET UNITYSDK_OFFSET(0x1CAC11F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_63BE2E2004A04615_OFFSET UNITYSDK_OFFSET(0x1CABFF90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6448967595455695_OFFSET UNITYSDK_OFFSET(0x1CABAE70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_64AFAF0DC17ED475_OFFSET UNITYSDK_OFFSET(0x1CAC1B30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_64AFFBBC809A6D47_OFFSET UNITYSDK_OFFSET(0x1CABDB60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_64B97FA6C87CB365_OFFSET UNITYSDK_OFFSET(0x1CAC05D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_64CD731C08C46F24_OFFSET UNITYSDK_OFFSET(0x1CABD140)
#define CLASS_1_D837DED66799FBE3_METHOD_1_64E1F2AF82396CBB_OFFSET UNITYSDK_OFFSET(0x1CABB3F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_64EE4929BB323379_OFFSET UNITYSDK_OFFSET(0x1CABF0A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_64F964446033A637_OFFSET UNITYSDK_OFFSET(0x1CAB7120)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6551B31A969ADDAE_OFFSET UNITYSDK_OFFSET(0x1CABA0D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_65681BD6565BE029_OFFSET UNITYSDK_OFFSET(0x1CABC220)
#define CLASS_1_D837DED66799FBE3_METHOD_1_65C8D6EB7A23751C_OFFSET UNITYSDK_OFFSET(0x1CAC1790)
#define CLASS_1_D837DED66799FBE3_METHOD_1_662BE8693D054C24_OFFSET UNITYSDK_OFFSET(0x1CAB5300)
#define CLASS_1_D837DED66799FBE3_METHOD_1_662E9065505C0B5C_OFFSET UNITYSDK_OFFSET(0x1CABD6B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_666D6FEEDBB8A67F_OFFSET UNITYSDK_OFFSET(0x1CAB7410)
#define CLASS_1_D837DED66799FBE3_METHOD_1_66BF1D09D895DC14_OFFSET UNITYSDK_OFFSET(0x1CAB7020)
#define CLASS_1_D837DED66799FBE3_METHOD_1_66FE2EB76E8CA185_OFFSET UNITYSDK_OFFSET(0x1CAC1100)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6756FED1A145C75A_OFFSET UNITYSDK_OFFSET(0x1CAB8C30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_67585A8E2A8DCC82_OFFSET UNITYSDK_OFFSET(0x1CAC0E20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_67D6F281D89E222B_OFFSET UNITYSDK_OFFSET(0x1CABECA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_67F6D74BF3FD5E04_OFFSET UNITYSDK_OFFSET(0x1CAB6F60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_680BEAE287B8BB7F_OFFSET UNITYSDK_OFFSET(0x1CAC2AC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_682E2CA6BE68FB65_OFFSET UNITYSDK_OFFSET(0x1CABA880)
#define CLASS_1_D837DED66799FBE3_METHOD_1_685933B36DB43CF1_OFFSET UNITYSDK_OFFSET(0x1CAB6ED0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_685CB33430F4F9B4_OFFSET UNITYSDK_OFFSET(0x1CAB86F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_690D3E405209F61C_OFFSET UNITYSDK_OFFSET(0x1CABC340)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6970F6AB54966964_OFFSET UNITYSDK_OFFSET(0x1CAC1D80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6A340C9025952C94_OFFSET UNITYSDK_OFFSET(0x1CAB9250)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6B16918E14C7BA88_OFFSET UNITYSDK_OFFSET(0x1CAC2950)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6B180752972582D3_OFFSET UNITYSDK_OFFSET(0x1CABC4A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6B541F1D3EA1630A_OFFSET UNITYSDK_OFFSET(0x1CABA5A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6BA4413F08CC5329_OFFSET UNITYSDK_OFFSET(0x1CAC1930)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6C84D86401A6B7F3_OFFSET UNITYSDK_OFFSET(0x1CABEF10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6CCD474B8CBD914F_OFFSET UNITYSDK_OFFSET(0x1CABF370)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6DCF8345B55F05FF_OFFSET UNITYSDK_OFFSET(0x1CAB9830)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6DD1F64B9156FFE4_OFFSET UNITYSDK_OFFSET(0x1CABA2B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6DF10147EB2215BF_OFFSET UNITYSDK_OFFSET(0x1CAB1380)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6E2E1379F517CB18_OFFSET UNITYSDK_OFFSET(0x1CAB8400)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6E5BDF5442C5D9D2_OFFSET UNITYSDK_OFFSET(0x1CABE170)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6E6E5977F853399D_OFFSET UNITYSDK_OFFSET(0x1CAB7400)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6E7E724F7791EC7E_OFFSET UNITYSDK_OFFSET(0x1CAB7390)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6ECE8FDE358DB342_OFFSET UNITYSDK_OFFSET(0x1CAB6580)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6EDECF0AA649A0F0_OFFSET UNITYSDK_OFFSET(0x1CAB7240)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6F13D7BD8E6209CE_OFFSET UNITYSDK_OFFSET(0x1CABB1A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6F1475FB4E1283B3_OFFSET UNITYSDK_OFFSET(0x1CAC2ED0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6F4F5AE4750CE2E0_OFFSET UNITYSDK_OFFSET(0x1CABB4E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6F68A5DB65382A98_OFFSET UNITYSDK_OFFSET(0x1CAB8EF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6F6C5816AD7218F2_OFFSET UNITYSDK_OFFSET(0x1CABF210)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6F85A26FBAD6F09D_OFFSET UNITYSDK_OFFSET(0x1CAB8930)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6FEE44EB054529B0_OFFSET UNITYSDK_OFFSET(0x1CABEB80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_6FFEAB40DFD2820E_OFFSET UNITYSDK_OFFSET(0x1CABBA30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7140C6807B96C2D8_OFFSET UNITYSDK_OFFSET(0x1CAC1570)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7154BB05E90117BB_OFFSET UNITYSDK_OFFSET(0x1CAC0970)
#define CLASS_1_D837DED66799FBE3_METHOD_1_719288726689CCA8_OFFSET UNITYSDK_OFFSET(0x1CAC0930)
#define CLASS_1_D837DED66799FBE3_METHOD_1_71C6C6AD8EB30C3F_OFFSET UNITYSDK_OFFSET(0x1CABBF80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_721250889E129C56_OFFSET UNITYSDK_OFFSET(0x1CABD7C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_724CA4F1246B12A5_OFFSET UNITYSDK_OFFSET(0x1CAC0D90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_730F80178A024FD1_OFFSET UNITYSDK_OFFSET(0x1CAB7970)
#define CLASS_1_D837DED66799FBE3_METHOD_1_731192DED050722A_OFFSET UNITYSDK_OFFSET(0x1CABC060)
#define CLASS_1_D837DED66799FBE3_METHOD_1_738660D7E654C6F5_OFFSET UNITYSDK_OFFSET(0x1CAC2D40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_74FF5CB42F2D8A1D_OFFSET UNITYSDK_OFFSET(0x1CAC0A50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_75393B8208F3D8C3_OFFSET UNITYSDK_OFFSET(0x1CABA920)
#define CLASS_1_D837DED66799FBE3_METHOD_1_75AC6D813C1B44CE_OFFSET UNITYSDK_OFFSET(0x1CAB9F20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_75B0EF3D933B4657_OFFSET UNITYSDK_OFFSET(0x1CABD720)
#define CLASS_1_D837DED66799FBE3_METHOD_1_75B9E4A48D442833_OFFSET UNITYSDK_OFFSET(0x1CABEA80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_75F946FE5271502F_OFFSET UNITYSDK_OFFSET(0x1CABB730)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7658EFDE9102BF71_OFFSET UNITYSDK_OFFSET(0x1CAB5140)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7688313BA1CDBAE0_OFFSET UNITYSDK_OFFSET(0x1CAC2C80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_769D019433964F25_OFFSET UNITYSDK_OFFSET(0x1CABF1E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_76A6B9467EADE6F3_OFFSET UNITYSDK_OFFSET(0x1CABF7C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_76A7E4624C96AE6C_OFFSET UNITYSDK_OFFSET(0x1CAB7FE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_76C05291B0A2FF7D_OFFSET UNITYSDK_OFFSET(0x1CAC2CE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_76FFAA74781EC89A_OFFSET UNITYSDK_OFFSET(0x1CAC0A30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_77468DF4D5F85467_OFFSET UNITYSDK_OFFSET(0x1CABCD60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_77E81ACB3FFF56F9_OFFSET UNITYSDK_OFFSET(0x1CAB5080)
#define CLASS_1_D837DED66799FBE3_METHOD_1_78163F58C5DFF2E5_OFFSET UNITYSDK_OFFSET(0x1CABFD90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_782CAD3C6930D3D7_OFFSET UNITYSDK_OFFSET(0x1CAB0A80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_78A94CB7A15C9022_OFFSET UNITYSDK_OFFSET(0x1CABF240)
#define CLASS_1_D837DED66799FBE3_METHOD_1_793CF6DCBBF5A4C3_OFFSET UNITYSDK_OFFSET(0x1CABA0A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_79AFE878F5CBAC04_OFFSET UNITYSDK_OFFSET(0x1CAB06B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_79CC691E1A1DAA8D_OFFSET UNITYSDK_OFFSET(0x1CAB6350)
#define CLASS_1_D837DED66799FBE3_METHOD_1_79D7D4C9E7F6F63B_OFFSET UNITYSDK_OFFSET(0x1CABD370)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7AA4BF598D8519FC_OFFSET UNITYSDK_OFFSET(0x1CAB67C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7ABE7F0AFE96AFB7_OFFSET UNITYSDK_OFFSET(0x1CABCE60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7AF745F2861EFB7A_OFFSET UNITYSDK_OFFSET(0x1CAC09F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7B5F02E9470C584F_OFFSET UNITYSDK_OFFSET(0x1CABBEE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7B8B6759E625362D_OFFSET UNITYSDK_OFFSET(0x1CAC06C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7C1DDDDC6DF0F179_OFFSET UNITYSDK_OFFSET(0x1CABB450)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7C662492A0DAE075_OFFSET UNITYSDK_OFFSET(0x1CAB93B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7C9618750B899948_OFFSET UNITYSDK_OFFSET(0x1CAC1A00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7D104694F9A9F492_OFFSET UNITYSDK_OFFSET(0x1CAC2280)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7D4637BDB467271D_OFFSET UNITYSDK_OFFSET(0x1CAC1630)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7D65321C15A163B1_OFFSET UNITYSDK_OFFSET(0x1CAB6BD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7E20E33FADF5E63A_OFFSET UNITYSDK_OFFSET(0x1CAC08D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7EFB69469C6C47DA_OFFSET UNITYSDK_OFFSET(0x1CAB6FB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7F61FA6F25773A0C_OFFSET UNITYSDK_OFFSET(0x1CABDFF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7F6799486D2A2D2E_OFFSET UNITYSDK_OFFSET(0x1CAB71A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7F7C1D9C7FE6CB53_OFFSET UNITYSDK_OFFSET(0x1CAB6940)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7F836CEF75358A68_OFFSET UNITYSDK_OFFSET(0x1CAB04E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_7F9167D7B37E5579_OFFSET UNITYSDK_OFFSET(0x1CAB6980)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8031483908C291FD_OFFSET UNITYSDK_OFFSET(0x1CABAB50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_807F8DBE2A87AA57_OFFSET UNITYSDK_OFFSET(0x1CABD500)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8086B028EECABB3A_OFFSET UNITYSDK_OFFSET(0x1CABCAC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_821CD192B94A0914_OFFSET UNITYSDK_OFFSET(0x1CAC0290)
#define CLASS_1_D837DED66799FBE3_METHOD_1_821F4DF79123F855_OFFSET UNITYSDK_OFFSET(0x1CABFCC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8242EDA247B59EAB_OFFSET UNITYSDK_OFFSET(0x1CAB6FE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_82E7F2FA2D5D0D9D_OFFSET UNITYSDK_OFFSET(0x1CABF450)
#define CLASS_1_D837DED66799FBE3_METHOD_1_82F38CF83D1B9222_OFFSET UNITYSDK_OFFSET(0x1CAB6C90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_833F7A3BB8CC7326_OFFSET UNITYSDK_OFFSET(0x1CABAED0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_835DC72267533A9D_OFFSET UNITYSDK_OFFSET(0x1CABFE50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_83A5607CC64A8AEA_OFFSET UNITYSDK_OFFSET(0x1CABCCA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_83E2F2CE8E1F8AC9_OFFSET UNITYSDK_OFFSET(0x1CAB9650)
#define CLASS_1_D837DED66799FBE3_METHOD_1_843F2B8CD9A06F30_OFFSET UNITYSDK_OFFSET(0x1CAB9DA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_844FDC9CE175F613_OFFSET UNITYSDK_OFFSET(0x1CAC0DF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8478907E5C7436FC_OFFSET UNITYSDK_OFFSET(0x1CABC5C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_848CFAD4AA25622C_OFFSET UNITYSDK_OFFSET(0x1CABED60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_854B2D0D0C227AF9_OFFSET UNITYSDK_OFFSET(0x1CAC03F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_855D921EFE247BE0_OFFSET UNITYSDK_OFFSET(0x1CAB9B40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8585A65610E1C35C_OFFSET UNITYSDK_OFFSET(0x1CAB9560)
#define CLASS_1_D837DED66799FBE3_METHOD_1_85889E9738F6162B_OFFSET UNITYSDK_OFFSET(0x1CABD1A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8596E39BCA3E3FDC_OFFSET UNITYSDK_OFFSET(0x1CAB7B20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_85B970375FC732ED_OFFSET UNITYSDK_OFFSET(0x1CABB970)
#define CLASS_1_D837DED66799FBE3_METHOD_1_85BB37E2F5D96F3C_OFFSET UNITYSDK_OFFSET(0x1CAB9B10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_85BC730EC300FD28_OFFSET UNITYSDK_OFFSET(0x1CAB9410)
#define CLASS_1_D837DED66799FBE3_METHOD_1_85D4026C9C41F8EA_OFFSET UNITYSDK_OFFSET(0x1CAC04C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_86344203720E950D_OFFSET UNITYSDK_OFFSET(0x1CAC0900)
#define CLASS_1_D837DED66799FBE3_METHOD_1_864F9FA1E87D71A7_OFFSET UNITYSDK_OFFSET(0x1CAC0430)
#define CLASS_1_D837DED66799FBE3_METHOD_1_86FAD0554B1604B9_OFFSET UNITYSDK_OFFSET(0x1CABED30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_875A9ED2BBCC2154_OFFSET UNITYSDK_OFFSET(0x1CAB72E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_87D8EFEF182A4E23_OFFSET UNITYSDK_OFFSET(0x1CABF4D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_87DC67097E5FE72A_OFFSET UNITYSDK_OFFSET(0x1CABEE50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_88A29348FB66A32A_OFFSET UNITYSDK_OFFSET(0x1CABCF40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_88A445500FC15EF1_OFFSET UNITYSDK_OFFSET(0x1CABAA60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_88E007C8F7AF349D_OFFSET UNITYSDK_OFFSET(0x1CABA0E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_88F4577B07813A49_OFFSET UNITYSDK_OFFSET(0x1CABD290)
#define CLASS_1_D837DED66799FBE3_METHOD_1_896618A933D567BD_OFFSET UNITYSDK_OFFSET(0x1CAB74E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_896A481A17C20163_OFFSET UNITYSDK_OFFSET(0x1CAC0760)
#define CLASS_1_D837DED66799FBE3_METHOD_1_89A4DB90A0A4155C_OFFSET UNITYSDK_OFFSET(0x1CABC250)
#define CLASS_1_D837DED66799FBE3_METHOD_1_89F83B4924ECEC09_OFFSET UNITYSDK_OFFSET(0x1CABA280)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8A365F916148033A_OFFSET UNITYSDK_OFFSET(0x1CAC0C20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8A67B61D1181E2E6_OFFSET UNITYSDK_OFFSET(0x1CAC25B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8A6FD34B03CF8C1B_OFFSET UNITYSDK_OFFSET(0x1CAC0640)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8A8864942A2398AF_OFFSET UNITYSDK_OFFSET(0x1CAC1CE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8A8FF85924BB3AB2_OFFSET UNITYSDK_OFFSET(0x1CAB71F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8AAA7911EBCA99F3_OFFSET UNITYSDK_OFFSET(0x1CABEE20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8BA3757B826582E1_OFFSET UNITYSDK_OFFSET(0x1CAB8540)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8C149858FDFD2320_OFFSET UNITYSDK_OFFSET(0x1CAB8DB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8C26653201E78534_OFFSET UNITYSDK_OFFSET(0x1CAB6E00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8C3D9D13AC309212_OFFSET UNITYSDK_OFFSET(0x1CAB90B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8C67894B6BB31907_OFFSET UNITYSDK_OFFSET(0x1CABFA70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8C91E0B0A9270987_OFFSET UNITYSDK_OFFSET(0x1CABFC00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8CDDDC10D13EC1A5_OFFSET UNITYSDK_OFFSET(0x1CABF640)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8CEC8A729DC1AED0_OFFSET UNITYSDK_OFFSET(0x1CABE020)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8CF08C86B50E0671_OFFSET UNITYSDK_OFFSET(0x1CAC0C70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8D377298DA08BD7E_OFFSET UNITYSDK_OFFSET(0x1CAB9440)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8D7ADBD7E41A3320_OFFSET UNITYSDK_OFFSET(0x1CAC1C80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8E2251DA07BECCFE_OFFSET UNITYSDK_OFFSET(0x1CAB70F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8E4E1AAFD92298F8_OFFSET UNITYSDK_OFFSET(0x1CABCB40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8E60D20B81ACC3D7_OFFSET UNITYSDK_OFFSET(0x1CAC1A60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8E696EECA9B05778_OFFSET UNITYSDK_OFFSET(0x1CABBE40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8E7758F8E6644BFC_OFFSET UNITYSDK_OFFSET(0x1CAC07E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8E99DC2F46A6D01F_OFFSET UNITYSDK_OFFSET(0x1CABD340)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8EB75FAA4B1E4D2C_OFFSET UNITYSDK_OFFSET(0x1CABDE10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8F36A98A6EDDCBEB_OFFSET UNITYSDK_OFFSET(0x1CABEB10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8FD7708D607F806C_OFFSET UNITYSDK_OFFSET(0x1CAB8430)
#define CLASS_1_D837DED66799FBE3_METHOD_1_8FE1198BEFB6F799_OFFSET UNITYSDK_OFFSET(0x1CAB0920)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9032E73AB15E3AFD_OFFSET UNITYSDK_OFFSET(0x1CABF340)
#define CLASS_1_D837DED66799FBE3_METHOD_1_90640F4DAA0343F3_OFFSET UNITYSDK_OFFSET(0x1CAB8750)
#define CLASS_1_D837DED66799FBE3_METHOD_1_90816E3D9AA4E277_OFFSET UNITYSDK_OFFSET(0x1CAB8FB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_90BDD8F54A7D76DF_OFFSET UNITYSDK_OFFSET(0x1CABB2B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_90DFFF98F4964971_OFFSET UNITYSDK_OFFSET(0x1CAC1460)
#define CLASS_1_D837DED66799FBE3_METHOD_1_91AD260443483890_OFFSET UNITYSDK_OFFSET(0x1CAC0EE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_91AD608D1235F88F_OFFSET UNITYSDK_OFFSET(0x1CAB81F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_923A04971001C573_OFFSET UNITYSDK_OFFSET(0x1CABF970)
#define CLASS_1_D837DED66799FBE3_METHOD_1_92423D26C6CD30E4_OFFSET UNITYSDK_OFFSET(0x1CAC19C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9269C39F3FDD0DFC_OFFSET UNITYSDK_OFFSET(0x1CAB8B80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_926E95E00F93F297_OFFSET UNITYSDK_OFFSET(0x1CABAF90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_92D17F883C104AD3_OFFSET UNITYSDK_OFFSET(0x1CAB8DF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_939F14749AA9BA05_OFFSET UNITYSDK_OFFSET(0x1CAB6B20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_93CC1C55289CA958_OFFSET UNITYSDK_OFFSET(0x1CAB7A00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_941F2C043D62910D_OFFSET UNITYSDK_OFFSET(0x1CAB84E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_94224A6B444E57D5_OFFSET UNITYSDK_OFFSET(0x1CABC680)
#define CLASS_1_D837DED66799FBE3_METHOD_1_944B5EF023AAE43F_OFFSET UNITYSDK_OFFSET(0x1CAB9C70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_94A6E1A1B782CA8D_OFFSET UNITYSDK_OFFSET(0x1CAB71D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_94B6AA8C376C57A0_OFFSET UNITYSDK_OFFSET(0x1CAB7910)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9504EF9988B6AA4D_OFFSET UNITYSDK_OFFSET(0x1CABA710)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9518509095A7FB50_OFFSET UNITYSDK_OFFSET(0x1CAB6630)
#define CLASS_1_D837DED66799FBE3_METHOD_1_95CF1DF861241F4B_OFFSET UNITYSDK_OFFSET(0x1CAC0170)
#define CLASS_1_D837DED66799FBE3_METHOD_1_95F2A5EC0EC6DFC4_OFFSET UNITYSDK_OFFSET(0x1CAB99F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_96529E2BA4FAA28A_OFFSET UNITYSDK_OFFSET(0x1CABF8E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_96A6C328835FC39A_OFFSET UNITYSDK_OFFSET(0x1CAB96F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_971BF76B4BA70A59_OFFSET UNITYSDK_OFFSET(0x1CAC3270)
#define CLASS_1_D837DED66799FBE3_METHOD_1_980D4E2A7E2A769C_OFFSET UNITYSDK_OFFSET(0x1CAC06A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_980E74F0A82F1FDF_OFFSET UNITYSDK_OFFSET(0x1CABA040)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9829FBE655C4E55D_OFFSET UNITYSDK_OFFSET(0x1CAB8B90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_982D4AF570171AD6_OFFSET UNITYSDK_OFFSET(0x1CABDD40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_98848E9034DBA46F_OFFSET UNITYSDK_OFFSET(0x1CABA070)
#define CLASS_1_D837DED66799FBE3_METHOD_1_98BB681ACB64367E_OFFSET UNITYSDK_OFFSET(0x1CABE140)
#define CLASS_1_D837DED66799FBE3_METHOD_1_98CE7EBEDED78A80_OFFSET UNITYSDK_OFFSET(0x1CAB7AC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_98FEC005A4F55264_OFFSET UNITYSDK_OFFSET(0x1CABAAB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9911E44B78473C53_OFFSET UNITYSDK_OFFSET(0x1CAC0660)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9975CFA1FCE5825E_OFFSET UNITYSDK_OFFSET(0x1CABFEC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_10_OFFSET UNITYSDK_OFFSET(0x1CABA6A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_11_OFFSET UNITYSDK_OFFSET(0x1CABA7A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_12_OFFSET UNITYSDK_OFFSET(0x1CABA7D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_13_OFFSET UNITYSDK_OFFSET(0x1CABA800)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_14_OFFSET UNITYSDK_OFFSET(0x1CABB9D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_15_OFFSET UNITYSDK_OFFSET(0x1CABBA00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_16_OFFSET UNITYSDK_OFFSET(0x1CABBCD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_17_OFFSET UNITYSDK_OFFSET(0x1CABC410)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_18_OFFSET UNITYSDK_OFFSET(0x1CABC470)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_19_OFFSET UNITYSDK_OFFSET(0x1CABD930)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_1_OFFSET UNITYSDK_OFFSET(0x1CAB76F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_20_OFFSET UNITYSDK_OFFSET(0x1CABDD70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_21_OFFSET UNITYSDK_OFFSET(0x1CABDDC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_22_OFFSET UNITYSDK_OFFSET(0x1CAC1EB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_23_OFFSET UNITYSDK_OFFSET(0x1CAC1FD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_24_OFFSET UNITYSDK_OFFSET(0x1CAC2180)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_25_OFFSET UNITYSDK_OFFSET(0x1CAC21B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_26_OFFSET UNITYSDK_OFFSET(0x1CAC2290)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_27_OFFSET UNITYSDK_OFFSET(0x1CAC22C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_28_OFFSET UNITYSDK_OFFSET(0x1CAC2320)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_29_OFFSET UNITYSDK_OFFSET(0x1CAC2350)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_2_OFFSET UNITYSDK_OFFSET(0x1CAB7720)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_30_OFFSET UNITYSDK_OFFSET(0x1CAC23F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_31_OFFSET UNITYSDK_OFFSET(0x1CAC2420)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_32_OFFSET UNITYSDK_OFFSET(0x1CAC2450)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_33_OFFSET UNITYSDK_OFFSET(0x1CAC24B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_34_OFFSET UNITYSDK_OFFSET(0x1CAC24E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_35_OFFSET UNITYSDK_OFFSET(0x1CAC2510)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_36_OFFSET UNITYSDK_OFFSET(0x1CAC27F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_37_OFFSET UNITYSDK_OFFSET(0x1CAC3120)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_38_OFFSET UNITYSDK_OFFSET(0x1CAC3150)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_3_OFFSET UNITYSDK_OFFSET(0x1CAB7760)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_4_OFFSET UNITYSDK_OFFSET(0x1CAB7790)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_5_OFFSET UNITYSDK_OFFSET(0x1CAB77C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_6_OFFSET UNITYSDK_OFFSET(0x1CABA380)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_7_OFFSET UNITYSDK_OFFSET(0x1CABA410)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_8_OFFSET UNITYSDK_OFFSET(0x1CABA440)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_9_OFFSET UNITYSDK_OFFSET(0x1CABA660)
#define CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1CAB7660)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9993CD46E8483C70_OFFSET UNITYSDK_OFFSET(0x1CAC1830)
#define CLASS_1_D837DED66799FBE3_METHOD_1_99FF7D8DDA83262D_OFFSET UNITYSDK_OFFSET(0x1CAC22F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9A0B8922AC6851B9_OFFSET UNITYSDK_OFFSET(0x1CAC30C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9A227DC4712D44C0_OFFSET UNITYSDK_OFFSET(0x1CAC31E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9AB8D3DF173E98BD_OFFSET UNITYSDK_OFFSET(0x1CAB7B80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9AC57A6F55AE0F5D_OFFSET UNITYSDK_OFFSET(0x1CAC1690)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9B59605BE99DCEDF_OFFSET UNITYSDK_OFFSET(0x1CAB9FE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9BED9ABE98A70F52_OFFSET UNITYSDK_OFFSET(0x1CAC1C20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9BFBF4EFB6EDE536_OFFSET UNITYSDK_OFFSET(0x1CAB97C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9C9A3D24403A53D5_OFFSET UNITYSDK_OFFSET(0x1CAB9EF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9CF4849E7A4BBFEA_OFFSET UNITYSDK_OFFSET(0x1CABF9A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9D4ADBB16D7F6594_OFFSET UNITYSDK_OFFSET(0x1CAC06E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9D631EDC86B1199B_OFFSET UNITYSDK_OFFSET(0x1CAB6DE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9D7B497A57475F95_OFFSET UNITYSDK_OFFSET(0x1CAC0510)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9DA8FEF49290C4C1_OFFSET UNITYSDK_OFFSET(0x1CABCC00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9E4BF39F0F5B6451_OFFSET UNITYSDK_OFFSET(0x1CABAD30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9EA752198751D561_OFFSET UNITYSDK_OFFSET(0x1CABACD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9EC02CF9D492E87C_OFFSET UNITYSDK_OFFSET(0x1CAC0B20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9EED02718F45D745_OFFSET UNITYSDK_OFFSET(0x1CAB7BB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9F61B85B4E7F1429_OFFSET UNITYSDK_OFFSET(0x1CAB6FD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9FBC6103C29A7566_OFFSET UNITYSDK_OFFSET(0x1CABD6F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_9FBD2AB320D41C79_OFFSET UNITYSDK_OFFSET(0x1CAB73F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A005444ED608D692_OFFSET UNITYSDK_OFFSET(0x1CABA740)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A03E8F9088546313_OFFSET UNITYSDK_OFFSET(0x1CABFC40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A0AD184CA48493B4_OFFSET UNITYSDK_OFFSET(0x1CABA5D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A26551549B5D42D3_OFFSET UNITYSDK_OFFSET(0x1CABC870)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A2D80E6173A07338_OFFSET UNITYSDK_OFFSET(0x1CABD040)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A3351B9575A87ECA_OFFSET UNITYSDK_OFFSET(0x1CABDAB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A3490BF69679BE4F_OFFSET UNITYSDK_OFFSET(0x1CABFB20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A388CBC2080234EF_OFFSET UNITYSDK_OFFSET(0x1CABBBA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A3C1BD5BB81C7009_OFFSET UNITYSDK_OFFSET(0x1CAB78B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A3E74E2F822CB2F9_OFFSET UNITYSDK_OFFSET(0x1CAC0BC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A40E3F1972B18F71_OFFSET UNITYSDK_OFFSET(0x1CABF8B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A478997CE7E4F2D9_OFFSET UNITYSDK_OFFSET(0x1CAC1AD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A48A4B1B24ACD222_OFFSET UNITYSDK_OFFSET(0x1CAB7320)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A5158F2186BC2884_OFFSET UNITYSDK_OFFSET(0x1CAB95A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A544683B4AAF55B0_OFFSET UNITYSDK_OFFSET(0x1CABCC70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A553363E7C1C00AE_OFFSET UNITYSDK_OFFSET(0x1CAC1E90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A592C90E46112AC6_OFFSET UNITYSDK_OFFSET(0x1CABA470)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A5B6C0B293E26748_OFFSET UNITYSDK_OFFSET(0x1CAC1BF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A640AB8E6BD05703_OFFSET UNITYSDK_OFFSET(0x1CABD470)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A688583EDE874B86_OFFSET UNITYSDK_OFFSET(0x1CABE3E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A6A8D1CB18BFF7FB_OFFSET UNITYSDK_OFFSET(0x1CAC0D50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A7249BB191FE91F6_OFFSET UNITYSDK_OFFSET(0x1CAB9280)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A727B5C8E37FF09F_OFFSET UNITYSDK_OFFSET(0x1CABAA10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A72DF3F7587E8B71_OFFSET UNITYSDK_OFFSET(0x1CAB8C00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A7377757C6E3A954_OFFSET UNITYSDK_OFFSET(0x1CAB9EC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A80DCEB4A598840A_OFFSET UNITYSDK_OFFSET(0x1CABB5F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A8BCA8849A42B154_OFFSET UNITYSDK_OFFSET(0x1CABEFB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A8DE72BDFEE68B70_OFFSET UNITYSDK_OFFSET(0x1CAB81C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_A99DF3E9F834FDB0_OFFSET UNITYSDK_OFFSET(0x1CABF820)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AA30717B47EB372B_OFFSET UNITYSDK_OFFSET(0x1CABD200)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AA5B20464B6F5139_OFFSET UNITYSDK_OFFSET(0x1CABBB20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AA6B78F82D2419C3_OFFSET UNITYSDK_OFFSET(0x1CAC0B40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AA77A8DF4D5FD2B5_OFFSET UNITYSDK_OFFSET(0x1CABD7F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AA93B692FA7D23F7_OFFSET UNITYSDK_OFFSET(0x1CABFF10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AAD384370C0954BC_OFFSET UNITYSDK_OFFSET(0x1CAC1A20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AB2E0C2168A717F8_OFFSET UNITYSDK_OFFSET(0x1CAB7490)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AB43506BAB4BA5BF_OFFSET UNITYSDK_OFFSET(0x1CABAF30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AB68CA1DB44A7F37_OFFSET UNITYSDK_OFFSET(0x1CAC16F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AB76596D8F5D6A86_OFFSET UNITYSDK_OFFSET(0x1CAAC650)
#define CLASS_1_D837DED66799FBE3_METHOD_1_ABCB5707B0D72F0B_OFFSET UNITYSDK_OFFSET(0x1CAC2B00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_ABEFB9B88F35F8ED_OFFSET UNITYSDK_OFFSET(0x1CABF300)
#define CLASS_1_D837DED66799FBE3_METHOD_1_ABFE25E34E925698_OFFSET UNITYSDK_OFFSET(0x1CAC18A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_ACA562F9B12BD428_OFFSET UNITYSDK_OFFSET(0x1CAB9AD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_ACAF3929D5A24570_OFFSET UNITYSDK_OFFSET(0x1CABD990)
#define CLASS_1_D837DED66799FBE3_METHOD_1_ACBFF3ACD9982E27_OFFSET UNITYSDK_OFFSET(0x1CAC0270)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AD00105D79A32AE8_OFFSET UNITYSDK_OFFSET(0x1CABA970)
#define CLASS_1_D837DED66799FBE3_METHOD_1_ADF829B749F99AD8_OFFSET UNITYSDK_OFFSET(0x1CABB620)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AE03D74CB5F8B134_OFFSET UNITYSDK_OFFSET(0x1CABB020)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AE45AD1856BBD2B7_OFFSET UNITYSDK_OFFSET(0x1CABC310)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AE62534B37EFB25D_OFFSET UNITYSDK_OFFSET(0x1CABF3A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AE730C307F962D20_OFFSET UNITYSDK_OFFSET(0x1CABFBE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AE808303BE9F0E53_OFFSET UNITYSDK_OFFSET(0x1CAB7200)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AE942EE597AC6B74_OFFSET UNITYSDK_OFFSET(0x1CABEA50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AE9B2F1FCC2F4322_OFFSET UNITYSDK_OFFSET(0x1CABD3E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AED53185962B1748_OFFSET UNITYSDK_OFFSET(0x1CABF110)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AEEDB1D39A556CC4_OFFSET UNITYSDK_OFFSET(0x1CAB7250)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AF1FDDE21D09BB84_OFFSET UNITYSDK_OFFSET(0x1CABDBA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AF6936ED72A3443A_OFFSET UNITYSDK_OFFSET(0x1CABAF00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_AFE40E0D5C77887F_OFFSET UNITYSDK_OFFSET(0x1CABCBC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B01CF882783D7D6B_OFFSET UNITYSDK_OFFSET(0x1CAB8990)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B01E5CB42EF283DE_OFFSET UNITYSDK_OFFSET(0x1CAB9B70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B05B3CC2ED309E52_OFFSET UNITYSDK_OFFSET(0x1CAC1430)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B0831A8246B287B4_OFFSET UNITYSDK_OFFSET(0x1CAB79D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B0904F63D3FE31F0_OFFSET UNITYSDK_OFFSET(0x1CAC1610)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B09816C2317B5FBC_OFFSET UNITYSDK_OFFSET(0x1CAC1DD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B0AC0D5C4C815C60_OFFSET UNITYSDK_OFFSET(0x1CAC2670)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B159043C82B40583_OFFSET UNITYSDK_OFFSET(0x1CAB4950)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B16F2CFD1A55046C_OFFSET UNITYSDK_OFFSET(0x1CAB72A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B1D6A07AB61BC742_OFFSET UNITYSDK_OFFSET(0x1CABEC40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B1E69E7E59345385_OFFSET UNITYSDK_OFFSET(0x1CAB7A60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B28ACBED93735610_OFFSET UNITYSDK_OFFSET(0x1CAC1730)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B29A8B3E13F243DD_OFFSET UNITYSDK_OFFSET(0x1CABB5A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B2C66C0AF3542A3D_OFFSET UNITYSDK_OFFSET(0x1CAB6AC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B3837C580F65A4BA_OFFSET UNITYSDK_OFFSET(0x1CAC0600)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B3E889328DB9628A_OFFSET UNITYSDK_OFFSET(0x1CAB95D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B419588616294EBE_OFFSET UNITYSDK_OFFSET(0x1CAB7F50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B49D8404E20FF189_OFFSET UNITYSDK_OFFSET(0x1CAC2150)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B4B4F225D2C698DD_OFFSET UNITYSDK_OFFSET(0x1CAC0110)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B51D1BE0A5BAE730_OFFSET UNITYSDK_OFFSET(0x1CAB8310)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B53FC4F8DF992F7F_OFFSET UNITYSDK_OFFSET(0x1CABF150)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B552F142E8D84A57_OFFSET UNITYSDK_OFFSET(0x1CAB8BA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B59A76CD0A11671C_OFFSET UNITYSDK_OFFSET(0x1CABD590)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B666E0B434A7E2A5_OFFSET UNITYSDK_OFFSET(0x1CABA2C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B682CCB2ACDD8A3B_OFFSET UNITYSDK_OFFSET(0x1CABFB80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B6841CC0CFD88B77_OFFSET UNITYSDK_OFFSET(0x1CAB7420)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B7A2F4A815F6E10A_OFFSET UNITYSDK_OFFSET(0x1CABD4A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B7A495470EBDAEF2_OFFSET UNITYSDK_OFFSET(0x1CAB8010)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B7F6535C9744E774_OFFSET UNITYSDK_OFFSET(0x1CAB7850)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B8068360B13D4002_OFFSET UNITYSDK_OFFSET(0x1CABA530)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B884F6B8C22AE4F3_OFFSET UNITYSDK_OFFSET(0x1CAB8960)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B8DC8929DBD5A7E5_OFFSET UNITYSDK_OFFSET(0x1CAC1880)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B953DCBEB53D397D_OFFSET UNITYSDK_OFFSET(0x1CAC0530)
#define CLASS_1_D837DED66799FBE3_METHOD_1_B9C9A32263736274_OFFSET UNITYSDK_OFFSET(0x1CAB87B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BAAEFDEADA629EED_OFFSET UNITYSDK_OFFSET(0x1CAC2850)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BAFB2269FBAD5E02_OFFSET UNITYSDK_OFFSET(0x1CAC1E00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BB13A1B529766043_OFFSET UNITYSDK_OFFSET(0x1CAB8810)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BB3837BBB2DF0C31_OFFSET UNITYSDK_OFFSET(0x1CAB9950)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BB3B5C52BE4BB917_OFFSET UNITYSDK_OFFSET(0x1CAB6CD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BB477A76EEDF96FE_OFFSET UNITYSDK_OFFSET(0x1CAC0860)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BC4AAB076CE81499_OFFSET UNITYSDK_OFFSET(0x1CAB8160)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BCDC1D7350EDD011_OFFSET UNITYSDK_OFFSET(0x1CAC1180)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BCE3B25AF1A3FC51_OFFSET UNITYSDK_OFFSET(0x1CABFBB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BD06A0A7EDE18FD2_OFFSET UNITYSDK_OFFSET(0x1CABADB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BD37A62996901079_OFFSET UNITYSDK_OFFSET(0x1CABF9D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BD71F1EB9403DED5_OFFSET UNITYSDK_OFFSET(0x1CABA4F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BDA336B31C5E5D62_OFFSET UNITYSDK_OFFSET(0x1CAB91A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BE12A9647E1A48E3_OFFSET UNITYSDK_OFFSET(0x1CAC2EE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BE555C8712740965_OFFSET UNITYSDK_OFFSET(0x1CAB7210)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BE7F8B4014E01C57_OFFSET UNITYSDK_OFFSET(0x1CABB230)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BF303AD8AE0CA1F6_OFFSET UNITYSDK_OFFSET(0x1CAB7BE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BF4F8ED37D2527BA_OFFSET UNITYSDK_OFFSET(0x1CABD5C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BFD2CDFFC8FF7CAB_OFFSET UNITYSDK_OFFSET(0x1CAC0F70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_BFECA14C5D5A2775_OFFSET UNITYSDK_OFFSET(0x1CABB110)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C0353B80AC07B2DF_OFFSET UNITYSDK_OFFSET(0x1CABCED0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C05CE16DE156F3E1_OFFSET UNITYSDK_OFFSET(0x1CAC3060)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C087B29B69EADFEC_OFFSET UNITYSDK_OFFSET(0x1CAC0800)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C097B59EEFDA0125_OFFSET UNITYSDK_OFFSET(0x1CAC18E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C0C3BA47C7E0398F_OFFSET UNITYSDK_OFFSET(0x1CABDF30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C0DFC9AC2E5205BB_OFFSET UNITYSDK_OFFSET(0x1CABC8D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C11FCCEFA6BAE363_OFFSET UNITYSDK_OFFSET(0x1CAB6800)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C16622B126F48433_OFFSET UNITYSDK_OFFSET(0x1CABC0C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C19711F853CD008C_OFFSET UNITYSDK_OFFSET(0x1CAC2F40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C1ABBFD1994EB1BC_OFFSET UNITYSDK_OFFSET(0x1CAB0CF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C1B2C437EDE29A83_OFFSET UNITYSDK_OFFSET(0x1CAC1770)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C1F0E0CA24D46CC0_OFFSET UNITYSDK_OFFSET(0x1CAB9140)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C2622D518CA30D24_OFFSET UNITYSDK_OFFSET(0x1CAB9080)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C2C21AF74B31389A_OFFSET UNITYSDK_OFFSET(0x1CABAB90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C2D98ACAACF47211_1_OFFSET UNITYSDK_OFFSET(0x1CAB6880)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C2D98ACAACF47211_OFFSET UNITYSDK_OFFSET(0x1CAB6840)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C32A6210AA1A9142_OFFSET UNITYSDK_OFFSET(0x1CABDFC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C33017A79ABA3005_OFFSET UNITYSDK_OFFSET(0x1CAB9D30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C3F1A8B9E2BC6238_OFFSET UNITYSDK_OFFSET(0x1CABC560)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C416AF448AE0A636_OFFSET UNITYSDK_OFFSET(0x1CABF0D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C4927A9BE1AE9AF0_OFFSET UNITYSDK_OFFSET(0x1CAB8EC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C4C417CFC23DE4C8_OFFSET UNITYSDK_OFFSET(0x1CABFCD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C4CB2AD13AD42CF2_OFFSET UNITYSDK_OFFSET(0x1CAB6FC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C4E403C7BC6596F8_OFFSET UNITYSDK_OFFSET(0x1CAC1290)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C4E4CF1571A0E5D6_OFFSET UNITYSDK_OFFSET(0x1CAC2CA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C5571D63DA73BA41_OFFSET UNITYSDK_OFFSET(0x1CAC15F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C55DD720A5241369_OFFSET UNITYSDK_OFFSET(0x1CABE9F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C61471CF11ADDDF5_OFFSET UNITYSDK_OFFSET(0x1CABD8B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C647797784E3EA9A_OFFSET UNITYSDK_OFFSET(0x1CABAC70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C66A2EA6DF20B5F6_OFFSET UNITYSDK_OFFSET(0x1CAB7000)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C7E7B2C754D86189_OFFSET UNITYSDK_OFFSET(0x1CABD790)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C7FF4DBE28B3B838_OFFSET UNITYSDK_OFFSET(0x1CAB9F50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C82976AAB2833114_OFFSET UNITYSDK_OFFSET(0x1CABD440)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C8383BD4A9C019EA_OFFSET UNITYSDK_OFFSET(0x1CABFAB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C904C3FA86E90FE7_OFFSET UNITYSDK_OFFSET(0x1CAB1120)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C90BBF36A91466D0_OFFSET UNITYSDK_OFFSET(0x1CAC3210)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C9115DAD124286F1_OFFSET UNITYSDK_OFFSET(0x1CABBAC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_C9F6DEA5AF69B606_OFFSET UNITYSDK_OFFSET(0x1CAC1390)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CB7AACCD0BEF2A5F_OFFSET UNITYSDK_OFFSET(0x1CAB6DB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CB8E9220CC1A7D57_OFFSET UNITYSDK_OFFSET(0x1CABB080)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CB9ECD291A08BF0D_OFFSET UNITYSDK_OFFSET(0x1CAC2B40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CBAF848C5A466DB3_OFFSET UNITYSDK_OFFSET(0x1CABA4A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CBB50309B724E8D3_OFFSET UNITYSDK_OFFSET(0x1CAB0450)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CC272375F59FEDE9_OFFSET UNITYSDK_OFFSET(0x1CABC280)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CC3D5C5571C64025_OFFSET UNITYSDK_OFFSET(0x1CAB6D70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CC3E61B8347EB9CD_OFFSET UNITYSDK_OFFSET(0x1CAB9350)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CCA6D5AC201F9DBE_OFFSET UNITYSDK_OFFSET(0x1CABDC00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CCE3E26F0E4D5035_OFFSET UNITYSDK_OFFSET(0x1CAC08A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CCECF0C0A284CE40_OFFSET UNITYSDK_OFFSET(0x1CAB91D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CD230238E4921E33_OFFSET UNITYSDK_OFFSET(0x1CAC00B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CD5E66F504817983_OFFSET UNITYSDK_OFFSET(0x1CABF010)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CD8444DCF48CFF0F_OFFSET UNITYSDK_OFFSET(0x1CAC2880)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CDC309A202A98508_OFFSET UNITYSDK_OFFSET(0x1CAB7220)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CDCFCCC98E039071_OFFSET UNITYSDK_OFFSET(0x1CAB7C10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CE46B4EAA1C6EFF8_OFFSET UNITYSDK_OFFSET(0x1CAB6F30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CE77DE8BE6C3F0D7_OFFSET UNITYSDK_OFFSET(0x1CABDC30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CEFAC115426F3CB7_OFFSET UNITYSDK_OFFSET(0x1CABA350)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CF0F80A55FB203F9_OFFSET UNITYSDK_OFFSET(0x1CABEC10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CF2635662F4ACA3D_OFFSET UNITYSDK_OFFSET(0x1CABF6A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CF27809E503167A2_OFFSET UNITYSDK_OFFSET(0x1CABF940)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CF6C3B0C17636C00_OFFSET UNITYSDK_OFFSET(0x1CAC13E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CFB3C72B8E319A02_OFFSET UNITYSDK_OFFSET(0x1CAC26A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_CFECF0893025D242_OFFSET UNITYSDK_OFFSET(0x1CAB7E60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D06FFBB02ED1ABBD_OFFSET UNITYSDK_OFFSET(0x1CAB7820)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D08D2CC7408426A3_OFFSET UNITYSDK_OFFSET(0x1CABF270)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D0DC364474FED5F4_OFFSET UNITYSDK_OFFSET(0x1CAC0FD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D10DAD75EBADC4E7_OFFSET UNITYSDK_OFFSET(0x1CAC2900)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D11DCB61EDF64FA0_OFFSET UNITYSDK_OFFSET(0x1CAB32C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D1BFBC38EC16F879_OFFSET UNITYSDK_OFFSET(0x1CAC1130)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D218A8688DA7467A_OFFSET UNITYSDK_OFFSET(0x1CAB7CA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D22AD126FEEC1D38_OFFSET UNITYSDK_OFFSET(0x1CABD620)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D23EB7C988D2EBEB_OFFSET UNITYSDK_OFFSET(0x1CABB140)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D25E117193D7A480_OFFSET UNITYSDK_OFFSET(0x1CAB9380)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D28121339C9BFB4C_OFFSET UNITYSDK_OFFSET(0x1CABC6E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D2DFFC43B7E78959_OFFSET UNITYSDK_OFFSET(0x1CABB330)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D33649BE8A8F6C9B_OFFSET UNITYSDK_OFFSET(0x1CAC2710)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D34C1440191AA7FA_OFFSET UNITYSDK_OFFSET(0x1CABABF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D369E2C2D1C6C3EE_OFFSET UNITYSDK_OFFSET(0x1CAB7440)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D399290E104598D1_OFFSET UNITYSDK_OFFSET(0x1CAB83D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D3D196C172419B09_OFFSET UNITYSDK_OFFSET(0x1CAB9790)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D3D2707BB7C140EB_OFFSET UNITYSDK_OFFSET(0x1CAC16B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D43EF50661A1155C_OFFSET UNITYSDK_OFFSET(0x1CAC32D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D45C30B15CD0A2DC_OFFSET UNITYSDK_OFFSET(0x1CABF540)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D4C747641F885762_OFFSET UNITYSDK_OFFSET(0x1CAC01C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D53138AE97835DE3_OFFSET UNITYSDK_OFFSET(0x1CABF2D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D575AE4C2E5A51E6_OFFSET UNITYSDK_OFFSET(0x1CABD410)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D59E7B144A4447FB_OFFSET UNITYSDK_OFFSET(0x1CAC10A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D5AFB104E4E1AD1B_OFFSET UNITYSDK_OFFSET(0x1CABC150)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D5DA3F8A522A7809_OFFSET UNITYSDK_OFFSET(0x1CABFC60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D5FC8AAEC806056D_OFFSET UNITYSDK_OFFSET(0x1CAB7260)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D61F51641F02515C_OFFSET UNITYSDK_OFFSET(0x1CAB7C70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D622FF9914E7984E_OFFSET UNITYSDK_OFFSET(0x1CAC0240)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D6776966E64E7D6E_OFFSET UNITYSDK_OFFSET(0x1CAC2FD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D70F30CBEF4A8E24_OFFSET UNITYSDK_OFFSET(0x1CABC840)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D7293E1A7BD3CACF_OFFSET UNITYSDK_OFFSET(0x1CAC0C90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D7CFDDA004D2CF8C_OFFSET UNITYSDK_OFFSET(0x1CAC01F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D8947BD877AF1D23_OFFSET UNITYSDK_OFFSET(0x1CAB4F60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D8DFFC86187881D9_OFFSET UNITYSDK_OFFSET(0x1CAB8720)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D8F0F9B2629D6DC9_OFFSET UNITYSDK_OFFSET(0x1CABABC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D9A554FD57FAB005_OFFSET UNITYSDK_OFFSET(0x1CAC0DD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_D9D2D4B1067C6871_OFFSET UNITYSDK_OFFSET(0x1CABC590)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DA843652E79C0AE7_OFFSET UNITYSDK_OFFSET(0x1CAC2610)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DAC56FFE8AD81304_OFFSET UNITYSDK_OFFSET(0x1CAB98A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DB09771289D5E922_OFFSET UNITYSDK_OFFSET(0x1CABA8D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DB38E4A96E385FA8_OFFSET UNITYSDK_OFFSET(0x1CAC1840)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DB3F78FC90994EE6_OFFSET UNITYSDK_OFFSET(0x1CABB3A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DB45420F8586E573_OFFSET UNITYSDK_OFFSET(0x1CAC0BA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DC5F3D5F3A007D4A_OFFSET UNITYSDK_OFFSET(0x1CAB8F80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DC6E9716B650C2DE_OFFSET UNITYSDK_OFFSET(0x1CAB8130)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DC865226D321D99E_OFFSET UNITYSDK_OFFSET(0x1CAB7450)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DCA9B0EC69AD16B3_OFFSET UNITYSDK_OFFSET(0x1CAC1530)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DD0FB4AD3E297A40_OFFSET UNITYSDK_OFFSET(0x1CABAC00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DD314C2A7CE3C679_OFFSET UNITYSDK_OFFSET(0x1CAC1020)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DD7FC4675DECA9B0_OFFSET UNITYSDK_OFFSET(0x1CAB79A0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DDA9E4F35A037066_OFFSET UNITYSDK_OFFSET(0x1CAB8070)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DE15C77EE4CBB66E_OFFSET UNITYSDK_OFFSET(0x1CABD750)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DE6CC66119BC766D_OFFSET UNITYSDK_OFFSET(0x1CAB73C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DE6E4657908CB726_OFFSET UNITYSDK_OFFSET(0x1CAB71E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DE961B0EB9ABD562_OFFSET UNITYSDK_OFFSET(0x1CABD650)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DF884970194A25AB_OFFSET UNITYSDK_OFFSET(0x1CABFFC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_DFDB9AA3EEDF2329_OFFSET UNITYSDK_OFFSET(0x1CAB8CA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E01179FBE1B89DD9_OFFSET UNITYSDK_OFFSET(0x1CABDA80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E113E2D629CB5E67_OFFSET UNITYSDK_OFFSET(0x1CAC05B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E1FEFD8AAA94DD07_OFFSET UNITYSDK_OFFSET(0x1CAC2DE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E2352EAB62E7469A_OFFSET UNITYSDK_OFFSET(0x1CAC17F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E2D7BE74808448DE_OFFSET UNITYSDK_OFFSET(0x1CABD4D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E2F4CA77AC1712A4_OFFSET UNITYSDK_OFFSET(0x1CAB8630)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E32E06B639EF9F9B_OFFSET UNITYSDK_OFFSET(0x1CAC0370)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E335C01BB59BE080_OFFSET UNITYSDK_OFFSET(0x1CABB910)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E364DC349EAA7FFD_OFFSET UNITYSDK_OFFSET(0x1CABD5F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E368792DDA74622D_OFFSET UNITYSDK_OFFSET(0x1CAB3E90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E38DE6B41912F457_OFFSET UNITYSDK_OFFSET(0x1CABF070)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E3D67FAF502A1D18_OFFSET UNITYSDK_OFFSET(0x1CAC25E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E4092035CBEC9E1C_OFFSET UNITYSDK_OFFSET(0x1CAB94B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E497AFC5DB920274_OFFSET UNITYSDK_OFFSET(0x1CABB940)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E4AF2172CC7C06AF_OFFSET UNITYSDK_OFFSET(0x1CAB7F80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E5418F831B560474_OFFSET UNITYSDK_OFFSET(0x1CAB8E90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E60C772C608F0825_OFFSET UNITYSDK_OFFSET(0x1CAB6FA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E672CC14B28613F1_OFFSET UNITYSDK_OFFSET(0x1CAC0B70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E6C8789FF13F3A00_OFFSET UNITYSDK_OFFSET(0x1CABE230)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E76E0CCE9E0C9376_OFFSET UNITYSDK_OFFSET(0x1CABB360)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E867A10AB3004F41_OFFSET UNITYSDK_OFFSET(0x1CABED00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E8CB82B96FFD6B14_OFFSET UNITYSDK_OFFSET(0x1CABD000)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E9770F8EA2D951C7_OFFSET UNITYSDK_OFFSET(0x1CAC0550)
#define CLASS_1_D837DED66799FBE3_METHOD_1_E9DCCCEAA8491DAB_OFFSET UNITYSDK_OFFSET(0x1CAB6F90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EA192B31175BE0C6_OFFSET UNITYSDK_OFFSET(0x1CAB9320)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EAD0C1CA2582303A_OFFSET UNITYSDK_OFFSET(0x1CABA9C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EAE49B4013DF76EC_OFFSET UNITYSDK_OFFSET(0x1CAB0D90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EB20EC421B56BE49_OFFSET UNITYSDK_OFFSET(0x1CABF5B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EB9CCDF723B4CA57_OFFSET UNITYSDK_OFFSET(0x1CAB6D10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EBB98FBDDDDD5CB7_OFFSET UNITYSDK_OFFSET(0x1CAB74F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EBC748AEE7E52451_OFFSET UNITYSDK_OFFSET(0x1CAB7B50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EC530074A1F250CB_OFFSET UNITYSDK_OFFSET(0x1CAB8660)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EC75F6171AE90934_OFFSET UNITYSDK_OFFSET(0x1CAB7190)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EC7E653D07B7F4DC_OFFSET UNITYSDK_OFFSET(0x1CABD9F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EC9BB2337A760A57_OFFSET UNITYSDK_OFFSET(0x1CAB66E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EDDD5A3A9B67128E_OFFSET UNITYSDK_OFFSET(0x1CAB9BD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EE19E0A2067423F5_OFFSET UNITYSDK_OFFSET(0x1CAB7C40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EE3274AAE7868DA3_OFFSET UNITYSDK_OFFSET(0x1CAC0EC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EE3CFC16C9C93C5D_OFFSET UNITYSDK_OFFSET(0x1CAC1A40)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EEB0120F93665326_OFFSET UNITYSDK_OFFSET(0x1CAB7FB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EEB6EE66342A73C4_OFFSET UNITYSDK_OFFSET(0x1CAB9690)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EEC81788D4BB93E6_OFFSET UNITYSDK_OFFSET(0x1CAC2A70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EF18BD0B212B30DB_OFFSET UNITYSDK_OFFSET(0x1CABBA90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EFBE8392C63105B0_OFFSET UNITYSDK_OFFSET(0x1CAB5B30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EFD0A768A7A6397D_OFFSET UNITYSDK_OFFSET(0x1CABB1D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EFDF87D569449559_OFFSET UNITYSDK_OFFSET(0x1CABE3B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_EFF85AAD8B422C1C_OFFSET UNITYSDK_OFFSET(0x1CAC2BC0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F087253D02A6921F_OFFSET UNITYSDK_OFFSET(0x1CABC4D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F09386DE332C149E_OFFSET UNITYSDK_OFFSET(0x1CAB7090)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F0B5B7EF75253CEB_OFFSET UNITYSDK_OFFSET(0x1CAB9BA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F0D60687BED61AE9_OFFSET UNITYSDK_OFFSET(0x1CAC2F10)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F10D6FBB06FF0492_OFFSET UNITYSDK_OFFSET(0x1CABDB20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F13E99E5FDE56B3A_OFFSET UNITYSDK_OFFSET(0x1CABFB50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F1B7CCB516A70E52_OFFSET UNITYSDK_OFFSET(0x1CAB71C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F1BEEC778192E08E_OFFSET UNITYSDK_OFFSET(0x1CAC0490)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F1EA42402C1E619F_OFFSET UNITYSDK_OFFSET(0x1CABBD80)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F253D5962D391CED_OFFSET UNITYSDK_OFFSET(0x1CAC0AF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F273FC6357A93CA8_OFFSET UNITYSDK_OFFSET(0x1CAB7940)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F279BF120661D9F0_OFFSET UNITYSDK_OFFSET(0x1CABBC70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F27D961655DEB5AB_OFFSET UNITYSDK_OFFSET(0x1CAB9870)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F2DD0CAD531F8229_OFFSET UNITYSDK_OFFSET(0x1CAC00E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F3026231918882BA_OFFSET UNITYSDK_OFFSET(0x1CABEB50)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_10_OFFSET UNITYSDK_OFFSET(0x1CAC2380)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_11_OFFSET UNITYSDK_OFFSET(0x1CAC2820)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_1_OFFSET UNITYSDK_OFFSET(0x1CABC7C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_2_OFFSET UNITYSDK_OFFSET(0x1CABC9B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_3_OFFSET UNITYSDK_OFFSET(0x1CABCFA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_4_OFFSET UNITYSDK_OFFSET(0x1CAC1EE0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_5_OFFSET UNITYSDK_OFFSET(0x1CAC1F70)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_6_OFFSET UNITYSDK_OFFSET(0x1CAC2000)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_7_OFFSET UNITYSDK_OFFSET(0x1CAC2060)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_8_OFFSET UNITYSDK_OFFSET(0x1CAC20C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_9_OFFSET UNITYSDK_OFFSET(0x1CAC2220)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_OFFSET UNITYSDK_OFFSET(0x1CAB7690)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F353E43989B472FD_OFFSET UNITYSDK_OFFSET(0x1CABC1F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F3E8D8BF37431B5C_OFFSET UNITYSDK_OFFSET(0x1CABEBB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F3F79E6223ACA8CF_OFFSET UNITYSDK_OFFSET(0x1CAC14B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F42BE948202CD848_OFFSET UNITYSDK_OFFSET(0x1CABDF90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F47A5D197237CDE7_OFFSET UNITYSDK_OFFSET(0x1CABBAF0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F47D67AEE78DC6AD_OFFSET UNITYSDK_OFFSET(0x1CAB92B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F4F16259E2C7DA67_OFFSET UNITYSDK_OFFSET(0x1CAB8040)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F4F4F8BA71A999F1_OFFSET UNITYSDK_OFFSET(0x1CAB8F30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F5AD1D6CD9F51981_OFFSET UNITYSDK_OFFSET(0x1CAB7060)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F6872D09E0CA7539_OFFSET UNITYSDK_OFFSET(0x1CAC12C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F6C6BDF8ACE1DC72_OFFSET UNITYSDK_OFFSET(0x1CAB7E30)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F6E570923032A7A0_OFFSET UNITYSDK_OFFSET(0x1CAC1670)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F7264EC819675EFE_OFFSET UNITYSDK_OFFSET(0x1CAC0AB0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F750F2EFA9842DCC_OFFSET UNITYSDK_OFFSET(0x1CAB93E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F7EB0C80FE54E257_OFFSET UNITYSDK_OFFSET(0x1CABDB90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F7F493EF79C311C4_OFFSET UNITYSDK_OFFSET(0x1CABA300)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F881F35ABBC406D8_OFFSET UNITYSDK_OFFSET(0x1CAB8370)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F8A91AD5F150D21A_OFFSET UNITYSDK_OFFSET(0x1CABB8B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F8E37FB5D33FF6EF_OFFSET UNITYSDK_OFFSET(0x1CABB050)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F91A1490DDD7AEE1_OFFSET UNITYSDK_OFFSET(0x1CAC1340)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F93ECD8FA5F0EC1B_OFFSET UNITYSDK_OFFSET(0x1CAB03C0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F97083C04A426BD7_OFFSET UNITYSDK_OFFSET(0x1CAC1B00)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F993DD1927510872_OFFSET UNITYSDK_OFFSET(0x1CABB0B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F9DAE346C65E4A4C_OFFSET UNITYSDK_OFFSET(0x1CAB9E60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_F9E71D60F252DCB0_OFFSET UNITYSDK_OFFSET(0x1CABB520)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FA1EC9772A305762_OFFSET UNITYSDK_OFFSET(0x1CAC0950)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FA8322BB85B9FC12_OFFSET UNITYSDK_OFFSET(0x1CABC6B0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FAD476EA9D66C352_OFFSET UNITYSDK_OFFSET(0x1CAC0020)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FADCEB5FDC083FAE_OFFSET UNITYSDK_OFFSET(0x1CABE380)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FAE11127B79763C1_OFFSET UNITYSDK_OFFSET(0x1CAB8E60)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FAFE4DECB3323162_OFFSET UNITYSDK_OFFSET(0x1CAB8460)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FB61B2F5376730D9_OFFSET UNITYSDK_OFFSET(0x1CAC26D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FBCDEE83C2889BEA_OFFSET UNITYSDK_OFFSET(0x1CABC650)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FBD1146AD75BEFFE_OFFSET UNITYSDK_OFFSET(0x1CABA250)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FC416085DCCB796A_OFFSET UNITYSDK_OFFSET(0x1CABD8E0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FCD275E76F541AFF_OFFSET UNITYSDK_OFFSET(0x1CABFDA0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FD4DD268F803EF68_OFFSET UNITYSDK_OFFSET(0x1CABB170)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FDD44E1C4902E3C2_OFFSET UNITYSDK_OFFSET(0x1CAB9E90)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FDD9B3E6E4EE6D20_OFFSET UNITYSDK_OFFSET(0x1CAB9010)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FE0AED4610E4A90D_OFFSET UNITYSDK_OFFSET(0x1CAB5570)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FE35D014955183E1_OFFSET UNITYSDK_OFFSET(0x1CAC04F0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FE4D109738BADBB6_OFFSET UNITYSDK_OFFSET(0x1CABA2D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FE4D6A3081F37127_OFFSET UNITYSDK_OFFSET(0x1CABD070)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FE75C4944BE18312_OFFSET UNITYSDK_OFFSET(0x1CAB5FD0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FE8A9FEB2BAE82F6_OFFSET UNITYSDK_OFFSET(0x1CABF040)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FE9715EEA9F30C67_OFFSET UNITYSDK_OFFSET(0x1CABA570)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FEA335A5EDF520F0_OFFSET UNITYSDK_OFFSET(0x1CAC17D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FEBC7A05FE2D8230_OFFSET UNITYSDK_OFFSET(0x1CAC10D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FEC6460B9497BE59_OFFSET UNITYSDK_OFFSET(0x1CABFC20)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FECBC4EB7A46E32E_OFFSET UNITYSDK_OFFSET(0x1CABF180)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FF01FD7C04D2ABA5_OFFSET UNITYSDK_OFFSET(0x1CAB73D0)
#define CLASS_1_D837DED66799FBE3_METHOD_1_FFA7FA2311AD6925_OFFSET UNITYSDK_OFFSET(0x1CAB64C0)
#define CLASS_1_D837DED66799FBE3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAC3330)

inline static constexpr unsigned int Class_1_D837DED66799FBE3_TypeDefinitionIndex = 10520;

class Class_1_D837DED66799FBE3 : public ::System::Object
{
public:
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::TargetEvaluator*>** StaticGet_EPGPGPDDODG()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::TargetEvaluator*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3900);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Double>** StaticGet_OHGPCJHMDNH()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3908);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FinishActionConfig*>** StaticGet_PDAOCLEOMHE()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FinishActionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3910);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Int32>** StaticGet_EEEMJEOAIOF()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3918);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FetchAdvPropData*>** StaticGet_LHNBNLLLMCE()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FetchAdvPropData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3920);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::MissionWaypointDataPack*>** StaticGet_ANFOFMHNIJH()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::MissionWaypointDataPack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3928);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FixPoint>** StaticGet_LDMDMKDPIMM()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3930);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::Vector4CurveFrame>** StaticGet_GENDMFDLIDL()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::Vector4CurveFrame>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3938);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FetchAdvNPCData*>** StaticGet_GFCEFNHBMBN()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FetchAdvNPCData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3940);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::MColor>** StaticGet_OKCOIJKBBIL()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::MColor>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3948);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::UInt32>** StaticGet_ILKFCCOMNCO()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3950);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::String*>** StaticGet_CFFGDEFHHEL()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3958);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StageIslandHLODConfig*>** StaticGet_LOCNKDHCEKD()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StageIslandHLODConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3960);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::PredicateConfig*>** StaticGet_HAHOKJALBFE()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::PredicateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3968);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::UInt16>** StaticGet_ONFBMOALNIE()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3970);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AssistWayPoint*>** StaticGet_KCHDCBPOJBF()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AssistWayPoint*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3978);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::Client::TextID>** StaticGet_KNIFODOFMFA()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3980);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::PropStateItem*>** StaticGet_AFHEJDBNNHJ()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::PropStateItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3988);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AssistWayPointConditionPack*>** StaticGet_FCMCBDLMMKE()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AssistWayPointConditionPack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3990);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::MissionCustomValueRewardConfig*>** StaticGet_KHGFDJOCEFE()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::MissionCustomValueRewardConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3998);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::ValueEvaluatorConfig*>** StaticGet_IKADCJMMGKI()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::ValueEvaluatorConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x39A0);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FetchAdvMonsterData*>** StaticGet_OCDLBDMALOK()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FetchAdvMonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x39A8);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::PckPatchPlatform*>** StaticGet_EMFAEMBOCIP()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::PckPatchPlatform*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x39B0);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::ByCompareItemPair*>** StaticGet_JGFJLBALDFI()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::ByCompareItemPair*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x39B8);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StageVolumeComponentData*>** StaticGet_CLLMNFKJLBO()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StageVolumeComponentData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x39C0);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Int16>** StaticGet_CPJOOALJJOE()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Int16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x39C8);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AssistWayPointLittleGameCondition*>** StaticGet_BAEJBAEHPAE()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AssistWayPointLittleGameCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x39D0);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StageIslandConfig*>** StaticGet_IAELPDLPHNI()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StageIslandConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x39D8);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StageVolumeConfig*>** StaticGet_AJPMMGOKKCD()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StageVolumeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x39E0);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::PckFileList*>** StaticGet_MKFLEDKIIME()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::PckFileList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x39E8);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::SubMissionRelationConfig*>** StaticGet_HJDHNOFHJLL()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::SubMissionRelationConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x39F0);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::FloatCurveFrame>** StaticGet_HFBDNCMDAAL()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::FloatCurveFrame>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x39F8);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::SubStageMetaData*>** StaticGet_NFOBHPBLDPB()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::SubStageMetaData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A00);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::TargetSeqOperation*>** StaticGet_NCODOKAFAGI()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::TargetSeqOperation*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A08);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::GroupPropertyConfig*>** StaticGet_KOHIEMOPMNB()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::GroupPropertyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A10);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::DynamicString*>** StaticGet_GIEOAHLFNHO()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A18);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Single>** StaticGet_LDBDFOFEMNA()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A20);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StageGrassOverrideConfig*>** StaticGet_JANABFINKGG()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StageGrassOverrideConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A28);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FloorCustomValueConfig*>** StaticGet_HPAGBAANLFL()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FloorCustomValueConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A30);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::SubMissionInfoConfig*>** StaticGet_PMKFBPCEEMB()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::SubMissionInfoConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A38);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::HoyoTag*>** StaticGet_AOBHJDIEFBC()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::HoyoTag*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A40);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StreamingBlockVolumeComponentData*>** StaticGet_FOJKFCOCKEM()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StreamingBlockVolumeComponentData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A48);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AssistWayPointCondition*>** StaticGet_HCBIJENDGBL()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AssistWayPointCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A50);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::BlockNodeConfig*>** StaticGet_NPDKMOCBKOP()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::BlockNodeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A58);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::MVector2>** StaticGet_NCLEFHEOBIK()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::MVector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A60);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::Struct_2_331ACDD60B60D2E3>** StaticGet_MECJGHDIHKN()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::Struct_2_331ACDD60B60D2E3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A68);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FixVec2>** StaticGet_NBKMMHHJIKF()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::FixVec2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A70);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::IslandStateSavedValueCondition*>** StaticGet_COMBPJJJLMN()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::IslandStateSavedValueCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A78);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Int64>** StaticGet_AHCKAMKEHJC()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A80);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Byte>** StaticGet_ELBNCCANDCJ()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A88);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::EffectModifyData*>** StaticGet_KIHMCDNAPJF()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::EffectModifyData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A90);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::Struct_2_0ACB88BD1D804FF7>** StaticGet_JGNNFBLEJHE()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::Struct_2_0ACB88BD1D804FF7>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3A98);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::TriggerEffect*>** StaticGet_BFMCHAODJBB()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::TriggerEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3AA0);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::JsonEnum*>** StaticGet_LDIELEOALHJ()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::JsonEnum*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3AA8);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::MissionCustomValueGroupConfig*>** StaticGet_OMNOBOIENNC()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::MissionCustomValueGroupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3AB0);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AssistWayPointPack*>** StaticGet_CKOLLKKADNA()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AssistWayPointPack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3AB8);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::PropDestructItem*>** StaticGet_FOINJCNHBCC()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::PropDestructItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3AC0);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::MVector3>** StaticGet_IENNKIHBMDD()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::MVector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3AC8);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::DynamicFloat*>** StaticGet_IAHHLJFEHGL()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::DynamicFloat*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3AD0);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Boolean>** StaticGet_LCFHNIDOMFE()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3AD8);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::ValuePostProcessConfig*>** StaticGet_ADOLEKINELM()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::ValuePostProcessConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3AE0);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::MissionCustomValue*>** StaticGet_NBLFFHCINNA()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::MissionCustomValue*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3AE8);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AssistWayPointFastComplete*>** StaticGet_ECJMJGJAFIJ()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AssistWayPointFastComplete*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3AF0);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::EffectConfig*>** StaticGet_MFCGFICPPLD()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::EffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3AF8);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::IslandStateConfig*>** StaticGet_HACMNEKMNCK()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::IslandStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3B00);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::Vector3CurveFrame>** StaticGet_CKHBMOKKJNN()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::Vector3CurveFrame>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3B08);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::MissionItemConfig*>** StaticGet_GNGDENBMGBJ()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::MissionItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3B10);
	}
	static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StreamingSceneScaleData*>** StaticGet_HMGCPBLJPFF()
	{
		return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::StreamingSceneScaleData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D837DED66799FBE3_TypeDefinitionIndex)->GetStaticField(0x3B18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F93ECD8FA5F0EC1B(::SimpleJSON::JSONNode* a1, ::System::SByte& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::SByte&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F93ECD8FA5F0EC1B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CBB50309B724E8D3(::SimpleJSON::JSONNode* a1, ::System::Byte& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CBB50309B724E8D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F836CEF75358A68(::SimpleJSON::JSONNode* a1, ::System::Int16& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7F836CEF75358A68_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_493458E058AEC03C(::SimpleJSON::JSONNode* a1, ::System::UInt16& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt16&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_493458E058AEC03C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3A605AE750C9D84E(::SimpleJSON::JSONNode* a1, ::System::Int64& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3A605AE750C9D84E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79AFE878F5CBAC04(::SimpleJSON::JSONNode* a1, ::System::UInt64& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_79AFE878F5CBAC04_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3EB618E07CCB252C(::SimpleJSON::JSONNode* a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3EB618E07CCB252C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DBF3EE75EE75E5C(::SimpleJSON::JSONNode* a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2DBF3EE75EE75E5C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB76596D8F5D6A86(::SimpleJSON::JSONNode* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AB76596D8F5D6A86_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1A2DD080E5E0C90B(::SimpleJSON::JSONNode* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1A2DD080E5E0C90B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8FE1198BEFB6F799(::SimpleJSON::JSONNode* a1, ::System::Double& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8FE1198BEFB6F799_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3207749256369034(::SimpleJSON::JSONNode* a1, ::System::String*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3207749256369034_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_782CAD3C6930D3D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixVec2& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixVec2&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_782CAD3C6930D3D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EAE49B4013DF76EC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixVec3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixVec3&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EAE49B4013DF76EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C904C3FA86E90FE7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IVec2& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IVec2&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C904C3FA86E90FE7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6DF10147EB2215BF(::SimpleJSON::JSONNode* a1, ::RPG::IVec3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::IVec3&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6DF10147EB2215BF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3336D9E0FAD01F76(::SimpleJSON::JSONNode* a1, ::RPG::MVector3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3336D9E0FAD01F76_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D021E9AB4A2876D(::SimpleJSON::JSONNode* a1, ::RPG::MVector2& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3D021E9AB4A2876D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_59160A5F3D86B0B1(::SimpleJSON::JSONNode* a1, ::Struct_2_0ACB88BD1D804FF7& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Struct_2_0ACB88BD1D804FF7&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_59160A5F3D86B0B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00E1DA095B1E2D88(::SimpleJSON::JSONNode* a1, ::Struct_2_331ACDD60B60D2E3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Struct_2_331ACDD60B60D2E3&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_00E1DA095B1E2D88_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D11DCB61EDF64FA0(::SimpleJSON::JSONNode* a1, ::RPG::MColor& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MColor&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D11DCB61EDF64FA0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1FCC187A080F796E(::SimpleJSON::JSONNode* a1, ::RPG::MRect& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MRect&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1FCC187A080F796E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5559B4D6F48541EC(::SimpleJSON::JSONNode* a1, ::RPG::FloatCurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::FloatCurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5559B4D6F48541EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E368792DDA74622D(::SimpleJSON::JSONNode* a1, ::RPG::Vector3CurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector3CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E368792DDA74622D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_26A81FE03226B7A4(::SimpleJSON::JSONNode* a1, ::RPG::Vector4CurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector4CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_26A81FE03226B7A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61210D99F8FEC6AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicString*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_61210D99F8FEC6AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B159043C82B40583(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicBool*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B159043C82B40583_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D8947BD877AF1D23(::SimpleJSON::JSONNode* a1, ::Class_1_1C30CE192ABE4C54*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_1_1C30CE192ABE4C54*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D8947BD877AF1D23_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5340986F924D72A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5340986F924D72A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B8B3FE750153E10(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::JsonEnum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::JsonEnum*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1B8B3FE750153E10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C1ABBFD1994EB1BC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C1ABBFD1994EB1BC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_77E81ACB3FFF56F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FilePath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FilePath*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_77E81ACB3FFF56F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7658EFDE9102BF71(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SurfaceType& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SurfaceType&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7658EFDE9102BF71_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_245A8B7F14CA4855(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ThreadTaskType& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ThreadTaskType&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_245A8B7F14CA4855_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_02CB0385A8A7402F(::SimpleJSON::JSONNode* a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_02CB0385A8A7402F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_662BE8693D054C24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FormatString& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FormatString&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_662BE8693D054C24_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C4B7DF62BE9B570(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StringHash& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StringHash&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0C4B7DF62BE9B570_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE0AED4610E4A90D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameEvent*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameEvent*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FE0AED4610E4A90D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EFBE8392C63105B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FiveDimDynamicVar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FiveDimDynamicVar*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EFBE8392C63105B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE75C4944BE18312(::SimpleJSON::JSONNode* a1, ::System::SByte& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::SByte&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FE75C4944BE18312_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5046EE61CDCBA1CA(::SimpleJSON::JSONNode* a1, ::System::Byte& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5046EE61CDCBA1CA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2D6C191CAF4D8591(::SimpleJSON::JSONNode* a1, ::System::Int16& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2D6C191CAF4D8591_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B27AD835A09C885(::SimpleJSON::JSONNode* a1, ::System::UInt16& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt16&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1B27AD835A09C885_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3BA30B421AD50DD7(::SimpleJSON::JSONNode* a1, ::System::Int64& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3BA30B421AD50DD7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79CC691E1A1DAA8D(::SimpleJSON::JSONNode* a1, ::System::UInt64& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_79CC691E1A1DAA8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3F01DA90688DECF5(::SimpleJSON::JSONNode* a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3F01DA90688DECF5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FFA7FA2311AD6925(::SimpleJSON::JSONNode* a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FFA7FA2311AD6925_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_28DF939C0710956F(::SimpleJSON::JSONNode* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_28DF939C0710956F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6ECE8FDE358DB342(::SimpleJSON::JSONNode* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6ECE8FDE358DB342_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9518509095A7FB50(::SimpleJSON::JSONNode* a1, ::System::Double& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9518509095A7FB50_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC9BB2337A760A57(::SimpleJSON::JSONNode* a1, ::System::String*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EC9BB2337A760A57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7AA4BF598D8519FC(::SimpleJSON::JSONNode* a1, ::RPG::MVector3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7AA4BF598D8519FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C11FCCEFA6BAE363(::SimpleJSON::JSONNode* a1, ::RPG::MVector2& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C11FCCEFA6BAE363_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C2D98ACAACF47211(::SimpleJSON::JSONNode* a1, ::Struct_2_0ACB88BD1D804FF7& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Struct_2_0ACB88BD1D804FF7&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C2D98ACAACF47211_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C2D98ACAACF47211_1(::SimpleJSON::JSONNode* a1, ::Struct_2_331ACDD60B60D2E3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Struct_2_331ACDD60B60D2E3&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C2D98ACAACF47211_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_34F3C558639A9F3D(::SimpleJSON::JSONNode* a1, ::RPG::FloatCurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::FloatCurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_34F3C558639A9F3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_621F8C537ADFFB72(::SimpleJSON::JSONNode* a1, ::RPG::Vector3CurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector3CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_621F8C537ADFFB72_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F7C1D9C7FE6CB53(::SimpleJSON::JSONNode* a1, ::RPG::Vector4CurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector4CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7F7C1D9C7FE6CB53_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F9167D7B37E5579(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicString*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7F9167D7B37E5579_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_20138CD28B737CC1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicBool*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_20138CD28B737CC1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2FE6FF6428195C75(::SimpleJSON::JSONNode* a1, ::Class_1_1C30CE192ABE4C54*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_1_1C30CE192ABE4C54*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2FE6FF6428195C75_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B2C66C0AF3542A3D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B2C66C0AF3542A3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_939F14749AA9BA05(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_939F14749AA9BA05_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D65321C15A163B1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FilePath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FilePath*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7D65321C15A163B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6090DA95753B00A5(::SimpleJSON::JSONNode* a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6090DA95753B00A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1955E9206A6AB249(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FormatString& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FormatString&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1955E9206A6AB249_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_82F38CF83D1B9222(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StringHash& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StringHash&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_82F38CF83D1B9222_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BB3B5C52BE4BB917(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameEvent*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameEvent*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BB3B5C52BE4BB917_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB9CCDF723B4CA57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::JsonEnum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::JsonEnum*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EB9CCDF723B4CA57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC3D5C5571C64025(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FiveDimDynamicVar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FiveDimDynamicVar*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CC3D5C5571C64025_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CB7AACCD0BEF2A5F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckPatchPlatform*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckPatchPlatform*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CB7AACCD0BEF2A5F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_08EB00F1208A71E4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckFileList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckFileList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_08EB00F1208A71E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_14597F59B14A759B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckPatchConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckPatchConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_14597F59B14A759B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9D631EDC86B1199B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicStringList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicStringList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9D631EDC86B1199B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_42F5ECB4D10A9E96(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtCollision2DShapeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtCollision2DShapeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_42F5ECB4D10A9E96_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8C26653201E78534(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtPointShapeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtPointShapeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8C26653201E78534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_53B3B352AB60F255(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtCircleShapeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtCircleShapeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_53B3B352AB60F255_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4C5D7E5ECA42E279(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtRectShapeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtRectShapeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4C5D7E5ECA42E279_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1E98110C73F93C03(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtArcShapeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtArcShapeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1E98110C73F93C03_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B0CEA42BFAAB751(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomValueConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomValueConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1B0CEA42BFAAB751_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_685933B36DB43CF1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomFloatConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomFloatConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_685933B36DB43CF1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_11A85539676321E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomBoolConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomBoolConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_11A85539676321E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CE46B4EAA1C6EFF8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomStringConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomStringConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CE46B4EAA1C6EFF8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_67F6D74BF3FD5E04(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorTargetAgentConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorTargetAgentConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_67F6D74BF3FD5E04_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E9DCCCEAA8491DAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupPropertyConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupPropertyConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E9DCCCEAA8491DAB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E60C772C608F0825(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::HoyoTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::HoyoTag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E60C772C608F0825_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7EFB69469C6C47DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::HoyoTagContainer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::HoyoTagContainer*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7EFB69469C6C47DA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C4CB2AD13AD42CF2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionItemConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionItemConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C4CB2AD13AD42CF2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9F61B85B4E7F1429(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9F61B85B4E7F1429_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8242EDA247B59EAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueRewardConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueRewardConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8242EDA247B59EAB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_55CF779BAE212242(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueTuple*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueTuple*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_55CF779BAE212242_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C66A2EA6DF20B5F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueGroupConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueGroupConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C66A2EA6DF20B5F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_120AD4F08FD628A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueGroupConfigPack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueGroupConfigPack*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_120AD4F08FD628A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_66BF1D09D895DC14(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_66BF1D09D895DC14_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5693CC7851C09A3E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointDistanceCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointDistanceCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5693CC7851C09A3E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F5AD1D6CD9F51981(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropStateCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropStateCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F5AD1D6CD9F51981_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F09386DE332C149E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFCVCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFCVCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F09386DE332C149E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F434A0C0ACE8A81(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1F434A0C0ACE8A81_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8E2251DA07BECCFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8E2251DA07BECCFE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64F964446033A637(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointTimelineStateCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointTimelineStateCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_64F964446033A637_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_050F0D8CA83D07BD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_050F0D8CA83D07BD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A816F1517AD7380(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointConditionPack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointConditionPack*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2A816F1517AD7380_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC75F6171AE90934(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointConditionMain*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointConditionMain*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EC75F6171AE90934_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F6799486D2A2D2E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFastComplete*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFastComplete*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7F6799486D2A2D2E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A31FDEB06231733(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPoint*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPoint*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2A31FDEB06231733_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F1B7CCB516A70E52(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointLittleGameCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointLittleGameCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F1B7CCB516A70E52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_94A6E1A1B782CA8D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPack*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_94A6E1A1B782CA8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DE6E4657908CB726(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::CheckFloorSavedValueConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::CheckFloorSavedValueConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DE6E4657908CB726_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A8FF85924BB3AB2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionWaypointDataPack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionWaypointDataPack*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8A8FF85924BB3AB2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE808303BE9F0E53(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FinishActionConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FinishActionConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AE808303BE9F0E53_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BE555C8712740965(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubMissionInfoConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubMissionInfoConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BE555C8712740965_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CDC309A202A98508(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubMissionRelationConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubMissionRelationConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CDC309A202A98508_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_314C294DC84BB44C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MainMissionInfoConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MainMissionInfoConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_314C294DC84BB44C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6EDECF0AA649A0F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MainMissionPartialInfoConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MainMissionPartialInfoConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6EDECF0AA649A0F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AEEDB1D39A556CC4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BlockNodeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BlockNodeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AEEDB1D39A556CC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D5FC8AAEC806056D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D5FC8AAEC806056D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_47765121E61C1EE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingGroupVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_47765121E61C1EE3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B16F2CFD1A55046C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingBlockVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingBlockVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B16F2CFD1A55046C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1C0D7763C1857056(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1C0D7763C1857056_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_875A9ED2BBCC2154(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingRatioVolumeData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingRatioVolumeData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_875A9ED2BBCC2154_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A48A4B1B24ACD222(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingForceHLODVolumeData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingForceHLODVolumeData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A48A4B1B24ACD222_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1511A825EEA6BEFB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingLightVolumeData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingLightVolumeData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1511A825EEA6BEFB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E7E724F7791EC7E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6E7E724F7791EC7E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DE6CC66119BC766D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageGrassOverrideConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageGrassOverrideConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DE6CC66119BC766D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF01FD7C04D2ABA5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageIslandConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageIslandConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FF01FD7C04D2ABA5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_15F676E355FF4236(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageIslandHLODConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageIslandHLODConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_15F676E355FF4236_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9FBD2AB320D41C79(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9FBD2AB320D41C79_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E6E5977F853399D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateConditionSet*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateConditionSet*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6E6E5977F853399D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_666D6FEEDBB8A67F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateSavedValueCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateSavedValueCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_666D6FEEDBB8A67F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B6841CC0CFD88B77(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVersionData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVersionData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B6841CC0CFD88B77_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1DB2418A411E2330(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageBaseConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageBaseConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1DB2418A411E2330_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D369E2C2D1C6C3EE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubStageData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubStageData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D369E2C2D1C6C3EE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DC865226D321D99E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DC865226D321D99E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB2E0C2168A717F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubStageMetaData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubStageMetaData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AB2E0C2168A717F8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_182D027A9B96A9FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneScaleData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneScaleData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_182D027A9B96A9FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_896618A933D567BD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_896618A933D567BD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EBB98FBDDDDD5CB7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::OfflineCullingConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::OfflineCullingConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EBB98FBDDDDD5CB7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_1(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_1*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_2(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_2*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_3(::SimpleJSON::JSONNode* a1, ::Class_4_0574869B1174019D*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_0574869B1174019D*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_4(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_3*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_3*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_5(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_4*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_4*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_6(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_6*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_6*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_B6CB548C28900B6D*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_B6CB548C28900B6D*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F33253E40A4719A6(::SimpleJSON::JSONNode* a1, ::Class_4_C2B07AE0C1DDDAA6*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C2B07AE0C1DDDAA6*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_1(::SimpleJSON::JSONNode* a1, ::Class_4_D6619DB5A2E78AE5*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_D6619DB5A2E78AE5*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_2(::SimpleJSON::JSONNode* a1, ::Class_4_7A69A90A7D03F542*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_7A69A90A7D03F542*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_3(::SimpleJSON::JSONNode* a1, ::Class_4_E5320A584E778351*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E5320A584E778351*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_4(::SimpleJSON::JSONNode* a1, ::Class_4_B6CB548C28900B6D_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_B6CB548C28900B6D_1*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_5(::SimpleJSON::JSONNode* a1, ::Class_4_87568F4B1AE1BC50*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_87568F4B1AE1BC50*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_7(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_5*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_5*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D06FFBB02ED1ABBD(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D06FFBB02ED1ABBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B7F6535C9744E774(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B7F6535C9744E774_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1571C310B8936227(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareLapCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1571C310B8936227_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3C1BD5BB81C7009(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareRank*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A3C1BD5BB81C7009_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3025C325438C1838(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3025C325438C1838_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_94B6AA8C376C57A0(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_94B6AA8C376C57A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F273FC6357A93CA8(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F273FC6357A93CA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_730F80178A024FD1(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesLevelUp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesLevelUp*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_730F80178A024FD1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DD7FC4675DECA9B0(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DD7FC4675DECA9B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B0831A8246B287B4(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B0831A8246B287B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_93CC1C55289CA958(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_93CC1C55289CA958_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1928C942BE7E5075(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInSpineAnim*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInSpineAnim*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1928C942BE7E5075_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B1E69E7E59345385(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInMove*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInMove*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B1E69E7E59345385_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6119F52CA8E03A99(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInAnimZone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInAnimZone*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6119F52CA8E03A99_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_98CE7EBEDED78A80(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_98CE7EBEDED78A80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_13DF4C4C98949419(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamOnlineFirst*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamOnlineFirst*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_13DF4C4C98949419_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8596E39BCA3E3FDC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamMovePhaseTalk*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamMovePhaseTalk*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8596E39BCA3E3FDC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EBC748AEE7E52451(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamActionPhaseTalk*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamActionPhaseTalk*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EBC748AEE7E52451_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9AB8D3DF173E98BD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalAction*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9AB8D3DF173E98BD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9EED02718F45D745(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalActionSwitch*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalActionSwitch*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9EED02718F45D745_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BF303AD8AE0CA1F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BF303AD8AE0CA1F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CDCFCCC98E039071(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamAnchorContinous*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamAnchorContinous*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CDCFCCC98E039071_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EE19E0A2067423F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EE19E0A2067423F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D61F51641F02515C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerInVisionZone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerInVisionZone*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D61F51641F02515C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D218A8688DA7467A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPerceiveValueReachMax*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D218A8688DA7467A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_46C9F541BE27DB2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerHide*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerHide*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_46C9F541BE27DB2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1856C8264679E592(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByInCustomZone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByInCustomZone*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1856C8264679E592_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6271A56AB7F12775(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInAttackRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInAttackRange*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6271A56AB7F12775_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_55C949550FA40EC6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAlertValueInRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAlertValueInRange*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_55C949550FA40EC6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_27B2FC9789CFE512(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveObstacle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveObstacle*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_27B2FC9789CFE512_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2933C4A8C00EC582(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNPCStatus*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNPCStatus*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2933C4A8C00EC582_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F6C6BDF8ACE1DC72(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F6C6BDF8ACE1DC72_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CFECF0893025D242(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCarryMazebuff*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCarryMazebuff*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CFECF0893025D242_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C7D55FCF5096503(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAIVariableInt*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAIVariableInt*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0C7D55FCF5096503_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3F7AD1BFD7842930(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3F7AD1BFD7842930_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_51801E32AA615D17(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAlertLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAlertLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_51801E32AA615D17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B419588616294EBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByContainEntityTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByContainEntityTag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B419588616294EBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E4AF2172CC7C06AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAIStatus*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAIStatus*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E4AF2172CC7C06AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EEB0120F93665326(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableBool*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EEB0120F93665326_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_76A7E4624C96AE6C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_76A7E4624C96AE6C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B7A495470EBDAEF2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_BySkillInCD*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_BySkillInCD*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B7A495470EBDAEF2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F4F16259E2C7DA67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F4F16259E2C7DA67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DDA9E4F35A037066(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistToGuardPosition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistToGuardPosition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DDA9E4F35A037066_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3976BC2F9AD70599(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAlertLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAlertLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3976BC2F9AD70599_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_22F71A1C35A0732B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasPatrolPath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasPatrolPath*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_22F71A1C35A0732B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1C327DD7AAE1D8B8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableBool*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1C327DD7AAE1D8B8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DC6E9716B650C2DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DC6E9716B650C2DE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BC4AAB076CE81499(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableString*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BC4AAB076CE81499_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_602A2B6A12E99DB0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_602A2B6A12E99DB0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8DE72BDFEE68B70(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackAngle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackAngle*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A8DE72BDFEE68B70_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_91AD608D1235F88F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAIHangUp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAIHangUp*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_91AD608D1235F88F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3040DEED8A11D295(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3040DEED8A11D295_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4650B8DBD2CDC8AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4650B8DBD2CDC8AA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_43DAF783517768DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasBornSmartObject*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasBornSmartObject*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_43DAF783517768DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_14337D20A862058C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAbnormalState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAbnormalState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_14337D20A862058C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5E3711823738BBF0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5E3711823738BBF0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B51D1BE0A5BAE730(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByContainAbnormalState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByContainAbnormalState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B51D1BE0A5BAE730_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5BDEE3513804AC72(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAIStatus*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAIStatus*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5BDEE3513804AC72_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F881F35ABBC406D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByOnHit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByOnHit*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F881F35ABBC406D8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_27C0A1ACF2AD2246(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByFoundSmartObject*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByFoundSmartObject*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_27C0A1ACF2AD2246_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D399290E104598D1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByForceExitCombat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByForceExitCombat*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D399290E104598D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E2E1379F517CB18(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByEnterCombat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByEnterCombat*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6E2E1379F517CB18_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8FD7708D607F806C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByExitCombat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByExitCombat*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8FD7708D607F806C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FAFE4DECB3323162(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectForUI*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectForUI*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FAFE4DECB3323162_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_941F2C043D62910D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRebuiltSummonUnit*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_941F2C043D62910D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1740694434AD743F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySwitchMascotCanShootTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1740694434AD743F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8BA3757B826582E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAdvCharacterLogicState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAdvCharacterLogicState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8BA3757B826582E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5FF8C229BA3FE030(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropLockable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropLockable*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5FF8C229BA3FE030_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_543B12DFF3941E7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_543B12DFF3941E7D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2F4CA77AC1712A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetHitBoxActive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetHitBoxActive*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E2F4CA77AC1712A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC530074A1F250CB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EC530074A1F250CB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_45B8AE829E7FE648(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_45B8AE829E7FE648_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E9CC781EB5170D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInMotionState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInMotionState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2E9CC781EB5170D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_685CB33430F4F9B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMotionHitColliderWall*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_685CB33430F4F9B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D8DFFC86187881D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D8DFFC86187881D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_90640F4DAA0343F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCheckMoveInput*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCheckMoveInput*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_90640F4DAA0343F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_11C65EC5ED91E9C9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInAnimZone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInAnimZone*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_11C65EC5ED91E9C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9C9A32263736274(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareProjectileLifetime*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareProjectileLifetime*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B9C9A32263736274_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2F4FD4897BB6F124(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFearCharacterCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFearCharacterCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2F4FD4897BB6F124_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BB13A1B529766043(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BB13A1B529766043_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_41E14F5B051FFE73(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSummonUnitCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSummonUnitCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_41E14F5B051FFE73_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_112143E8280FEAD6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDynamicValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDynamicValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_112143E8280FEAD6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6F85A26FBAD6F09D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterDamageType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterDamageType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6F85A26FBAD6F09D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B884F6B8C22AE4F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveAbilityTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveAbilityTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B884F6B8C22AE4F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B01CF882783D7D6B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAllowInstantKill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAllowInstantKill*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B01CF882783D7D6B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2773DCAD18C3D795(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterSpeed*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterSpeed*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2773DCAD18C3D795_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00F1E4D06FFD47D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPlayerMoveInput*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPlayerMoveInput*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_00F1E4D06FFD47D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_09118BDE3FC85942(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetInCameraScreenScope*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetInCameraScreenScope*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_09118BDE3FC85942_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5083258C09AB39B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareInvasionLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareInvasionLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5083258C09AB39B9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_063A90E6D64405A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::EffectModifyData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::EffectModifyData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_063A90E6D64405A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5925264D39FFA1E4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5925264D39FFA1E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D91FC67106E89B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::OverrideMonoEffectConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::OverrideMonoEffectConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3D91FC67106E89B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9269C39F3FDD0DFC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::EffectConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::EffectConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9269C39F3FDD0DFC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9829FBE655C4E55D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9829FBE655C4E55D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B552F142E8D84A57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGameEntityNotCreated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGameEntityNotCreated*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B552F142E8D84A57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_575D78A2E938E78D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_575D78A2E938E78D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A72DF3F7587E8B71(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSubMissionState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSubMissionState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A72DF3F7587E8B71_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6756FED1A145C75A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMainMissionState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMainMissionState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6756FED1A145C75A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3C6032FAE9D5211A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3C6032FAE9D5211A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DFDB9AA3EEDF2329(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DFDB9AA3EEDF2329_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_458338C3E0EEBCC2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_458338C3E0EEBCC2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D029ADB3F70A002(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveUniqueNameEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveUniqueNameEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3D029ADB3F70A002_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01172CE0B51DA08A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionCustomValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionCustomValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_01172CE0B51DA08A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_481D392C488DF32C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFSVwithGP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFSVwithGP*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_481D392C488DF32C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8C149858FDFD2320(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGPwithGP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGPwithGP*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8C149858FDFD2320_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_92D17F883C104AD3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByShowChallengeSelectPage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByShowChallengeSelectPage*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_92D17F883C104AD3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4F71478528B23EB8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropShowInfoId*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropShowInfoId*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4F71478528B23EB8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FAE11127B79763C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMainMissionFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMainMissionFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FAE11127B79763C1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E5418F831B560474(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMechanismBarPhase*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMechanismBarPhase*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E5418F831B560474_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C4927A9BE1AE9AF0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMuseumProjectorThemeNum*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C4927A9BE1AE9AF0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6F68A5DB65382A98(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDimensionID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDimensionID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6F68A5DB65382A98_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F4F4F8BA71A999F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropPuzzleCreated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropPuzzleCreated*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F4F4F8BA71A999F1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DC5F3D5F3A007D4A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByRollShopResult*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByRollShopResult*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DC5F3D5F3A007D4A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_90816E3D9AA4E277(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnvProfilePath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnvProfilePath*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_90816E3D9AA4E277_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_485C22311D5E4496(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnyNpcMonsterInRange*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_485C22311D5E4496_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FDD9B3E6E4EE6D20(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInStoryMode*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInStoryMode*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FDD9B3E6E4EE6D20_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3FCDE4EB9CCA8204(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3FCDE4EB9CCA8204_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C2622D518CA30D24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkipNextTeleportEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkipNextTeleportEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C2622D518CA30D24_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8C3D9D13AC309212(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLeader*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLeader*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8C3D9D13AC309212_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_571E0B261F5ADBD5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerAvatarID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerAvatarID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_571E0B261F5ADBD5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C1F0E0CA24D46CC0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsHero*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsHero*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C1F0E0CA24D46CC0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_53BCEA178FE070B5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityTimeScaleZero*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityTimeScaleZero*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_53BCEA178FE070B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BDA336B31C5E5D62(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BDA336B31C5E5D62_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CCECF0C0A284CE40(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CCECF0C0A284CE40_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6A340C9025952C94(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareEnhancedID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareEnhancedID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6A340C9025952C94_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A7249BB191FE91F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsInPhantomFrozen*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A7249BB191FE91F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F47D67AEE78DC6AD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestProgress*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestProgress*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F47D67AEE78DC6AD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5275CF047A0DC778(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInDistrict*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInDistrict*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5275CF047A0DC778_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EA192B31175BE0C6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetVisible*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetVisible*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EA192B31175BE0C6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC3E61B8347EB9CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSoundEventInCD*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSoundEventInCD*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CC3E61B8347EB9CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D25E117193D7A480(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimelineEntityState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimelineEntityState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D25E117193D7A480_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7C662492A0DAE075(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7C662492A0DAE075_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F750F2EFA9842DCC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F750F2EFA9842DCC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85BC730EC300FD28(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_85BC730EC300FD28_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8D377298DA08BD7E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8D377298DA08BD7E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2332ED9C7ED0E751(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2332ED9C7ED0E751_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E4092035CBEC9E1C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomString*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E4092035CBEC9E1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0556A85D31899424(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBool*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0556A85D31899424_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_216640FAD1D4AA1D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloatV2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloatV2*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_216640FAD1D4AA1D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8585A65610E1C35C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomStringV2*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8585A65610E1C35C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A5158F2186BC2884(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A5158F2186BC2884_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B3E889328DB9628A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B3E889328DB9628A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_15B19C7D72978E5A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValueV2*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_15B19C7D72978E5A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_83E2F2CE8E1F8AC9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_83E2F2CE8E1F8AC9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EEB6EE66342A73C4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicString*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EEB6EE66342A73C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1AD8E884CD02065C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePhoneMessageItem*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePhoneMessageItem*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1AD8E884CD02065C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96A6C328835FC39A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityCreated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityCreated*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_96A6C328835FC39A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61B78DF61E9DAFEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_61B78DF61E9DAFEE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2838FFC276DA7BCF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::QueryHoyoTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::QueryHoyoTag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2838FFC276DA7BCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D3D196C172419B09(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareVersionFinalMainMission*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D3D196C172419B09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9BFBF4EFB6EDE536(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStoryLineID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStoryLineID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9BFBF4EFB6EDE536_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3ED5690476160643(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3ED5690476160643_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6DCF8345B55F05FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInVision*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInVision*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6DCF8345B55F05FF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F27D961655DEB5AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAlertValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAlertValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F27D961655DEB5AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DAC56FFE8AD81304(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAngle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAngle*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DAC56FFE8AD81304_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DFAE29688620EC0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareHPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareHPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2DFAE29688620EC0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BB3837BBB2DF0C31(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareSPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareSPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BB3837BBB2DF0C31_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_44B8B82B63FE72CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckGameMode*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckGameMode*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_44B8B82B63FE72CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_95F2A5EC0EC6DFC4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsLocateAtArea*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsLocateAtArea*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_95F2A5EC0EC6DFC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4045053AAD92E3E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInPosition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInPosition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4045053AAD92E3E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_356793A98A26D514(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropInPosition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropInPosition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_356793A98A26D514_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ACA562F9B12BD428(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInRotation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInRotation*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_ACA562F9B12BD428_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85BB37E2F5D96F3C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveLockTargetInCamera*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveLockTargetInCamera*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_85BB37E2F5D96F3C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_855D921EFE247BE0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainAdventureModifier*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainAdventureModifier*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_855D921EFE247BE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B01E5CB42EF283DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggerBattleAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B01E5CB42EF283DE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F0B5B7EF75253CEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsWeakTypeActive*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F0B5B7EF75253CEB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EDDD5A3A9B67128E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsNPCControlled*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsNPCControlled*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EDDD5A3A9B67128E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_35EE094DB9C5B5E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNpcMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNpcMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_35EE094DB9C5B5E9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1BFACEF27F42B791(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFuncUnlockCheck*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFuncUnlockCheck*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1BFACEF27F42B791_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_944B5EF023AAE43F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_944B5EF023AAE43F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_47F94D18D4AC2FBA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNumber*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNumber*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_47F94D18D4AC2FBA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C33017A79ABA3005(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C33017A79ABA3005_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_27905C31AD505595(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimatorParam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimatorParam*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_27905C31AD505595_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_843F2B8CD9A06F30(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasAssistAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasAssistAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_843F2B8CD9A06F30_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_49ED4755CAE23118(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsGenderType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsGenderType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_49ED4755CAE23118_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2459AC284258D36E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCamera*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCamera*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2459AC284258D36E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_050A727B77F7B9F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCameraByPathID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCameraByPathID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_050A727B77F7B9F1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F9DAE346C65E4A4C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTextJoinValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTextJoinValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F9DAE346C65E4A4C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FDD44E1C4902E3C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsEntityInDialogue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FDD44E1C4902E3C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A7377757C6E3A954(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsBookAvailable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsBookAvailable*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A7377757C6E3A954_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9C9A3D24403A53D5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9C9A3D24403A53D5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_75AC6D813C1B44CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsActivityInSchedule*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsActivityInSchedule*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_75AC6D813C1B44CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7FF4DBE28B3B838(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandGestureType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C7FF4DBE28B3B838_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_587B1CA49C6A943B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_587B1CA49C6A943B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DFED8C2CCA24E37(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2DFED8C2CCA24E37_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9B59605BE99DCEDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9B59605BE99DCEDF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5CC645515A6CB012(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5CC645515A6CB012_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_980E74F0A82F1FDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_980E74F0A82F1FDF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_98848E9034DBA46F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueHasMiracle*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_98848E9034DBA46F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_793CF6DCBBF5A4C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueShopHasStage*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_793CF6DCBBF5A4C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6551B31A969ADDAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemPair*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemPair*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6551B31A969ADDAE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_88E007C8F7AF349D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNum*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_88E007C8F7AF349D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_19E93960D86042E5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIfGroupIsOccupied*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIfGroupIsOccupied*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_19E93960D86042E5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_23E4D6026F3795F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSeriesID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSeriesID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_23E4D6026F3795F1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_393A43275D828BA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFirstPerformance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFirstPerformance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_393A43275D828BA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_121829884F20C639(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_121829884F20C639_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01347C146E95CF88(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupFetchLocalTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupFetchLocalTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_01347C146E95CF88_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3454DD4BED52B546(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3454DD4BED52B546_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FBD1146AD75BEFFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByString*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FBD1146AD75BEFFE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_89F83B4924ECEC09(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySharedSummonUnitInUse*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySharedSummonUnitInUse*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_89F83B4924ECEC09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6DD1F64B9156FFE4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropStateItem*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropStateItem*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6DD1F64B9156FFE4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B666E0B434A7E2A5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropDestructItem*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropDestructItem*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B666E0B434A7E2A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE4D109738BADBB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FE4D109738BADBB6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F7F493EF79C311C4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntitiesExist*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntitiesExist*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F7F493EF79C311C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CEFAC115426F3CB7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasUnGottenLevelReward*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasUnGottenLevelReward*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CEFAC115426F3CB7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_6(::SimpleJSON::JSONNode* a1, ::Class_4_BC87E1E104C4A2A7*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_BC87E1E104C4A2A7*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1BE811B163AC49C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowInSlot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowInSlot*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1BE811B163AC49C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2550AC7A27BD3EC8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowPermCodes*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2550AC7A27BD3EC8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_7(::SimpleJSON::JSONNode* a1, ::Class_4_0EB17C6B86E340AC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_0EB17C6B86E340AC*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_8(::SimpleJSON::JSONNode* a1, ::Class_4_D4509F067C456928*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_D4509F067C456928*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A592C90E46112AC6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHipplenEnergy*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHipplenEnergy*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A592C90E46112AC6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CBAF848C5A466DB3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameFetchProxyByID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameFetchProxyByID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CBAF848C5A466DB3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD71F1EB9403DED5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BD71F1EB9403DED5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B8068360B13D4002(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B8068360B13D4002_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE9715EEA9F30C67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FE9715EEA9F30C67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6B541F1D3EA1630A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByUsedFiveDimHoldDash*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByUsedFiveDimHoldDash*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6B541F1D3EA1630A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A0AD184CA48493B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A0AD184CA48493B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_8(::SimpleJSON::JSONNode* a1, ::Class_4_E7FA572F81E53DA8*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E7FA572F81E53DA8*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_9(::SimpleJSON::JSONNode* a1, ::Class_4_6F740814D9094F5F*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6F740814D9094F5F*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_12AD134207A30FF1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ChenLingFesPredicateItemCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ChenLingFesPredicateItemCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_12AD134207A30FF1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_10(::SimpleJSON::JSONNode* a1, ::Class_4_F9B012EBD64B96B0*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F9B012EBD64B96B0*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_9(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_7*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_7*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9504EF9988B6AA4D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsCustomerState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsCustomerState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9504EF9988B6AA4D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A005444ED608D692(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsTakeOutState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A005444ED608D692_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0F3778604904073B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsWaiterState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsWaiterState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0F3778604904073B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_11(::SimpleJSON::JSONNode* a1, ::Class_4_C458873EDD189557*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C458873EDD189557*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_12(::SimpleJSON::JSONNode* a1, ::Class_4_327F75E212567CB8*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_327F75E212567CB8*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_13(::SimpleJSON::JSONNode* a1, ::Class_4_5FBF198A62EBF789*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_5FBF198A62EBF789*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_13_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3DF17D840518F7BA(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_ByRandom*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_ByRandom*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3DF17D840518F7BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_682E2CA6BE68FB65(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_682E2CA6BE68FB65_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DB09771289D5E922(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DB09771289D5E922_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_75393B8208F3D8C3(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_75393B8208F3D8C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AD00105D79A32AE8(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AD00105D79A32AE8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EAD0C1CA2582303A(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EAD0C1CA2582303A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A727B5C8E37FF09F(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A727B5C8E37FF09F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_88A445500FC15EF1(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_88A445500FC15EF1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_98FEC005A4F55264(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_98FEC005A4F55264_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_48AEDB4CF72198DB(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_48AEDB4CF72198DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8031483908C291FD(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8031483908C291FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_53ABD16D7F9A840E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionBattleWin*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionBattleWin*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_53ABD16D7F9A840E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C2C21AF74B31389A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C2C21AF74B31389A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D8F0F9B2629D6DC9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D8F0F9B2629D6DC9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D34C1440191AA7FA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PhotoGraphTargetSize*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PhotoGraphTargetSize*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D34C1440191AA7FA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DD0FB4AD3E297A40(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetContainerRatioInRect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetContainerRatioInRect*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DD0FB4AD3E297A40_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C647797784E3EA9A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C647797784E3EA9A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_43E82D25D25D6153(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_43E82D25D25D6153_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9EA752198751D561(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9EA752198751D561_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_453AF4C31EAEB7EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetNpcExists*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetNpcExists*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_453AF4C31EAEB7EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9E4BF39F0F5B6451(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9E4BF39F0F5B6451_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_46408169AA11FCC4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTrainVisitorIsMeet*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTrainVisitorIsMeet*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_46408169AA11FCC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD06A0A7EDE18FD2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByWaitCustomString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByWaitCustomString*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BD06A0A7EDE18FD2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_27902ED612432387(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropStateNumber*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropStateNumber*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_27902ED612432387_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D711D253DFD2D25(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRogueExploreWin*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRogueExploreWin*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3D711D253DFD2D25_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1367F63C44FBE49C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1367F63C44FBE49C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6448967595455695(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6448967595455695_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3BB0106A8AEE93AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckElfTodayManaged*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckElfTodayManaged*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3BB0106A8AEE93AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_833F7A3BB8CC7326(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_833F7A3BB8CC7326_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AF6936ED72A3443A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AF6936ED72A3443A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB43506BAB4BA5BF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsEliteMonster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsEliteMonster*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AB43506BAB4BA5BF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_10D63DFB6C293422(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_10D63DFB6C293422_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_926E95E00F93F297(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByContainBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_926E95E00F93F297_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_244930E141B0B0B5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattlePostureType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattlePostureType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_244930E141B0B0B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE03D74CB5F8B134(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattleSkillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattleSkillType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AE03D74CB5F8B134_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F8E37FB5D33FF6EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ConvinceByCompareHp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ConvinceByCompareHp*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F8E37FB5D33FF6EF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CB8E9220CC1A7D57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderPath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderPath*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CB8E9220CC1A7D57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F993DD1927510872(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyTrace*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyTrace*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F993DD1927510872_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_23DA4797A4DD9CAF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_23DA4797A4DD9CAF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BFECA14C5D5A2775(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestGetReward*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestGetReward*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BFECA14C5D5A2775_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D23EB7C988D2EBEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptStep*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptStep*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D23EB7C988D2EBEB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD4DD268F803EF68(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptEmo*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptEmo*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FD4DD268F803EF68_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6F13D7BD8E6209CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6F13D7BD8E6209CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EFD0A768A7A6397D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEnableStoryStreamingSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEnableStoryStreamingSource*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EFD0A768A7A6397D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_624A0BEA5BEC3B57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformanceResult*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformanceResult*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_624A0BEA5BEC3B57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BE7F8B4014E01C57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropAnimState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropAnimState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BE7F8B4014E01C57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_49F96BA70984DC40(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_49F96BA70984DC40_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_90BDD8F54A7D76DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_90BDD8F54A7D76DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_217450E1CB534F55(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_217450E1CB534F55_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D2DFFC43B7E78959(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D2DFFC43B7E78959_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E76E0CCE9E0C9376(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E76E0CCE9E0C9376_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DB3F78FC90994EE6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropPredicateWithEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropPredicateWithEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DB3F78FC90994EE6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64E1F2AF82396CBB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMusicRhythmSongID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_64E1F2AF82396CBB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_10(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_8*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_8*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7C1DDDDC6DF0F179(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7C1DDDDC6DF0F179_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_274E0E36572365ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournLastRoom*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournLastRoom*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_274E0E36572365ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_04AB1870464A6BA2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_04AB1870464A6BA2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6F4F5AE4750CE2E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6F4F5AE4750CE2E0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F9E71D60F252DCB0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F9E71D60F252DCB0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5ADA801AD5EB5382(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5ADA801AD5EB5382_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B29A8B3E13F243DD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B29A8B3E13F243DD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A80DCEB4A598840A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntityExist*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntityExist*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A80DCEB4A598840A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ADF829B749F99AD8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsUIPageOpen*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsUIPageOpen*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_ADF829B749F99AD8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D3C184F97EDADC2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckFarmElementActive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckFarmElementActive*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3D3C184F97EDADC2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00E9D23E00A5D6E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropHPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropHPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_00E9D23E00A5D6E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_170B98E9538DAF67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScreenRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScreenRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_170B98E9538DAF67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_579122B04A06A11D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_579122B04A06A11D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_75F946FE5271502F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_75F946FE5271502F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1FEABD662137DB23(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEntityAuthoritySide*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1FEABD662137DB23_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_081E81317B154048(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvTriggerEffectList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvTriggerEffectList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_081E81317B154048_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_388A5E38131D05FA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRegionEraState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRegionEraState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_388A5E38131D05FA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4FF1D693A26A4C37(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4FF1D693A26A4C37_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5A564F581C56BA66(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEraFlipperEntityShow*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5A564F581C56BA66_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4CB63D77556D47EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityOriginalEraConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityOriginalEraConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4CB63D77556D47EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4F21E8E9642AD374(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPartialFlipDeviceState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPartialFlipDeviceState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4F21E8E9642AD374_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F8A91AD5F150D21A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimStateLogicType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimStateLogicType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F8A91AD5F150D21A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E335C01BB59BE080(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveSkillPointEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveSkillPointEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E335C01BB59BE080_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E497AFC5DB920274(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFromBattleViewModeChange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFromBattleViewModeChange*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E497AFC5DB920274_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85B970375FC732ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasBillboard*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasBillboard*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_85B970375FC732ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_14(::SimpleJSON::JSONNode* a1, ::Class_4_472E12A36DB951F3*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_472E12A36DB951F3*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_14_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_15(::SimpleJSON::JSONNode* a1, ::Class_4_6F740814D9094F5F_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6F740814D9094F5F_1*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_15_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6FFEAB40DFD2820E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6FFEAB40DFD2820E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2FD5AE5AAFF6E92A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2FD5AE5AAFF6E92A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EF18BD0B212B30DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCharacterIsPreset*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EF18BD0B212B30DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C9115DAD124286F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C9115DAD124286F1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F47A5D197237CDE7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F47A5D197237CDE7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA5B20464B6F5139(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasTrait*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasTrait*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AA5B20464B6F5139_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A779F28A034942B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasSameTrait*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasSameTrait*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2A779F28A034942B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A388CBC2080234EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGridFightProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGridFightProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A388CBC2080234EF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5487B853AA0A77E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnActionEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnActionEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5487B853AA0A77E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_21CCC867EB8455E2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveEnemyAlive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveEnemyAlive*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_21CCC867EB8455E2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2FB1603012135530(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2FB1603012135530_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F279BF120661D9F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F279BF120661D9F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0713B4F64B01FD79(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCustomValueBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCustomValueBool*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0713B4F64B01FD79_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_16(::SimpleJSON::JSONNode* a1, ::Class_4_4DA9E17D85B134D8*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_4DA9E17D85B134D8*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1FCE4B48C93B0EED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1FCE4B48C93B0EED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F1EA42402C1E619F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnhancedID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnhancedID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F1EA42402C1E619F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_443C8BC5E15DE355(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetTeam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetTeam*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_443C8BC5E15DE355_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_40583F1EBFA0A5A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_40583F1EBFA0A5A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0D2387D6085CABF0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSummonRelation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSummonRelation*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0D2387D6085CABF0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8E696EECA9B05778(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeak*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8E696EECA9B05778_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33DE390C63886E7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeakPreview*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeakPreview*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_33DE390C63886E7D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7B5F02E9470C584F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7B5F02E9470C584F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A85B371B0FAC072(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByStatusCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByStatusCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0A85B371B0FAC072_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_71C6C6AD8EB30C3F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAvatarBaseType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAvatarBaseType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_71C6C6AD8EB30C3F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_23CB2E079811CA42(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInsertAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInsertAction*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_23CB2E079811CA42_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_11(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_9*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_9*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_36AC0F843718E960(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAutoBattle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAutoBattle*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_36AC0F843718E960_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_731192DED050722A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterPhase*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterPhase*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_731192DED050722A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C16622B126F48433(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertActionByTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertActionByTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C16622B126F48433_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4040AB59F4C34E3F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainMonsterOnWave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainMonsterOnWave*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4040AB59F4C34E3F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D5AFB104E4E1AD1B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D5AFB104E4E1AD1B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_26798C3E8EA50B08(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainOpInSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainOpInSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_26798C3E8EA50B08_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_32C8BD2F7A4A9D61(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_32C8BD2F7A4A9D61_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F353E43989B472FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleHasCertainResult*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleHasCertainResult*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F353E43989B472FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_65681BD6565BE029(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstChallengeBattle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstChallengeBattle*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_65681BD6565BE029_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_89A4DB90A0A4155C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInElationTime*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInElationTime*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_89A4DB90A0A4155C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC272375F59FEDE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPausedElationTime*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPausedElationTime*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CC272375F59FEDE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0E116B107F97CF93(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsRedStance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsRedStance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0E116B107F97CF93_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_192738CCF053E8D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSpareTeamFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSpareTeamFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_192738CCF053E8D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE45AD1856BBD2B7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCustomTeamFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCustomTeamFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AE45AD1856BBD2B7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_690D3E405209F61C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_690D3E405209F61C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_107E6176EA54CFDD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_107E6176EA54CFDD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_05ECD7E575083F26(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsCharacterState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsCharacterState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_05ECD7E575083F26_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_17(::SimpleJSON::JSONNode* a1, ::Class_4_CCCC7AB2EA54CF7B*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_CCCC7AB2EA54CF7B*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_36E3BC990138A0D1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_36E3BC990138A0D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_18(::SimpleJSON::JSONNode* a1, ::Class_4_5354087FF9599135*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_5354087FF9599135*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_18_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6B180752972582D3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectListForUI*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectListForUI*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6B180752972582D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F087253D02A6921F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::CRPVirtualCameraTargetConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::CRPVirtualCameraTargetConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F087253D02A6921F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D(::SimpleJSON::JSONNode* a1, ::Class_4_9DD8B93ABE3B223B*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_9DD8B93ABE3B223B*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3E9E85BB9A92923D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C3F1A8B9E2BC6238(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicValueDefined*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicValueDefined*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C3F1A8B9E2BC6238_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D9D2D4B1067C6871(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D9D2D4B1067C6871_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8478907E5C7436FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8478907E5C7436FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2EACFDCFAE2979D0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationWidth*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationWidth*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2EACFDCFAE2979D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_176198D9B99BE32A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainModifier*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainModifier*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_176198D9B99BE32A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FBCDEE83C2889BEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FBCDEE83C2889BEA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_94224A6B444E57D5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChangeValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChangeValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_94224A6B444E57D5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA8322BB85B9FC12(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAliveEnemyNumber*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FA8322BB85B9FC12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D28121339C9BFB4C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillUsageLimit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillUsageLimit*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D28121339C9BFB4C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_06FF06254573283E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_06FF06254573283E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2B9B98B41C57B79B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChanceClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChanceClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2B9B98B41C57B79B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F33253E40A4719A6_1(::SimpleJSON::JSONNode* a1, ::Class_4_C52396BE76BDF2EA*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C52396BE76BDF2EA*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D70F30CBEF4A8E24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHP*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D70F30CBEF4A8E24_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A26551549B5D42D3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A26551549B5D42D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1828EB7095350F86(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1828EB7095350F86_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C0DFC9AC2E5205BB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialSPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialSPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C0DFC9AC2E5205BB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_29B60B545947C1E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_29B60B545947C1E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_403A3AC3DC22CBA4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_403A3AC3DC22CBA4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F33253E40A4719A6_2(::SimpleJSON::JSONNode* a1, ::Class_4_74E928004BF9D3ED*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_74E928004BF9D3ED*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5E6B8C74B5521BF7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterUniqueID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterUniqueID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5E6B8C74B5521BF7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8086B028EECABB3A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterTemplateID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterTemplateID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8086B028EECABB3A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8E4E1AAFD92298F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBattleEventID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBattleEventID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8E4E1AAFD92298F8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AFE40E0D5C77887F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterNumber*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterNumber*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AFE40E0D5C77887F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9DA8FEF49290C4C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9DA8FEF49290C4C1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A544683B4AAF55B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A544683B4AAF55B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_83A5607CC64A8AEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_83A5607CC64A8AEA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4EEB3AB386CEF9F4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillByName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillByName*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4EEB3AB386CEF9F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_77468DF4D5F85467(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillBySlot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillBySlot*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_77468DF4D5F85467_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0D9CF3E739A130D6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSplitDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSplitDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0D9CF3E739A130D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F12B8DFABA1E8DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsProjectileHitTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsProjectileHitTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1F12B8DFABA1E8DA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5A303CC1C961CEF5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5A303CC1C961CEF5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7ABE7F0AFE96AFB7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetNatureID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetNatureID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7ABE7F0AFE96AFB7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3115995BD6F90BC1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3115995BD6F90BC1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C0353B80AC07B2DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetEntityType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetEntityType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C0353B80AC07B2DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_19E3DA203AFE74B1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_19E3DA203AFE74B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_88A29348FB66A32A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsControlSkillDisable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsControlSkillDisable*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_88A29348FB66A32A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F33253E40A4719A6_3(::SimpleJSON::JSONNode* a1, ::Class_4_C2B07AE0C1DDDAA6_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C2B07AE0C1DDDAA6_1*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E8CB82B96FFD6B14(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E8CB82B96FFD6B14_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A2D80E6173A07338(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSelectSkillEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSelectSkillEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A2D80E6173A07338_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE4D6A3081F37127(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FE4D6A3081F37127_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1800A3982D6A3551(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1800A3982D6A3551_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0D828D086C30A04D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0D828D086C30A04D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_257288C8C01C3283(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllLightTeamDied*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllLightTeamDied*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_257288C8C01C3283_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64CD731C08C46F24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSecretWeak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSecretWeak*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_64CD731C08C46F24_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85889E9738F6162B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_85889E9738F6162B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA30717B47EB372B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillTag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AA30717B47EB372B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_354F48C73F35BC96(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleEventEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleEventEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_354F48C73F35BC96_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_88F4577B07813A49(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLocationIndexType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLocationIndexType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_88F4577B07813A49_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_361C9DF326070109(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMatchTeammateCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMatchTeammateCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_361C9DF326070109_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_36970B05CD3FD1C6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckBloodLinkDead*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckBloodLinkDead*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_36970B05CD3FD1C6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8E99DC2F46A6D01F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckIsLimboRevivable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckIsLimboRevivable*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8E99DC2F46A6D01F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79D7D4C9E7F6F63B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetAbleToAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetAbleToAction*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_79D7D4C9E7F6F63B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1BB8E6C2AF39A92C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1BB8E6C2AF39A92C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE9B2F1FCC2F4322(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AE9B2F1FCC2F4322_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D575AE4C2E5A51E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAllWaveMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAllWaveMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D575AE4C2E5A51E6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C82976AAB2833114(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayChanged*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayChanged*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C82976AAB2833114_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A640AB8E6BD05703(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleReStart*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleReStart*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A640AB8E6BD05703_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B7A2F4A815F6E10A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B7A2F4A815F6E10A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2D7BE74808448DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackName*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E2D7BE74808448DE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_807F8DBE2A87AA57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_807F8DBE2A87AA57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_12(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_10*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_10*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_189DBDA144C2D559(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_189DBDA144C2D559_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B59A76CD0A11671C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B59A76CD0A11671C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BF4F8ED37D2527BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCustomEvent*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCustomEvent*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BF4F8ED37D2527BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E364DC349EAA7FFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierDeathSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierDeathSource*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E364DC349EAA7FFD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D22AD126FEEC1D38(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTopActionDelayTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTopActionDelayTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D22AD126FEEC1D38_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DE961B0EB9ABD562(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DE961B0EB9ABD562_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_591A7AA2A43D6CD0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_591A7AA2A43D6CD0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_662E9065505C0B5C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_662E9065505C0B5C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9FBC6103C29A7566(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllowUseSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllowUseSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9FBC6103C29A7566_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_75B0EF3D933B4657(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDirectKillBattle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDirectKillBattle*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_75B0EF3D933B4657_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DE15C77EE4CBB66E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBP*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DE15C77EE4CBB66E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7E7B2C754D86189(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasCharacterRevived*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasCharacterRevived*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C7E7B2C754D86189_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_721250889E129C56(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivated*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_721250889E129C56_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA77A8DF4D5FD2B5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivatedFromLineup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivatedFromLineup*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AA77A8DF4D5FD2B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_43A369266C439582(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_43A369266C439582_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_19729582A8E13A85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueMode*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueMode*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_19729582A8E13A85_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_56B86E0C8FD46412(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInfiniteBattle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInfiniteBattle*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_56B86E0C8FD46412_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C61471CF11ADDDF5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEntityActionState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEntityActionState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C61471CF11ADDDF5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FC416085DCCB796A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveDyingEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveDyingEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FC416085DCCB796A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_205327766052338B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AttackDamageTypeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AttackDamageTypeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_205327766052338B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_19(::SimpleJSON::JSONNode* a1, ::Class_4_289799916215ACDF*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_289799916215ACDF*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_19_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3F442A5B42AD42B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasActiveUnitOnScepter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasActiveUnitOnScepter*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3F442A5B42AD42B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ACAF3929D5A24570(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterFuncType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterFuncType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_ACAF3929D5A24570_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_29B5A997C4864221(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsScepter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsScepter*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_29B5A997C4864221_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC7E653D07B7F4DC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EC7E653D07B7F4DC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6043EA1614531414(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySaveModelWhenDead*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySaveModelWhenDead*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6043EA1614531414_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E01179FBE1B89DD9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E01179FBE1B89DD9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3351B9575A87ECA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySimulateSpeedUp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySimulateSpeedUp*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A3351B9575A87ECA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_62240149679DD0CB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDieAnimFinished*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDieAnimFinished*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_62240149679DD0CB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F10D6FBB06FF0492(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTimelinePerform*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTimelinePerform*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F10D6FBB06FF0492_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64AFFBBC809A6D47(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_64AFFBBC809A6D47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F7EB0C80FE54E257(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPart*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPart*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F7EB0C80FE54E257_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AF1FDDE21D09BB84(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AF1FDDE21D09BB84_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_24CD3E5BC3DC4EEF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_24CD3E5BC3DC4EEF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CCA6D5AC201F9DBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CCA6D5AC201F9DBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CE77DE8BE6C3F0D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CE77DE8BE6C3F0D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_32068CB750248638(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixTaskConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixTaskConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_32068CB750248638_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_012CABF8530AF330(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixBasePredicate*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixBasePredicate*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_012CABF8530AF330_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_021E248F8B2D32CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateA*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateA*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_021E248F8B2D32CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_48D53956F839A05B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateB*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateB*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_48D53956F839A05B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01782926F36D8F24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateC*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_01782926F36D8F24_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_279830467368037B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharacterIDGroup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharacterIDGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_279830467368037B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_982D4AF570171AD6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialAvatarType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialAvatarType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_982D4AF570171AD6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_20(::SimpleJSON::JSONNode* a1, ::Class_4_2A80E417D1F3E66A*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_2A80E417D1F3E66A*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_20_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_21(::SimpleJSON::JSONNode* a1, ::Class_4_D06A8FE0880035FA*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_D06A8FE0880035FA*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8EB75FAA4B1E4D2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertBattlePerform*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertBattlePerform*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8EB75FAA4B1E4D2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_55FA5F210AC6EC96(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainCustomString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainCustomString*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_55FA5F210AC6EC96_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_52E1F7F184A61BAC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareWaveCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareWaveCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_52E1F7F184A61BAC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B37D6C51D9FE809(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLevelLoseCheck*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLevelLoseCheck*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1B37D6C51D9FE809_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61033AF00E136848(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdditionalConditions*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdditionalConditions*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_61033AF00E136848_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C0C3BA47C7E0398F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterDie*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterDie*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C0C3BA47C7E0398F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4267789D67B7BB52(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterHurt*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterHurt*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4267789D67B7BB52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F42BE948202CD848(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterDie*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterDie*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F42BE948202CD848_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C32A6210AA1A9142(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTrialCharacterDie*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTrialCharacterDie*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C32A6210AA1A9142_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F61FA6F25773A0C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTurnCountMatch*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTurnCountMatch*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7F61FA6F25773A0C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8CEC8A729DC1AED0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckDarkTeamDestroy*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8CEC8A729DC1AED0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_55ED2202904DD76C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeGroupType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeGroupType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_55ED2202904DD76C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5B856EA6DAC78EB9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFightFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFightFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5B856EA6DAC78EB9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_31C98C34FD00136E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetAliveState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetAliveState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_31C98C34FD00136E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_565B5F070BF5A659(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayEffectType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayEffectType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_565B5F070BF5A659_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_175C6E9943355E58(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_175C6E9943355E58_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_98BB681ACB64367E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_98BB681ACB64367E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E5BDF5442C5D9D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6E5BDF5442C5D9D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_417FFE90E85AD7DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnemy*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnemy*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_417FFE90E85AD7DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_05E2C1FFBABACDBF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_05E2C1FFBABACDBF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2BB5923F79CDA0C9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeammate*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeammate*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2BB5923F79CDA0C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E6C8789FF13F3A00(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCasterAliveOrLimbo*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCasterAliveOrLimbo*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E6C8789FF13F3A00_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4A4E99C75BB354CF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4A4E99C75BB354CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_29D1F5F8ABB6C806(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRedStanceCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRedStanceCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_29D1F5F8ABB6C806_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3942F216B30FC1B1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareResistChance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareResistChance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3942F216B30FC1B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33EC9A8074130CF8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageCritical*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageCritical*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_33EC9A8074130CF8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3DBB2CEA387AA667(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsIndirectDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsIndirectDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3DBB2CEA387AA667_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2D6B44385D8B2DC4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsConvertDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsConvertDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2D6B44385D8B2DC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FADCEB5FDC083FAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharmAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharmAction*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FADCEB5FDC083FAE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EFDF87D569449559(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageLuckCritical*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageLuckCritical*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EFDF87D569449559_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A688583EDE874B86(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A688583EDE874B86_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C55DD720A5241369(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHealCallBackStack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHealCallBackStack*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C55DD720A5241369_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1E40B02EFE1CEA5B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHitAllCallBackStack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHitAllCallBackStack*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1E40B02EFE1CEA5B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE942EE597AC6B74(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRootHitCallback*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRootHitCallback*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AE942EE597AC6B74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_75B9E4A48D442833(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInModifierCallback*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInModifierCallback*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_75B9E4A48D442833_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0531CD42610DDCE4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0531CD42610DDCE4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F36A98A6EDDCBEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8F36A98A6EDDCBEB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F3026231918882BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillTargetType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillTargetType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F3026231918882BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6FEE44EB054529B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6FEE44EB054529B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F3E8D8BF37431B5C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillName*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F3E8D8BF37431B5C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4D56FDA5D7994384(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentContainAbilityTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentContainAbilityTag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4D56FDA5D7994384_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF0F80A55FB203F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillBPChangePreview*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CF0F80A55FB203F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B1D6A07AB61BC742(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B1D6A07AB61BC742_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_67D6F281D89E222B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackSkillEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackSkillEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_67D6F281D89E222B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_03D6026FFB27BE08(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeak*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_03D6026FFB27BE08_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E867A10AB3004F41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E867A10AB3004F41_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_86FAD0554B1604B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_86FAD0554B1604B9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_848CFAD4AA25622C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterFly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterFly*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_848CFAD4AA25622C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D06DA6B04E1A6E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1D06DA6B04E1A6E0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_12C3053DB3D2BC85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBreakStanceDamageType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBreakStanceDamageType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_12C3053DB3D2BC85_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8AAA7911EBCA99F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8AAA7911EBCA99F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_87DC67097E5FE72A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_87DC67097E5FE72A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_17C78B4108E93C21(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageFirstWave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageFirstWave*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_17C78B4108E93C21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_136964C71B3D38CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeLeft*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeLeft*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_136964C71B3D38CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0BA604B637879A0A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0BA604B637879A0A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6C84D86401A6B7F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6C84D86401A6B7F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_14AEFC38C84628CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetCustomUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_14AEFC38C84628CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0D7054043E9DE45B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0D7054043E9DE45B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4A34F929D44846E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4A34F929D44846E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8BCA8849A42B154(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCountClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A8BCA8849A42B154_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3647AC3A1EBF4E95(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillActive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillActive*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3647AC3A1EBF4E95_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CD5E66F504817983(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalWin*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalWin*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CD5E66F504817983_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE8A9FEB2BAE82F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityPending*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityPending*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FE8A9FEB2BAE82F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E38DE6B41912F457(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E38DE6B41912F457_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64EE4929BB323379(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_64EE4929BB323379_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C416AF448AE0A636(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C416AF448AE0A636_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AED53185962B1748(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamString*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AED53185962B1748_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B53FC4F8DF992F7F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsParamFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsParamFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B53FC4F8DF992F7F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FECBC4EB7A46E32E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowStanceBreak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowStanceBreak*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FECBC4EB7A46E32E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_600014668428C9E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowRedStanceBreak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowRedStanceBreak*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_600014668428C9E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_769D019433964F25(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_769D019433964F25_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6F6C5816AD7218F2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentTurnState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentTurnState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6F6C5816AD7218F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_78A94CB7A15C9022(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_78A94CB7A15C9022_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D08D2CC7408426A3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAbilityProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAbilityProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D08D2CC7408426A3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0AA49AE794563DC2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTurnBasedGameModeState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTurnBasedGameModeState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0AA49AE794563DC2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D53138AE97835DE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkillPointActivated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkillPointActivated*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D53138AE97835DE3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ABEFB9B88F35F8ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveInsertUltraWait*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveInsertUltraWait*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_ABEFB9B88F35F8ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9032E73AB15E3AFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPChangeTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPChangeTag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9032E73AB15E3AFD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6CCD474B8CBD914F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageTag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6CCD474B8CBD914F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE62534B37EFB25D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageCustomName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageCustomName*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AE62534B37EFB25D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5302C01C8526E668(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBaseTypeCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBaseTypeCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5302C01C8526E668_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_483DC8DB014C4E0D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCountOfBaseType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCountOfBaseType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_483DC8DB014C4E0D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_82E7F2FA2D5D0D9D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeSource*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_82E7F2FA2D5D0D9D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1824FE5BEBD1D479(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1824FE5BEBD1D479_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_87D8EFEF182A4E23(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockHP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockHP*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_87D8EFEF182A4E23_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4B899A9B80CAD443(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockStance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockStance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4B899A9B80CAD443_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D45C30B15CD0A2DC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerSDFTextEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerSDFTextEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D45C30B15CD0A2DC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB20EC421B56BE49(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainResistBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainResistBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EB20EC421B56BE49_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00B6B408F45CF4DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_00B6B408F45CF4DA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1BB4B594E0BF66E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterSomatoWidthType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterSomatoWidthType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1BB4B594E0BF66E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8CDDDC10D13EC1A5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentModifierAlive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentModifierAlive*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8CDDDC10D13EC1A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_13F2C7361EC7E96D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnableNegativeHP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnableNegativeHP*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_13F2C7361EC7E96D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF2635662F4ACA3D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CF2635662F4ACA3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_22151552E4BE0339(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSomatoType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSomatoType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_22151552E4BE0339_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5ABFE8E95CEE0BB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PredicateConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5ABFE8E95CEE0BB6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6112A888C5B98EBD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6112A888C5B98EBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_76A6B9467EADE6F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_76A6B9467EADE6F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A99DF3E9F834FDB0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetAlias*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetAlias*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A99DF3E9F834FDB0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_195B904260F83870(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHeroGender*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHeroGender*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_195B904260F83870_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A40E3F1972B18F71(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAny*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAny*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A40E3F1972B18F71_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96529E2BA4FAA28A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnd*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnd*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_96529E2BA4FAA28A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_40868C0950B70332(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNot*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_40868C0950B70332_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF27809E503167A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAny*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAny*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CF27809E503167A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_923A04971001C573(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAll*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAll*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_923A04971001C573_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CF4849E7A4BBFEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCustomString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCustomString*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9CF4849E7A4BBFEA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD37A62996901079(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDynamicValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDynamicValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BD37A62996901079_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4D8316750F80A731(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4D8316750F80A731_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8C67894B6BB31907(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListIntersects*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListIntersects*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8C67894B6BB31907_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C8383BD4A9C019EA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DebugLogInPredicates*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DebugLogInPredicates*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C8383BD4A9C019EA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5AE8CDE9A09C958A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetValid*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetValid*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5AE8CDE9A09C958A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3490BF69679BE4F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleMissionTalkFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleMissionTalkFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A3490BF69679BE4F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F13E99E5FDE56B3A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentAudioLanguage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentAudioLanguage*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F13E99E5FDE56B3A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B682CCB2ACDD8A3B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B682CCB2ACDD8A3B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BCE3B25AF1A3FC51(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamLeader*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BCE3B25AF1A3FC51_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE730C307F962D20(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamMembers*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AE730C307F962D20_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8C91E0B0A9270987(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8C91E0B0A9270987_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FEC6460B9497BE59(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FEC6460B9497BE59_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A03E8F9088546313(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A03E8F9088546313_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D5DA3F8A522A7809(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvMonsterData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvMonsterData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D5DA3F8A522A7809_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6372B9CA3C3EB1FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonster*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6372B9CA3C3EB1FB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_821F4DF79123F855(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvPropData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvPropData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_821F4DF79123F855_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C4C417CFC23DE4C8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvProp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvProp*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C4C417CFC23DE4C8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1865C9D3C269805D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvNPCData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvNPCData*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1865C9D3C269805D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1CDC792D1EAC4254(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNPC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNPC*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1CDC792D1EAC4254_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_114ADA0F957EB749(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPropEx*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPropEx*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_114ADA0F957EB749_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_78163F58C5DFF2E5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvNPCDataEx*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvNPCDataEx*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_78163F58C5DFF2E5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FCD275E76F541AFF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNpcEx*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNpcEx*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FCD275E76F541AFF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_000CEBD13932B58F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNormalPam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNormalPam*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_000CEBD13932B58F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3371DB6E2AEFCEEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3371DB6E2AEFCEEE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_835DC72267533A9D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_835DC72267533A9D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5DF85947CF2521C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchor*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchor*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5DF85947CF2521C1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9975CFA1FCE5825E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchorByName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchorByName*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9975CFA1FCE5825E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA93B692FA7D23F7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AA93B692FA7D23F7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_63BAC2F92B942293(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDialogueEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDialogueEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_63BAC2F92B942293_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_63BE2E2004A04615(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastSearchEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastSearchEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_63BE2E2004A04615_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DF884970194A25AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DF884970194A25AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_602F478E4FE5F5C7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_602F478E4FE5F5C7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FAD476EA9D66C352(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonsterEx*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FAD476EA9D66C352_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_09118ACE54583013(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_09118ACE54583013_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CD230238E4921E33(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonUnit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonUnit*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CD230238E4921E33_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F2DD0CAD531F8229(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F2DD0CAD531F8229_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B4B4F225D2C698DD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPuzzleEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPuzzleEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B4B4F225D2C698DD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6117EA756D921B41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetConcat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetConcat*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6117EA756D921B41_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_95CF1DF861241F4B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetCompute*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetCompute*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_95CF1DF861241F4B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D4C747641F885762(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSequence*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSequence*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D4C747641F885762_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D7CFDDA004D2CF8C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSelector*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSelector*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D7CFDDA004D2CF8C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D622FF9914E7984E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilter*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D622FF9914E7984E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ACBFF3ACD9982E27(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetShuffle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetShuffle*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_ACBFF3ACD9982E27_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_821CD192B94A0914(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetTake*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetTake*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_821CD192B94A0914_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_02B30785BD0A3C46(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetIndex*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetIndex*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_02B30785BD0A3C46_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3F93DE41B5B6B853(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetRemoveUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetRemoveUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3F93DE41B5B6B853_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E32E06B639EF9F9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterAliveState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterAliveState*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E32E06B639EF9F9B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3C6B48B7F2803188(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterTargetType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterTargetType*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3C6B48B7F2803188_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_854B2D0D0C227AF9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_854B2D0D0C227AF9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4D15A10B7139F3D3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchModifierOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchModifierOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4D15A10B7139F3D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_864F9FA1E87D71A7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNone*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_864F9FA1E87D71A7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18332F5523BD995A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18332F5523BD995A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_14E21DA96CA92B8E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityGroup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_14E21DA96CA92B8E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F1BEEC778192E08E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F1BEEC778192E08E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85D4026C9C41F8EA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTeamEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTeamEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_85D4026C9C41F8EA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE35D014955183E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FE35D014955183E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9D7B497A57475F95(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPassiveEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPassiveEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9D7B497A57475F95_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B953DCBEB53D397D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B953DCBEB53D397D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E9770F8EA2D951C7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E9770F8EA2D951C7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3B3D4F3326AD21E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAITarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAITarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3B3D4F3326AD21E9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E113E2D629CB5E67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E113E2D629CB5E67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64B97FA6C87CB365(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityByIndex*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_64B97FA6C87CB365_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B3837C580F65A4BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B3837C580F65A4BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_35E2458A4202DC4F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitPos*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitPos*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_35E2458A4202DC4F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A6FD34B03CF8C1B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTaskActionTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTaskActionTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8A6FD34B03CF8C1B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9911E44B78473C53(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPropFarmElement*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPropFarmElement*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9911E44B78473C53_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_980D4E2A7E2A769C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLevelEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLevelEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_980D4E2A7E2A769C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7B8B6759E625362D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLineup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLineup*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7B8B6759E625362D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9D4ADBB16D7F6594(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchInstigator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchInstigator*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9D4ADBB16D7F6594_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_334CFFAA2E26C839(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_334CFFAA2E26C839_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_368BEF7021140038(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMainMonster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMainMonster*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_368BEF7021140038_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_896A481A17C20163(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_896A481A17C20163_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_51DBF00C99C01D11(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCreator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCreator*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_51DBF00C99C01D11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8E7758F8E6644BFC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreatedBattleEvent*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreatedBattleEvent*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8E7758F8E6644BFC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C087B29B69EADFEC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUniqueNameEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C087B29B69EADFEC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5E69928AAD604E30(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPartner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPartner*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5E69928AAD604E30_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BB477A76EEDF96FE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMazeBuffTargets*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BB477A76EEDF96FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CCE3E26F0E4D5035(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBloodLinkTargets*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CCE3E26F0E4D5035_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E20E33FADF5E63A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7E20E33FADF5E63A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_86344203720E950D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_86344203720E950D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_719288726689CCA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActionDelayExceed*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActionDelayExceed*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_719288726689CCA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA1EC9772A305762(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarAssistant*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarAssistant*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FA1EC9772A305762_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7154BB05E90117BB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeAllTargets*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeAllTargets*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7154BB05E90117BB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5897A32B4225D5D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeSource*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5897A32B4225D5D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4E100FAD46D4F5ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonMonsters*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonMonsters*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4E100FAD46D4F5ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7AF745F2861EFB7A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTemplateEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTemplateEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7AF745F2861EFB7A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1066E12C64BCCDA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1066E12C64BCCDA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_76FFAA74781EC89A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapEnemyTeamEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapEnemyTeamEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_76FFAA74781EC89A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_74FF5CB42F2D8A1D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMember*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMember*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_74FF5CB42F2D8A1D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_206061BDD2876D3A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_206061BDD2876D3A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F7264EC819675EFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllOffTeamMember*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllOffTeamMember*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F7264EC819675EFE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F253D5962D391CED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillPointEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillPointEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F253D5962D391CED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9EC02CF9D492E87C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillActualAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillActualAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9EC02CF9D492E87C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA6B78F82D2419C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummoner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummoner*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AA6B78F82D2419C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E672CC14B28613F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreator*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E672CC14B28613F1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DB45420F8586E573(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummonedMinions*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummonedMinions*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DB45420F8586E573_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3E74E2F822CB2F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A3E74E2F822CB2F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_29B61EFCD46F4A67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSnapshotEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSnapshotEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_29B61EFCD46F4A67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A365F916148033A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartToOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartToOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8A365F916148033A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2F95CABC1547A0EA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2F95CABC1547A0EA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8CF08C86B50E0671(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8CF08C86B50E0671_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D7293E1A7BD3CACF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMonsterByID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMonsterByID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D7293E1A7BD3CACF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E7C531D3F0077A0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarByID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarByID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3E7C531D3F0077A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01642F4B17DBD7C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_01642F4B17DBD7C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6A8D1CB18BFF7FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFarmElementEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFarmElementEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A6A8D1CB18BFF7FB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_724CA4F1246B12A5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActualOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActualOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_724CA4F1246B12A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_16EE6E2A35D8C9C7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAliveSourceEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_16EE6E2A35D8C9C7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D9A554FD57FAB005(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTrailblazer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTrailblazer*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D9A554FD57FAB005_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_844FDC9CE175F613(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchByTauntAndAggro*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_844FDC9CE175F613_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_67585A8E2A8DCC82(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDynamicEntityParam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDynamicEntityParam*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_67585A8E2A8DCC82_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4521979BFBAD0286(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetQuery*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetQuery*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4521979BFBAD0286_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EE3274AAE7868DA3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EE3274AAE7868DA3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_91AD260443483890(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUnstageTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUnstageTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_91AD260443483890_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_23554CDF7305F7F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_23554CDF7305F7F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_620D272EA63DC9D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextSkillCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextSkillCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_620D272EA63DC9D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_10F2684111BDACA3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_10F2684111BDACA3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BFD2CDFFC8FF7CAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeSource*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BFD2CDFFC8FF7CAB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_289320A29465FF07(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_289320A29465FF07_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D0DC364474FED5F4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortSequence*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortSequence*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D0DC364474FED5F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DD314C2A7CE3C679(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByValueEvaluator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByValueEvaluator*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DD314C2A7CE3C679_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61F6BB80BD73D32A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPredicate*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPredicate*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_61F6BB80BD73D32A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D59E7B144A4447FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D59E7B144A4447FB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FEBC7A05FE2D8230(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FEBC7A05FE2D8230_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_66FE2EB76E8CA185(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_66FE2EB76E8CA185_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D1BFBC38EC16F879(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDeathOrder*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDeathOrder*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D1BFBC38EC16F879_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BCDC1D7350EDD011(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierStatusCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierStatusCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BCDC1D7350EDD011_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_483EE1E0DE3AEFD2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_483EE1E0DE3AEFD2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_63BDE955035B743C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierValue*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_63BDE955035B743C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3AAC38F2503D01E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByMultiModifierValueSum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByMultiModifierValueSum*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3AAC38F2503D01E6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C4E403C7BC6596F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByActionOrder*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByActionOrder*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C4E403C7BC6596F8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F6872D09E0CA7539(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByAITag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByAITag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F6872D09E0CA7539_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0BEF7B0D6B938E55(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0BEF7B0D6B938E55_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F91A1490DDD7AEE1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByWeaknessMatch*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByWeaknessMatch*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F91A1490DDD7AEE1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C9F6DEA5AF69B606(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C9F6DEA5AF69B606_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF6C3B0C17636C00(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightPower*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightPower*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CF6C3B0C17636C00_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B05B3CC2ED309E52(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPropertyRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPropertyRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B05B3CC2ED309E52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_90DFFF98F4964971(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByElationPriority*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByElationPriority*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_90DFFF98F4964971_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F3F79E6223ACA8CF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnActionEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnActionEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F3F79E6223ACA8CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0D4366DA38CEB1F4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0D4366DA38CEB1F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_468DFFD258397608(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_468DFFD258397608_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_53679C80B3430A62(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_53679C80B3430A62_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DCA9B0EC69AD16B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastZombieEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastZombieEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DCA9B0EC69AD16B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7140C6807B96C2D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7140C6807B96C2D8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_262157CE715DF7E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_262157CE715DF7E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C5571D63DA73BA41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFightMVPEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFightMVPEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C5571D63DA73BA41_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B0904F63D3FE31F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B0904F63D3FE31F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D4637BDB467271D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7D4637BDB467271D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F6E570923032A7A0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidDefender*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidDefender*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F6E570923032A7A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9AC57A6F55AE0F5D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidProtector*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidProtector*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9AC57A6F55AE0F5D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D3D2707BB7C140EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D3D2707BB7C140EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB68CA1DB44A7F37(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AB68CA1DB44A7F37_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B28ACBED93735610(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSnapshotEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSnapshotEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B28ACBED93735610_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4D182CB262BC1140(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4D182CB262BC1140_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C1B2C437EDE29A83(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C1B2C437EDE29A83_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_65C8D6EB7A23751C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_65C8D6EB7A23751C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C33D8F949300978(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0C33D8F949300978_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FEA335A5EDF520F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FEA335A5EDF520F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2352EAB62E7469A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAdjoinEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAdjoinEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E2352EAB62E7469A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9993CD46E8483C70(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9993CD46E8483C70_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DB38E4A96E385FA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DB38E4A96E385FA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_12C73044BC9F8E48(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageDefender*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageDefender*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_12C73044BC9F8E48_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B8DC8929DBD5A7E5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAttackTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAttackTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B8DC8929DBD5A7E5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ABFE25E34E925698(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageChunkTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_ABFE25E34E925698_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C097B59EEFDA0125(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C097B59EEFDA0125_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DCF552AEDD8DA59(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2DCF552AEDD8DA59_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6BA4413F08CC5329(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6BA4413F08CC5329_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_35BD0D3AC78C5412(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillSubTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillSubTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_35BD0D3AC78C5412_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_49B0D05DE5CA543C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBetweenEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBetweenEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_49B0D05DE5CA543C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_92423D26C6CD30E4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAimAtTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAimAtTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_92423D26C6CD30E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7C9618750B899948(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7C9618750B899948_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AAD384370C0954BC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAimTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_AAD384370C0954BC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EE3CFC16C9C93C5D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EE3CFC16C9C93C5D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8E60D20B81ACC3D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8E60D20B81ACC3D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2245CBE33D7FB5BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetReverse*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetReverse*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2245CBE33D7FB5BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_627856C01D5E9B6D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDummyEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDummyEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_627856C01D5E9B6D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A478997CE7E4F2D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValuePostProcessConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValuePostProcessConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A478997CE7E4F2D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D77E6915B0F8E0F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3D77E6915B0F8E0F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F81F4E1455DE863(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorVec3*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorVec3*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1F81F4E1455DE863_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F97083C04A426BD7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Const*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Const*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F97083C04A426BD7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64AFAF0DC17ED475(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Value*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Value*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_64AFAF0DC17ED475_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5A3FFA54DD350DA7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Group*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Group*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5A3FFA54DD350DA7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_12C840EF41BBCCC5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Predicate*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Predicate*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_12C840EF41BBCCC5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_258C5F8635893DE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Random*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Random*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_258C5F8635893DE3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A5B6C0B293E26748(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_TargetCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_TargetCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A5B6C0B293E26748_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9BED9ABE98A70F52(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_FactorGroup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_FactorGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9BED9ABE98A70F52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0479390A1370BC13(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Add*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Add*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0479390A1370BC13_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8D7ADBD7E41A3320(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Sub*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Sub*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8D7ADBD7E41A3320_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A8FA96807155CA4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Mul*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Mul*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0A8FA96807155CA4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A8864942A2398AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Div*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Div*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8A8864942A2398AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0106DD444772739F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Exp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Exp*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0106DD444772739F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0993906567F599B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Pow*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Pow*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0993906567F599B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0856BE86AB8B1C5E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Abs*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Abs*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0856BE86AB8B1C5E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6970F6AB54966964(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Invert*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Invert*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6970F6AB54966964_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0208A8C81B084F34(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Clamp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Clamp*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0208A8C81B084F34_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B09816C2317B5FBC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Max*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Max*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B09816C2317B5FBC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BAFB2269FBAD5E02(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Min*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Min*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BAFB2269FBAD5E02_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4EE3D334C2F87998(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_ConstMap*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_ConstMap*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4EE3D334C2F87998_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1350383F6C78486C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_LinearMap*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_LinearMap*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1350383F6C78486C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A553363E7C1C00AE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Sigmoid*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Sigmoid*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_A553363E7C1C00AE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_22(::SimpleJSON::JSONNode* a1, ::Class_4_77F0E8B5F821AE63*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_77F0E8B5F821AE63*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_22_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F33253E40A4719A6_4(::SimpleJSON::JSONNode* a1, ::Class_4_07BF628E2777E08D*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_07BF628E2777E08D*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_13(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_11*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_11*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_13_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F33253E40A4719A6_5(::SimpleJSON::JSONNode* a1, ::Class_4_962A171D9D578327*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_962A171D9D578327*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_23(::SimpleJSON::JSONNode* a1, ::Class_4_52F0D25B8A5C0616*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_52F0D25B8A5C0616*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_23_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F33253E40A4719A6_6(::SimpleJSON::JSONNode* a1, ::Class_4_274CDECA9C90F714*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_274CDECA9C90F714*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F33253E40A4719A6_7(::SimpleJSON::JSONNode* a1, ::Class_4_1C3EE1F1A65C0138*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_1C3EE1F1A65C0138*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F33253E40A4719A6_8(::SimpleJSON::JSONNode* a1, ::Class_4_DD662316DDE274DE*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_DD662316DDE274DE*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_38B87B3CE4AA02F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCanMove*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCanMove*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_38B87B3CE4AA02F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B49D8404E20FF189(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsMoving*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsMoving*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B49D8404E20FF189_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_24(::SimpleJSON::JSONNode* a1, ::Class_4_6F740814D9094F5F_2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6F740814D9094F5F_2*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_24_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_25(::SimpleJSON::JSONNode* a1, ::Class_4_DB9508DE847AEC59*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_DB9508DE847AEC59*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_25_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_14(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_12*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_12*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_14_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F33253E40A4719A6_9(::SimpleJSON::JSONNode* a1, ::Class_4_962A171D9D578327_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_962A171D9D578327_1*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D104694F9A9F492(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtLifeBindingConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtLifeBindingConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7D104694F9A9F492_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_26(::SimpleJSON::JSONNode* a1, ::Class_4_2FE6CDD388B56E6B*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_2FE6CDD388B56E6B*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_26_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_27(::SimpleJSON::JSONNode* a1, ::Class_4_0EB17C6B86E340AC_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_0EB17C6B86E340AC_1*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_27_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_99FF7D8DDA83262D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_99FF7D8DDA83262D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_28(::SimpleJSON::JSONNode* a1, ::Class_4_2C6327E657DA8BCC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_2C6327E657DA8BCC*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_28_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_29(::SimpleJSON::JSONNode* a1, ::Class_4_F42D15D617E4F9D4*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F42D15D617E4F9D4*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_29_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F33253E40A4719A6_10(::SimpleJSON::JSONNode* a1, ::Class_4_7346DBE182E81BAF*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_7346DBE182E81BAF*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_30(::SimpleJSON::JSONNode* a1, ::Class_4_F0E2079A5547C5F3*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F0E2079A5547C5F3*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_30_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_31(::SimpleJSON::JSONNode* a1, ::Class_4_2AFBB0F2564F9E40*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_2AFBB0F2564F9E40*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_31_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_32(::SimpleJSON::JSONNode* a1, ::Class_4_25AFD46360DAAFAC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_25AFD46360DAAFAC*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_32_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_15(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_13*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_13*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_15_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_33(::SimpleJSON::JSONNode* a1, ::Class_4_E96CE06DD2A46EC2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E96CE06DD2A46EC2*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_33_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_34(::SimpleJSON::JSONNode* a1, ::Class_4_890BC79DA352586D*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_890BC79DA352586D*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_34_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_35(::SimpleJSON::JSONNode* a1, ::Class_4_AF570AE2DDBD035B*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_AF570AE2DDBD035B*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_35_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_16(::SimpleJSON::JSONNode* a1, ::Class_4_A98F0D4F1FD3451C_14*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_A98F0D4F1FD3451C_14*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_380092D98CB34F8B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCompareProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCompareProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_380092D98CB34F8B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A67B61D1181E2E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByComparePropertyRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByComparePropertyRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_8A67B61D1181E2E6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E3D67FAF502A1D18(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasTargetInAlertRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasTargetInAlertRange*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E3D67FAF502A1D18_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA843652E79C0AE7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInAlertRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInAlertRange*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_DA843652E79C0AE7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5DC292E4B4EA6A1E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInSkillRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInSkillRange*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5DC292E4B4EA6A1E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B0AC0D5C4C815C60(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsSkillUsing*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsSkillUsing*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_B0AC0D5C4C815C60_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CFB3C72B8E319A02(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasSelectSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasSelectSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CFB3C72B8E319A02_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FB61B2F5376730D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBySkillCanUse*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBySkillCanUse*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_FB61B2F5376730D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D33649BE8A8F6C9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D33649BE8A8F6C9B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2D3FCEB7190A1451(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCurrentSkillName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCurrentSkillName*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2D3FCEB7190A1451_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C3FB2E98626E1C_17(::SimpleJSON::JSONNode* a1, ::Class_4_BA267B1408695E90*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_BA267B1408695E90*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_18C3FB2E98626E1C_17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_36(::SimpleJSON::JSONNode* a1, ::Class_4_875AAC2B190E37C1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_875AAC2B190E37C1*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_36_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F33253E40A4719A6_11(::SimpleJSON::JSONNode* a1, ::Class_4_CDB72451CBF92DF2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_CDB72451CBF92DF2*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F33253E40A4719A6_11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BAAEFDEADA629EED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchGridAt*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchGridAt*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BAAEFDEADA629EED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CD8444DCF48CFF0F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTargetInArea*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTargetInArea*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CD8444DCF48CFF0F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D10DAD75EBADC4E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTrigger*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTrigger*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D10DAD75EBADC4E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6B16918E14C7BA88(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6B16918E14C7BA88_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_29379D95BD177F01(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_29379D95BD177F01_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1DB9E82778BFD0C0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1DB9E82778BFD0C0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3A3101F92F181664(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBattleTargetFetchGridByTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBattleTargetFetchGridByTag*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3A3101F92F181664_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EEC81788D4BB93E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapTargetInTrigger*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EEC81788D4BB93E6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_680BEAE287B8BB7F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_680BEAE287B8BB7F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ABCB5707B0D72F0B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_ABCB5707B0D72F0B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CB9ECD291A08BF0D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillCastPos*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillCastPos*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_CB9ECD291A08BF0D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_234F2B7F1D6579F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillAbortSource*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_234F2B7F1D6579F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EFF85AAD8B422C1C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBelongGrid*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBelongGrid*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_EFF85AAD8B422C1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1AFB29A9621D3A91(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapMoveTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapMoveTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1AFB29A9621D3A91_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_188BB4A7FD717D2E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBornPoint*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBornPoint*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_188BB4A7FD717D2E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7688313BA1CDBAE0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridNearby*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridNearby*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_7688313BA1CDBAE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_06F64597AF7238C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEmptyGridNearby*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEmptyGridNearby*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_06F64597AF7238C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C4E4CF1571A0E5D6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C4E4CF1571A0E5D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_76C05291B0A2FF7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEntityInGrid*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEntityInGrid*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_76C05291B0A2FF7D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_738660D7E654C6F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_738660D7E654C6F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4FC77738C1BD7082(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapPosWithOffset*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapPosWithOffset*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4FC77738C1BD7082_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_35FC0FC06BD5D211(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtGridDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtGridDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_35FC0FC06BD5D211_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5BB1B665EA74DBD4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleGridOrder*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleGridOrder*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5BB1B665EA74DBD4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E1FEFD8AAA94DD07(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_E1FEFD8AAA94DD07_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3A1314EB0129375C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_3A1314EB0129375C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01BEB1066C64AAC3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_01BEB1066C64AAC3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_10647AA5E3ED92F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankByCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankByCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_10647AA5E3ED92F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4B3BC8ABF290F6B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4B3BC8ABF290F6B9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6F1475FB4E1283B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtDirConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtDirConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_6F1475FB4E1283B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BE12A9647E1A48E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtAngleBetween*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtAngleBetween*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_BE12A9647E1A48E3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F0D60687BED61AE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_F0D60687BED61AE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C19711F853CD008C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattlePropertyRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattlePropertyRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C19711F853CD008C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A7A9C07107D227D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtModifierProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtModifierProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_0A7A9C07107D227D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D6776966E64E7D6E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtSkillProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtSkillProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D6776966E64E7D6E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_058491206EA3EABD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_CharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_CharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_058491206EA3EABD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C05CE16DE156F3E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtTimeStamp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtTimeStamp*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C05CE16DE156F3E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A0B8922AC6851B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareMP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareMP*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9A0B8922AC6851B9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1DAA222659CC2643(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_1DAA222659CC2643_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_37(::SimpleJSON::JSONNode* a1, ::Class_4_F63E984E4BA70BD4*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F63E984E4BA70BD4*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_37_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_998FE0E79A92DBE5_38(::SimpleJSON::JSONNode* a1, ::Class_4_94CC15BFDD928D3E*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_94CC15BFDD928D3E*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_998FE0E79A92DBE5_38_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_15DB15100D900805(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSkillTypeDisable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSkillTypeDisable*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_15DB15100D900805_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A227DC4712D44C0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTutorialFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTutorialFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_9A227DC4712D44C0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C90BBF36A91466D0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_C90BBF36A91466D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5CF84FF71A109B16(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsShowInActionBar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsShowInActionBar*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_5CF84FF71A109B16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_971BF76B4BA70A59(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_971BF76B4BA70A59_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4E07BC9D2F0A75AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_4E07BC9D2F0A75AA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D43EF50661A1155C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_D43EF50661A1155C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A52EAA1A8950A66(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*&))((::PBYTE)hIl2Cpp + CLASS_1_D837DED66799FBE3_METHOD_1_2A52EAA1A8950A66_OFFSET))(a1, a2);
	}
};
