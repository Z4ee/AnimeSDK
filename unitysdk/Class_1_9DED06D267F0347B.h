#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9DED06D267F0347B_Struct_2_40DF9A6F3D8A7F3F.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/FloatCurveFrame.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/RPG/MColor.h"
#include "unitysdk/RPG/MRect.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/RPG/Vector3CurveFrame.h"
#include "unitysdk/RPG/Vector4CurveFrame.h"
#include "unitysdk/Struct_2_0ACB88BD1D804FF7.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"
#include "unitysdk/System/Object.h"

class Class_1_2CAAA2FDF9170110;
class Class_4_1B352B009B1CD57B;
class Class_4_280EADA080C75A9D;
class Class_4_3701B6A121A72CD0;
class Class_4_3701B6A121A72CD0_1;
class Class_4_3701B6A121A72CD0_2;
class Class_4_5C624EAA3CE758E5;
class Class_4_87568F4B1AE1BC50;
class Class_4_898D9FE991FDEB8A;
class Class_4_9120FA241231E45C;
class Class_4_AB1BEE9CD990C4C1;
class Class_4_BC87E1E104C4A2A7;
class Class_4_C2FF09D2685FF72B;
class Class_4_DA219FA494F35D19;
class Class_4_E0D26BEB1B9C290C;
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
namespace RPG::GameCore { class AdvWaitingEventBase; }
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
namespace RPG::GameCore { class BaseChimeraDuelNode; }
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
namespace RPG::GameCore { class ByCompareStringValue; }
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
namespace RPG::GameCore { class ByEnableStoryStreamingSource; }
namespace RPG::GameCore { class ByEntityCreated; }
namespace RPG::GameCore { class ByEntityOriginalEraConfig; }
namespace RPG::GameCore { class ByEntityTimeScaleZero; }
namespace RPG::GameCore { class ByFromBattleViewModeChange; }
namespace RPG::GameCore { class ByFuncUnlockCheck; }
namespace RPG::GameCore { class ByGameEntityNotCreated; }
namespace RPG::GameCore { class ByGridFightCharacterIsPreset; }
namespace RPG::GameCore { class ByGridFightHasSameTrait; }
namespace RPG::GameCore { class ByGridFightHasTrait; }
namespace RPG::GameCore { class ByGridFightTraitSelectedCharacter; }
namespace RPG::GameCore { class ByHasActiveUnitOnScepter; }
namespace RPG::GameCore { class ByHasAssistAvatar; }
namespace RPG::GameCore { class ByHasBillboard; }
namespace RPG::GameCore { class ByHasCharacterRevived; }
namespace RPG::GameCore { class ByHasExtraAvatarBaseType; }
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
namespace RPG::GameCore { class ByViewModeSwitchEmptyServant; }
namespace RPG::GameCore { class ByWaitCustomString; }
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace RPG::GameCore { class CheckFloorSavedValueConfig; }
namespace RPG::GameCore { class ChessByContainBehaviorFlag; }
namespace RPG::GameCore { class ChessByIsContainModifier; }
namespace RPG::GameCore { class ComplexSkillAISource; }
namespace RPG::GameCore { class ConvinceByCompareHp; }
namespace RPG::GameCore { class DebugLogInPredicates; }
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace RPG::GameCore { class DynamicBool; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class EffectModifyData; }
namespace RPG::GameCore { class FateModifierConfigBase; }
namespace RPG::GameCore { class FetchAdvMonsterData; }
namespace RPG::GameCore { class FetchAdvNPCData; }
namespace RPG::GameCore { class FetchAdvNPCDataEx; }
namespace RPG::GameCore { class FetchAdvPropData; }
namespace RPG::GameCore { class FilePath; }
namespace RPG::GameCore { class FinishActionConfig; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FloorCustomBoolConfig; }
namespace RPG::GameCore { class FloorCustomFloatConfig; }
namespace RPG::GameCore { class FloorCustomStringConfig; }
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace RPG::GameCore { class FloorTargetAgentConfig; }
namespace RPG::GameCore { class GridFightModifierConfigBase; }
namespace RPG::GameCore { class GridFightParameterConfigBase; }
namespace RPG::GameCore { class GroupFetchLocalTarget; }
namespace RPG::GameCore { class GroupPropertyConfig; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class IslandStateConditionSet; }
namespace RPG::GameCore { class IslandStateConfig; }
namespace RPG::GameCore { class IslandStateSavedValueCondition; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LittleGameComponentConfig; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class LittleGameFetchProxyByID; }
namespace RPG::GameCore { class MainMissionInfoConfig; }
namespace RPG::GameCore { class MarbleTaskConfig; }
namespace RPG::GameCore { class MiActionConfigBase; }
namespace RPG::GameCore { class MiAtomConfigBase; }
namespace RPG::GameCore { class MiConditionConfigBase; }
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace RPG::GameCore { class MissionCustomValue; }
namespace RPG::GameCore { class MissionCustomValueGroupConfig; }
namespace RPG::GameCore { class MissionCustomValueGroupConfigPack; }
namespace RPG::GameCore { class MissionCustomValueRewardConfig; }
namespace RPG::GameCore { class MissionCustomValueTuple; }
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class MissionWaypointDataPack; }
namespace RPG::GameCore { class OfflineCullingConfig; }
namespace RPG::GameCore { class PckFileList; }
namespace RPG::GameCore { class PckPatchConfig; }
namespace RPG::GameCore { class PckPatchPlatform; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class PlayerActionConfigBase; }
namespace RPG::GameCore { class PlayerCondConfigBase; }
namespace RPG::GameCore { class PlayerParameterConfigBase; }
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
namespace RPG::GameCore { class RogueActionConfigBase; }
namespace RPG::GameCore { class RogueModifierConfig; }
namespace RPG::GameCore { class RogueParameterConfigBase; }
namespace RPG::GameCore { class STTaskConfig; }
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
namespace RPG::GameCore { class ST_Chess_ByCanMove; }
namespace RPG::GameCore { class ST_Chess_ByDistanceToTarget; }
namespace RPG::GameCore { class ST_Chess_ByHasLockTarget; }
namespace RPG::GameCore { class ST_Chess_ByHasTargetInAlertRange; }
namespace RPG::GameCore { class ST_Chess_ByInAlertRange; }
namespace RPG::GameCore { class ST_Chess_ByInAttackRange; }
namespace RPG::GameCore { class ST_ElfByIsCustomerState; }
namespace RPG::GameCore { class ST_ElfByIsTakeOutState; }
namespace RPG::GameCore { class ST_ElfByIsWaiterState; }
namespace RPG::GameCore { class SetDynamicValueBase; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SkillConfig; }
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
namespace RPG::GameCore { class TargetFetchChessBase; }
namespace RPG::GameCore { class TargetFetchChessLockTarget; }
namespace RPG::GameCore { class TargetFetchChessMoveTarget; }
namespace RPG::GameCore { class TargetFetchChessSkillTarget; }
namespace RPG::GameCore { class TargetFetchContextDialogueTalkTrigger; }
namespace RPG::GameCore { class TargetFetchCurrentDamageAttacker; }
namespace RPG::GameCore { class TargetFetchCurrentDamageDefender; }
namespace RPG::GameCore { class TargetFetchCurrentGroupNPCMonsters; }
namespace RPG::GameCore { class TargetFetchCurrentInsertTurnSource; }
namespace RPG::GameCore { class TargetFetchDataViewUISelectEnter; }
namespace RPG::GameCore { class TargetFetchDataViewUISelectLeave; }
namespace RPG::GameCore { class TargetFetchDialogueEntity; }
namespace RPG::GameCore { class TargetFetchElationTimeAllTargets; }
namespace RPG::GameCore { class TargetFetchElationTimeSource; }
namespace RPG::GameCore { class TargetFetchEnemyInAlertRange; }
namespace RPG::GameCore { class TargetFetchEnemyInAttackRange; }
namespace RPG::GameCore { class TargetFetchFarmElementEntity; }
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
namespace RPG::GameCore { class TargetSortByFormation; }
namespace RPG::GameCore { class TargetSortByGridFightPower; }
namespace RPG::GameCore { class TargetSortByGridFightRoleTotalDamage; }
namespace RPG::GameCore { class TargetSortByModifierStatusCount; }
namespace RPG::GameCore { class TargetSortByModifierValue; }
namespace RPG::GameCore { class TargetSortByMultiModifierValueSum; }
namespace RPG::GameCore { class TargetSortByPredicate; }
namespace RPG::GameCore { class TargetSortByProperty; }
namespace RPG::GameCore { class TargetSortByPropertyRatio; }
namespace RPG::GameCore { class TargetSortByWeaknessMatch; }
namespace RPG::GameCore { class TargetSortMonsterRank; }
namespace RPG::GameCore { class TargetSortSequence; }
namespace RPG::GameCore { class TargetTake; }
namespace RPG::GameCore { class TaskConfig; }
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
namespace RPG::GameCore { template <typename T> class NativeContainer_1; }
namespace RPG::GameCore::Match3 { class Match3ActionBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_9DED06D267F0347B_DelegateParseJson_1;

#define CLASS_1_9DED06D267F0347B_METHOD_1_00061B41ADD92275_OFFSET UNITYSDK_OFFSET(0x1710AD80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0035AEE5CC1F17F6_OFFSET UNITYSDK_OFFSET(0x17322D10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_00761F0D1664988C_OFFSET UNITYSDK_OFFSET(0x17317500)
#define CLASS_1_9DED06D267F0347B_METHOD_1_008C6B9298DBEF5E_OFFSET UNITYSDK_OFFSET(0x17319750)
#define CLASS_1_9DED06D267F0347B_METHOD_1_00B6190E0C730F95_OFFSET UNITYSDK_OFFSET(0x173062E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_00E1BB894D899649_OFFSET UNITYSDK_OFFSET(0x172F1010)
#define CLASS_1_9DED06D267F0347B_METHOD_1_01089DE54F0BD1D3_OFFSET UNITYSDK_OFFSET(0x1730ABC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_01415D3C3D4D48A9_OFFSET UNITYSDK_OFFSET(0x170F8AE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_01487B6FE665818E_OFFSET UNITYSDK_OFFSET(0x172DAD40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0157705812A43826_OFFSET UNITYSDK_OFFSET(0x172D9740)
#define CLASS_1_9DED06D267F0347B_METHOD_1_01AD8A1D7E37D64D_OFFSET UNITYSDK_OFFSET(0x17109360)
#define CLASS_1_9DED06D267F0347B_METHOD_1_01D3B0E514626AEA_OFFSET UNITYSDK_OFFSET(0x172DC320)
#define CLASS_1_9DED06D267F0347B_METHOD_1_021770BA999BD453_OFFSET UNITYSDK_OFFSET(0x170F3120)
#define CLASS_1_9DED06D267F0347B_METHOD_1_021DFD39D20E407C_OFFSET UNITYSDK_OFFSET(0x17322C70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_025327A769F5A4FD_OFFSET UNITYSDK_OFFSET(0x1731CB70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_02A28066F7C7A40B_OFFSET UNITYSDK_OFFSET(0x17119090)
#define CLASS_1_9DED06D267F0347B_METHOD_1_034038EADDA6D3E6_OFFSET UNITYSDK_OFFSET(0x173035C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_035756E480BFE7F5_OFFSET UNITYSDK_OFFSET(0x1731C580)
#define CLASS_1_9DED06D267F0347B_METHOD_1_035D44C494098DB8_OFFSET UNITYSDK_OFFSET(0x1710E200)
#define CLASS_1_9DED06D267F0347B_METHOD_1_03AC71F290048536_OFFSET UNITYSDK_OFFSET(0x172E6110)
#define CLASS_1_9DED06D267F0347B_METHOD_1_03CE0626437E4653_OFFSET UNITYSDK_OFFSET(0x17115510)
#define CLASS_1_9DED06D267F0347B_METHOD_1_04327ACD1BF69E0A_OFFSET UNITYSDK_OFFSET(0x17321360)
#define CLASS_1_9DED06D267F0347B_METHOD_1_043649C97C61D8EA_OFFSET UNITYSDK_OFFSET(0x172DE800)
#define CLASS_1_9DED06D267F0347B_METHOD_1_043F6A732A160196_OFFSET UNITYSDK_OFFSET(0x1752E230)
#define CLASS_1_9DED06D267F0347B_METHOD_1_04F8999B30797C8F_OFFSET UNITYSDK_OFFSET(0x17317510)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0550D52EE0901043_OFFSET UNITYSDK_OFFSET(0x172F5D60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_058B55F04D504C99_OFFSET UNITYSDK_OFFSET(0x170FCCC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_059DB24CA74CDE57_OFFSET UNITYSDK_OFFSET(0x17100890)
#define CLASS_1_9DED06D267F0347B_METHOD_1_05BC85F326807B8D_OFFSET UNITYSDK_OFFSET(0x17319B90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_05BED5382E8D10E7_OFFSET UNITYSDK_OFFSET(0x1731D780)
#define CLASS_1_9DED06D267F0347B_METHOD_1_05EC454AF081C592_OFFSET UNITYSDK_OFFSET(0x17107310)
#define CLASS_1_9DED06D267F0347B_METHOD_1_061D1BBE6B4B5A2A_OFFSET UNITYSDK_OFFSET(0x1710D2C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0642733BC87B7112_OFFSET UNITYSDK_OFFSET(0x17302CE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_065B7AC5D0F56A4A_OFFSET UNITYSDK_OFFSET(0x172DE2A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0672A3E22B6372D2_OFFSET UNITYSDK_OFFSET(0x1730C5F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_06F012121EFA7EDD_OFFSET UNITYSDK_OFFSET(0x172CF920)
#define CLASS_1_9DED06D267F0347B_METHOD_1_07109B292C1CEC5D_OFFSET UNITYSDK_OFFSET(0x172F95F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_071BCD65DEE68BA1_OFFSET UNITYSDK_OFFSET(0x1710F210)
#define CLASS_1_9DED06D267F0347B_METHOD_1_076E1BD1BD6A2F37_OFFSET UNITYSDK_OFFSET(0x1710FCB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_07A7D8756C64E102_OFFSET UNITYSDK_OFFSET(0x172E5410)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0815D20A90812624_OFFSET UNITYSDK_OFFSET(0x17113FD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_08197ABF01E7732B_OFFSET UNITYSDK_OFFSET(0x1731E8E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_08264D07434E83DF_OFFSET UNITYSDK_OFFSET(0x172ED630)
#define CLASS_1_9DED06D267F0347B_METHOD_1_082ED417B9C6D4C9_OFFSET UNITYSDK_OFFSET(0x17110670)
#define CLASS_1_9DED06D267F0347B_METHOD_1_084871A39C3C145C_OFFSET UNITYSDK_OFFSET(0x172D8B20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_086FF6051039B8B3_OFFSET UNITYSDK_OFFSET(0x172E68F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_087DCE2734E8AE1D_OFFSET UNITYSDK_OFFSET(0x172EF540)
#define CLASS_1_9DED06D267F0347B_METHOD_1_08B47C5D1244879D_OFFSET UNITYSDK_OFFSET(0x172DDAB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_08B51998D1E4C426_OFFSET UNITYSDK_OFFSET(0x1730CC60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_090B833F5BBA8447_OFFSET UNITYSDK_OFFSET(0x1731BD00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_093AC186799625CD_OFFSET UNITYSDK_OFFSET(0x170EC830)
#define CLASS_1_9DED06D267F0347B_METHOD_1_099538BECB219A76_OFFSET UNITYSDK_OFFSET(0x172FAF50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_09A460DEEBFE9794_OFFSET UNITYSDK_OFFSET(0x1730B290)
#define CLASS_1_9DED06D267F0347B_METHOD_1_09C01E14037D696D_OFFSET UNITYSDK_OFFSET(0x1752FE90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_09C0CFA722B4EA45_OFFSET UNITYSDK_OFFSET(0x17529A10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_09DDC95B6AA4276B_OFFSET UNITYSDK_OFFSET(0x170ED2C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0A0315593634193B_OFFSET UNITYSDK_OFFSET(0x173141C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0A0AD19BE7C5218F_OFFSET UNITYSDK_OFFSET(0x172EF060)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0A3D7264CD367121_OFFSET UNITYSDK_OFFSET(0x17529B50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0A4F337042F34D56_OFFSET UNITYSDK_OFFSET(0x1752EA60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0A5D280C40A17099_OFFSET UNITYSDK_OFFSET(0x1731B2E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0B2FCB9EFE9175DF_OFFSET UNITYSDK_OFFSET(0x17314120)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0B4EF7F935234091_OFFSET UNITYSDK_OFFSET(0x173037A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0B50677FF5517CE7_OFFSET UNITYSDK_OFFSET(0x172DE150)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0BCFB35AC5D3C094_OFFSET UNITYSDK_OFFSET(0x1752C220)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0BD4ABD74A2D1011_OFFSET UNITYSDK_OFFSET(0x17321490)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0BDFA737EDF79CFC_OFFSET UNITYSDK_OFFSET(0x171188D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0BE1DD694138C292_OFFSET UNITYSDK_OFFSET(0x172E7660)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0CDBB7B7D7DE9E95_OFFSET UNITYSDK_OFFSET(0x17311AC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0CE417F85671B636_OFFSET UNITYSDK_OFFSET(0x172EBAF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0CE5B79BE1E5E0AF_OFFSET UNITYSDK_OFFSET(0x172DB610)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0D38275613BEFEC0_OFFSET UNITYSDK_OFFSET(0x172FA270)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0D66AE56C3EBA7FF_OFFSET UNITYSDK_OFFSET(0x170F12C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0DA33D809AD780AA_OFFSET UNITYSDK_OFFSET(0x172D3AD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0DC758751C664FB0_OFFSET UNITYSDK_OFFSET(0x1731F760)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0DCB201B079071AB_OFFSET UNITYSDK_OFFSET(0x1731CAA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0DDF5A0655924C19_OFFSET UNITYSDK_OFFSET(0x172DA400)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0DFE70239EA3B7BB_OFFSET UNITYSDK_OFFSET(0x172D9920)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0EA83C0F2A9B254E_OFFSET UNITYSDK_OFFSET(0x1752E5E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0ED6231E861EBD2F_OFFSET UNITYSDK_OFFSET(0x172D41D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0EF47C3794C40C47_OFFSET UNITYSDK_OFFSET(0x1731E7D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0F63185E11043941_OFFSET UNITYSDK_OFFSET(0x1710B010)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0F920D4BF4C62FF0_OFFSET UNITYSDK_OFFSET(0x171057E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0F977860575507DA_OFFSET UNITYSDK_OFFSET(0x17106D80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0FB03289B6B443AE_OFFSET UNITYSDK_OFFSET(0x1731D2E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0FB5EE5992E1B978_OFFSET UNITYSDK_OFFSET(0x172E7060)
#define CLASS_1_9DED06D267F0347B_METHOD_1_0FF18ADCB2E46DD5_OFFSET UNITYSDK_OFFSET(0x1710A320)
#define CLASS_1_9DED06D267F0347B_METHOD_1_100FA24B4B7C7580_OFFSET UNITYSDK_OFFSET(0x172F9860)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1010246F74882183_OFFSET UNITYSDK_OFFSET(0x172D44C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_101723072CC55EC0_OFFSET UNITYSDK_OFFSET(0x1731A080)
#define CLASS_1_9DED06D267F0347B_METHOD_1_10916BE79BBFF1C6_OFFSET UNITYSDK_OFFSET(0x172ECB70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_10ACE4851B8B3206_OFFSET UNITYSDK_OFFSET(0x170FA760)
#define CLASS_1_9DED06D267F0347B_METHOD_1_10BF8372A36E7E3B_OFFSET UNITYSDK_OFFSET(0x1731AE60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_114EE5B5D4A57872_OFFSET UNITYSDK_OFFSET(0x17109630)
#define CLASS_1_9DED06D267F0347B_METHOD_1_115F725B481BF486_OFFSET UNITYSDK_OFFSET(0x172D4CB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_117182EB495E104D_OFFSET UNITYSDK_OFFSET(0x172D5070)
#define CLASS_1_9DED06D267F0347B_METHOD_1_118660791D163D8D_OFFSET UNITYSDK_OFFSET(0x170F3300)
#define CLASS_1_9DED06D267F0347B_METHOD_1_119D9F58AEBBA56B_OFFSET UNITYSDK_OFFSET(0x172FBC60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_11A92FE6AEE7A887_OFFSET UNITYSDK_OFFSET(0x17305F20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_11AC1EA5434613E1_OFFSET UNITYSDK_OFFSET(0x170EC880)
#define CLASS_1_9DED06D267F0347B_METHOD_1_122D9A675E398E13_OFFSET UNITYSDK_OFFSET(0x173030E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_126F568F9DA01234_OFFSET UNITYSDK_OFFSET(0x170E4390)
#define CLASS_1_9DED06D267F0347B_METHOD_1_127B4588871323F5_OFFSET UNITYSDK_OFFSET(0x17529610)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1295A120C6BA9FA9_OFFSET UNITYSDK_OFFSET(0x172D3610)
#define CLASS_1_9DED06D267F0347B_METHOD_1_129BC09A720273B5_OFFSET UNITYSDK_OFFSET(0x1731F930)
#define CLASS_1_9DED06D267F0347B_METHOD_1_12F41E05761FCEA3_OFFSET UNITYSDK_OFFSET(0x173180A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_131305C66D89FF0E_OFFSET UNITYSDK_OFFSET(0x17118780)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1376EBB7E44A9B89_OFFSET UNITYSDK_OFFSET(0x173182E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_13855B38DC63B2F6_OFFSET UNITYSDK_OFFSET(0x17109D60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1398185BE38B7F2D_OFFSET UNITYSDK_OFFSET(0x1710B5F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_13C838DCD3B70C18_OFFSET UNITYSDK_OFFSET(0x170E2820)
#define CLASS_1_9DED06D267F0347B_METHOD_1_13E5A682E2131701_OFFSET UNITYSDK_OFFSET(0x172D49B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_141EFB83F004B9BD_OFFSET UNITYSDK_OFFSET(0x17317270)
#define CLASS_1_9DED06D267F0347B_METHOD_1_147E290013CDB2DF_OFFSET UNITYSDK_OFFSET(0x173118E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_14B9DE76B950689C_OFFSET UNITYSDK_OFFSET(0x1731CEA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_15620A3AFC3E243A_OFFSET UNITYSDK_OFFSET(0x172ED920)
#define CLASS_1_9DED06D267F0347B_METHOD_1_157851A1B519F476_OFFSET UNITYSDK_OFFSET(0x17115480)
#define CLASS_1_9DED06D267F0347B_METHOD_1_157D5E77CCCBE2BA_OFFSET UNITYSDK_OFFSET(0x172E2950)
#define CLASS_1_9DED06D267F0347B_METHOD_1_15AA7F8336A61A4A_OFFSET UNITYSDK_OFFSET(0x172DEBA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_15DFF46E0F762A37_OFFSET UNITYSDK_OFFSET(0x1731F410)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1612E9E35D9C7CDE_OFFSET UNITYSDK_OFFSET(0x172F5340)
#define CLASS_1_9DED06D267F0347B_METHOD_1_161FECCF0E0CB44A_OFFSET UNITYSDK_OFFSET(0x173175B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1631CC4D79302AD6_OFFSET UNITYSDK_OFFSET(0x17314110)
#define CLASS_1_9DED06D267F0347B_METHOD_1_164E32B0C45DE279_OFFSET UNITYSDK_OFFSET(0x17313120)
#define CLASS_1_9DED06D267F0347B_METHOD_1_167FB26E2AA3259B_OFFSET UNITYSDK_OFFSET(0x1710F400)
#define CLASS_1_9DED06D267F0347B_METHOD_1_16CA4C1CBAAACC18_OFFSET UNITYSDK_OFFSET(0x1731F9F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_16DF2D86172CBB67_OFFSET UNITYSDK_OFFSET(0x170ED5B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_16EA0FD679CFED2C_OFFSET UNITYSDK_OFFSET(0x1731C610)
#define CLASS_1_9DED06D267F0347B_METHOD_1_171B0F45E868ECF9_OFFSET UNITYSDK_OFFSET(0x172D1B80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_17C4261DB539DE87_OFFSET UNITYSDK_OFFSET(0x172FE2B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_17CF18B8E75DC04F_OFFSET UNITYSDK_OFFSET(0x1731B020)
#define CLASS_1_9DED06D267F0347B_METHOD_1_17DBA0B0F85C8552_OFFSET UNITYSDK_OFFSET(0x1710FA20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1809F43A6EB04880_OFFSET UNITYSDK_OFFSET(0x170F0340)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1823F4729C63FE97_OFFSET UNITYSDK_OFFSET(0x1710FC20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_182D027A9B96A9FD_OFFSET UNITYSDK_OFFSET(0x170EF560)
#define CLASS_1_9DED06D267F0347B_METHOD_1_18319858F4E5C3D2_OFFSET UNITYSDK_OFFSET(0x172FDF20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_186194F0713E6B50_OFFSET UNITYSDK_OFFSET(0x172E05D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1883CBC103A53BF4_OFFSET UNITYSDK_OFFSET(0x17319000)
#define CLASS_1_9DED06D267F0347B_METHOD_1_18C07219CA06BF2F_OFFSET UNITYSDK_OFFSET(0x1710D350)
#define CLASS_1_9DED06D267F0347B_METHOD_1_18D02933E0E993EF_OFFSET UNITYSDK_OFFSET(0x173233E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_194222831CC5BFA8_OFFSET UNITYSDK_OFFSET(0x170E2350)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1980752E946E9A34_OFFSET UNITYSDK_OFFSET(0x17303830)
#define CLASS_1_9DED06D267F0347B_METHOD_1_19B3DD808F99BD41_OFFSET UNITYSDK_OFFSET(0x173231E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_19DD44003ADEC380_OFFSET UNITYSDK_OFFSET(0x170FEC80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1A074319C230E81A_OFFSET UNITYSDK_OFFSET(0x172D60E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1A07FAF24C897A5F_OFFSET UNITYSDK_OFFSET(0x17320A80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1A1CD5C15A6FE689_OFFSET UNITYSDK_OFFSET(0x17529E90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1A2EFC350FC3FBC6_OFFSET UNITYSDK_OFFSET(0x170FA1C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1A9D60B256C09DC4_OFFSET UNITYSDK_OFFSET(0x172F27C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1AA6D04820F8F51C_OFFSET UNITYSDK_OFFSET(0x17311B50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1AE48771CC17139D_OFFSET UNITYSDK_OFFSET(0x172D66B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1B0DB42E14A44311_OFFSET UNITYSDK_OFFSET(0x172E5C40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1B2623870FA7960A_OFFSET UNITYSDK_OFFSET(0x170E59E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1B2BB98219B1B9E5_OFFSET UNITYSDK_OFFSET(0x172EC380)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1B5A2C4C1F1351E7_OFFSET UNITYSDK_OFFSET(0x172DEFC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1B5A6F3EBFB92917_OFFSET UNITYSDK_OFFSET(0x170F1680)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1B5DEE334FC857D9_OFFSET UNITYSDK_OFFSET(0x171114E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1B753EE33C809EA0_OFFSET UNITYSDK_OFFSET(0x1731E730)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1B8B3FE750153E10_OFFSET UNITYSDK_OFFSET(0x1752D7B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1BC5A006C02807D5_OFFSET UNITYSDK_OFFSET(0x17319FE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1BC7B7286B1C268C_OFFSET UNITYSDK_OFFSET(0x170FA3A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1C38EF78E475F267_OFFSET UNITYSDK_OFFSET(0x1752EA20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1C8E8648F405C91B_OFFSET UNITYSDK_OFFSET(0x172EFC70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1C910E4F30DDF223_OFFSET UNITYSDK_OFFSET(0x171053E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1C9D9D0BDA40E993_OFFSET UNITYSDK_OFFSET(0x170ECA20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1CC8438339E45518_OFFSET UNITYSDK_OFFSET(0x1731FA60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1CEE521FF92421F1_OFFSET UNITYSDK_OFFSET(0x170EC920)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1CF0203D2CF72EE9_OFFSET UNITYSDK_OFFSET(0x1731E230)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1CF3E06DFC1F8E10_OFFSET UNITYSDK_OFFSET(0x17307C30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1CFC365AD4B329D1_OFFSET UNITYSDK_OFFSET(0x1730A8F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1D1FCA461B457195_OFFSET UNITYSDK_OFFSET(0x170E3000)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1D76F19611A4099F_OFFSET UNITYSDK_OFFSET(0x17320370)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1D797602181F8C1C_OFFSET UNITYSDK_OFFSET(0x170F9570)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1D8980342F47D9F6_OFFSET UNITYSDK_OFFSET(0x172E66B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1D8FD396F72B46E6_OFFSET UNITYSDK_OFFSET(0x172E4210)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1E0EF079FC31655C_OFFSET UNITYSDK_OFFSET(0x172F2F20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1E1DE6080AB63380_OFFSET UNITYSDK_OFFSET(0x172E6980)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1E377E42B5F4DAB0_OFFSET UNITYSDK_OFFSET(0x17105470)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1E47208A89459B5E_OFFSET UNITYSDK_OFFSET(0x170F72F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1E56FBE9C4014426_OFFSET UNITYSDK_OFFSET(0x17303DD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1E5995A7773EFCE2_OFFSET UNITYSDK_OFFSET(0x172F0F80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1E66CFD0090A9F08_OFFSET UNITYSDK_OFFSET(0x172FB520)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1F078DE579AC0156_OFFSET UNITYSDK_OFFSET(0x1730D3D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1F0C1DD0A70DE81A_OFFSET UNITYSDK_OFFSET(0x17106A10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1F0F90A3C31405A2_OFFSET UNITYSDK_OFFSET(0x172FBA00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1F389CFC1DEE2248_OFFSET UNITYSDK_OFFSET(0x170F8390)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1F59AE46AC7A99A4_OFFSET UNITYSDK_OFFSET(0x17106430)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1F64C515867F0BA6_OFFSET UNITYSDK_OFFSET(0x170F7E90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1F8791FAC07C4DAE_OFFSET UNITYSDK_OFFSET(0x1731C760)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1F9937022F1EFF52_OFFSET UNITYSDK_OFFSET(0x172E4450)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1FCB6CE54285D0C1_OFFSET UNITYSDK_OFFSET(0x17318FF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_1FE9FD4E84FDF458_OFFSET UNITYSDK_OFFSET(0x170EAD90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2012D649E274831B_OFFSET UNITYSDK_OFFSET(0x170FFF10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_205988D3FC045956_OFFSET UNITYSDK_OFFSET(0x1731D080)
#define CLASS_1_9DED06D267F0347B_METHOD_1_20648125986A9BD3_OFFSET UNITYSDK_OFFSET(0x17317F10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_20861141D76DDB34_OFFSET UNITYSDK_OFFSET(0x173142C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_20D7ECF5AE7C888E_OFFSET UNITYSDK_OFFSET(0x172EFBE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_20EEB4CC6377DFC3_OFFSET UNITYSDK_OFFSET(0x172F73E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_219C9842CD253B56_OFFSET UNITYSDK_OFFSET(0x171168A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_21A1FD7F84401D4B_OFFSET UNITYSDK_OFFSET(0x17303FD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_21B627DCA80BA9AC_OFFSET UNITYSDK_OFFSET(0x1752DC70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_21C9174F5B9D033F_OFFSET UNITYSDK_OFFSET(0x17104DB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_21E620D5B9D9AF6C_OFFSET UNITYSDK_OFFSET(0x172DB850)
#define CLASS_1_9DED06D267F0347B_METHOD_1_22232B139EE9119A_OFFSET UNITYSDK_OFFSET(0x170F2C10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_222C071240D1538D_OFFSET UNITYSDK_OFFSET(0x1730C8F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2232EE31F15190F1_OFFSET UNITYSDK_OFFSET(0x17106CF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_227D95AAAB9BAEF6_OFFSET UNITYSDK_OFFSET(0x172D12A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_22A056C6F8007881_OFFSET UNITYSDK_OFFSET(0x1752B610)
#define CLASS_1_9DED06D267F0347B_METHOD_1_22AD76A9BA583810_OFFSET UNITYSDK_OFFSET(0x170FE7C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_22E2A829D2784EA3_OFFSET UNITYSDK_OFFSET(0x171152A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_230C36271BEC5992_OFFSET UNITYSDK_OFFSET(0x17118BE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2314F389E16ACB7C_OFFSET UNITYSDK_OFFSET(0x172DCC40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2316C02821E957A4_OFFSET UNITYSDK_OFFSET(0x1731B620)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2328D063377704E8_OFFSET UNITYSDK_OFFSET(0x1752A340)
#define CLASS_1_9DED06D267F0347B_METHOD_1_232D6CD4FB094F4E_OFFSET UNITYSDK_OFFSET(0x17113200)
#define CLASS_1_9DED06D267F0347B_METHOD_1_23378F0BFC695645_OFFSET UNITYSDK_OFFSET(0x172EB6F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2359F5BD9BC6568F_OFFSET UNITYSDK_OFFSET(0x173153E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_243D8E5FBA54BB2E_OFFSET UNITYSDK_OFFSET(0x1752B3A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2443CAFE1B4B57EC_OFFSET UNITYSDK_OFFSET(0x17311E20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_245A8B7F14CA4855_OFFSET UNITYSDK_OFFSET(0x1752D8D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_248390D5CFF1A8CF_OFFSET UNITYSDK_OFFSET(0x171050B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_24A5972E9263117C_OFFSET UNITYSDK_OFFSET(0x17310F30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_25484159AA618F31_OFFSET UNITYSDK_OFFSET(0x172FA4F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2581CB816C8511C1_OFFSET UNITYSDK_OFFSET(0x172FD2F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_25A35A52B726BAAF_OFFSET UNITYSDK_OFFSET(0x17322DA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_25A6AE35E37C3B62_OFFSET UNITYSDK_OFFSET(0x171105B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_25B2F673DF158849_OFFSET UNITYSDK_OFFSET(0x1731D450)
#define CLASS_1_9DED06D267F0347B_METHOD_1_25CDEC7350B291A6_OFFSET UNITYSDK_OFFSET(0x172F5CD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_25DCE92F15A36C9B_OFFSET UNITYSDK_OFFSET(0x173234A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_26153EE2E425D2A1_OFFSET UNITYSDK_OFFSET(0x17302010)
#define CLASS_1_9DED06D267F0347B_METHOD_1_26274364E52CBC3A_OFFSET UNITYSDK_OFFSET(0x170E8360)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2682545ACB6C1A9C_OFFSET UNITYSDK_OFFSET(0x172E1810)
#define CLASS_1_9DED06D267F0347B_METHOD_1_26CE55DA60F1294C_OFFSET UNITYSDK_OFFSET(0x17115D20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_26DD095132C91B32_OFFSET UNITYSDK_OFFSET(0x172DC7E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_26DDC5BA99CFC744_OFFSET UNITYSDK_OFFSET(0x17100C10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_26ED1DA6D9F5BC93_OFFSET UNITYSDK_OFFSET(0x172E5380)
#define CLASS_1_9DED06D267F0347B_METHOD_1_271D1C9D2F7A54B9_OFFSET UNITYSDK_OFFSET(0x1731D830)
#define CLASS_1_9DED06D267F0347B_METHOD_1_27371183311D8C1D_OFFSET UNITYSDK_OFFSET(0x17323540)
#define CLASS_1_9DED06D267F0347B_METHOD_1_273C50CE8AF93DCB_OFFSET UNITYSDK_OFFSET(0x170F0620)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2747C2FA7299E4D8_OFFSET UNITYSDK_OFFSET(0x1752D0B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_277E7CE42C8CF247_OFFSET UNITYSDK_OFFSET(0x17306A70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_278F59538A502496_OFFSET UNITYSDK_OFFSET(0x172D2F10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_279E14AEB6188BD4_OFFSET UNITYSDK_OFFSET(0x172FA300)
#define CLASS_1_9DED06D267F0347B_METHOD_1_27ACA632054EC11E_OFFSET UNITYSDK_OFFSET(0x172CE950)
#define CLASS_1_9DED06D267F0347B_METHOD_1_27BF7193B7E24CD7_OFFSET UNITYSDK_OFFSET(0x172D7D30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_27D93703579BC1B8_OFFSET UNITYSDK_OFFSET(0x172F4380)
#define CLASS_1_9DED06D267F0347B_METHOD_1_27FBC079E5E9CE24_OFFSET UNITYSDK_OFFSET(0x170F0F50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2807B9FF94613B85_OFFSET UNITYSDK_OFFSET(0x170E2CA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2814500FC2096A12_OFFSET UNITYSDK_OFFSET(0x1752FCD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_282BC4BE6C2B6C37_OFFSET UNITYSDK_OFFSET(0x1731A520)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2889FC3947EC8991_OFFSET UNITYSDK_OFFSET(0x17111450)
#define CLASS_1_9DED06D267F0347B_METHOD_1_288A47C4B7F4BCD9_OFFSET UNITYSDK_OFFSET(0x17321210)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2895015B493F7909_OFFSET UNITYSDK_OFFSET(0x17529250)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2899F39FEF02A1A8_OFFSET UNITYSDK_OFFSET(0x172E3D40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_28B96E6752967983_OFFSET UNITYSDK_OFFSET(0x173173D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_28E8E37654A76612_OFFSET UNITYSDK_OFFSET(0x1731F4C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_28EB6DC683FEE9F6_OFFSET UNITYSDK_OFFSET(0x17316AA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_292A913BF5D925EF_OFFSET UNITYSDK_OFFSET(0x172F3F20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2980415C3A86FEED_OFFSET UNITYSDK_OFFSET(0x17323280)
#define CLASS_1_9DED06D267F0347B_METHOD_1_29CC48C1818157C6_OFFSET UNITYSDK_OFFSET(0x170E7AC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_29E9E6950D74568B_OFFSET UNITYSDK_OFFSET(0x172E0270)
#define CLASS_1_9DED06D267F0347B_METHOD_1_29ED9AFFCCB2CB9A_OFFSET UNITYSDK_OFFSET(0x172F6A30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2A6605B9B44B19FC_OFFSET UNITYSDK_OFFSET(0x170FCD50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2A77BB8289B457DD_OFFSET UNITYSDK_OFFSET(0x17118E60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2A97BF42FDCB5488_OFFSET UNITYSDK_OFFSET(0x172FB220)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2A9E208145AED60C_OFFSET UNITYSDK_OFFSET(0x172F4660)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2AF9C1E1A0B6364F_OFFSET UNITYSDK_OFFSET(0x1731C620)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2BC71AD7CAB4A7D2_OFFSET UNITYSDK_OFFSET(0x17317890)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2BEB4D3D08381AC0_OFFSET UNITYSDK_OFFSET(0x1731C940)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2BEF2EF4AFD2CB42_OFFSET UNITYSDK_OFFSET(0x171195E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2C09F9DD0CB73510_OFFSET UNITYSDK_OFFSET(0x17312AF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2C0B710B94F4AC21_OFFSET UNITYSDK_OFFSET(0x17314530)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2C258A04597CF9CA_OFFSET UNITYSDK_OFFSET(0x170F9030)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2C6691F2917F1B1A_OFFSET UNITYSDK_OFFSET(0x17303980)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2CBF4C15A18BA918_OFFSET UNITYSDK_OFFSET(0x17307830)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2CDC96CE58310CEA_OFFSET UNITYSDK_OFFSET(0x170E1FC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2CE9A38AA4A9177C_OFFSET UNITYSDK_OFFSET(0x170F2F40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2D058119A4549090_OFFSET UNITYSDK_OFFSET(0x17117FE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2D0B4B415333EE50_OFFSET UNITYSDK_OFFSET(0x170E2A40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2D106D2F12E42F02_OFFSET UNITYSDK_OFFSET(0x170F9F00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2D31226F03A3D654_OFFSET UNITYSDK_OFFSET(0x170E75C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2D5ADA5964D8EF09_OFFSET UNITYSDK_OFFSET(0x173195D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2D6FD926C31E2078_OFFSET UNITYSDK_OFFSET(0x1710DB90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2DD057D2E1C49D2D_OFFSET UNITYSDK_OFFSET(0x172D5AC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2DD2FC63BE0D9DEB_OFFSET UNITYSDK_OFFSET(0x170E4C00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2DFB2D22CEE16BBE_OFFSET UNITYSDK_OFFSET(0x1710AAB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2E05A98C3669990B_OFFSET UNITYSDK_OFFSET(0x172DE330)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2E1B7BA8CEADECC3_OFFSET UNITYSDK_OFFSET(0x17323130)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2E1E9FAADAFBEC29_OFFSET UNITYSDK_OFFSET(0x17108600)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2E2128BBE161E7AC_OFFSET UNITYSDK_OFFSET(0x1752A0B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2E2E16E0258002D2_OFFSET UNITYSDK_OFFSET(0x170E65B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2E4A54AC1DEE1787_OFFSET UNITYSDK_OFFSET(0x173228F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2E71548444E0FB04_OFFSET UNITYSDK_OFFSET(0x1731F4B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2E744EA73EFF71F9_OFFSET UNITYSDK_OFFSET(0x172E09B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2EE6A407800CC36C_OFFSET UNITYSDK_OFFSET(0x1731D640)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2F210D590A633B80_OFFSET UNITYSDK_OFFSET(0x17321670)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2F2B25E97AC1A821_OFFSET UNITYSDK_OFFSET(0x17104620)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2F666F0065D275C8_OFFSET UNITYSDK_OFFSET(0x17317080)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2F6D5308EB922E66_OFFSET UNITYSDK_OFFSET(0x173175A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2F7F2E2C6FA5B48C_OFFSET UNITYSDK_OFFSET(0x17529980)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2FAAC7FB0B1DC244_OFFSET UNITYSDK_OFFSET(0x170F8D50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2FAF80DD497C5BBC_OFFSET UNITYSDK_OFFSET(0x17529D60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2FBF7FF528F1B387_OFFSET UNITYSDK_OFFSET(0x170F5340)
#define CLASS_1_9DED06D267F0347B_METHOD_1_2FF9120397F36F8B_OFFSET UNITYSDK_OFFSET(0x172D96B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_300E08BCF7901B0E_OFFSET UNITYSDK_OFFSET(0x1752E4B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3024AFEE66030F22_OFFSET UNITYSDK_OFFSET(0x172D8EC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_30443E2DF67545A5_OFFSET UNITYSDK_OFFSET(0x1731CE10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3051BBA3D1CA4E48_OFFSET UNITYSDK_OFFSET(0x172F5AF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_30663261E33BE926_OFFSET UNITYSDK_OFFSET(0x17110150)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3076F790B92638FA_OFFSET UNITYSDK_OFFSET(0x17104D20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_30BE381EA8E15090_OFFSET UNITYSDK_OFFSET(0x1730BE30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_30DEFCBB371C912A_OFFSET UNITYSDK_OFFSET(0x1711ABA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_30E54D5B62B61A5F_OFFSET UNITYSDK_OFFSET(0x1752A5C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_30F621A5024D7A2D_OFFSET UNITYSDK_OFFSET(0x17308A80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3130ACA06E8BD1E0_OFFSET UNITYSDK_OFFSET(0x17303170)
#define CLASS_1_9DED06D267F0347B_METHOD_1_31C4A03450D4E59C_OFFSET UNITYSDK_OFFSET(0x17300690)
#define CLASS_1_9DED06D267F0347B_METHOD_1_31F3591E820A5D6E_OFFSET UNITYSDK_OFFSET(0x170FA610)
#define CLASS_1_9DED06D267F0347B_METHOD_1_32303AC8713ED932_OFFSET UNITYSDK_OFFSET(0x172D5790)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3251BD6D35273CFF_OFFSET UNITYSDK_OFFSET(0x170F6030)
#define CLASS_1_9DED06D267F0347B_METHOD_1_329B90964E3B6549_OFFSET UNITYSDK_OFFSET(0x17307E10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_33047668AEE99935_OFFSET UNITYSDK_OFFSET(0x172DB010)
#define CLASS_1_9DED06D267F0347B_METHOD_1_33174D87CD917D7A_OFFSET UNITYSDK_OFFSET(0x1731FA70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_33494DCD2C1AC982_OFFSET UNITYSDK_OFFSET(0x17312EB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_334EFD347C14409A_OFFSET UNITYSDK_OFFSET(0x172D6940)
#define CLASS_1_9DED06D267F0347B_METHOD_1_33A272BCA46A02EB_OFFSET UNITYSDK_OFFSET(0x172E2280)
#define CLASS_1_9DED06D267F0347B_METHOD_1_33D389C115350492_OFFSET UNITYSDK_OFFSET(0x172E0C80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_33DC8DC5B5B9A6CA_OFFSET UNITYSDK_OFFSET(0x1752BA80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_33DF1630E6A9759A_OFFSET UNITYSDK_OFFSET(0x172F07B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_341D1A100D7AA91B_OFFSET UNITYSDK_OFFSET(0x17114AA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_34271B7F4BF18310_OFFSET UNITYSDK_OFFSET(0x172F5160)
#define CLASS_1_9DED06D267F0347B_METHOD_1_343702734D743631_OFFSET UNITYSDK_OFFSET(0x17318DE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_347C52BFDF6058A3_OFFSET UNITYSDK_OFFSET(0x17104240)
#define CLASS_1_9DED06D267F0347B_METHOD_1_348B095045242504_OFFSET UNITYSDK_OFFSET(0x1711A260)
#define CLASS_1_9DED06D267F0347B_METHOD_1_348C29F7D9974FEF_OFFSET UNITYSDK_OFFSET(0x173015E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_348E5E9DE0551DC3_OFFSET UNITYSDK_OFFSET(0x17312F40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_34B86501DA129472_OFFSET UNITYSDK_OFFSET(0x170F63F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_34FF95458C6CDD9B_OFFSET UNITYSDK_OFFSET(0x17303A10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3502343B1CCA6C5C_OFFSET UNITYSDK_OFFSET(0x172F48D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_350DA6C925BD9FFF_OFFSET UNITYSDK_OFFSET(0x17311330)
#define CLASS_1_9DED06D267F0347B_METHOD_1_351307CAC4B04A84_OFFSET UNITYSDK_OFFSET(0x17323090)
#define CLASS_1_9DED06D267F0347B_METHOD_1_35390EC53C6C7C30_OFFSET UNITYSDK_OFFSET(0x170ED410)
#define CLASS_1_9DED06D267F0347B_METHOD_1_355A291E70761427_OFFSET UNITYSDK_OFFSET(0x1752BD90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_35B195479FCB3E44_OFFSET UNITYSDK_OFFSET(0x17309CF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_35DFA9ABF0B2D7D7_OFFSET UNITYSDK_OFFSET(0x172EDCF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3616A9CDA4C5190E_OFFSET UNITYSDK_OFFSET(0x172EA510)
#define CLASS_1_9DED06D267F0347B_METHOD_1_37180CE727F3100C_OFFSET UNITYSDK_OFFSET(0x170F8B70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3765F09E1DA8F139_OFFSET UNITYSDK_OFFSET(0x1731EDC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_37BE0359D84CEEAA_OFFSET UNITYSDK_OFFSET(0x17318F50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_37C1C838541F5C17_OFFSET UNITYSDK_OFFSET(0x172DADD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_37D5C66B0A5C6049_OFFSET UNITYSDK_OFFSET(0x1752E550)
#define CLASS_1_9DED06D267F0347B_METHOD_1_385F23EA48E96029_OFFSET UNITYSDK_OFFSET(0x1731B120)
#define CLASS_1_9DED06D267F0347B_METHOD_1_38872846554B187B_OFFSET UNITYSDK_OFFSET(0x17108AC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_38898C22C6430B99_OFFSET UNITYSDK_OFFSET(0x1731B9D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_38B0BF7CE6018493_OFFSET UNITYSDK_OFFSET(0x17312420)
#define CLASS_1_9DED06D267F0347B_METHOD_1_38BA88017389E815_OFFSET UNITYSDK_OFFSET(0x170FE030)
#define CLASS_1_9DED06D267F0347B_METHOD_1_38D7672B14E52185_OFFSET UNITYSDK_OFFSET(0x17118170)
#define CLASS_1_9DED06D267F0347B_METHOD_1_38EC072BC5E2C439_OFFSET UNITYSDK_OFFSET(0x173233F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3909777397355346_OFFSET UNITYSDK_OFFSET(0x17301BC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_390A214A2EFAE2D2_OFFSET UNITYSDK_OFFSET(0x172DBAE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3928B57501EE2350_OFFSET UNITYSDK_OFFSET(0x17323320)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3941135A2D18E617_OFFSET UNITYSDK_OFFSET(0x17100B60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_39424FB0FA888DC6_OFFSET UNITYSDK_OFFSET(0x172EB780)
#define CLASS_1_9DED06D267F0347B_METHOD_1_394B78E3E2FC225A_OFFSET UNITYSDK_OFFSET(0x172D87C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_396D35D441E45045_OFFSET UNITYSDK_OFFSET(0x1752C3B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_39997008EB1A02E8_OFFSET UNITYSDK_OFFSET(0x1731C260)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3A2FE65B5F822B12_OFFSET UNITYSDK_OFFSET(0x172CF2E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3A74717A52B1E1AC_OFFSET UNITYSDK_OFFSET(0x17115210)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3A77BDF97B10D0E9_OFFSET UNITYSDK_OFFSET(0x17119310)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3AFCE419898564A9_OFFSET UNITYSDK_OFFSET(0x172F1400)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3B640AE8C18AB579_OFFSET UNITYSDK_OFFSET(0x172FB190)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3B844F81FFC82B55_OFFSET UNITYSDK_OFFSET(0x17113290)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3BDD512DAF1676BB_OFFSET UNITYSDK_OFFSET(0x1752E6E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3BF9131457BBBA6B_OFFSET UNITYSDK_OFFSET(0x1731CE00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3C26E144959FBE7F_OFFSET UNITYSDK_OFFSET(0x1731A620)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3C2FAF119449F41A_OFFSET UNITYSDK_OFFSET(0x172D9B80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3C910B1043E358AD_OFFSET UNITYSDK_OFFSET(0x1730DAD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3C954919D5206A0D_OFFSET UNITYSDK_OFFSET(0x170F1C30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3CC01C72FC7BFDD4_OFFSET UNITYSDK_OFFSET(0x17322F20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3CD2065F24CFCF42_OFFSET UNITYSDK_OFFSET(0x17307500)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3CD748DF70D4E711_OFFSET UNITYSDK_OFFSET(0x1752EAE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3D0F464492764348_OFFSET UNITYSDK_OFFSET(0x17301190)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3D1ED821A1811348_OFFSET UNITYSDK_OFFSET(0x17322BD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3D1F7761EC02A066_OFFSET UNITYSDK_OFFSET(0x1731E060)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3D2B82CBB66DE4B1_OFFSET UNITYSDK_OFFSET(0x17107280)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3D64A358BF3FA6B6_OFFSET UNITYSDK_OFFSET(0x17309860)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3E3DC037047045F9_OFFSET UNITYSDK_OFFSET(0x170F5A60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3E5D361B994DA2E6_OFFSET UNITYSDK_OFFSET(0x17529C90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3E5DD10ED5F1EA13_OFFSET UNITYSDK_OFFSET(0x170E5DF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3E75831598845134_OFFSET UNITYSDK_OFFSET(0x172EBF80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_1_OFFSET UNITYSDK_OFFSET(0x1711A3B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_2_OFFSET UNITYSDK_OFFSET(0x1711AF90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_3_OFFSET UNITYSDK_OFFSET(0x172E7970)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_4_OFFSET UNITYSDK_OFFSET(0x172ECF40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_5_OFFSET UNITYSDK_OFFSET(0x172F1990)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_6_OFFSET UNITYSDK_OFFSET(0x17316CA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_7_OFFSET UNITYSDK_OFFSET(0x1752A880)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_OFFSET UNITYSDK_OFFSET(0x170EFD10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3EE3A103C638C4B1_OFFSET UNITYSDK_OFFSET(0x1752CF10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3EE8F93AAC81FE64_OFFSET UNITYSDK_OFFSET(0x172DD840)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3F4FD04F6ADF336A_OFFSET UNITYSDK_OFFSET(0x172E0300)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3FC2C9AC51B71989_OFFSET UNITYSDK_OFFSET(0x17306610)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3FCE0D3EC32373D1_OFFSET UNITYSDK_OFFSET(0x172DA490)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3FD40410EEFD8CEC_OFFSET UNITYSDK_OFFSET(0x170E4D40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_3FDDEF7E976C471F_OFFSET UNITYSDK_OFFSET(0x170F5620)
#define CLASS_1_9DED06D267F0347B_METHOD_1_400762C5E15968CA_OFFSET UNITYSDK_OFFSET(0x172E8710)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4036E52C3BDB289F_OFFSET UNITYSDK_OFFSET(0x173206F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_40489E8D54DF2A9C_OFFSET UNITYSDK_OFFSET(0x1752A040)
#define CLASS_1_9DED06D267F0347B_METHOD_1_409DE1F488519B82_OFFSET UNITYSDK_OFFSET(0x1730BAE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_40C1A00457EB450E_OFFSET UNITYSDK_OFFSET(0x1730D150)
#define CLASS_1_9DED06D267F0347B_METHOD_1_40C812105BFCDDB5_OFFSET UNITYSDK_OFFSET(0x1731FE40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_412A3122202B77AF_OFFSET UNITYSDK_OFFSET(0x170F1AE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_414A4691E58B08F5_OFFSET UNITYSDK_OFFSET(0x172F2C30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4150D18B0A23108E_OFFSET UNITYSDK_OFFSET(0x172F4D80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_41A224A3ABA1EECD_OFFSET UNITYSDK_OFFSET(0x17309120)
#define CLASS_1_9DED06D267F0347B_METHOD_1_431318A9FACCD61E_OFFSET UNITYSDK_OFFSET(0x172E56F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_43211AEA0724E1B1_OFFSET UNITYSDK_OFFSET(0x172E75A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_43249A1AAB9ADC1B_OFFSET UNITYSDK_OFFSET(0x17107F70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_432EEA913243DE6F_OFFSET UNITYSDK_OFFSET(0x170FA7F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_433669AAAF7840CC_OFFSET UNITYSDK_OFFSET(0x170E4A30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_43E23326EA882296_OFFSET UNITYSDK_OFFSET(0x172DE770)
#define CLASS_1_9DED06D267F0347B_METHOD_1_43EEF53AE083F185_OFFSET UNITYSDK_OFFSET(0x173084D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_443D0165800D8958_OFFSET UNITYSDK_OFFSET(0x17529710)
#define CLASS_1_9DED06D267F0347B_METHOD_1_446DD86D992A8D3B_OFFSET UNITYSDK_OFFSET(0x17319CF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_44A837D169268849_OFFSET UNITYSDK_OFFSET(0x173208C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_44AF6ACD6D5B01E8_OFFSET UNITYSDK_OFFSET(0x172E1E80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_44FEACC64FBBA0B1_OFFSET UNITYSDK_OFFSET(0x17312B80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_45553060F2C16580_OFFSET UNITYSDK_OFFSET(0x17106F70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4571F0558B8DB5D1_OFFSET UNITYSDK_OFFSET(0x172F2410)
#define CLASS_1_9DED06D267F0347B_METHOD_1_458EC4BBCA7CF50C_OFFSET UNITYSDK_OFFSET(0x172E7360)
#define CLASS_1_9DED06D267F0347B_METHOD_1_459656F5C47E5BE9_OFFSET UNITYSDK_OFFSET(0x172DAAD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_459E860141372156_OFFSET UNITYSDK_OFFSET(0x1752DA10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4619BCE4DA5849C2_OFFSET UNITYSDK_OFFSET(0x17319C50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_46854500BF5D1BFD_OFFSET UNITYSDK_OFFSET(0x172F7D20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4692C2E542B128F8_OFFSET UNITYSDK_OFFSET(0x17107C90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_46D93676DEE41B14_OFFSET UNITYSDK_OFFSET(0x1731F2C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_476018D4271CE0EF_OFFSET UNITYSDK_OFFSET(0x17322650)
#define CLASS_1_9DED06D267F0347B_METHOD_1_47A9420B7D9791F5_OFFSET UNITYSDK_OFFSET(0x1731E850)
#define CLASS_1_9DED06D267F0347B_METHOD_1_47DA8A8C9D0B98E7_OFFSET UNITYSDK_OFFSET(0x17116D90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_48091A6DFA3DCD2B_OFFSET UNITYSDK_OFFSET(0x172F53D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_480B7EFB4DDB6A74_OFFSET UNITYSDK_OFFSET(0x17317330)
#define CLASS_1_9DED06D267F0347B_METHOD_1_489D2FAAC5CA9EE6_OFFSET UNITYSDK_OFFSET(0x1731C1E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_48B8135CCD2FFDDD_1_OFFSET UNITYSDK_OFFSET(0x172ECF90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_48B8135CCD2FFDDD_OFFSET UNITYSDK_OFFSET(0x170EFDA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_48E6ADFA93845395_OFFSET UNITYSDK_OFFSET(0x17529690)
#define CLASS_1_9DED06D267F0347B_METHOD_1_497CF765A0FA0FB0_OFFSET UNITYSDK_OFFSET(0x170F5E50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_49DAAABCDE232283_OFFSET UNITYSDK_OFFSET(0x17117280)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4A088F3DA3F8397F_OFFSET UNITYSDK_OFFSET(0x1710D770)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4A0B2311B587CD6A_OFFSET UNITYSDK_OFFSET(0x17313B50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4A1239F5A26E163F_OFFSET UNITYSDK_OFFSET(0x170FE440)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4A2178BF59A9E8EE_OFFSET UNITYSDK_OFFSET(0x170F2A30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4A2D45FE5C6DFDA1_OFFSET UNITYSDK_OFFSET(0x1711A1D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4A907D82C47BBAE8_OFFSET UNITYSDK_OFFSET(0x172FF5C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4ABD4D00713B6AC0_OFFSET UNITYSDK_OFFSET(0x172EA1A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4ACE5E14D27FD910_OFFSET UNITYSDK_OFFSET(0x17100740)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4ADC335AE0A51CAE_OFFSET UNITYSDK_OFFSET(0x1710B680)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4ADF3A933F1D8BFF_OFFSET UNITYSDK_OFFSET(0x172FC9B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4AE31C6C9F6E6CE4_OFFSET UNITYSDK_OFFSET(0x171093F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4AEAB340808B2099_OFFSET UNITYSDK_OFFSET(0x172D0EA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4B285C6403F2C2D4_OFFSET UNITYSDK_OFFSET(0x17118480)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4B47F0B800B28C1F_OFFSET UNITYSDK_OFFSET(0x17306E40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4B4B09B2649E3CFC_OFFSET UNITYSDK_OFFSET(0x170FE910)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4BDD8B1D7DBFB084_OFFSET UNITYSDK_OFFSET(0x172D8370)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4BFA3280543E2437_OFFSET UNITYSDK_OFFSET(0x1752B430)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4C2C1E81E56D13AA_OFFSET UNITYSDK_OFFSET(0x1731AD60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4C3ECF4575364FD5_OFFSET UNITYSDK_OFFSET(0x17317470)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4C78F5FD4BAF4633_OFFSET UNITYSDK_OFFSET(0x170FA580)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4C9315311E04E857_OFFSET UNITYSDK_OFFSET(0x17319C40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4CADD3893F28620B_OFFSET UNITYSDK_OFFSET(0x173078C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4CC1256DE56DB8E2_OFFSET UNITYSDK_OFFSET(0x172D4FE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4CEF9C39A95A2BD2_OFFSET UNITYSDK_OFFSET(0x172E33E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4CF89D9549507B8B_OFFSET UNITYSDK_OFFSET(0x17303D40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4D1BCE688EF5EEB1_OFFSET UNITYSDK_OFFSET(0x172F51F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4D5004DE0C958640_OFFSET UNITYSDK_OFFSET(0x17301F80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4D6F6BC3C51206AD_OFFSET UNITYSDK_OFFSET(0x170FD870)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4D902EA623164AD6_OFFSET UNITYSDK_OFFSET(0x172EF490)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4DD0BDB829918F9C_OFFSET UNITYSDK_OFFSET(0x170F35F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4DF4965030F2B6C9_OFFSET UNITYSDK_OFFSET(0x1731D8A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4E17471E6D6C4BAF_OFFSET UNITYSDK_OFFSET(0x170F1860)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4E796279FC20F704_OFFSET UNITYSDK_OFFSET(0x172F3BB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4E7D5285172FD692_OFFSET UNITYSDK_OFFSET(0x172E2590)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4E974B70700B0321_OFFSET UNITYSDK_OFFSET(0x17107680)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4E9DACF3CB3AB08F_OFFSET UNITYSDK_OFFSET(0x173161C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4ECE09E3F00A9135_OFFSET UNITYSDK_OFFSET(0x172D6170)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4F0501F59D91B7CE_OFFSET UNITYSDK_OFFSET(0x17300420)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4F22F61BE62BE386_OFFSET UNITYSDK_OFFSET(0x1730C860)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4F26EB62ED05E18E_OFFSET UNITYSDK_OFFSET(0x172DF910)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4F33EB0828BD53E9_OFFSET UNITYSDK_OFFSET(0x172D1900)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4F651B91CF938D03_OFFSET UNITYSDK_OFFSET(0x172D7100)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4FBEC9835E3FD6F3_OFFSET UNITYSDK_OFFSET(0x172DE530)
#define CLASS_1_9DED06D267F0347B_METHOD_1_4FF76285D36CE483_OFFSET UNITYSDK_OFFSET(0x17112A40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_502A1C78535C3FEE_OFFSET UNITYSDK_OFFSET(0x170F9F90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_503D511525E6EBAB_OFFSET UNITYSDK_OFFSET(0x170F7380)
#define CLASS_1_9DED06D267F0347B_METHOD_1_50D78E7CF73D366E_OFFSET UNITYSDK_OFFSET(0x17304B50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_510D1E812738B249_OFFSET UNITYSDK_OFFSET(0x1711AB10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_510E8F9F3485A3A1_OFFSET UNITYSDK_OFFSET(0x172DF1B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5146FEC3ADDF38AA_OFFSET UNITYSDK_OFFSET(0x170FDAE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_51479A91454423BE_OFFSET UNITYSDK_OFFSET(0x17116E20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5150AD26D75D36B9_OFFSET UNITYSDK_OFFSET(0x1752E940)
#define CLASS_1_9DED06D267F0347B_METHOD_1_516E13B362CF3CEF_OFFSET UNITYSDK_OFFSET(0x17101860)
#define CLASS_1_9DED06D267F0347B_METHOD_1_51996C434457C6E1_OFFSET UNITYSDK_OFFSET(0x172F0840)
#define CLASS_1_9DED06D267F0347B_METHOD_1_51EDF7CED791EFE5_OFFSET UNITYSDK_OFFSET(0x175295A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_524AD3A84C64BB2A_OFFSET UNITYSDK_OFFSET(0x170E5520)
#define CLASS_1_9DED06D267F0347B_METHOD_1_52549B54AEA67D3F_OFFSET UNITYSDK_OFFSET(0x1731F8B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_527053D59ACCBC64_OFFSET UNITYSDK_OFFSET(0x170ECE80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_52754401946A97D8_OFFSET UNITYSDK_OFFSET(0x17118200)
#define CLASS_1_9DED06D267F0347B_METHOD_1_52D6336F915ED0F6_OFFSET UNITYSDK_OFFSET(0x1710E700)
#define CLASS_1_9DED06D267F0347B_METHOD_1_52D89A47288F2E5C_OFFSET UNITYSDK_OFFSET(0x172E5970)
#define CLASS_1_9DED06D267F0347B_METHOD_1_52E055324D60B9F5_OFFSET UNITYSDK_OFFSET(0x17529220)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5340986F924D72A2_OFFSET UNITYSDK_OFFSET(0x17529560)
#define CLASS_1_9DED06D267F0347B_METHOD_1_534BBF6C92AF982A_OFFSET UNITYSDK_OFFSET(0x17105BA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_535C94841CD646C0_OFFSET UNITYSDK_OFFSET(0x170E4CA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5369AB9FDD0293FF_OFFSET UNITYSDK_OFFSET(0x172EFF40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_53746D0D64D5F1C2_OFFSET UNITYSDK_OFFSET(0x17314A30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_53C5FA2E5A3BDFFE_OFFSET UNITYSDK_OFFSET(0x17319690)
#define CLASS_1_9DED06D267F0347B_METHOD_1_54078FA65F610763_OFFSET UNITYSDK_OFFSET(0x172D11F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5419122270E2D035_OFFSET UNITYSDK_OFFSET(0x17117E00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5441400C0E4054E9_OFFSET UNITYSDK_OFFSET(0x170F0900)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5441609782DA7167_OFFSET UNITYSDK_OFFSET(0x172D9FA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5460FD2230EF85B1_OFFSET UNITYSDK_OFFSET(0x1731CC10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_547B6833E0352D14_OFFSET UNITYSDK_OFFSET(0x17323080)
#define CLASS_1_9DED06D267F0347B_METHOD_1_548C0DD68853BCDF_OFFSET UNITYSDK_OFFSET(0x172E1100)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5499ECE333E683A5_OFFSET UNITYSDK_OFFSET(0x171100C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_549A234DEA7881DF_OFFSET UNITYSDK_OFFSET(0x17320800)
#define CLASS_1_9DED06D267F0347B_METHOD_1_549DBC514F87E7CF_OFFSET UNITYSDK_OFFSET(0x172DEC30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_54B91AD9B2AD01AA_OFFSET UNITYSDK_OFFSET(0x17101000)
#define CLASS_1_9DED06D267F0347B_METHOD_1_554845972EA49FE4_OFFSET UNITYSDK_OFFSET(0x1752E9A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_556A9D39DE30B9CF_OFFSET UNITYSDK_OFFSET(0x17303650)
#define CLASS_1_9DED06D267F0347B_METHOD_1_556D4C1CC53A7E9D_OFFSET UNITYSDK_OFFSET(0x172D8400)
#define CLASS_1_9DED06D267F0347B_METHOD_1_55C107899BC010B3_OFFSET UNITYSDK_OFFSET(0x17117900)
#define CLASS_1_9DED06D267F0347B_METHOD_1_55DEBE75260ED55B_OFFSET UNITYSDK_OFFSET(0x17318AF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_55F5CB4651722D7A_OFFSET UNITYSDK_OFFSET(0x17108A30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_561BA3AAA89CAD35_OFFSET UNITYSDK_OFFSET(0x1731D820)
#define CLASS_1_9DED06D267F0347B_METHOD_1_56D0FA57948E7E9F_OFFSET UNITYSDK_OFFSET(0x17529B40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5718463C54690C6D_OFFSET UNITYSDK_OFFSET(0x1752D7F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_57638CE271AB7E2A_OFFSET UNITYSDK_OFFSET(0x172E7DA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_577135B274C3CC46_OFFSET UNITYSDK_OFFSET(0x1730A380)
#define CLASS_1_9DED06D267F0347B_METHOD_1_57B3D1B5F653C860_OFFSET UNITYSDK_OFFSET(0x173124B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_57D2149B01CC92A1_OFFSET UNITYSDK_OFFSET(0x1731EA20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_582C79F37ACFD9D3_OFFSET UNITYSDK_OFFSET(0x171186F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5830FE01328547AE_OFFSET UNITYSDK_OFFSET(0x172D10A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_58322C868BFB4122_OFFSET UNITYSDK_OFFSET(0x172D9560)
#define CLASS_1_9DED06D267F0347B_METHOD_1_583BFFA55CF93972_OFFSET UNITYSDK_OFFSET(0x172F7930)
#define CLASS_1_9DED06D267F0347B_METHOD_1_585BC8E511E2DEF0_OFFSET UNITYSDK_OFFSET(0x170F9A10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5861D71F53760E7C_OFFSET UNITYSDK_OFFSET(0x1710B960)
#define CLASS_1_9DED06D267F0347B_METHOD_1_586848E53BB7384D_OFFSET UNITYSDK_OFFSET(0x172F9070)
#define CLASS_1_9DED06D267F0347B_METHOD_1_58D3224A627F149F_OFFSET UNITYSDK_OFFSET(0x172F2E90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_58DC7C0961F7F58F_OFFSET UNITYSDK_OFFSET(0x1731F920)
#define CLASS_1_9DED06D267F0347B_METHOD_1_58FD0DBF7E73B0EE_OFFSET UNITYSDK_OFFSET(0x1710F180)
#define CLASS_1_9DED06D267F0347B_METHOD_1_59449750BB162F6C_OFFSET UNITYSDK_OFFSET(0x172D5F00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_59626BCA16CD7C21_OFFSET UNITYSDK_OFFSET(0x17322C60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_597895C4C49E066A_OFFSET UNITYSDK_OFFSET(0x172D1520)
#define CLASS_1_9DED06D267F0347B_METHOD_1_59FD0634B642C224_OFFSET UNITYSDK_OFFSET(0x1731B3E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_59FD4AC7D783BB68_OFFSET UNITYSDK_OFFSET(0x17300B90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5AA56667D5C64725_OFFSET UNITYSDK_OFFSET(0x17311D90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5ACE2580FB64A994_OFFSET UNITYSDK_OFFSET(0x17300F30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5B061F019AD01A4B_OFFSET UNITYSDK_OFFSET(0x170F25E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5B079E6303B4C6D0_OFFSET UNITYSDK_OFFSET(0x172FA8F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5B1B0B0B17C4A55C_OFFSET UNITYSDK_OFFSET(0x172E4BF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5B2E21249A3E633F_OFFSET UNITYSDK_OFFSET(0x17318160)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5B6DF8312C97BDB2_OFFSET UNITYSDK_OFFSET(0x170FA940)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5B91C246067378F7_OFFSET UNITYSDK_OFFSET(0x17322E60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5BB68049E0B21D1D_OFFSET UNITYSDK_OFFSET(0x172FC1D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5BDB9B0F92C80A20_OFFSET UNITYSDK_OFFSET(0x172F5640)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5BDCA6124D730F1A_OFFSET UNITYSDK_OFFSET(0x17316A10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5BE044FFC1B58FC5_OFFSET UNITYSDK_OFFSET(0x1710AE10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5BEF2CB1D54D28A5_OFFSET UNITYSDK_OFFSET(0x170F0020)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5BFB6638AE90D1F5_OFFSET UNITYSDK_OFFSET(0x17109CD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5C03A9B4F5BD0F06_OFFSET UNITYSDK_OFFSET(0x1731DF90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5C057B9F1F1AA5FF_OFFSET UNITYSDK_OFFSET(0x170F2120)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5C5BD21CAD6BF883_OFFSET UNITYSDK_OFFSET(0x170FABD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5C837AEB22914A03_OFFSET UNITYSDK_OFFSET(0x1752D3F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5C86B33826825707_OFFSET UNITYSDK_OFFSET(0x17322490)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5C952AF669B1D191_OFFSET UNITYSDK_OFFSET(0x172E5A00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5C96FFB52E0A25FA_OFFSET UNITYSDK_OFFSET(0x172ED260)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5CF2FA8ABD1ECA87_OFFSET UNITYSDK_OFFSET(0x1731DB90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5D40241ED1FACB74_OFFSET UNITYSDK_OFFSET(0x17313090)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5DA06E5DE116269A_OFFSET UNITYSDK_OFFSET(0x17304DA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5DA2D9B7E4DD5CC0_OFFSET UNITYSDK_OFFSET(0x172D20B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5DA6DD8841CEC507_OFFSET UNITYSDK_OFFSET(0x17116030)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5DC86C98CB3181A5_OFFSET UNITYSDK_OFFSET(0x172FED60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5DCA08A44EBF1A48_OFFSET UNITYSDK_OFFSET(0x170F6AD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5DDA9742151991AA_OFFSET UNITYSDK_OFFSET(0x17308440)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5E3D6A511F215349_OFFSET UNITYSDK_OFFSET(0x1731EE30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5E5F6897ACF65860_OFFSET UNITYSDK_OFFSET(0x1752CA90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5E74AC5DDE670143_OFFSET UNITYSDK_OFFSET(0x17307F60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5EA1D3451990977D_OFFSET UNITYSDK_OFFSET(0x172EBB80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5EBBB0A0E72BFCF9_OFFSET UNITYSDK_OFFSET(0x170FD2E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5F2CF6DAD74A20F4_OFFSET UNITYSDK_OFFSET(0x1752A650)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5FC131FCA274057B_OFFSET UNITYSDK_OFFSET(0x172D8730)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5FC50CA15A641BCE_OFFSET UNITYSDK_OFFSET(0x17318A50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5FCD8320575A5EA3_OFFSET UNITYSDK_OFFSET(0x170F2850)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5FEFCFFFED07DB2C_OFFSET UNITYSDK_OFFSET(0x171075F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_5FF8BC45283CD50A_OFFSET UNITYSDK_OFFSET(0x17315350)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6065BE1DFDBC6E0D_OFFSET UNITYSDK_OFFSET(0x17319470)
#define CLASS_1_9DED06D267F0347B_METHOD_1_606E465364F3DDAB_OFFSET UNITYSDK_OFFSET(0x172FFF40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_60D0FCCF47535E99_OFFSET UNITYSDK_OFFSET(0x173059A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_60FB1D5B5D71D8FF_OFFSET UNITYSDK_OFFSET(0x172D6F20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_61122A04FE2D20E7_OFFSET UNITYSDK_OFFSET(0x172DC570)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6139492390D0D569_OFFSET UNITYSDK_OFFSET(0x17101480)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6167543F445A7574_OFFSET UNITYSDK_OFFSET(0x173069E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6167AFA04E1C1690_OFFSET UNITYSDK_OFFSET(0x17118DC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_618FC8EAA9C2DD29_OFFSET UNITYSDK_OFFSET(0x17322F30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_61A73A635A777B83_OFFSET UNITYSDK_OFFSET(0x1730BDA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_61AD3E1D1B312F64_OFFSET UNITYSDK_OFFSET(0x17303B60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_61BCE0E148300ED9_OFFSET UNITYSDK_OFFSET(0x172ED180)
#define CLASS_1_9DED06D267F0347B_METHOD_1_61C68AA298E4D88C_OFFSET UNITYSDK_OFFSET(0x170F2090)
#define CLASS_1_9DED06D267F0347B_METHOD_1_61D006A328BF8521_OFFSET UNITYSDK_OFFSET(0x172E8680)
#define CLASS_1_9DED06D267F0347B_METHOD_1_620EA5F096CD0FEA_OFFSET UNITYSDK_OFFSET(0x172EF900)
#define CLASS_1_9DED06D267F0347B_METHOD_1_621709C080A7E5F8_1_OFFSET UNITYSDK_OFFSET(0x172E7F80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_621709C080A7E5F8_2_OFFSET UNITYSDK_OFFSET(0x172EB170)
#define CLASS_1_9DED06D267F0347B_METHOD_1_621709C080A7E5F8_OFFSET UNITYSDK_OFFSET(0x172E13D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_625E0F66867AF18B_OFFSET UNITYSDK_OFFSET(0x172E9100)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6269FA6019073064_OFFSET UNITYSDK_OFFSET(0x1731FB90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_626A1AE75BED9738_OFFSET UNITYSDK_OFFSET(0x172E6CF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_62720F100EA774F5_OFFSET UNITYSDK_OFFSET(0x17320DA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_627E83ABE540626E_OFFSET UNITYSDK_OFFSET(0x1731D6F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_62D3F9127AD76493_OFFSET UNITYSDK_OFFSET(0x175297C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_62E987A3B7A5972D_OFFSET UNITYSDK_OFFSET(0x172F33F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6316917967BEBECB_OFFSET UNITYSDK_OFFSET(0x173226E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_632402E860D58C08_OFFSET UNITYSDK_OFFSET(0x172F6550)
#define CLASS_1_9DED06D267F0347B_METHOD_1_635C0D2A3E349B96_OFFSET UNITYSDK_OFFSET(0x172DE480)
#define CLASS_1_9DED06D267F0347B_METHOD_1_63B7913DC8C9AC6E_OFFSET UNITYSDK_OFFSET(0x1730BB70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_63BD0030280AA40C_OFFSET UNITYSDK_OFFSET(0x173206E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_63DB7B152DC03423_OFFSET UNITYSDK_OFFSET(0x172E62F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6425622595506043_OFFSET UNITYSDK_OFFSET(0x172E0540)
#define CLASS_1_9DED06D267F0347B_METHOD_1_64281D89C655D55E_OFFSET UNITYSDK_OFFSET(0x17308EE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6464A2442BC75A02_OFFSET UNITYSDK_OFFSET(0x1731D4F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_64828F4C5691276A_OFFSET UNITYSDK_OFFSET(0x17529BF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6498F5DAD14DE3B3_OFFSET UNITYSDK_OFFSET(0x172FE3D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_64A7159E234ED1B3_OFFSET UNITYSDK_OFFSET(0x170F29A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_64E9812DAF2B6A94_OFFSET UNITYSDK_OFFSET(0x175297B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_65112798D2B9CD95_OFFSET UNITYSDK_OFFSET(0x170E33D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_65145C9A49024623_OFFSET UNITYSDK_OFFSET(0x1731C6C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_651B0623A532A426_OFFSET UNITYSDK_OFFSET(0x17312780)
#define CLASS_1_9DED06D267F0347B_METHOD_1_655A39ADDDEAD2A9_OFFSET UNITYSDK_OFFSET(0x173027A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_65619281ADAE5EB4_OFFSET UNITYSDK_OFFSET(0x170F9980)
#define CLASS_1_9DED06D267F0347B_METHOD_1_658A230FF68272BF_OFFSET UNITYSDK_OFFSET(0x17315C60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6599B5CD398D02C6_OFFSET UNITYSDK_OFFSET(0x170E1B50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_659CC03734643F91_OFFSET UNITYSDK_OFFSET(0x172F78A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_659D573C292393DF_OFFSET UNITYSDK_OFFSET(0x1730E520)
#define CLASS_1_9DED06D267F0347B_METHOD_1_65EA9530AEEFB3CC_OFFSET UNITYSDK_OFFSET(0x1752E620)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6626940828AF1B9A_OFFSET UNITYSDK_OFFSET(0x1731CF40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_663B50F9A09FA996_OFFSET UNITYSDK_OFFSET(0x172FFD60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6675B3F598339C20_OFFSET UNITYSDK_OFFSET(0x172DF240)
#define CLASS_1_9DED06D267F0347B_METHOD_1_673FC7775A5BF1AF_OFFSET UNITYSDK_OFFSET(0x175291F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_675BCBC480629A48_OFFSET UNITYSDK_OFFSET(0x1731CCA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6766443E3ECE989A_OFFSET UNITYSDK_OFFSET(0x172E6C60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_677BB5DECDB2EF1C_OFFSET UNITYSDK_OFFSET(0x1731E400)
#define CLASS_1_9DED06D267F0347B_METHOD_1_678B897906FC428E_OFFSET UNITYSDK_OFFSET(0x170F8720)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6803B31349449CDF_OFFSET UNITYSDK_OFFSET(0x172E4180)
#define CLASS_1_9DED06D267F0347B_METHOD_1_683A3CA3FF6717AE_OFFSET UNITYSDK_OFFSET(0x17308B10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_687BC6D8A57BE6FC_OFFSET UNITYSDK_OFFSET(0x1731FDD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_687E57D25A1149C3_OFFSET UNITYSDK_OFFSET(0x17116BB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6890F26B31FB5440_OFFSET UNITYSDK_OFFSET(0x170F3C70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_68B6688187A4642C_OFFSET UNITYSDK_OFFSET(0x17312060)
#define CLASS_1_9DED06D267F0347B_METHOD_1_68EF654DD5FE7EFD_OFFSET UNITYSDK_OFFSET(0x1731EE40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6912719F4561B9CF_OFFSET UNITYSDK_OFFSET(0x17321CD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_691F5C0677B76E97_OFFSET UNITYSDK_OFFSET(0x170E3F50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_693742B1E897FAE7_OFFSET UNITYSDK_OFFSET(0x172F4A20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_69619C6FED757F9D_OFFSET UNITYSDK_OFFSET(0x17308740)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6965DBB62CE1814D_OFFSET UNITYSDK_OFFSET(0x17314840)
#define CLASS_1_9DED06D267F0347B_METHOD_1_696A30B01FD6FDEC_OFFSET UNITYSDK_OFFSET(0x170E4D90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_696F7E4EAF6255AC_OFFSET UNITYSDK_OFFSET(0x1752BF80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6A364CEEF299CA0C_OFFSET UNITYSDK_OFFSET(0x1752C2F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6ACFF15EB29CB6C1_OFFSET UNITYSDK_OFFSET(0x170F7B40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6AEB242F7EB08981_OFFSET UNITYSDK_OFFSET(0x1752E390)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6AFE4D936C118C51_OFFSET UNITYSDK_OFFSET(0x173136C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6B12C741DB2123B1_OFFSET UNITYSDK_OFFSET(0x172E0BF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6B18C6D2725EC74F_OFFSET UNITYSDK_OFFSET(0x170F90C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6B312CF4512C9555_OFFSET UNITYSDK_OFFSET(0x170FF9A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6B314CFF04323F13_OFFSET UNITYSDK_OFFSET(0x171078D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6B47911EED8EAF2E_OFFSET UNITYSDK_OFFSET(0x172D6CB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6B5A31E1AFECB4FB_OFFSET UNITYSDK_OFFSET(0x17320F70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6B7A68C4E45D55D3_OFFSET UNITYSDK_OFFSET(0x172D4DA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6C44089D224AF87C_OFFSET UNITYSDK_OFFSET(0x1730A110)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6C83476CD4D32176_OFFSET UNITYSDK_OFFSET(0x17304340)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6C95F6721503E315_OFFSET UNITYSDK_OFFSET(0x172E5010)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6D05E29C839EB54C_OFFSET UNITYSDK_OFFSET(0x172F20C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6D69A21E4DCAF8B2_OFFSET UNITYSDK_OFFSET(0x170FDE50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6D9CA04B454ADA0D_OFFSET UNITYSDK_OFFSET(0x172CFF70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6DAF871BA7835B21_OFFSET UNITYSDK_OFFSET(0x17307470)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6DBD99AF717A8069_OFFSET UNITYSDK_OFFSET(0x171046B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6E00808DFC73B9A6_OFFSET UNITYSDK_OFFSET(0x1731C090)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6E0A0295D7E94AB8_OFFSET UNITYSDK_OFFSET(0x1710CC70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6E3619E8814EB7CC_OFFSET UNITYSDK_OFFSET(0x172DDD30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6E39602EB0AFD0BA_OFFSET UNITYSDK_OFFSET(0x173112A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6E6EBEA4B7B1299C_OFFSET UNITYSDK_OFFSET(0x1752E500)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6E8367B1F7E3BBD9_OFFSET UNITYSDK_OFFSET(0x17118B50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6E9C21F5D38540BA_OFFSET UNITYSDK_OFFSET(0x17317460)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6EA840A9010BD89F_OFFSET UNITYSDK_OFFSET(0x172DF550)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6EAA36B44D470FE6_OFFSET UNITYSDK_OFFSET(0x170F2670)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6EEEC50B400EBA97_OFFSET UNITYSDK_OFFSET(0x17103F50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6F53F2C4628CB52A_OFFSET UNITYSDK_OFFSET(0x170E7750)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6F62977FF6562DED_OFFSET UNITYSDK_OFFSET(0x17111140)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6F9458B9DFB3D5D0_OFFSET UNITYSDK_OFFSET(0x172DD3F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6FB80EA0E5B0D538_OFFSET UNITYSDK_OFFSET(0x1730B660)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6FC1945840AD48A2_OFFSET UNITYSDK_OFFSET(0x172E1B00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_6FCDBC05855FAF68_OFFSET UNITYSDK_OFFSET(0x17307D80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_702C75355085AEC7_OFFSET UNITYSDK_OFFSET(0x172F0BB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_70578C9F29207F60_OFFSET UNITYSDK_OFFSET(0x1752E7A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_705797E5119854B5_OFFSET UNITYSDK_OFFSET(0x170F6B60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_70AC0B7542DAD65C_OFFSET UNITYSDK_OFFSET(0x172F1600)
#define CLASS_1_9DED06D267F0347B_METHOD_1_70BA63B527D44E99_OFFSET UNITYSDK_OFFSET(0x173221C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_717520899DFB59C9_OFFSET UNITYSDK_OFFSET(0x170FDA50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7188E6D0455E9B9D_OFFSET UNITYSDK_OFFSET(0x170F03D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_71BDDD75009CE7EE_OFFSET UNITYSDK_OFFSET(0x17100920)
#define CLASS_1_9DED06D267F0347B_METHOD_1_72A452B690D085BE_OFFSET UNITYSDK_OFFSET(0x172F4AB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_72AA7D8722ED3882_OFFSET UNITYSDK_OFFSET(0x172D63E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_72B391C53462A047_OFFSET UNITYSDK_OFFSET(0x172D8550)
#define CLASS_1_9DED06D267F0347B_METHOD_1_72C03938FAA78DE2_OFFSET UNITYSDK_OFFSET(0x170E1C40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_72CE5A3944BA71BE_OFFSET UNITYSDK_OFFSET(0x172F9680)
#define CLASS_1_9DED06D267F0347B_METHOD_1_731CC9810A7749A7_OFFSET UNITYSDK_OFFSET(0x171096C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_734C93C2254EFBF6_OFFSET UNITYSDK_OFFSET(0x172E64D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_734EC280BB876614_OFFSET UNITYSDK_OFFSET(0x172D1ED0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_735C3696118D169D_OFFSET UNITYSDK_OFFSET(0x170FED10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7392B17A038AF4DD_OFFSET UNITYSDK_OFFSET(0x17322FF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_73983B5BEC62008A_OFFSET UNITYSDK_OFFSET(0x17529FB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_739B547F70570079_OFFSET UNITYSDK_OFFSET(0x17106980)
#define CLASS_1_9DED06D267F0347B_METHOD_1_73E10E197958D0C4_OFFSET UNITYSDK_OFFSET(0x172F8DA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_73F04E8E2494ECF9_OFFSET UNITYSDK_OFFSET(0x172F64C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_743BD67D6A1B7CF3_OFFSET UNITYSDK_OFFSET(0x173204B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_74B4AB4DAA70BDFB_OFFSET UNITYSDK_OFFSET(0x1731C890)
#define CLASS_1_9DED06D267F0347B_METHOD_1_74B7602817576928_OFFSET UNITYSDK_OFFSET(0x170FFE60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_74E3EDA2F5708BD0_OFFSET UNITYSDK_OFFSET(0x1731E690)
#define CLASS_1_9DED06D267F0347B_METHOD_1_756640154C9C5AF4_OFFSET UNITYSDK_OFFSET(0x172E0920)
#define CLASS_1_9DED06D267F0347B_METHOD_1_75B8DA5BECA7C71F_OFFSET UNITYSDK_OFFSET(0x172D1C30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_75E0EF90E916D203_OFFSET UNITYSDK_OFFSET(0x17300FC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_76108E9BFB484C6C_OFFSET UNITYSDK_OFFSET(0x172ED550)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7636CE961670D9C7_OFFSET UNITYSDK_OFFSET(0x172E5EA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7658EFDE9102BF71_OFFSET UNITYSDK_OFFSET(0x1752D860)
#define CLASS_1_9DED06D267F0347B_METHOD_1_765AE63804D12C97_OFFSET UNITYSDK_OFFSET(0x1730EFD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_76FCFA1F5B75AA2B_OFFSET UNITYSDK_OFFSET(0x1730A2F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_77732773CAE69F8C_OFFSET UNITYSDK_OFFSET(0x170F9750)
#define CLASS_1_9DED06D267F0347B_METHOD_1_77ED26DC755153C0_OFFSET UNITYSDK_OFFSET(0x170F4910)
#define CLASS_1_9DED06D267F0347B_METHOD_1_77FD362630DAC3FD_OFFSET UNITYSDK_OFFSET(0x17323120)
#define CLASS_1_9DED06D267F0347B_METHOD_1_78673577AAFC4669_OFFSET UNITYSDK_OFFSET(0x172F8A40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_788071B4DD58DB75_OFFSET UNITYSDK_OFFSET(0x17110DD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_789DD059F7D31BE3_OFFSET UNITYSDK_OFFSET(0x1731CEB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_78B07BC22C3B2038_OFFSET UNITYSDK_OFFSET(0x1730CED0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_78BDEED6810F4481_OFFSET UNITYSDK_OFFSET(0x172FCFB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7923BA872C7C1F39_OFFSET UNITYSDK_OFFSET(0x170F7660)
#define CLASS_1_9DED06D267F0347B_METHOD_1_794B31942E9E9258_OFFSET UNITYSDK_OFFSET(0x170FD900)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7992F87611800E69_OFFSET UNITYSDK_OFFSET(0x1731E2D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_79AB020DD0859779_OFFSET UNITYSDK_OFFSET(0x172F4840)
#define CLASS_1_9DED06D267F0347B_METHOD_1_79DED0C8A4C471D6_OFFSET UNITYSDK_OFFSET(0x1710B400)
#define CLASS_1_9DED06D267F0347B_METHOD_1_79F08B8F3ADA2D78_OFFSET UNITYSDK_OFFSET(0x1730AC50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7A177686D02510E3_OFFSET UNITYSDK_OFFSET(0x170F4C50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7A22549F4C62F6E5_OFFSET UNITYSDK_OFFSET(0x1752E280)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7A23EC28D7FD16D2_OFFSET UNITYSDK_OFFSET(0x1752A590)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7A27E7D0610E9BD2_OFFSET UNITYSDK_OFFSET(0x17317970)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7A8A97B06BF67157_OFFSET UNITYSDK_OFFSET(0x17320410)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7AA1FF0FE60C4B5F_OFFSET UNITYSDK_OFFSET(0x17304E30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7AB6117CDE418C85_OFFSET UNITYSDK_OFFSET(0x17320790)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7B0BD0D00C01EED6_OFFSET UNITYSDK_OFFSET(0x172F9DB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7B0F9CBC7B0600F4_OFFSET UNITYSDK_OFFSET(0x17116300)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7B47DE64CE776BD5_OFFSET UNITYSDK_OFFSET(0x175298F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7B4EDA37C02FE503_OFFSET UNITYSDK_OFFSET(0x172FC6E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7B58BF3B32AEDFA5_OFFSET UNITYSDK_OFFSET(0x17323330)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7B6708ECBBF078D0_OFFSET UNITYSDK_OFFSET(0x17305720)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7B7832C988D5B945_OFFSET UNITYSDK_OFFSET(0x170FEF90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7BB4D4595681ACB8_OFFSET UNITYSDK_OFFSET(0x171193A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7BE30A428929BF25_OFFSET UNITYSDK_OFFSET(0x1710C320)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7BEF2DBEAB3AD3A2_OFFSET UNITYSDK_OFFSET(0x172F6850)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7BF41C9CDBD70527_OFFSET UNITYSDK_OFFSET(0x1710E290)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7BF7D447870A6D40_OFFSET UNITYSDK_OFFSET(0x172D6E90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7C35DE50837EA4CD_OFFSET UNITYSDK_OFFSET(0x1730E890)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7C9D531D632D40B5_OFFSET UNITYSDK_OFFSET(0x173097D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7CDABEC50F1BADD1_OFFSET UNITYSDK_OFFSET(0x172FA860)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7CE253EB6EBC75DF_OFFSET UNITYSDK_OFFSET(0x172CEE50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7D3149FFF5C427C1_OFFSET UNITYSDK_OFFSET(0x1731DA20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7D325C6D05F6600C_OFFSET UNITYSDK_OFFSET(0x17315CF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7D478A2C3ECCFD1F_OFFSET UNITYSDK_OFFSET(0x17529990)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7DA2273CE092FB2D_OFFSET UNITYSDK_OFFSET(0x17322DB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7DBE6B9AA4A241D7_OFFSET UNITYSDK_OFFSET(0x172F2850)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7DC89CAD9F8A4DAE_OFFSET UNITYSDK_OFFSET(0x1710A050)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7DDABC27470F356E_OFFSET UNITYSDK_OFFSET(0x172F0180)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7DDBB09B17C2D141_OFFSET UNITYSDK_OFFSET(0x172F84C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7DEFE5F0AA4A1927_OFFSET UNITYSDK_OFFSET(0x17109210)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7DF6B3D0710F747B_OFFSET UNITYSDK_OFFSET(0x172F6070)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7E02F8631DA16F65_OFFSET UNITYSDK_OFFSET(0x1710CD00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7E5004F7EC315AE0_OFFSET UNITYSDK_OFFSET(0x17319530)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7E59668EE3882D59_OFFSET UNITYSDK_OFFSET(0x1731EAA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7E732C2E032619FF_OFFSET UNITYSDK_OFFSET(0x172F1C80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7E77177D17C443C0_OFFSET UNITYSDK_OFFSET(0x170F17D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7E96383A88F6BF4A_OFFSET UNITYSDK_OFFSET(0x170E4E30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7E97654CA20283B4_OFFSET UNITYSDK_OFFSET(0x1731CC00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7E9DAF2F0F43A5BF_OFFSET UNITYSDK_OFFSET(0x170F1EB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7EAC21E8CD0703F4_OFFSET UNITYSDK_OFFSET(0x172D01E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7EC336AC4B46F641_OFFSET UNITYSDK_OFFSET(0x170F0D00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7ECA727A3BD964B3_OFFSET UNITYSDK_OFFSET(0x170F3A90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7F21E184F07EAB70_OFFSET UNITYSDK_OFFSET(0x172EE560)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7F4AAAC1EC456904_OFFSET UNITYSDK_OFFSET(0x17318240)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7F4AC70A41A0E57C_OFFSET UNITYSDK_OFFSET(0x17112240)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7F898FD54459124B_OFFSET UNITYSDK_OFFSET(0x170E4C50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7FA4744A6BD92868_OFFSET UNITYSDK_OFFSET(0x17321F20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_7FDDB3FCC47B484B_OFFSET UNITYSDK_OFFSET(0x1752E320)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8007292710860C80_OFFSET UNITYSDK_OFFSET(0x1710BF90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8044A69880018BA2_OFFSET UNITYSDK_OFFSET(0x17320010)
#define CLASS_1_9DED06D267F0347B_METHOD_1_806A55171EA380FD_OFFSET UNITYSDK_OFFSET(0x172F9410)
#define CLASS_1_9DED06D267F0347B_METHOD_1_808005E4E700461E_OFFSET UNITYSDK_OFFSET(0x170F67B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_808D67FCECCAD9CE_OFFSET UNITYSDK_OFFSET(0x1731E740)
#define CLASS_1_9DED06D267F0347B_METHOD_1_80F17DFBF146FA44_OFFSET UNITYSDK_OFFSET(0x170EDF30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8117C814526671EE_OFFSET UNITYSDK_OFFSET(0x1730A4D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8154DFA834013E25_OFFSET UNITYSDK_OFFSET(0x17307BA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_819CF9B404806DB2_OFFSET UNITYSDK_OFFSET(0x17311970)
#define CLASS_1_9DED06D267F0347B_METHOD_1_81BC32A5D9D43AED_OFFSET UNITYSDK_OFFSET(0x1711A720)
#define CLASS_1_9DED06D267F0347B_METHOD_1_81C002CCCEF22E32_OFFSET UNITYSDK_OFFSET(0x172D6620)
#define CLASS_1_9DED06D267F0347B_METHOD_1_81F63EC3AE03D9B2_OFFSET UNITYSDK_OFFSET(0x172DFDE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8220396FB81967BC_OFFSET UNITYSDK_OFFSET(0x170FCA80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_822C7E9989DCBB49_OFFSET UNITYSDK_OFFSET(0x173021F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_82335FA2E403328F_OFFSET UNITYSDK_OFFSET(0x172E96E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_823B07ADF76AA4B4_OFFSET UNITYSDK_OFFSET(0x17111C50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8249C41F6FD7A6DE_OFFSET UNITYSDK_OFFSET(0x170E6820)
#define CLASS_1_9DED06D267F0347B_METHOD_1_825B2DFE10391584_OFFSET UNITYSDK_OFFSET(0x17302A70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_827DE00A979C0378_OFFSET UNITYSDK_OFFSET(0x172D36A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_82B67930CB677C40_OFFSET UNITYSDK_OFFSET(0x1730F080)
#define CLASS_1_9DED06D267F0347B_METHOD_1_82F137E52733B8FA_OFFSET UNITYSDK_OFFSET(0x1731FAE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8300B5053AA6704C_OFFSET UNITYSDK_OFFSET(0x1710C970)
#define CLASS_1_9DED06D267F0347B_METHOD_1_83104D9D616DFD6B_OFFSET UNITYSDK_OFFSET(0x1752EAA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8311278F54996E03_OFFSET UNITYSDK_OFFSET(0x170E24C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8321050FBD6702ED_OFFSET UNITYSDK_OFFSET(0x170EFA20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8325EE0CDEA73984_OFFSET UNITYSDK_OFFSET(0x17528DE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_833448A32EEA6A3A_OFFSET UNITYSDK_OFFSET(0x1710D6E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_83750F591ED54DEB_OFFSET UNITYSDK_OFFSET(0x17101090)
#define CLASS_1_9DED06D267F0347B_METHOD_1_837C4560D1F17C3E_OFFSET UNITYSDK_OFFSET(0x172FABC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_839DBD7390DDAB87_OFFSET UNITYSDK_OFFSET(0x172E44E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_83C331D0751BE5AB_OFFSET UNITYSDK_OFFSET(0x170E4CF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_83DAED6DE046FE66_OFFSET UNITYSDK_OFFSET(0x170FF450)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8400CA73D281325D_OFFSET UNITYSDK_OFFSET(0x17529720)
#define CLASS_1_9DED06D267F0347B_METHOD_1_84511971C8657FE9_OFFSET UNITYSDK_OFFSET(0x1710EF00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_84D0EFBEA2F1B4B8_OFFSET UNITYSDK_OFFSET(0x173025C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_84F5241D92DD34E3_OFFSET UNITYSDK_OFFSET(0x172F68E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8527C7E310829379_OFFSET UNITYSDK_OFFSET(0x1710EB90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_852FB1A5120D2EF4_OFFSET UNITYSDK_OFFSET(0x170F59D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_85422902C47BD856_OFFSET UNITYSDK_OFFSET(0x173191F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8546978A2E88E1D8_OFFSET UNITYSDK_OFFSET(0x172E9190)
#define CLASS_1_9DED06D267F0347B_METHOD_1_85582ED91335C36D_OFFSET UNITYSDK_OFFSET(0x17108F00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_85BC9005DD1BF5B1_OFFSET UNITYSDK_OFFSET(0x172E2500)
#define CLASS_1_9DED06D267F0347B_METHOD_1_85C56F115AAC3000_OFFSET UNITYSDK_OFFSET(0x1752E660)
#define CLASS_1_9DED06D267F0347B_METHOD_1_85CF8E854447F24A_OFFSET UNITYSDK_OFFSET(0x17529F40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_85DB57B26550C3B0_OFFSET UNITYSDK_OFFSET(0x17304850)
#define CLASS_1_9DED06D267F0347B_METHOD_1_861C24D0359E8DEE_OFFSET UNITYSDK_OFFSET(0x170F4000)
#define CLASS_1_9DED06D267F0347B_METHOD_1_863F85134BAD4031_OFFSET UNITYSDK_OFFSET(0x1731ED00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_86445BB90CA1EF97_OFFSET UNITYSDK_OFFSET(0x172F8D10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_86814B81367C7A56_OFFSET UNITYSDK_OFFSET(0x170E6730)
#define CLASS_1_9DED06D267F0347B_METHOD_1_86BE90C8996584F8_OFFSET UNITYSDK_OFFSET(0x1731FB80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_870E75E3F239E825_OFFSET UNITYSDK_OFFSET(0x170FE730)
#define CLASS_1_9DED06D267F0347B_METHOD_1_871BF451CE165DE5_OFFSET UNITYSDK_OFFSET(0x1731E7E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_87364B85CB5869A8_OFFSET UNITYSDK_OFFSET(0x173157F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_873C6C0557B62810_OFFSET UNITYSDK_OFFSET(0x17314D20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_877A2BC870B7161C_OFFSET UNITYSDK_OFFSET(0x17113960)
#define CLASS_1_9DED06D267F0347B_METHOD_1_87915A87C69AB82D_OFFSET UNITYSDK_OFFSET(0x172F3780)
#define CLASS_1_9DED06D267F0347B_METHOD_1_87DE33E3455D58F9_OFFSET UNITYSDK_OFFSET(0x172D6890)
#define CLASS_1_9DED06D267F0347B_METHOD_1_88014D35F2C5A487_OFFSET UNITYSDK_OFFSET(0x170F2B80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8848A553AAEEE455_OFFSET UNITYSDK_OFFSET(0x170F2FD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_887466B711DDCCDF_OFFSET UNITYSDK_OFFSET(0x172D0DF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_88C1A3EE425D8F28_OFFSET UNITYSDK_OFFSET(0x17114A10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_88C354BE6B39FF1D_OFFSET UNITYSDK_OFFSET(0x1731B480)
#define CLASS_1_9DED06D267F0347B_METHOD_1_88C758C39D504975_OFFSET UNITYSDK_OFFSET(0x17106150)
#define CLASS_1_9DED06D267F0347B_METHOD_1_88D61F24E99D3182_OFFSET UNITYSDK_OFFSET(0x170F6E80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_88DD1A81F98C4248_OFFSET UNITYSDK_OFFSET(0x1731FC10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8901C8498EC3AFE3_OFFSET UNITYSDK_OFFSET(0x1731A360)
#define CLASS_1_9DED06D267F0347B_METHOD_1_890D773E9C8FB0F3_OFFSET UNITYSDK_OFFSET(0x172EA110)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8911B8B6059B8DDB_OFFSET UNITYSDK_OFFSET(0x172E8420)
#define CLASS_1_9DED06D267F0347B_METHOD_1_893FE66B77071488_OFFSET UNITYSDK_OFFSET(0x171122D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8944FBFB02584E62_OFFSET UNITYSDK_OFFSET(0x1710B0A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_894EA22A5033AD8D_OFFSET UNITYSDK_OFFSET(0x17301E30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8951E36307FD442D_OFFSET UNITYSDK_OFFSET(0x172D7B40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8977EAF37FEA092B_OFFSET UNITYSDK_OFFSET(0x172D15D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_89BDCEA2C5697747_OFFSET UNITYSDK_OFFSET(0x172E5660)
#define CLASS_1_9DED06D267F0347B_METHOD_1_89EF586ECB238879_OFFSET UNITYSDK_OFFSET(0x170FDDC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8A02A8A510D55B28_OFFSET UNITYSDK_OFFSET(0x170E2600)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8A3704CFC60CAB90_OFFSET UNITYSDK_OFFSET(0x172DA860)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8A4EC68E6945BFC7_OFFSET UNITYSDK_OFFSET(0x170F44A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8AB1D04F0CC46178_OFFSET UNITYSDK_OFFSET(0x1710C290)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8ABD87BE52B0DB7A_OFFSET UNITYSDK_OFFSET(0x1710E480)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8B3C737B57B12F0A_OFFSET UNITYSDK_OFFSET(0x17316130)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8B57260309AEA9EF_OFFSET UNITYSDK_OFFSET(0x17310FC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8B7CDD538F97985B_OFFSET UNITYSDK_OFFSET(0x17319460)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8BA0899BCDB3140E_OFFSET UNITYSDK_OFFSET(0x17115030)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8BBA62A0E1051270_OFFSET UNITYSDK_OFFSET(0x17312D60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8BBD4E8D8298F445_OFFSET UNITYSDK_OFFSET(0x1730D340)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8BEDE95ACB6047A3_OFFSET UNITYSDK_OFFSET(0x1731B790)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8BEF3E71FDF9684A_OFFSET UNITYSDK_OFFSET(0x17311570)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8C863EBC256F6F8E_OFFSET UNITYSDK_OFFSET(0x17306250)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8C95650567F4C4BA_OFFSET UNITYSDK_OFFSET(0x172EFEB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8CA0371C76095050_OFFSET UNITYSDK_OFFSET(0x17529F30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8CAD078E87268638_OFFSET UNITYSDK_OFFSET(0x170F7960)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8CD2884BE207DB23_OFFSET UNITYSDK_OFFSET(0x171003D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8D07A46D9A3AD6A1_OFFSET UNITYSDK_OFFSET(0x17115790)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8D0D7178DDF909D0_OFFSET UNITYSDK_OFFSET(0x170EC280)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8D1DEE4A05EBAE3D_OFFSET UNITYSDK_OFFSET(0x1730C680)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8D3054607CCE3B72_OFFSET UNITYSDK_OFFSET(0x170F3A00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8D890CC4DAF4D318_OFFSET UNITYSDK_OFFSET(0x173001A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8D965B7761F034B4_OFFSET UNITYSDK_OFFSET(0x172D07D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8DC1C3D903FEDB7A_OFFSET UNITYSDK_OFFSET(0x172E5CD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8DE1262782F638D7_OFFSET UNITYSDK_OFFSET(0x1731D250)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8DE64CB94F86EB63_OFFSET UNITYSDK_OFFSET(0x17105750)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8EB1A146C942612B_OFFSET UNITYSDK_OFFSET(0x1730B6F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8EC264BDFCE30C29_OFFSET UNITYSDK_OFFSET(0x17118FD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8EDAB3FD2D0C612B_OFFSET UNITYSDK_OFFSET(0x17107C00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8F16C8A2FBD08D1D_OFFSET UNITYSDK_OFFSET(0x17315080)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8F82709E2C054A9E_OFFSET UNITYSDK_OFFSET(0x172FECD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8F966BDDA643900A_OFFSET UNITYSDK_OFFSET(0x172D52D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_8FF445483E78BEC6_OFFSET UNITYSDK_OFFSET(0x1730E800)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9027B117424EC446_OFFSET UNITYSDK_OFFSET(0x17105C30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9054BA35002B370E_OFFSET UNITYSDK_OFFSET(0x1731D110)
#define CLASS_1_9DED06D267F0347B_METHOD_1_90633E88AF7A9BF0_OFFSET UNITYSDK_OFFSET(0x170E3570)
#define CLASS_1_9DED06D267F0347B_METHOD_1_907DE35CFE77E4F4_OFFSET UNITYSDK_OFFSET(0x173231F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_90F41F38147C10E0_OFFSET UNITYSDK_OFFSET(0x1731D4E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_91030B75756677B7_OFFSET UNITYSDK_OFFSET(0x170E37F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_911EC9D4936BE3A4_OFFSET UNITYSDK_OFFSET(0x17108570)
#define CLASS_1_9DED06D267F0347B_METHOD_1_912ADD387DB19B99_OFFSET UNITYSDK_OFFSET(0x172E8E00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_91328C70672193D2_OFFSET UNITYSDK_OFFSET(0x172FBF20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9182F36E86F4F0C6_OFFSET UNITYSDK_OFFSET(0x170FF020)
#define CLASS_1_9DED06D267F0347B_METHOD_1_91840082A2ED2EA0_OFFSET UNITYSDK_OFFSET(0x172E3940)
#define CLASS_1_9DED06D267F0347B_METHOD_1_91EFC2B8907E1413_OFFSET UNITYSDK_OFFSET(0x172D6350)
#define CLASS_1_9DED06D267F0347B_METHOD_1_91FE25381A08C0B8_OFFSET UNITYSDK_OFFSET(0x172DB8E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_920510DD72C039E5_OFFSET UNITYSDK_OFFSET(0x1730CE40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_921AEF3DBA42C697_OFFSET UNITYSDK_OFFSET(0x1731D3A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_922D21F938B1FA4C_OFFSET UNITYSDK_OFFSET(0x17116B20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9281013A62FC481C_OFFSET UNITYSDK_OFFSET(0x172EEFB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_929DB29232C80A02_OFFSET UNITYSDK_OFFSET(0x1752FDB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_92ABCA094FFE2170_OFFSET UNITYSDK_OFFSET(0x1731B830)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9359B90BEC55CA2A_OFFSET UNITYSDK_OFFSET(0x171044D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_935F4FE235235DE5_OFFSET UNITYSDK_OFFSET(0x170FF390)
#define CLASS_1_9DED06D267F0347B_METHOD_1_938C1788D96871F5_OFFSET UNITYSDK_OFFSET(0x172FF9D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_93DF9CBC1132566E_OFFSET UNITYSDK_OFFSET(0x172D7DC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_93DFE4148ED6DC68_OFFSET UNITYSDK_OFFSET(0x1710F4A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_93E7F9881B196847_OFFSET UNITYSDK_OFFSET(0x172FB7A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_940864D62A612C94_OFFSET UNITYSDK_OFFSET(0x172F81E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9422E00C5E08D893_OFFSET UNITYSDK_OFFSET(0x171109C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_944E041F182C7A7B_OFFSET UNITYSDK_OFFSET(0x1731EC90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_94746704EEDDF2A0_OFFSET UNITYSDK_OFFSET(0x17117E90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_949BC93E3A2DC2E6_OFFSET UNITYSDK_OFFSET(0x17111090)
#define CLASS_1_9DED06D267F0347B_METHOD_1_949D19EEA624EED6_OFFSET UNITYSDK_OFFSET(0x170FFA50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_949EF2D02B24A6AC_OFFSET UNITYSDK_OFFSET(0x170E4480)
#define CLASS_1_9DED06D267F0347B_METHOD_1_94A360B27C3F7DBD_OFFSET UNITYSDK_OFFSET(0x172F56D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_94ECABA33922BEF7_OFFSET UNITYSDK_OFFSET(0x170F5050)
#define CLASS_1_9DED06D267F0347B_METHOD_1_952839A36E6F2E32_OFFSET UNITYSDK_OFFSET(0x173019E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_95663A638BFD6842_OFFSET UNITYSDK_OFFSET(0x171129B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_957E566BE9B130B8_OFFSET UNITYSDK_OFFSET(0x170F0990)
#define CLASS_1_9DED06D267F0347B_METHOD_1_95DCFDCC08EC0362_OFFSET UNITYSDK_OFFSET(0x170F27C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_96678D079396EC24_OFFSET UNITYSDK_OFFSET(0x173057B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_96712AE5B3DCB938_OFFSET UNITYSDK_OFFSET(0x17316570)
#define CLASS_1_9DED06D267F0347B_METHOD_1_96CBCF7AD65DC189_OFFSET UNITYSDK_OFFSET(0x172CF870)
#define CLASS_1_9DED06D267F0347B_METHOD_1_96D5EC625457004F_OFFSET UNITYSDK_OFFSET(0x17313CA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_970591631D2403F7_OFFSET UNITYSDK_OFFSET(0x17307180)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9756E29901CA6A39_OFFSET UNITYSDK_OFFSET(0x170E3C80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_975A0801A2D3DA50_OFFSET UNITYSDK_OFFSET(0x1731FF40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_97D3ED4FFBED5905_OFFSET UNITYSDK_OFFSET(0x17529620)
#define CLASS_1_9DED06D267F0347B_METHOD_1_97D6105BFDCA2441_OFFSET UNITYSDK_OFFSET(0x1731F610)
#define CLASS_1_9DED06D267F0347B_METHOD_1_97D9A0D56FE170CF_OFFSET UNITYSDK_OFFSET(0x172E4CA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_97E07624FFE10D91_OFFSET UNITYSDK_OFFSET(0x17311600)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9801F6882BCB66BA_OFFSET UNITYSDK_OFFSET(0x172FCF20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9862AE5F05E5D9E7_OFFSET UNITYSDK_OFFSET(0x172F8150)
#define CLASS_1_9DED06D267F0347B_METHOD_1_98CCA08051889A01_OFFSET UNITYSDK_OFFSET(0x1710BF00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_98FF00593242E09E_OFFSET UNITYSDK_OFFSET(0x172EAEB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9905A0102E83802E_OFFSET UNITYSDK_OFFSET(0x17322E70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_990E2601947A5D28_OFFSET UNITYSDK_OFFSET(0x17305A30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_995E3FAE10945E98_OFFSET UNITYSDK_OFFSET(0x1731E100)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9972E305232405AC_OFFSET UNITYSDK_OFFSET(0x172DD5D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_99886615E7950AC7_OFFSET UNITYSDK_OFFSET(0x1752AD00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_99AA193F1E9E5A59_OFFSET UNITYSDK_OFFSET(0x1752E450)
#define CLASS_1_9DED06D267F0347B_METHOD_1_99EAF5C0DF51D8E2_OFFSET UNITYSDK_OFFSET(0x172E6260)
#define CLASS_1_9DED06D267F0347B_METHOD_1_99F094317681C34A_OFFSET UNITYSDK_OFFSET(0x172EC6F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_99FC08864B5D4F44_OFFSET UNITYSDK_OFFSET(0x172FF100)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9A2DA2A2B4BF34AE_OFFSET UNITYSDK_OFFSET(0x172F34A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9A2E4C940E3E66C1_OFFSET UNITYSDK_OFFSET(0x172CEBB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9A3530B73E3EDA63_OFFSET UNITYSDK_OFFSET(0x17321A70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9A3DC011CE098AB0_OFFSET UNITYSDK_OFFSET(0x17529E00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9A52BC654003E074_OFFSET UNITYSDK_OFFSET(0x170EC9D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9A8E9AA932615D75_OFFSET UNITYSDK_OFFSET(0x172F0210)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9A96B259C2384D76_OFFSET UNITYSDK_OFFSET(0x172D5B50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9ABBAE8D4DBE18D7_OFFSET UNITYSDK_OFFSET(0x172D46A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9B194B5D83D633B5_OFFSET UNITYSDK_OFFSET(0x170FC9F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9B9BA2C5852E5BE0_OFFSET UNITYSDK_OFFSET(0x1752C2C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9C447B8B31BE7B9D_OFFSET UNITYSDK_OFFSET(0x172E88F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9CA0D7A4794C80D3_OFFSET UNITYSDK_OFFSET(0x170E2510)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9CDE6E714778D8A0_OFFSET UNITYSDK_OFFSET(0x1752DAD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9CF791252F9D0375_OFFSET UNITYSDK_OFFSET(0x172F5910)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9D0B86BCA7347108_OFFSET UNITYSDK_OFFSET(0x171060C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9D0EA7BB90B98F07_OFFSET UNITYSDK_OFFSET(0x172DBB70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9D9A53550B5AB6E6_OFFSET UNITYSDK_OFFSET(0x170E2560)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9DC0BD4054DE1463_OFFSET UNITYSDK_OFFSET(0x173051A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9DCE2CC19318EC96_OFFSET UNITYSDK_OFFSET(0x17104A30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9E04D64174B61D17_OFFSET UNITYSDK_OFFSET(0x170F87B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9E99E1DB54837690_OFFSET UNITYSDK_OFFSET(0x1731D3B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9E9BF1DC3EBB759C_OFFSET UNITYSDK_OFFSET(0x172FFEB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9EE2CEABBA130C58_OFFSET UNITYSDK_OFFSET(0x175292C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9EFF6B870FD44EDF_OFFSET UNITYSDK_OFFSET(0x171198A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9F195BB8308DE9EB_OFFSET UNITYSDK_OFFSET(0x1752A030)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9F258B66692607AB_OFFSET UNITYSDK_OFFSET(0x17103D10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9F482F8F13A684DB_OFFSET UNITYSDK_OFFSET(0x17108290)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9F835D81DC6B0EB2_OFFSET UNITYSDK_OFFSET(0x170EE2D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9F8D02DC7FF1915E_OFFSET UNITYSDK_OFFSET(0x172FE6D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9F8D4F9F5F7DCCA1_OFFSET UNITYSDK_OFFSET(0x17317B60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9F8D94A3B0BA1ECD_OFFSET UNITYSDK_OFFSET(0x170FD630)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9FA458B7B39221E2_OFFSET UNITYSDK_OFFSET(0x17302160)
#define CLASS_1_9DED06D267F0347B_METHOD_1_9FD2A469B77CFA0D_OFFSET UNITYSDK_OFFSET(0x1710B370)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A02512A7F5701E88_OFFSET UNITYSDK_OFFSET(0x173177D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A034D8D6548DF823_OFFSET UNITYSDK_OFFSET(0x1730E1B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A04C200D1E714A22_OFFSET UNITYSDK_OFFSET(0x1752C160)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A09E79600279ADA8_OFFSET UNITYSDK_OFFSET(0x1731DD60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A0D3C4E8010C4E74_OFFSET UNITYSDK_OFFSET(0x17114780)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A11B81032D874802_OFFSET UNITYSDK_OFFSET(0x17322BC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A12B6F2D632FD897_OFFSET UNITYSDK_OFFSET(0x17104440)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A16176B6E7A364F5_OFFSET UNITYSDK_OFFSET(0x173205B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A1C5A7727D47C69A_OFFSET UNITYSDK_OFFSET(0x172F6FB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A21322F942BBF2A5_OFFSET UNITYSDK_OFFSET(0x1752D440)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A236F741847CA8D7_OFFSET UNITYSDK_OFFSET(0x172DD7B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A255854D5CE21A72_OFFSET UNITYSDK_OFFSET(0x170F76F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A26EC8C3FDE8CF20_OFFSET UNITYSDK_OFFSET(0x17115820)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A2815517E087C7F2_OFFSET UNITYSDK_OFFSET(0x1752C4F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A2D0035220F0B5F5_OFFSET UNITYSDK_OFFSET(0x170F4050)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A2D7FBE49CD614BE_OFFSET UNITYSDK_OFFSET(0x17307FF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A32BB7B909111731_OFFSET UNITYSDK_OFFSET(0x172DA8F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A32C173C11846EF5_OFFSET UNITYSDK_OFFSET(0x172DD180)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A32FC6FE39D695F9_OFFSET UNITYSDK_OFFSET(0x17323290)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A3339723D697DF97_OFFSET UNITYSDK_OFFSET(0x173215F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A365B923C53E6C73_OFFSET UNITYSDK_OFFSET(0x1752B1B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A3668FBCC78D7F09_OFFSET UNITYSDK_OFFSET(0x172E1B90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A36DDBD982B23B6D_OFFSET UNITYSDK_OFFSET(0x172F9100)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A38FA0BC83F2C4AD_OFFSET UNITYSDK_OFFSET(0x172FC4A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A3EC328D2C43821E_OFFSET UNITYSDK_OFFSET(0x170F2400)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A3F2801115D09C90_OFFSET UNITYSDK_OFFSET(0x17321E90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A40756B2779B7279_OFFSET UNITYSDK_OFFSET(0x172EEBF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A48F494646ECD37C_OFFSET UNITYSDK_OFFSET(0x17301670)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A4D8AA3A484CAE15_OFFSET UNITYSDK_OFFSET(0x1730CBD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A515A7E0D8112EA9_OFFSET UNITYSDK_OFFSET(0x171140B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A526D30242B2CA8B_OFFSET UNITYSDK_OFFSET(0x17118960)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A528BE131E12A442_OFFSET UNITYSDK_OFFSET(0x17112C20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A565FDDCDC74A6B8_OFFSET UNITYSDK_OFFSET(0x172D5DB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A566342C80E78C54_OFFSET UNITYSDK_OFFSET(0x173217D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A5A3FAD89FDC3C12_OFFSET UNITYSDK_OFFSET(0x1731BC90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A5D9D362267A583A_OFFSET UNITYSDK_OFFSET(0x172E83B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A5E00827B352D52F_OFFSET UNITYSDK_OFFSET(0x170FA250)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A5E1CBE478696891_OFFSET UNITYSDK_OFFSET(0x172EC780)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A6120CBA8B908067_OFFSET UNITYSDK_OFFSET(0x1730B320)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A62B10BEA34E31DB_OFFSET UNITYSDK_OFFSET(0x170EF5A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A6477AE83A0B9BD7_OFFSET UNITYSDK_OFFSET(0x17119150)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A6603BF5557301F3_OFFSET UNITYSDK_OFFSET(0x170FA9D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A6E11CA95D4F9A73_OFFSET UNITYSDK_OFFSET(0x170F3BE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A6E6762D2FE592E8_OFFSET UNITYSDK_OFFSET(0x1752CBB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A6ECDBDC430C64F6_OFFSET UNITYSDK_OFFSET(0x1731E4A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A6F564641DABCFE6_OFFSET UNITYSDK_OFFSET(0x1711A690)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A702FFA6CE66775C_OFFSET UNITYSDK_OFFSET(0x170EC8D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A70559C9A9EE73DB_OFFSET UNITYSDK_OFFSET(0x172E1F10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A720E241D3E99449_OFFSET UNITYSDK_OFFSET(0x171099E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A7284B603EF7CEE3_OFFSET UNITYSDK_OFFSET(0x172D03C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A73C4D5BF540DAD7_OFFSET UNITYSDK_OFFSET(0x17319520)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A73D61E7F55B6C79_OFFSET UNITYSDK_OFFSET(0x17302D70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A77B73CE6EB1A548_OFFSET UNITYSDK_OFFSET(0x1752C3E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A7AA8021E481EF02_OFFSET UNITYSDK_OFFSET(0x17320D30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A7D04581E34C9988_OFFSET UNITYSDK_OFFSET(0x172FF940)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A82AFF4BBCF91ABF_OFFSET UNITYSDK_OFFSET(0x172D3220)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A88DF89377E7996A_OFFSET UNITYSDK_OFFSET(0x173066A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A8C093688EE2200B_OFFSET UNITYSDK_OFFSET(0x17322B30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A8D4E9517F6490F5_OFFSET UNITYSDK_OFFSET(0x1731E490)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A9055BE89AC4F1E8_OFFSET UNITYSDK_OFFSET(0x17304520)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A917F4EE5F8F9409_OFFSET UNITYSDK_OFFSET(0x17116930)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A92E7DBB47FBCB4E_OFFSET UNITYSDK_OFFSET(0x17108200)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A94974EC716C86F0_OFFSET UNITYSDK_OFFSET(0x172F6100)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A981BD1D2871E768_OFFSET UNITYSDK_OFFSET(0x17318F60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A9B89DFC8D89F5EF_OFFSET UNITYSDK_OFFSET(0x173048E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_A9D027AB6B0C9C39_OFFSET UNITYSDK_OFFSET(0x170F94E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AA154C90685331F4_OFFSET UNITYSDK_OFFSET(0x172F0B20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AA24E59D050EC98E_OFFSET UNITYSDK_OFFSET(0x17307230)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AA46841F8BC8B915_OFFSET UNITYSDK_OFFSET(0x172EA5F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AA48B80E882CB00D_OFFSET UNITYSDK_OFFSET(0x170F78D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AA76DB4232385D23_OFFSET UNITYSDK_OFFSET(0x17119280)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AA883E53BF16E83C_OFFSET UNITYSDK_OFFSET(0x172D0FF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AA9DA575E0F2A796_OFFSET UNITYSDK_OFFSET(0x170FE0C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AB0A8021AE183568_OFFSET UNITYSDK_OFFSET(0x17117990)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AB1AC47CD927F79B_OFFSET UNITYSDK_OFFSET(0x1752A240)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AB1B572902096807_OFFSET UNITYSDK_OFFSET(0x1731EEB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AB202D182BCDC9A1_OFFSET UNITYSDK_OFFSET(0x1731E960)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AB753E31A042F32F_OFFSET UNITYSDK_OFFSET(0x1710C710)
#define CLASS_1_9DED06D267F0347B_METHOD_1_ABEFCE6E2A15426E_OFFSET UNITYSDK_OFFSET(0x170F6F10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AC00BF52A2505230_OFFSET UNITYSDK_OFFSET(0x170EE750)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AC19BE4D9F7694C4_OFFSET UNITYSDK_OFFSET(0x1731F120)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AC23CC8ADB931E85_OFFSET UNITYSDK_OFFSET(0x1752C010)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AC5F5625DEA66E17_OFFSET UNITYSDK_OFFSET(0x172FF070)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AC7D6F7CD3F05381_OFFSET UNITYSDK_OFFSET(0x172E7D10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_ACD2F36886BED644_OFFSET UNITYSDK_OFFSET(0x1752B120)
#define CLASS_1_9DED06D267F0347B_METHOD_1_ACE66C7F010F2CDB_OFFSET UNITYSDK_OFFSET(0x172FF670)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AD006F9645EE1EC0_OFFSET UNITYSDK_OFFSET(0x171175A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AD175CF76A49BA67_OFFSET UNITYSDK_OFFSET(0x172D0B10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AD6AA13F9AF7A1CF_OFFSET UNITYSDK_OFFSET(0x172F16B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_ADB7431E060C212A_OFFSET UNITYSDK_OFFSET(0x171079C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_ADC6BD4C29BC0C61_OFFSET UNITYSDK_OFFSET(0x172F1370)
#define CLASS_1_9DED06D267F0347B_METHOD_1_ADCB8F1248F38EA8_OFFSET UNITYSDK_OFFSET(0x17115C90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_ADD1252A12694296_OFFSET UNITYSDK_OFFSET(0x170F1230)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AE0E4F511C372956_OFFSET UNITYSDK_OFFSET(0x172FE220)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AE239E79C627EE73_OFFSET UNITYSDK_OFFSET(0x17113660)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AE73FCEEDBA31C56_OFFSET UNITYSDK_OFFSET(0x173086B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AE7F5FC2905A79F0_OFFSET UNITYSDK_OFFSET(0x17106830)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AEC5F912B6C49B8F_OFFSET UNITYSDK_OFFSET(0x173190A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AEC8D02ED353079A_OFFSET UNITYSDK_OFFSET(0x1731F230)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AF2F5D4F0A618925_OFFSET UNITYSDK_OFFSET(0x171006B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AF3589C73B963480_OFFSET UNITYSDK_OFFSET(0x172DDA20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AF7202101C31DE79_OFFSET UNITYSDK_OFFSET(0x17529830)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AF85B06886DC5B55_OFFSET UNITYSDK_OFFSET(0x17320650)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AFCCA78BAEE20227_OFFSET UNITYSDK_OFFSET(0x172E70F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AFD721DAD19E4FF3_OFFSET UNITYSDK_OFFSET(0x173211A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_AFEA226910B6B263_OFFSET UNITYSDK_OFFSET(0x1710BCC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B0B68E3917F77177_OFFSET UNITYSDK_OFFSET(0x172D4730)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B0CE1D4E1DF5E1DD_OFFSET UNITYSDK_OFFSET(0x171146F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B0E5915849A17974_OFFSET UNITYSDK_OFFSET(0x170E3660)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B10CE7ED30150578_OFFSET UNITYSDK_OFFSET(0x17117C10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B15DBB8FF6F2C56D_OFFSET UNITYSDK_OFFSET(0x1730ECC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B18079F757033F75_OFFSET UNITYSDK_OFFSET(0x173133F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B18B104650182EFD_OFFSET UNITYSDK_OFFSET(0x17304490)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B1A68360E0CF2BD5_OFFSET UNITYSDK_OFFSET(0x170E40E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B1ADEFF3EBC7BDF9_OFFSET UNITYSDK_OFFSET(0x17301950)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B1FC9886DBE9D56F_OFFSET UNITYSDK_OFFSET(0x170FE9A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B2436418F2235944_OFFSET UNITYSDK_OFFSET(0x172DAF20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B26D0C23081044D7_OFFSET UNITYSDK_OFFSET(0x170F8990)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B29759452439D39A_OFFSET UNITYSDK_OFFSET(0x17114330)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B2B14B1404C85E6B_OFFSET UNITYSDK_OFFSET(0x17319680)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B2B5962AE26E5E95_OFFSET UNITYSDK_OFFSET(0x17529DF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B2C66C0AF3542A3D_OFFSET UNITYSDK_OFFSET(0x1752E8E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B2CA17552F60147B_OFFSET UNITYSDK_OFFSET(0x171041B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B2CEBE68933A0826_OFFSET UNITYSDK_OFFSET(0x170F56B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B325F2456E5B1C60_OFFSET UNITYSDK_OFFSET(0x17110A80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B4A97DD9CB38BAB4_OFFSET UNITYSDK_OFFSET(0x17305E70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B4AF7548518CCD43_OFFSET UNITYSDK_OFFSET(0x172DC750)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B4DC9E7F1DE536DE_OFFSET UNITYSDK_OFFSET(0x170E7C60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B4F42FA8E0B36A2C_OFFSET UNITYSDK_OFFSET(0x17320640)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B52A50AB4176CE56_OFFSET UNITYSDK_OFFSET(0x1731A290)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B53C766A28D747A5_OFFSET UNITYSDK_OFFSET(0x17321000)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B563B0EC32426EED_OFFSET UNITYSDK_OFFSET(0x1731CA00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B571ADBE19D3F564_OFFSET UNITYSDK_OFFSET(0x17313ED0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B579252F7C9C9E46_OFFSET UNITYSDK_OFFSET(0x170F1A50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B59BCB53D9166130_OFFSET UNITYSDK_OFFSET(0x17528F00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B5A324D03FCE2F74_OFFSET UNITYSDK_OFFSET(0x17305110)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B5B6CE6DE6DA7845_OFFSET UNITYSDK_OFFSET(0x172D5F90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B63D511AA0A599F3_OFFSET UNITYSDK_OFFSET(0x170F4880)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B65F467C7544EBA4_OFFSET UNITYSDK_OFFSET(0x173234B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B66D458793765030_OFFSET UNITYSDK_OFFSET(0x170F9CD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B6782D127D47AF86_OFFSET UNITYSDK_OFFSET(0x172CFD00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B68A984FB0824F54_OFFSET UNITYSDK_OFFSET(0x1731C450)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B6A1AEF299D4322D_OFFSET UNITYSDK_OFFSET(0x17312810)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B6A2A259B7CC4B09_OFFSET UNITYSDK_OFFSET(0x1731CD50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B6C7329EA371EC88_OFFSET UNITYSDK_OFFSET(0x170ED810)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B6D8DF8D1A82507A_OFFSET UNITYSDK_OFFSET(0x172D3190)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B6FD100C464EB396_OFFSET UNITYSDK_OFFSET(0x1752C270)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B705B29367F78815_OFFSET UNITYSDK_OFFSET(0x1710E510)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B77C63D184710B27_OFFSET UNITYSDK_OFFSET(0x170E1790)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B7BC7351B0DE2890_OFFSET UNITYSDK_OFFSET(0x170FCF50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B7DEF1AAC87BCAE4_OFFSET UNITYSDK_OFFSET(0x172E4980)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B8256E4A094C5303_OFFSET UNITYSDK_OFFSET(0x17314C90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B84B712436BF2B83_OFFSET UNITYSDK_OFFSET(0x1731EBF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B8C279934D20A6CD_OFFSET UNITYSDK_OFFSET(0x1731D2F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B8E6C682138E53DA_OFFSET UNITYSDK_OFFSET(0x1731C750)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B920E50304484A45_OFFSET UNITYSDK_OFFSET(0x1731D6E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B928621974F4F0DB_OFFSET UNITYSDK_OFFSET(0x171171F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B92AA93612FE91D7_OFFSET UNITYSDK_OFFSET(0x172F3B20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B945A568F7D3E10D_OFFSET UNITYSDK_OFFSET(0x172E99B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B94B65FA78301F3E_OFFSET UNITYSDK_OFFSET(0x1731F380)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B9790BD1B475E2CE_OFFSET UNITYSDK_OFFSET(0x1752A840)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B9A44BD7866D2238_OFFSET UNITYSDK_OFFSET(0x172F8AD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_B9D6C2833CD1AC58_OFFSET UNITYSDK_OFFSET(0x17318EA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BA067DC3935EC6D2_OFFSET UNITYSDK_OFFSET(0x170F2DF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BA5E3E0D5435027A_OFFSET UNITYSDK_OFFSET(0x172D3F60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BA6567291AE803E9_OFFSET UNITYSDK_OFFSET(0x1752E400)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BA7B7CFB8112AC16_OFFSET UNITYSDK_OFFSET(0x17322400)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BA8B26D66B44C0B1_OFFSET UNITYSDK_OFFSET(0x1710B9F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BAA0937A102D12FC_OFFSET UNITYSDK_OFFSET(0x170FAB20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BAE7C44E17AF1F96_OFFSET UNITYSDK_OFFSET(0x1731DAF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BB3A5A836A4BAEAC_OFFSET UNITYSDK_OFFSET(0x1731D650)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BB4E29670040A76E_OFFSET UNITYSDK_OFFSET(0x17119B50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BBB4D4673CB8087F_OFFSET UNITYSDK_OFFSET(0x1731B910)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BBEED9848CF4BAC6_OFFSET UNITYSDK_OFFSET(0x1731F110)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BC125C9BA7AAD645_OFFSET UNITYSDK_OFFSET(0x173009A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BC154CB0C3E6A98A_OFFSET UNITYSDK_OFFSET(0x172DA710)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BC1D85F94DF364DD_OFFSET UNITYSDK_OFFSET(0x1731EFE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BC2EDD050B3543D1_OFFSET UNITYSDK_OFFSET(0x1752E760)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BC572596AB9D13AC_OFFSET UNITYSDK_OFFSET(0x172D7960)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BC59841CF40AA229_OFFSET UNITYSDK_OFFSET(0x171064C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BCAF276C8C0BF0E1_OFFSET UNITYSDK_OFFSET(0x172F98F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BCC3514628A89CB8_OFFSET UNITYSDK_OFFSET(0x1752BD00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BCC4E3D06536B27B_OFFSET UNITYSDK_OFFSET(0x1730A560)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BCE3B25AF1A3FC51_OFFSET UNITYSDK_OFFSET(0x173171D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BCFDFC8D8C55F98E_OFFSET UNITYSDK_OFFSET(0x170F31B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BD2001DC903880EF_OFFSET UNITYSDK_OFFSET(0x172FAEA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BD3A63437D19BC24_OFFSET UNITYSDK_OFFSET(0x172F8550)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BD879A3CF23CBCA9_OFFSET UNITYSDK_OFFSET(0x1710DB00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BD8A217CE5F12953_OFFSET UNITYSDK_OFFSET(0x172F8730)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BDC0C1F4BA4C0192_OFFSET UNITYSDK_OFFSET(0x170FD230)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BDCAAB8144AE21CE_OFFSET UNITYSDK_OFFSET(0x1752B580)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BDCD4B46E9770209_OFFSET UNITYSDK_OFFSET(0x1731E6A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BE07A9D1DE2B6F07_OFFSET UNITYSDK_OFFSET(0x172DEF30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BE10F352F8109B4D_OFFSET UNITYSDK_OFFSET(0x172FE9D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BE120DCAAB984F2E_OFFSET UNITYSDK_OFFSET(0x172D9890)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BE4C6F65C0B2591E_OFFSET UNITYSDK_OFFSET(0x1752E1E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BE86830326113DEB_OFFSET UNITYSDK_OFFSET(0x1731BF60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BE90BEE6EB872FE9_OFFSET UNITYSDK_OFFSET(0x1731D440)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BEA3ADA3E609D8B8_OFFSET UNITYSDK_OFFSET(0x170F3560)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BEAD9C1F0D94CD42_OFFSET UNITYSDK_OFFSET(0x1731E5E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BEBEB15BD3D1CB77_OFFSET UNITYSDK_OFFSET(0x1731E540)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BED2262A7079B10A_OFFSET UNITYSDK_OFFSET(0x172E9650)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BED57586C3B455AE_OFFSET UNITYSDK_OFFSET(0x172F3830)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BEDD32CE9389C15A_OFFSET UNITYSDK_OFFSET(0x17108850)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BEF7DE34D85FF93D_OFFSET UNITYSDK_OFFSET(0x171183F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BEF86B0B4127C652_OFFSET UNITYSDK_OFFSET(0x17300910)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BF26B22D7F08DD47_OFFSET UNITYSDK_OFFSET(0x1731EF70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BF7D0BBB99EC878D_OFFSET UNITYSDK_OFFSET(0x1731F420)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BF90BF8E195387BE_OFFSET UNITYSDK_OFFSET(0x170E1DA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BFB760888F2B87DB_OFFSET UNITYSDK_OFFSET(0x17315740)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BFB916531EF81A1D_OFFSET UNITYSDK_OFFSET(0x1731AAA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BFD6B88DB7BB0205_OFFSET UNITYSDK_OFFSET(0x17312CD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_BFE59B21879B2C7F_OFFSET UNITYSDK_OFFSET(0x1731F9E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C05A26B75F3FF019_OFFSET UNITYSDK_OFFSET(0x1731CCB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C0E926231E8D26E7_OFFSET UNITYSDK_OFFSET(0x170F2490)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C0F5CEE301445EC5_OFFSET UNITYSDK_OFFSET(0x1752C1F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C12CBD0E7A2E2CC1_OFFSET UNITYSDK_OFFSET(0x17313EE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C1A1177CCF6DDE84_OFFSET UNITYSDK_OFFSET(0x17116610)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C1C0E220A61CB316_OFFSET UNITYSDK_OFFSET(0x171135D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C1D57FC6006A875C_OFFSET UNITYSDK_OFFSET(0x1731D790)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C1E92A933F3CA7D4_OFFSET UNITYSDK_OFFSET(0x173145C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C219D6643B6CEE97_OFFSET UNITYSDK_OFFSET(0x171150C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C228CC169C069A8C_OFFSET UNITYSDK_OFFSET(0x1752E720)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C24F50618D262ABA_OFFSET UNITYSDK_OFFSET(0x1731DE10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C257162A179221E0_OFFSET UNITYSDK_OFFSET(0x172F59A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C25C6E1E38293F6D_OFFSET UNITYSDK_OFFSET(0x172E9920)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C2764F6B404D856C_OFFSET UNITYSDK_OFFSET(0x172E1070)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C27902677E8D8D7C_OFFSET UNITYSDK_OFFSET(0x172F3E90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C279C38E2D1CF37C_OFFSET UNITYSDK_OFFSET(0x1731ABA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C2852D68DF707491_OFFSET UNITYSDK_OFFSET(0x170F7110)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C2A74AD0B825D49A_OFFSET UNITYSDK_OFFSET(0x1731F1C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C2D535F3BB8C23A6_OFFSET UNITYSDK_OFFSET(0x173093D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C301AE5CDD7AD08D_OFFSET UNITYSDK_OFFSET(0x172D5D20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C31384E117CD0986_OFFSET UNITYSDK_OFFSET(0x17119E70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C33AF8F49AA7AD22_OFFSET UNITYSDK_OFFSET(0x172D3B90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C356C5B4D4098195_OFFSET UNITYSDK_OFFSET(0x172DF9A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C3837AEEBCA0FF69_OFFSET UNITYSDK_OFFSET(0x17316830)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C3CD1772CACF22AB_OFFSET UNITYSDK_OFFSET(0x17528E80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C3E048C0DB44979A_OFFSET UNITYSDK_OFFSET(0x170E6B60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C4055D14A4542350_OFFSET UNITYSDK_OFFSET(0x17320BF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C4154C8BC84E25F5_OFFSET UNITYSDK_OFFSET(0x17309F30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C48FB23093D62A74_OFFSET UNITYSDK_OFFSET(0x17301DA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C498BC5FFD9EFAE2_OFFSET UNITYSDK_OFFSET(0x17109900)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C4A0B2D797978714_OFFSET UNITYSDK_OFFSET(0x1752F4F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C4B6192623497677_OFFSET UNITYSDK_OFFSET(0x172DA680)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C4BA83663AC42CAF_OFFSET UNITYSDK_OFFSET(0x17301C50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C4EA1B28ABD87D4D_OFFSET UNITYSDK_OFFSET(0x1730C1F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C4FB96502D79D6A9_OFFSET UNITYSDK_OFFSET(0x170F0FE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C5116A14808C1E5F_OFFSET UNITYSDK_OFFSET(0x172D5700)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C5911A62599CC05F_OFFSET UNITYSDK_OFFSET(0x172D0470)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C5950878D6BBA9C2_OFFSET UNITYSDK_OFFSET(0x1752B890)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C5BDD34C3669DBCA_OFFSET UNITYSDK_OFFSET(0x1710E790)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C5C4A7F060E76708_OFFSET UNITYSDK_OFFSET(0x17313360)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C5CCCC211A888092_OFFSET UNITYSDK_OFFSET(0x172F9380)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C6101C684AD1B2FD_OFFSET UNITYSDK_OFFSET(0x17528E70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C654789F006AAA8F_OFFSET UNITYSDK_OFFSET(0x1710D0F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C6B7DCE2C8CFD6B3_OFFSET UNITYSDK_OFFSET(0x172FF470)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C700920114026EC6_OFFSET UNITYSDK_OFFSET(0x172F31B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C70DC32786D23145_OFFSET UNITYSDK_OFFSET(0x1731F6C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C75A10929DD27D28_OFFSET UNITYSDK_OFFSET(0x17308140)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C7A2CBC1F88AB0AB_OFFSET UNITYSDK_OFFSET(0x1731A7E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C7A30A662890C555_OFFSET UNITYSDK_OFFSET(0x1730A1A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C7AC3DCB0131725C_OFFSET UNITYSDK_OFFSET(0x1710A3B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C7AE716E2083B018_OFFSET UNITYSDK_OFFSET(0x172F2150)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C7B97D46016D114F_OFFSET UNITYSDK_OFFSET(0x172F9D10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C7E8BE05F628AACC_OFFSET UNITYSDK_OFFSET(0x173168C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C7F847D687C15F02_OFFSET UNITYSDK_OFFSET(0x170F4FC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C7FBDE6E033E7658_OFFSET UNITYSDK_OFFSET(0x175296A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C826DFFA1BB9C1ED_OFFSET UNITYSDK_OFFSET(0x1710DF70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C83EA2613E0BC4A1_OFFSET UNITYSDK_OFFSET(0x1731FAF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C88167FFCD1B57DB_OFFSET UNITYSDK_OFFSET(0x17314350)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C89D3AF5A664795A_OFFSET UNITYSDK_OFFSET(0x172D85E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C8BD60CC28903178_OFFSET UNITYSDK_OFFSET(0x17529BE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C8CCA923021112F5_OFFSET UNITYSDK_OFFSET(0x172CFC70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C8F2B30187619CBF_OFFSET UNITYSDK_OFFSET(0x1752B090)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C905B83312A2477B_OFFSET UNITYSDK_OFFSET(0x172D73E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C90C39558EED088A_OFFSET UNITYSDK_OFFSET(0x172F2380)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C919B80E6A6BAE20_OFFSET UNITYSDK_OFFSET(0x17111BC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C942D2F695796C7E_OFFSET UNITYSDK_OFFSET(0x17318830)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C95976A031E49736_OFFSET UNITYSDK_OFFSET(0x172DB340)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C95D2F2338E5887A_OFFSET UNITYSDK_OFFSET(0x173209F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_C9A5F6894C750715_OFFSET UNITYSDK_OFFSET(0x172F1D10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CA0752CA223A31A6_OFFSET UNITYSDK_OFFSET(0x1731C250)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CA10683B8E8B63FE_OFFSET UNITYSDK_OFFSET(0x172D4550)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CA21E25E430C8362_OFFSET UNITYSDK_OFFSET(0x17319320)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CA661389AA63C194_OFFSET UNITYSDK_OFFSET(0x17107000)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CAC566F702308B02_OFFSET UNITYSDK_OFFSET(0x172D7650)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CACF03EAC6255BD4_1_OFFSET UNITYSDK_OFFSET(0x172E7A00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CACF03EAC6255BD4_2_OFFSET UNITYSDK_OFFSET(0x172F1A40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CACF03EAC6255BD4_3_OFFSET UNITYSDK_OFFSET(0x17316D30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CACF03EAC6255BD4_4_OFFSET UNITYSDK_OFFSET(0x1752A910)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CACF03EAC6255BD4_OFFSET UNITYSDK_OFFSET(0x1711A440)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CAD460D734153B6D_OFFSET UNITYSDK_OFFSET(0x17116580)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CADB9B1B38D305C2_OFFSET UNITYSDK_OFFSET(0x172E9D60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CAE6660D4515F671_OFFSET UNITYSDK_OFFSET(0x172D91A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CB2E62EFD9D53D04_OFFSET UNITYSDK_OFFSET(0x172EDD80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CB4E56321F62FB5D_OFFSET UNITYSDK_OFFSET(0x17316FE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CB79D0AEFC63675D_OFFSET UNITYSDK_OFFSET(0x1752D940)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CB867586E035719A_OFFSET UNITYSDK_OFFSET(0x1731A1F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CB8DAD5C482558E8_OFFSET UNITYSDK_OFFSET(0x1752CCD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CBA3CCA4D3A99D4E_OFFSET UNITYSDK_OFFSET(0x1731E5D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CC1698084A4FE338_OFFSET UNITYSDK_OFFSET(0x170F3820)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CC2077C68872B2DA_OFFSET UNITYSDK_OFFSET(0x172E5F30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CC2AE0FDA69BA691_OFFSET UNITYSDK_OFFSET(0x172CF690)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CC3814331704D58F_OFFSET UNITYSDK_OFFSET(0x172D94D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CC5A87492E1407AF_OFFSET UNITYSDK_OFFSET(0x1731E530)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CC87F67756FC5212_OFFSET UNITYSDK_OFFSET(0x170F1F40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CCA92404B55A770F_OFFSET UNITYSDK_OFFSET(0x17529AD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CCD519D876B9057D_OFFSET UNITYSDK_OFFSET(0x172FAB30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CD32867B6E228DB2_OFFSET UNITYSDK_OFFSET(0x1710EF90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CD4751E3B2735BF2_OFFSET UNITYSDK_OFFSET(0x172D7190)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CD8F1BAA11F67EEC_OFFSET UNITYSDK_OFFSET(0x1731BE40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CD91E64D96B15FF1_OFFSET UNITYSDK_OFFSET(0x172E3330)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CD9C2383EDFC65AC_OFFSET UNITYSDK_OFFSET(0x17306DB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CDB4FF069295B63B_OFFSET UNITYSDK_OFFSET(0x1710A0E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CE076537921DD7A2_OFFSET UNITYSDK_OFFSET(0x172CFEE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CE45E30865654E0D_OFFSET UNITYSDK_OFFSET(0x1731D8B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CE583C3B665998AF_OFFSET UNITYSDK_OFFSET(0x1730AE30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CF029F2FD57AA986_OFFSET UNITYSDK_OFFSET(0x172EAAD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CF0FBF262D033C7D_OFFSET UNITYSDK_OFFSET(0x17303BF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CF346CF8578CD776_OFFSET UNITYSDK_OFFSET(0x172F86A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CF59E33095B952BE_OFFSET UNITYSDK_OFFSET(0x172E9CD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CF6885CB8BBBF535_OFFSET UNITYSDK_OFFSET(0x170F00B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CF7945410533DBC6_OFFSET UNITYSDK_OFFSET(0x1710BC30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CF98E9F7292FF85F_OFFSET UNITYSDK_OFFSET(0x171143C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CFA6D714C877B801_OFFSET UNITYSDK_OFFSET(0x172D8E30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_CFCB2D16941DE370_OFFSET UNITYSDK_OFFSET(0x170FD5A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D033B9E18EDF2B76_OFFSET UNITYSDK_OFFSET(0x172F6D40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D057F9E58D0FD34A_OFFSET UNITYSDK_OFFSET(0x17304670)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D06B2BAE8A831960_OFFSET UNITYSDK_OFFSET(0x1731C2F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D08B245D3EBCE1BC_OFFSET UNITYSDK_OFFSET(0x1752EB80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D0B6AA9E3EBBCE34_OFFSET UNITYSDK_OFFSET(0x170F71A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D0C219FFA06F06CE_OFFSET UNITYSDK_OFFSET(0x1710F980)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D1144951F45EC06F_OFFSET UNITYSDK_OFFSET(0x172E6620)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D13CE81678C654BB_OFFSET UNITYSDK_OFFSET(0x172FFCD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D15265A02E32CD4E_OFFSET UNITYSDK_OFFSET(0x1731F240)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D15DA05CEF0A9705_OFFSET UNITYSDK_OFFSET(0x1710C8E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D169B027FBC7146E_OFFSET UNITYSDK_OFFSET(0x170F14A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D16E92C7CC1C204E_OFFSET UNITYSDK_OFFSET(0x170F8900)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D1793B12E5076D87_OFFSET UNITYSDK_OFFSET(0x1731D1A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D1C9213AB4328444_OFFSET UNITYSDK_OFFSET(0x17321420)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D221FD635F43E462_OFFSET UNITYSDK_OFFSET(0x17300390)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D22832F4133A989E_OFFSET UNITYSDK_OFFSET(0x172E21F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D239D0E73008164D_OFFSET UNITYSDK_OFFSET(0x172D6C20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D297736E8EFE4B43_OFFSET UNITYSDK_OFFSET(0x17112FC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D2A287DC8FBBF0E1_OFFSET UNITYSDK_OFFSET(0x170E5110)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D2B2977029DC4B4C_OFFSET UNITYSDK_OFFSET(0x170F60C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D2BFCDE84542C5B4_OFFSET UNITYSDK_OFFSET(0x170F5290)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D3259A686B135DD0_OFFSET UNITYSDK_OFFSET(0x1710D060)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D3797995FFA3B5DB_OFFSET UNITYSDK_OFFSET(0x171088E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D38798D0E11D5C6C_OFFSET UNITYSDK_OFFSET(0x1730E490)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D3CB2A8F67D71836_OFFSET UNITYSDK_OFFSET(0x170E4DE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D405929DB038E13C_OFFSET UNITYSDK_OFFSET(0x1730AEC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D416647EEF773430_OFFSET UNITYSDK_OFFSET(0x17100340)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D4292921E9FE29D6_OFFSET UNITYSDK_OFFSET(0x17314FF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D44CF768ACE644B0_OFFSET UNITYSDK_OFFSET(0x173212D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D45A9B72F13548C5_OFFSET UNITYSDK_OFFSET(0x17110E60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D4BBF6F62AFAB435_OFFSET UNITYSDK_OFFSET(0x1731D5B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D4D9AAF75D98A33A_OFFSET UNITYSDK_OFFSET(0x171049A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D4DC25B0224E348B_OFFSET UNITYSDK_OFFSET(0x1710AB40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D50CB5C9D2806858_OFFSET UNITYSDK_OFFSET(0x17321B00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D51DBEC909C4AD72_OFFSET UNITYSDK_OFFSET(0x172FF3E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D52AE7973F65EAD0_OFFSET UNITYSDK_OFFSET(0x172F7470)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D5427897AECC3678_OFFSET UNITYSDK_OFFSET(0x17302830)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D5C24CF6E13260D3_OFFSET UNITYSDK_OFFSET(0x172E38B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D5ECD02B71126C86_OFFSET UNITYSDK_OFFSET(0x1731F0A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D6063ECFA0C63021_OFFSET UNITYSDK_OFFSET(0x17112B90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D65E8F4077907EF1_OFFSET UNITYSDK_OFFSET(0x172D80E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D696ED4E3ACA5A66_OFFSET UNITYSDK_OFFSET(0x1730EC30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D6976365E2664B6B_OFFSET UNITYSDK_OFFSET(0x17301400)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D6BD3B58DBF5BA10_OFFSET UNITYSDK_OFFSET(0x172E2DD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D6D5768343F25EB6_OFFSET UNITYSDK_OFFSET(0x17320400)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D72A8BA1AB8D977A_OFFSET UNITYSDK_OFFSET(0x1752EBC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D7891593DDBD6D26_OFFSET UNITYSDK_OFFSET(0x1731C6B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D7D63547072F9069_OFFSET UNITYSDK_OFFSET(0x172FB5B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D856E3918F14F633_OFFSET UNITYSDK_OFFSET(0x17320930)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D872B532F2DE723B_OFFSET UNITYSDK_OFFSET(0x170F5DC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D8947BD877AF1D23_OFFSET UNITYSDK_OFFSET(0x1752E820)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D8A8822066D29746_OFFSET UNITYSDK_OFFSET(0x1730C160)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D8D9463596BD4539_OFFSET UNITYSDK_OFFSET(0x1752E2D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D914FA9852D18A48_OFFSET UNITYSDK_OFFSET(0x170EDB90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D91DAE33B5F58CAD_OFFSET UNITYSDK_OFFSET(0x17314AC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D92C60C660105292_OFFSET UNITYSDK_OFFSET(0x172E3DD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D94DDAB21A4C55FE_OFFSET UNITYSDK_OFFSET(0x170EE0D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D9ACCD576F49D48B_OFFSET UNITYSDK_OFFSET(0x17322FE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D9BCAD2DE6255122_OFFSET UNITYSDK_OFFSET(0x172D58E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_D9FA8F1580326671_OFFSET UNITYSDK_OFFSET(0x172DBE40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DA238D46DB7C4165_OFFSET UNITYSDK_OFFSET(0x17322830)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DA3654B3C0A419CC_OFFSET UNITYSDK_OFFSET(0x170FE3B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DA5C5E3305E70034_OFFSET UNITYSDK_OFFSET(0x172CF720)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DB1B5FEA4ABCEEDB_OFFSET UNITYSDK_OFFSET(0x172DD360)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DB48F855FE01EF19_OFFSET UNITYSDK_OFFSET(0x172DFE70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DBAA8A55402A4CB2_OFFSET UNITYSDK_OFFSET(0x1731C3C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DBAB45DC684A1B10_OFFSET UNITYSDK_OFFSET(0x1710DEE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DC2731414F54CE85_OFFSET UNITYSDK_OFFSET(0x172DD660)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DC5F40CAFB9E2287_OFFSET UNITYSDK_OFFSET(0x17308E50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DC6D34FEFE4AA2B8_OFFSET UNITYSDK_OFFSET(0x17305370)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DC77C75897B200C0_OFFSET UNITYSDK_OFFSET(0x17108CC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DCAF78B83DBE5BB7_OFFSET UNITYSDK_OFFSET(0x17301220)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DD05136B899D3E87_OFFSET UNITYSDK_OFFSET(0x172EBEF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DD2FE9290160F0D0_OFFSET UNITYSDK_OFFSET(0x172FC410)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DD8A84363B14ADCA_OFFSET UNITYSDK_OFFSET(0x1730D630)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DDCEEFD762FE0DD3_OFFSET UNITYSDK_OFFSET(0x172FBCF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DE10D89DFC57FEF4_OFFSET UNITYSDK_OFFSET(0x172EE270)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DE11FF2A6318B43F_OFFSET UNITYSDK_OFFSET(0x172DDDE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DE1FC3655636A4E9_OFFSET UNITYSDK_OFFSET(0x17317C00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DE7913E6826CA296_OFFSET UNITYSDK_OFFSET(0x172E50C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DF11708B80BAB5FE_OFFSET UNITYSDK_OFFSET(0x172F2CC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DF18B220398BDAA2_1_OFFSET UNITYSDK_OFFSET(0x172E47A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DF18B220398BDAA2_2_OFFSET UNITYSDK_OFFSET(0x172F62E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DF18B220398BDAA2_OFFSET UNITYSDK_OFFSET(0x172DA220)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DF571A8D04A9105A_OFFSET UNITYSDK_OFFSET(0x1731BE30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DF7D8C5254F902D9_OFFSET UNITYSDK_OFFSET(0x170F6480)
#define CLASS_1_9DED06D267F0347B_METHOD_1_DFA9B651FCDF81C7_OFFSET UNITYSDK_OFFSET(0x172EAE20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E04141DEA8D91B65_OFFSET UNITYSDK_OFFSET(0x170FA430)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E0AA829D55A442AB_OFFSET UNITYSDK_OFFSET(0x170ED2B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E0B2582201064286_OFFSET UNITYSDK_OFFSET(0x172D2DC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E10DDCFA89EA846D_OFFSET UNITYSDK_OFFSET(0x173173C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E14AB6E117854923_OFFSET UNITYSDK_OFFSET(0x172EAB60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E1520B681E3CFA6F_OFFSET UNITYSDK_OFFSET(0x17119F60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E16A7C6AA2BF3858_OFFSET UNITYSDK_OFFSET(0x17303F20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E1BC7904816250B9_OFFSET UNITYSDK_OFFSET(0x173195C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E1F35C211CB65375_OFFSET UNITYSDK_OFFSET(0x1752D710)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E1FA45AD782FB06B_OFFSET UNITYSDK_OFFSET(0x170F6840)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E21466D6A99FEFDB_OFFSET UNITYSDK_OFFSET(0x172E6080)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E26417CB26FC90B5_OFFSET UNITYSDK_OFFSET(0x170EB700)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E26E9ED62F1E7023_OFFSET UNITYSDK_OFFSET(0x17300110)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E278CC4423376984_OFFSET UNITYSDK_OFFSET(0x172CEFC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E29BB5AF67106985_OFFSET UNITYSDK_OFFSET(0x171067A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E2A1A4C247FBD40C_OFFSET UNITYSDK_OFFSET(0x17300C20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E2C2A38CCDC7B263_OFFSET UNITYSDK_OFFSET(0x172D5970)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E2E420FACF6C4633_OFFSET UNITYSDK_OFFSET(0x170ECDA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E2F7E29C802CAE74_OFFSET UNITYSDK_OFFSET(0x170EAF20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E2FF3434A5B07CEB_OFFSET UNITYSDK_OFFSET(0x17302B00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E306282B4BDD7B82_OFFSET UNITYSDK_OFFSET(0x1731D240)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E31EB028273987E2_OFFSET UNITYSDK_OFFSET(0x1731C800)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E32697B8360FECDA_OFFSET UNITYSDK_OFFSET(0x172DD0F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E32ED5B6BFC601F8_OFFSET UNITYSDK_OFFSET(0x172D1850)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E359212373FC410D_OFFSET UNITYSDK_OFFSET(0x172D7AB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E35CBC21CAA4DB5A_OFFSET UNITYSDK_OFFSET(0x1731BDC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E3E46E811B12E3BF_OFFSET UNITYSDK_OFFSET(0x172DCBB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E41A806D11659A24_OFFSET UNITYSDK_OFFSET(0x172F9AD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E42B79DFC7A2A51F_OFFSET UNITYSDK_OFFSET(0x172DB250)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E42CD936E3A29812_OFFSET UNITYSDK_OFFSET(0x1710EB00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E44522C8F592DB74_OFFSET UNITYSDK_OFFSET(0x170F4530)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E48098CD5AC89C69_OFFSET UNITYSDK_OFFSET(0x1730D5A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E4B763549DED2CD7_OFFSET UNITYSDK_OFFSET(0x17304AC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E4E1227651FF4E8E_OFFSET UNITYSDK_OFFSET(0x170F15F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E4E2CBCE87AEFE49_OFFSET UNITYSDK_OFFSET(0x172D2FA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E504A6E2104B8F65_OFFSET UNITYSDK_OFFSET(0x1752C6A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E51F7D0F2DA1D039_OFFSET UNITYSDK_OFFSET(0x1710A6E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E53493A35EA2773F_OFFSET UNITYSDK_OFFSET(0x1752CE30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E53705D7600C7EE5_OFFSET UNITYSDK_OFFSET(0x172F6CB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E55890D343CE5F4B_OFFSET UNITYSDK_OFFSET(0x172E4A10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E566E22A4F937F75_OFFSET UNITYSDK_OFFSET(0x170EE680)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E5937BDFFB60CBCE_OFFSET UNITYSDK_OFFSET(0x17108F90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E59C0874F8ACB727_OFFSET UNITYSDK_OFFSET(0x1731C7F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E5E3F0C8F86A0712_OFFSET UNITYSDK_OFFSET(0x172FB700)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E605941434A6B6FD_OFFSET UNITYSDK_OFFSET(0x17321860)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E6231ADFC572515E_OFFSET UNITYSDK_OFFSET(0x17109180)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E6594F92F4AC63DA_OFFSET UNITYSDK_OFFSET(0x1752E6A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E6605212BAE01ACC_OFFSET UNITYSDK_OFFSET(0x170F7AB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E6620681268343CF_OFFSET UNITYSDK_OFFSET(0x17321D40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E66235B59A5A8A9F_OFFSET UNITYSDK_OFFSET(0x173120F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E67451D3F56909C3_OFFSET UNITYSDK_OFFSET(0x17108000)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E67C8781EF1076EB_1_OFFSET UNITYSDK_OFFSET(0x172E8010)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E67C8781EF1076EB_2_OFFSET UNITYSDK_OFFSET(0x172EB250)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E67C8781EF1076EB_OFFSET UNITYSDK_OFFSET(0x172E1460)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E69C20A37C2AE5E9_OFFSET UNITYSDK_OFFSET(0x172F42F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E6A668E2697BAF15_OFFSET UNITYSDK_OFFSET(0x172D3FF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E701138CDF31C3DA_OFFSET UNITYSDK_OFFSET(0x1710A770)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E706252EEABC9D5A_OFFSET UNITYSDK_OFFSET(0x170E25B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E735A62C81DBE960_OFFSET UNITYSDK_OFFSET(0x17116270)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E778B50961FD5130_OFFSET UNITYSDK_OFFSET(0x1730E120)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E7C4FB0B77D4DD5C_OFFSET UNITYSDK_OFFSET(0x17105020)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E81EA87F212E3BE3_1_OFFSET UNITYSDK_OFFSET(0x172E4830)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E81EA87F212E3BE3_2_OFFSET UNITYSDK_OFFSET(0x172F6370)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E81EA87F212E3BE3_OFFSET UNITYSDK_OFFSET(0x172DA2B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E833EF1A82318C47_OFFSET UNITYSDK_OFFSET(0x172CF370)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E88730B7828C9A2A_OFFSET UNITYSDK_OFFSET(0x173147B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E8A4F65FF8EAB441_OFFSET UNITYSDK_OFFSET(0x17113D50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E8A5759662745383_OFFSET UNITYSDK_OFFSET(0x170FCEA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E8F377C24C95608E_OFFSET UNITYSDK_OFFSET(0x1752CFE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E9593FAC4419FFFA_OFFSET UNITYSDK_OFFSET(0x172DC600)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E9612CFE3F7E90FD_OFFSET UNITYSDK_OFFSET(0x1752BB10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E974CAFFFD96B5BE_OFFSET UNITYSDK_OFFSET(0x172CEB20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E974D190B0434460_OFFSET UNITYSDK_OFFSET(0x17309FC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_E980F1A6284FF78D_OFFSET UNITYSDK_OFFSET(0x172F9A40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EA82055C0F1977D0_OFFSET UNITYSDK_OFFSET(0x170F1CC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EAAB3A90AD38538B_OFFSET UNITYSDK_OFFSET(0x1731D1B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EAF9482085385B74_OFFSET UNITYSDK_OFFSET(0x172EEB60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EB0A62414F41CAA6_OFFSET UNITYSDK_OFFSET(0x1730DA30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EB1B723184C63D55_OFFSET UNITYSDK_OFFSET(0x17322D00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EB2EC7B30A69F695_OFFSET UNITYSDK_OFFSET(0x173081D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EB40149633D29A4C_OFFSET UNITYSDK_OFFSET(0x172FCA40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EB5099D4714264F3_OFFSET UNITYSDK_OFFSET(0x17117510)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EB928CD80A5DB556_OFFSET UNITYSDK_OFFSET(0x170F3390)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EB9CCDF723B4CA57_OFFSET UNITYSDK_OFFSET(0x1752EB20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EBA1ECE5679E03E1_OFFSET UNITYSDK_OFFSET(0x172FDA90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EBAB914EC63A75DD_OFFSET UNITYSDK_OFFSET(0x170E6240)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EBAC159E87DEC66D_OFFSET UNITYSDK_OFFSET(0x172CEF30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EBEF4D06C56BFD33_OFFSET UNITYSDK_OFFSET(0x170F1410)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EC461EB4A2BDE4AD_OFFSET UNITYSDK_OFFSET(0x1731CF50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EC662ACC4402C765_OFFSET UNITYSDK_OFFSET(0x17305400)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EC6DC72AB6F78E0B_OFFSET UNITYSDK_OFFSET(0x172DC290)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EC6DE871C6D3249C_OFFSET UNITYSDK_OFFSET(0x1730A860)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EC7469475FA05107_OFFSET UNITYSDK_OFFSET(0x1752ECD0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EC8F344C9FED3C13_OFFSET UNITYSDK_OFFSET(0x17302530)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EC9CB2E6E8C80AE9_OFFSET UNITYSDK_OFFSET(0x170E8580)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EDD95CB934FE11C5_OFFSET UNITYSDK_OFFSET(0x172E72D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EDDF164042A89BEE_OFFSET UNITYSDK_OFFSET(0x172D76E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EE0903D8E4757012_OFFSET UNITYSDK_OFFSET(0x172FA580)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EE43DBA9F7CD37B6_OFFSET UNITYSDK_OFFSET(0x172D4260)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EE4E8BC5DB745FF0_OFFSET UNITYSDK_OFFSET(0x172FE340)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EE5373EA0307D81E_OFFSET UNITYSDK_OFFSET(0x172DE0C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EE9896936F70DF0A_OFFSET UNITYSDK_OFFSET(0x17313630)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EECECD795A6E86E8_OFFSET UNITYSDK_OFFSET(0x170F96C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EF062A6C312F3A83_OFFSET UNITYSDK_OFFSET(0x17117B80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EF17AB37836BCAE5_OFFSET UNITYSDK_OFFSET(0x172F46F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EF87251102042005_OFFSET UNITYSDK_OFFSET(0x1752DF70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EF9654AABC54827F_OFFSET UNITYSDK_OFFSET(0x170F2D60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_EFC09E4E014D5CBE_OFFSET UNITYSDK_OFFSET(0x172D9C70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F01BE215C80606C1_OFFSET UNITYSDK_OFFSET(0x1731B560)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F0500B8F1318E661_OFFSET UNITYSDK_OFFSET(0x172DCE20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F0823D0B066FC464_OFFSET UNITYSDK_OFFSET(0x172DAA40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F0FC7374EE55B22C_OFFSET UNITYSDK_OFFSET(0x172DF4C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F10300019BEE2D3F_OFFSET UNITYSDK_OFFSET(0x172F3100)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F14155A7708D5DA4_OFFSET UNITYSDK_OFFSET(0x172DCE90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F142E196D16FDB42_OFFSET UNITYSDK_OFFSET(0x1731C010)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F164B8F3992F2AF9_OFFSET UNITYSDK_OFFSET(0x173193B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F1BEEC778192E08E_OFFSET UNITYSDK_OFFSET(0x1731C8A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F1E6F5FC5860A770_OFFSET UNITYSDK_OFFSET(0x1731CD40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F1ECF942793B0B67_OFFSET UNITYSDK_OFFSET(0x1731E8D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F21D6F6F97EBC3E6_OFFSET UNITYSDK_OFFSET(0x171011E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F22D0AFC199064F0_OFFSET UNITYSDK_OFFSET(0x1710C680)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F26E88582B7921F9_OFFSET UNITYSDK_OFFSET(0x1752B800)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F2A0336E40397A7E_OFFSET UNITYSDK_OFFSET(0x172D1E20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F3148AB2FF20CCA6_OFFSET UNITYSDK_OFFSET(0x17112F30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F32CAE590984A85F_OFFSET UNITYSDK_OFFSET(0x172CED90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F3352E2A01C4383A_OFFSET UNITYSDK_OFFSET(0x1752C190)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F37EC25073E22674_OFFSET UNITYSDK_OFFSET(0x1752ADB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F396F4AB770D4DAB_OFFSET UNITYSDK_OFFSET(0x17300720)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F3AEEDCAC183F672_OFFSET UNITYSDK_OFFSET(0x170EC820)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F3EE4E6FD604A85E_OFFSET UNITYSDK_OFFSET(0x172E8980)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F43CE39E1C56ED3D_OFFSET UNITYSDK_OFFSET(0x1731F1B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F458794F12FF59F0_OFFSET UNITYSDK_OFFSET(0x172D7470)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F459637934B6C249_OFFSET UNITYSDK_OFFSET(0x172D78D0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F4F24B3F4FDFF9FC_OFFSET UNITYSDK_OFFSET(0x1731DE20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F53390C0243D1306_OFFSET UNITYSDK_OFFSET(0x17103680)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F57C1CF81E504420_OFFSET UNITYSDK_OFFSET(0x17322150)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F5ABE09A3389FB86_OFFSET UNITYSDK_OFFSET(0x17301490)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F61E028951820201_OFFSET UNITYSDK_OFFSET(0x172EDA00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F63956C6220FC081_OFFSET UNITYSDK_OFFSET(0x172E2A00)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F64AF1F12924E09E_OFFSET UNITYSDK_OFFSET(0x172D0880)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F64C7C58309BDB98_OFFSET UNITYSDK_OFFSET(0x1752E7E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F654DE214690DEF9_OFFSET UNITYSDK_OFFSET(0x172F6F20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F676C74C552B4759_OFFSET UNITYSDK_OFFSET(0x1752A2B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F6A748A5ADF1C2F9_OFFSET UNITYSDK_OFFSET(0x17529EA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F6FC62B4033EA676_OFFSET UNITYSDK_OFFSET(0x172F6AC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F743A7D6C5483553_OFFSET UNITYSDK_OFFSET(0x17318E90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F77B6FA35B570DE3_OFFSET UNITYSDK_OFFSET(0x1730D0C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F7D5C052D26F0C72_OFFSET UNITYSDK_OFFSET(0x17119BE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F7D99E24A2657140_OFFSET UNITYSDK_OFFSET(0x170ED4E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F7EF489593BB209B_OFFSET UNITYSDK_OFFSET(0x17529FC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F80228ABF284020B_OFFSET UNITYSDK_OFFSET(0x17304700)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F82E973DDF361749_OFFSET UNITYSDK_OFFSET(0x172D8A30)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F8337A270BB7DFAB_OFFSET UNITYSDK_OFFSET(0x172D5240)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F83625D01AE9D0DE_OFFSET UNITYSDK_OFFSET(0x172EC2F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F8435E43333DF41B_OFFSET UNITYSDK_OFFSET(0x173042B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F8875C39A0D7ABF7_OFFSET UNITYSDK_OFFSET(0x1731E860)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F8B1463AF1CF173C_OFFSET UNITYSDK_OFFSET(0x172DA030)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F9311089A30FB3F2_OFFSET UNITYSDK_OFFSET(0x172FC770)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F9437709709C9009_OFFSET UNITYSDK_OFFSET(0x172EF850)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F9956A196E297DB6_OFFSET UNITYSDK_OFFSET(0x17320780)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F9A25716E01018D2_OFFSET UNITYSDK_OFFSET(0x17115FA0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F9C8A04AD691192D_OFFSET UNITYSDK_OFFSET(0x170F8CC0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F9FBEB317CAB21BB_OFFSET UNITYSDK_OFFSET(0x172D0A60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_F9FD94A19304E6AA_OFFSET UNITYSDK_OFFSET(0x170F06B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FA426140832A7BAA_OFFSET UNITYSDK_OFFSET(0x172DB580)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FA539760538A5A4C_OFFSET UNITYSDK_OFFSET(0x170F0C70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FA857C9297F76B2A_OFFSET UNITYSDK_OFFSET(0x17113DE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FA8A9427D9BFB765_OFFSET UNITYSDK_OFFSET(0x17320B60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FAC9875418F9660D_OFFSET UNITYSDK_OFFSET(0x172F4CF0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FAD1FBC5E043ECF4_OFFSET UNITYSDK_OFFSET(0x170F9C40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FAD6005F3D77ACBC_OFFSET UNITYSDK_OFFSET(0x172D8050)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FAE97A9B1350E10F_OFFSET UNITYSDK_OFFSET(0x172E1730)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FB202F29A1108980_OFFSET UNITYSDK_OFFSET(0x172D4A40)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FB2AC9F955535041_OFFSET UNITYSDK_OFFSET(0x17108C10)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FB427743F9EDA098_OFFSET UNITYSDK_OFFSET(0x170EC970)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FBC3371975645570_OFFSET UNITYSDK_OFFSET(0x170F4CE0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FBF7A95EFE8D2E39_OFFSET UNITYSDK_OFFSET(0x170F8300)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FC38B47BC09561E1_OFFSET UNITYSDK_OFFSET(0x170E5780)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FC8E98DE0BCC7494_OFFSET UNITYSDK_OFFSET(0x172E8D70)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FC9D408394C81F15_OFFSET UNITYSDK_OFFSET(0x172FBA90)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FCC822E89ADBAEE4_OFFSET UNITYSDK_OFFSET(0x172D9290)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FCD304EFE0C5D7CD_OFFSET UNITYSDK_OFFSET(0x172ECC50)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FCFF1FB7DF9695C9_OFFSET UNITYSDK_OFFSET(0x173227A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FD0CA588EEE12690_OFFSET UNITYSDK_OFFSET(0x1731D5A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FD1ECB8003738FD1_OFFSET UNITYSDK_OFFSET(0x1752C1C0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FD2C70891A9592BE_OFFSET UNITYSDK_OFFSET(0x172F7DB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FD7620F24B3F66E3_OFFSET UNITYSDK_OFFSET(0x172EE4A0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FD7AC417EDCECD6B_OFFSET UNITYSDK_OFFSET(0x173164E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FD7C7B3472E23E45_OFFSET UNITYSDK_OFFSET(0x1731A8E0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FD949C33BF987EA8_OFFSET UNITYSDK_OFFSET(0x172D3970)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FE0C07073CD4FDDC_OFFSET UNITYSDK_OFFSET(0x17322960)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FE2E24B2B7ADF2BA_OFFSET UNITYSDK_OFFSET(0x1731EC80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FE50D68C42285EFE_OFFSET UNITYSDK_OFFSET(0x1752C5F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FE564220C49887A9_OFFSET UNITYSDK_OFFSET(0x172F5B80)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FE7200344619943C_OFFSET UNITYSDK_OFFSET(0x172DBDB0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FE96E64849A50BE7_OFFSET UNITYSDK_OFFSET(0x172D0150)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FEE7ADD1165C8A43_OFFSET UNITYSDK_OFFSET(0x170F7F20)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FF03FC29F57FEF8F_OFFSET UNITYSDK_OFFSET(0x171139F0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FF0948DBB1EEF46E_OFFSET UNITYSDK_OFFSET(0x170EE450)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FF0CAA9883B9CE9B_OFFSET UNITYSDK_OFFSET(0x172E6440)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FF0E135293D01583_OFFSET UNITYSDK_OFFSET(0x172E2E60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FF91907CE74AAB99_OFFSET UNITYSDK_OFFSET(0x170F38B0)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FFCF6D976B3E952D_OFFSET UNITYSDK_OFFSET(0x17309C60)
#define CLASS_1_9DED06D267F0347B_METHOD_1_FFF5DB4CFFCA51F5_OFFSET UNITYSDK_OFFSET(0x172FA010)
#define CLASS_1_9DED06D267F0347B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1752FF20)

inline static constexpr unsigned int Class_1_9DED06D267F0347B_TypeDefinitionIndex = 22485;

class Class_1_9DED06D267F0347B : public ::System::Object
{
public:
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Int32>** StaticGet_Field_1_26()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x195D0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StageVolumeConfig*>** StaticGet_Field_1_51()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StageVolumeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x195D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::FateModifierConfigBase*>*>** StaticGet_Field_1_77()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::FateModifierConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x195E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PlayerActionConfigBase*>*>** StaticGet_Field_1_80()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PlayerActionConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x195E8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::Match3::Match3ActionBase*>*>** StaticGet_Field_1_68()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::Match3::Match3ActionBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x195F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::RogueParameterConfigBase*>*>** StaticGet_Field_1_84()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::RogueParameterConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x195F8);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::MVector2>** StaticGet_Field_1_38()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::MVector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19600);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Double>** StaticGet_Field_1_11()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19608);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::PropDestructItem*>** StaticGet_Field_1_44()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::PropDestructItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19610);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::PckPatchPlatform*>** StaticGet_Field_1_42()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::PckPatchPlatform*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19618);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::FinishActionConfig*>** StaticGet_Field_1_19()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::FinishActionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19620);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Int16>** StaticGet_Field_1_46()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Int16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19628);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MissionCustomValue*>** StaticGet_Field_1_32()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MissionCustomValue*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19630);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MissionItemConfig*>** StaticGet_Field_1_35()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MissionItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19638);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Single>** StaticGet_Field_1_21()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19640);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::RogueModifierConfig*>*>** StaticGet_Field_1_73()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::RogueModifierConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19648);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::MiParameterConfigBase*>*>** StaticGet_Field_1_72()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::MiParameterConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19650);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::DynamicFloat*>** StaticGet_Field_1_12()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::DynamicFloat*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19658);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AssistWayPointCondition*>** StaticGet_Field_1_1()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AssistWayPointCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19660);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MissionCustomValueRewardConfig*>** StaticGet_Field_1_34()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MissionCustomValueRewardConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19668);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::PckFileList*>** StaticGet_Field_1_41()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::PckFileList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19670);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::Struct_2_0ACB88BD1D804FF7>** StaticGet_Field_1_37()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::Struct_2_0ACB88BD1D804FF7>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19678);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::Vector3CurveFrame>** StaticGet_Field_1_62()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::Vector3CurveFrame>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19680);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::UInt16>** StaticGet_Field_1_61()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19688);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Boolean>** StaticGet_Field_1_7()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19690);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::MColor>** StaticGet_Field_1_31()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::MColor>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19698);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::TargetEvaluator*>** StaticGet_Field_1_57()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::TargetEvaluator*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x196A0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::HoyoTag*>** StaticGet_Field_1_25()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::HoyoTag*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x196A8);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StageVolumeComponentData*>** StaticGet_Field_1_50()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StageVolumeComponentData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x196B0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MissionCustomValueGroupConfig*>** StaticGet_Field_1_33()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MissionCustomValueGroupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x196B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::GridFightParameterConfigBase*>*>** StaticGet_Field_1_79()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::GridFightParameterConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x196C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*>*>** StaticGet_Field_1_89()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x196C8);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::SubMissionRelationConfig*>** StaticGet_Field_1_56()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::SubMissionRelationConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x196D0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AssistWayPoint*>** StaticGet_Field_1_0()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AssistWayPoint*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x196D8);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::String*>** StaticGet_Field_1_54()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x196E0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::ByCompareItemPair*>** StaticGet_Field_1_8()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::ByCompareItemPair*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x196E8);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StreamingBlockVolumeComponentData*>** StaticGet_Field_1_52()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StreamingBlockVolumeComponentData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x196F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*>*>** StaticGet_Field_1_88()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x196F8);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::TriggerEffect*>** StaticGet_Field_1_59()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::TriggerEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19700);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::FloatCurveFrame>** StaticGet_Field_1_22()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::FloatCurveFrame>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19708);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::CakeRaceActionBase*>*>** StaticGet_Field_1_74()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::CakeRaceActionBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19710);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AssistWayPointLittleGameCondition*>** StaticGet_Field_1_4()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AssistWayPointLittleGameCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19718);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::IslandStateConfig*>** StaticGet_Field_1_27()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::IslandStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19720);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Int64>** StaticGet_Field_1_30()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19728);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::EffectModifyData*>** StaticGet_Field_1_15()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::EffectModifyData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19730);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvWaitingEventBase*>*>** StaticGet_Field_1_86()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvWaitingEventBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19738);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::EffectConfig*>** StaticGet_Field_1_14()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::EffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19740);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MissionWaypointDataPack*>** StaticGet_Field_1_36()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MissionWaypointDataPack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19748);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Byte>** StaticGet_Field_1_9()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19750);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_92()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19758);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::JsonEnum*>** StaticGet_Field_1_29()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::JsonEnum*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19760);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::RogueActionConfigBase*>*>** StaticGet_Field_1_83()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::RogueActionConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19768);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::UInt32>** StaticGet_Field_1_60()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19770);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::BlockNodeConfig*>** StaticGet_Field_1_6()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::BlockNodeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19778);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StageGrassOverrideConfig*>** StaticGet_Field_1_47()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StageGrassOverrideConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19780);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::SetDynamicValueBase*>*>** StaticGet_Field_1_91()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::SetDynamicValueBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19788);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TaskConfig*>*>** StaticGet_Field_1_87()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TaskConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19790);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::STTaskConfig*>*>** StaticGet_Field_1_85()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::STTaskConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19798);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::ComplexSkillAISource*>*>** StaticGet_Field_1_64()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::ComplexSkillAISource*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x197A0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::FloorCustomValueConfig*>** StaticGet_Field_1_23()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::FloorCustomValueConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x197A8);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::FixPoint>** StaticGet_Field_1_20()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x197B0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StageIslandHLODConfig*>** StaticGet_Field_1_49()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StageIslandHLODConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x197B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::MiActionConfigBase*>*>** StaticGet_Field_1_70()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::MiActionConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x197C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::MiConditionConfigBase*>*>** StaticGet_Field_1_71()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::MiConditionConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x197C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::MarbleTaskConfig*>*>** StaticGet_Field_1_67()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::MarbleTaskConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x197D0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AssistWayPointFastComplete*>** StaticGet_Field_1_3()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AssistWayPointFastComplete*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x197D8);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::Struct_2_331ACDD60B60D2E3>** StaticGet_Field_1_40()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::Struct_2_331ACDD60B60D2E3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x197E0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::SubMissionInfoConfig*>** StaticGet_Field_1_55()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::SubMissionInfoConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x197E8);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::TargetSeqOperation*>** StaticGet_Field_1_58()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::TargetSeqOperation*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x197F0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::Client::TextID>** StaticGet_Field_1_10()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x197F8);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AssistWayPointPack*>** StaticGet_Field_1_5()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AssistWayPointPack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19800);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_93()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19808);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StageIslandConfig*>** StaticGet_Field_1_48()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StageIslandConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19810);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::FiveDimBaseEventAction*>*>** StaticGet_Field_1_75()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::FiveDimBaseEventAction*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19818);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::PropStateItem*>** StaticGet_Field_1_45()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::PropStateItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19820);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::IslandStateSavedValueCondition*>** StaticGet_Field_1_28()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::IslandStateSavedValueCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19828);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::PredicateConfig*>** StaticGet_Field_1_43()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::PredicateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19830);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::BaseChimeraDuelNode*>*>** StaticGet_Field_1_65()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::BaseChimeraDuelNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19838);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameComponentConfig*>*>** StaticGet_Field_1_76()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameComponentConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19840);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::GridFightModifierConfigBase*>*>** StaticGet_Field_1_78()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::GridFightModifierConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19848);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::Vector4CurveFrame>** StaticGet_Field_1_63()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::Vector4CurveFrame>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19850);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::FetchAdvMonsterData*>** StaticGet_Field_1_16()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::FetchAdvMonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19858);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PlayerCondConfigBase*>*>** StaticGet_Field_1_81()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PlayerCondConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19860);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::MVector3>** StaticGet_Field_1_39()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::MVector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19868);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*>*>** StaticGet_Field_1_90()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19870);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::FetchAdvPropData*>** StaticGet_Field_1_18()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::FetchAdvPropData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19878);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StreamingSceneScaleData*>** StaticGet_Field_1_53()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::StreamingSceneScaleData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19880);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::GroupPropertyConfig*>** StaticGet_Field_1_24()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::GroupPropertyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19888);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::DynamicString*>** StaticGet_Field_1_13()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19890);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AssistWayPointConditionPack*>** StaticGet_Field_1_2()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AssistWayPointConditionPack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x19898);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::DiceCombatTaskConfig*>*>** StaticGet_Field_1_66()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::DiceCombatTaskConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x198A0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::FetchAdvNPCData*>** StaticGet_Field_1_17()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::FetchAdvNPCData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x198A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PlayerParameterConfigBase*>*>** StaticGet_Field_1_82()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PlayerParameterConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x198B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::MiAtomConfigBase*>*>** StaticGet_Field_1_69()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::MiAtomConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B_TypeDefinitionIndex)->GetStaticField(0x198B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_B77C63D184710B27(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckPatchPlatform*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckPatchPlatform*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B77C63D184710B27_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6599B5CD398D02C6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckFileList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckFileList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6599B5CD398D02C6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_72C03938FAA78DE2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckPatchConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckPatchConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_72C03938FAA78DE2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BF90BF8E195387BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicStringList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicStringList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BF90BF8E195387BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2CDC96CE58310CEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomValueConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomValueConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2CDC96CE58310CEA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_194222831CC5BFA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomValueConfig* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_194222831CC5BFA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CA0D7A4794C80D3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomFloatConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomFloatConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9CA0D7A4794C80D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A02A8A510D55B28(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomFloatConfig* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomFloatConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8A02A8A510D55B28_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8311278F54996E03(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomBoolConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomBoolConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8311278F54996E03_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_13C838DCD3B70C18(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomBoolConfig* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomBoolConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_13C838DCD3B70C18_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9D9A53550B5AB6E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomStringConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomStringConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9D9A53550B5AB6E6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2D0B4B415333EE50(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomStringConfig* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomStringConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2D0B4B415333EE50_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E706252EEABC9D5A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorTargetAgentConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorTargetAgentConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E706252EEABC9D5A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2807B9FF94613B85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorTargetAgentConfig* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorTargetAgentConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2807B9FF94613B85_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D1FCA461B457195(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupPropertyConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupPropertyConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1D1FCA461B457195_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_65112798D2B9CD95(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::HoyoTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::HoyoTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_65112798D2B9CD95_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_90633E88AF7A9BF0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::HoyoTagContainer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::HoyoTagContainer*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_90633E88AF7A9BF0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B0E5915849A17974(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionItemConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionItemConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B0E5915849A17974_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_91030B75756677B7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_91030B75756677B7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9756E29901CA6A39(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueRewardConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueRewardConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9756E29901CA6A39_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_691F5C0677B76E97(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueTuple*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueTuple*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_691F5C0677B76E97_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B1A68360E0CF2BD5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueGroupConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueGroupConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B1A68360E0CF2BD5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_126F568F9DA01234(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueGroupConfigPack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueGroupConfigPack*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_126F568F9DA01234_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_949EF2D02B24A6AC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_949EF2D02B24A6AC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_433669AAAF7840CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointCondition* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointCondition*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_433669AAAF7840CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DD2FC63BE0D9DEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointDistanceCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointDistanceCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2DD2FC63BE0D9DEB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E96383A88F6BF4A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointDistanceCondition* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointDistanceCondition*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7E96383A88F6BF4A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3FD40410EEFD8CEC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropStateCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropStateCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3FD40410EEFD8CEC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D2A287DC8FBBF0E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropStateCondition* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropStateCondition*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D2A287DC8FBBF0E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F898FD54459124B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFCVCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFCVCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7F898FD54459124B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_524AD3A84C64BB2A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFCVCondition* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFCVCondition*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_524AD3A84C64BB2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_696A30B01FD6FDEC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_696A30B01FD6FDEC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FC38B47BC09561E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FC38B47BC09561E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_83C331D0751BE5AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_83C331D0751BE5AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B2623870FA7960A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1B2623870FA7960A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D3CB2A8F67D71836(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointTimelineStateCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointTimelineStateCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D3CB2A8F67D71836_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E5DD10ED5F1EA13(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointTimelineStateCondition* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointTimelineStateCondition*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3E5DD10ED5F1EA13_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_535C94841CD646C0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_535C94841CD646C0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EBAB914EC63A75DD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointGroupPropertyCondition* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EBAB914EC63A75DD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E2E16E0258002D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointConditionPack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointConditionPack*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2E2E16E0258002D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_86814B81367C7A56(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointConditionMain*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointConditionMain*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_86814B81367C7A56_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8249C41F6FD7A6DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFastComplete*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFastComplete*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8249C41F6FD7A6DE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C3E048C0DB44979A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPoint*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPoint*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C3E048C0DB44979A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2D31226F03A3D654(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointLittleGameCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointLittleGameCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2D31226F03A3D654_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6F53F2C4628CB52A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPack*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6F53F2C4628CB52A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_29CC48C1818157C6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::CheckFloorSavedValueConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::CheckFloorSavedValueConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_29CC48C1818157C6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B4DC9E7F1DE536DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionWaypointDataPack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionWaypointDataPack*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B4DC9E7F1DE536DE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_26274364E52CBC3A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FinishActionConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FinishActionConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_26274364E52CBC3A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC9CB2E6E8C80AE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubMissionInfoConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubMissionInfoConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EC9CB2E6E8C80AE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1FE9FD4E84FDF458(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubMissionRelationConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubMissionRelationConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1FE9FD4E84FDF458_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2F7E29C802CAE74(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MainMissionInfoConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MainMissionInfoConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E2F7E29C802CAE74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E26417CB26FC90B5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BlockNodeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BlockNodeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E26417CB26FC90B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8D0D7178DDF909D0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8D0D7178DDF909D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F3AEEDCAC183F672(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F3AEEDCAC183F672_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A702FFA6CE66775C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingGroupVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A702FFA6CE66775C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2E420FACF6C4633(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingGroupVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E2E420FACF6C4633_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_093AC186799625CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingBlockVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingBlockVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_093AC186799625CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_527053D59ACCBC64(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingBlockVolumeComponentData* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingBlockVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_527053D59ACCBC64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1C9D9D0BDA40E993(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1C9D9D0BDA40E993_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E0AA829D55A442AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingVolumeComponentData* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E0AA829D55A442AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FB427743F9EDA098(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingRatioVolumeData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingRatioVolumeData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FB427743F9EDA098_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_09DDC95B6AA4276B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingRatioVolumeData* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingRatioVolumeData*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_09DDC95B6AA4276B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_11AC1EA5434613E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingForceHLODVolumeData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingForceHLODVolumeData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_11AC1EA5434613E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_35390EC53C6C7C30(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingForceHLODVolumeData* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingForceHLODVolumeData*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_35390EC53C6C7C30_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1CEE521FF92421F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingLightVolumeData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingLightVolumeData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1CEE521FF92421F1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F7D99E24A2657140(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingLightVolumeData* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingLightVolumeData*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F7D99E24A2657140_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A52BC654003E074(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9A52BC654003E074_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_16DF2D86172CBB67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_16DF2D86172CBB67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B6C7329EA371EC88(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageGrassOverrideConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageGrassOverrideConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B6C7329EA371EC88_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D914FA9852D18A48(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageIslandConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageIslandConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D914FA9852D18A48_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_80F17DFBF146FA44(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageIslandHLODConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageIslandHLODConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_80F17DFBF146FA44_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D94DDAB21A4C55FE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D94DDAB21A4C55FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9F835D81DC6B0EB2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateConditionSet*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateConditionSet*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9F835D81DC6B0EB2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF0948DBB1EEF46E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateSavedValueCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateSavedValueCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FF0948DBB1EEF46E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E566E22A4F937F75(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVersionData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVersionData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E566E22A4F937F75_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC00BF52A2505230(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AC00BF52A2505230_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_182D027A9B96A9FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneScaleData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneScaleData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_182D027A9B96A9FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A62B10BEA34E31DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A62B10BEA34E31DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8321050FBD6702ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::OfflineCullingConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::OfflineCullingConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8321050FBD6702ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D(::SimpleJSON::JSONNode* a1, ::Class_4_87568F4B1AE1BC50*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_87568F4B1AE1BC50*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_48B8135CCD2FFDDD(::SimpleJSON::JSONNode* a1, ::Class_4_87568F4B1AE1BC50* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_87568F4B1AE1BC50*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_48B8135CCD2FFDDD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5BEF2CB1D54D28A5(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5BEF2CB1D54D28A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF6885CB8BBBF535(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CF6885CB8BBBF535_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1809F43A6EB04880(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1809F43A6EB04880_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7188E6D0455E9B9D(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7188E6D0455E9B9D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_273C50CE8AF93DCB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareLapCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_273C50CE8AF93DCB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F9FD94A19304E6AA(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareLapCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F9FD94A19304E6AA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5441400C0E4054E9(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5441400C0E4054E9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_957E566BE9B130B8(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareRank* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareRank*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_957E566BE9B130B8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA539760538A5A4C(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FA539760538A5A4C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7EC336AC4B46F641(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7EC336AC4B46F641_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_27FBC079E5E9CE24(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_27FBC079E5E9CE24_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C4FB96502D79D6A9(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C4FB96502D79D6A9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ADD1252A12694296(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_ADD1252A12694296_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0D66AE56C3EBA7FF(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0D66AE56C3EBA7FF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EBEF4D06C56BFD33(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesLevelUp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesLevelUp*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EBEF4D06C56BFD33_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D169B027FBC7146E(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesLevelUp* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesLevelUp*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D169B027FBC7146E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E4E1227651FF4E8E(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E4E1227651FF4E8E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B5A6F3EBFB92917(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1B5A6F3EBFB92917_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E77177D17C443C0(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7E77177D17C443C0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4E17471E6D6C4BAF(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4E17471E6D6C4BAF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B579252F7C9C9E46(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B579252F7C9C9E46_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_412A3122202B77AF(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_412A3122202B77AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3C954919D5206A0D(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInSpineAnim*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInSpineAnim*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3C954919D5206A0D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EA82055C0F1977D0(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInSpineAnim* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInSpineAnim*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EA82055C0F1977D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E9DAF2F0F43A5BF(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInMove*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInMove*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7E9DAF2F0F43A5BF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC87F67756FC5212(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInMove* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInMove*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CC87F67756FC5212_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61C68AA298E4D88C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInAnimZone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInAnimZone*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_61C68AA298E4D88C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5C057B9F1F1AA5FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInAnimZone* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInAnimZone*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5C057B9F1F1AA5FF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3EC328D2C43821E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A3EC328D2C43821E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C0E926231E8D26E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C0E926231E8D26E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5B061F019AD01A4B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamOnlineFirst*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamOnlineFirst*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5B061F019AD01A4B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6EAA36B44D470FE6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamOnlineFirst* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamOnlineFirst*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6EAA36B44D470FE6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_95DCFDCC08EC0362(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamMovePhaseTalk*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamMovePhaseTalk*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_95DCFDCC08EC0362_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5FCD8320575A5EA3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamMovePhaseTalk* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5FCD8320575A5EA3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64A7159E234ED1B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamActionPhaseTalk*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamActionPhaseTalk*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_64A7159E234ED1B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4A2178BF59A9E8EE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamActionPhaseTalk* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4A2178BF59A9E8EE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_88014D35F2C5A487(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalAction*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_88014D35F2C5A487_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_22232B139EE9119A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalAction* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalAction*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_22232B139EE9119A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EF9654AABC54827F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalActionSwitch*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalActionSwitch*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EF9654AABC54827F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA067DC3935EC6D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalActionSwitch* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalActionSwitch*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BA067DC3935EC6D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2CE9A38AA4A9177C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2CE9A38AA4A9177C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8848A553AAEEE455(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8848A553AAEEE455_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_021770BA999BD453(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamAnchorContinous*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamAnchorContinous*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_021770BA999BD453_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BCFDFC8D8C55F98E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamAnchorContinous* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamAnchorContinous*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BCFDFC8D8C55F98E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_118660791D163D8D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_118660791D163D8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB928CD80A5DB556(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EB928CD80A5DB556_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEA3ADA3E609D8B8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerInVisionZone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerInVisionZone*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BEA3ADA3E609D8B8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4DD0BDB829918F9C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerInVisionZone* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerInVisionZone*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4DD0BDB829918F9C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC1698084A4FE338(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPerceiveValueReachMax*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CC1698084A4FE338_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF91907CE74AAB99(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPerceiveValueReachMax*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FF91907CE74AAB99_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8D3054607CCE3B72(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerHide*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerHide*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8D3054607CCE3B72_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7ECA727A3BD964B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerHide* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerHide*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7ECA727A3BD964B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6E11CA95D4F9A73(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByInCustomZone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByInCustomZone*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A6E11CA95D4F9A73_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6890F26B31FB5440(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByInCustomZone* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByInCustomZone*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6890F26B31FB5440_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_861C24D0359E8DEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInAttackRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInAttackRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_861C24D0359E8DEE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A2D0035220F0B5F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInAttackRange* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInAttackRange*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A2D0035220F0B5F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A4EC68E6945BFC7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAlertValueInRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAlertValueInRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8A4EC68E6945BFC7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E44522C8F592DB74(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAlertValueInRange* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAlertValueInRange*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E44522C8F592DB74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B63D511AA0A599F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveObstacle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveObstacle*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B63D511AA0A599F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_77ED26DC755153C0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveObstacle* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveObstacle*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_77ED26DC755153C0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7A177686D02510E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNPCStatus*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNPCStatus*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7A177686D02510E3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FBC3371975645570(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNPCStatus* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNPCStatus*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FBC3371975645570_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7F847D687C15F02(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C7F847D687C15F02_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_94ECABA33922BEF7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_94ECABA33922BEF7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D2BFCDE84542C5B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCarryMazebuff*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCarryMazebuff*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D2BFCDE84542C5B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2FBF7FF528F1B387(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCarryMazebuff* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCarryMazebuff*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2FBF7FF528F1B387_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3FDDEF7E976C471F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAIVariableInt*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAIVariableInt*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3FDDEF7E976C471F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B2CEBE68933A0826(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAIVariableInt* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAIVariableInt*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B2CEBE68933A0826_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_852FB1A5120D2EF4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_852FB1A5120D2EF4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E3DC037047045F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByDistance* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByDistance*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3E3DC037047045F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D872B532F2DE723B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAlertLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAlertLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D872B532F2DE723B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_497CF765A0FA0FB0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAlertLevel* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAlertLevel*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_497CF765A0FA0FB0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3251BD6D35273CFF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByContainEntityTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByContainEntityTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3251BD6D35273CFF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D2B2977029DC4B4C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByContainEntityTag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByContainEntityTag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D2B2977029DC4B4C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_34B86501DA129472(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAIStatus*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAIStatus*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_34B86501DA129472_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DF7D8C5254F902D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAIStatus* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAIStatus*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DF7D8C5254F902D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_808005E4E700461E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableBool*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_808005E4E700461E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E1FA45AD782FB06B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableBool* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E1FA45AD782FB06B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5DCA08A44EBF1A48(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5DCA08A44EBF1A48_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_705797E5119854B5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableFloat* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_705797E5119854B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_88D61F24E99D3182(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_BySkillInCD*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_BySkillInCD*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_88D61F24E99D3182_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ABEFCE6E2A15426E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_BySkillInCD* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_BySkillInCD*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_ABEFCE6E2A15426E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C2852D68DF707491(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C2852D68DF707491_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D0B6AA9E3EBBCE34(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D0B6AA9E3EBBCE34_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1E47208A89459B5E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistToGuardPosition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistToGuardPosition*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1E47208A89459B5E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_503D511525E6EBAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistToGuardPosition* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistToGuardPosition*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_503D511525E6EBAB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7923BA872C7C1F39(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAlertLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAlertLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7923BA872C7C1F39_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A255854D5CE21A72(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAlertLevel* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAlertLevel*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A255854D5CE21A72_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA48B80E882CB00D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasPatrolPath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasPatrolPath*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AA48B80E882CB00D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8CAD078E87268638(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasPatrolPath* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasPatrolPath*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8CAD078E87268638_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E6605212BAE01ACC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableBool*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E6605212BAE01ACC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6ACFF15EB29CB6C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableBool* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6ACFF15EB29CB6C1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F64C515867F0BA6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1F64C515867F0BA6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FEE7ADD1165C8A43(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableFloat* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FEE7ADD1165C8A43_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FBF7A95EFE8D2E39(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableString*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FBF7A95EFE8D2E39_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F389CFC1DEE2248(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableString* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableString*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1F389CFC1DEE2248_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_678B897906FC428E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_678B897906FC428E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9E04D64174B61D17(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9E04D64174B61D17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D16E92C7CC1C204E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackAngle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackAngle*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D16E92C7CC1C204E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B26D0C23081044D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackAngle* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackAngle*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B26D0C23081044D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01415D3C3D4D48A9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAIHangUp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAIHangUp*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_01415D3C3D4D48A9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_37180CE727F3100C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_37180CE727F3100C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F9C8A04AD691192D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F9C8A04AD691192D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2FAAC7FB0B1DC244(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToEnchantTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2FAAC7FB0B1DC244_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2C258A04597CF9CA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2C258A04597CF9CA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6B18C6D2725EC74F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6B18C6D2725EC74F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A9D027AB6B0C9C39(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasBornSmartObject*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasBornSmartObject*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A9D027AB6B0C9C39_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D797602181F8C1C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasBornSmartObject* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasBornSmartObject*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1D797602181F8C1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EECECD795A6E86E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAbnormalState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAbnormalState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EECECD795A6E86E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_77732773CAE69F8C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_77732773CAE69F8C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_65619281ADAE5EB4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_65619281ADAE5EB4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_585BC8E511E2DEF0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_585BC8E511E2DEF0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FAD1FBC5E043ECF4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByContainAbnormalState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByContainAbnormalState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FAD1FBC5E043ECF4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B66D458793765030(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByContainAbnormalState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByContainAbnormalState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B66D458793765030_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2D106D2F12E42F02(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAIStatus*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAIStatus*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2D106D2F12E42F02_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_502A1C78535C3FEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAIStatus* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAIStatus*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_502A1C78535C3FEE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1A2EFC350FC3FBC6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByOnHit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByOnHit*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1A2EFC350FC3FBC6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A5E00827B352D52F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByOnHit* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByOnHit*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A5E00827B352D52F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1BC7B7286B1C268C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByFoundSmartObject*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByFoundSmartObject*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1BC7B7286B1C268C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E04141DEA8D91B65(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByFoundSmartObject* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByFoundSmartObject*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E04141DEA8D91B65_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4C78F5FD4BAF4633(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByForceExitCombat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByForceExitCombat*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4C78F5FD4BAF4633_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_31F3591E820A5D6E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByForceExitCombat* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByForceExitCombat*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_31F3591E820A5D6E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_10ACE4851B8B3206(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByEnterCombat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByEnterCombat*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_10ACE4851B8B3206_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_432EEA913243DE6F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByEnterCombat* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByEnterCombat*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_432EEA913243DE6F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5B6DF8312C97BDB2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByExitCombat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByExitCombat*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5B6DF8312C97BDB2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6603BF5557301F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByExitCombat* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByExitCombat*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A6603BF5557301F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BAA0937A102D12FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectForUI*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectForUI*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BAA0937A102D12FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5C5BD21CAD6BF883(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectForUI* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectForUI*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5C5BD21CAD6BF883_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9B194B5D83D633B5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRebuiltSummonUnit*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9B194B5D83D633B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8220396FB81967BC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRebuiltSummonUnit*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8220396FB81967BC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_058B55F04D504C99(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySwitchMascotCanShootTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_058B55F04D504C99_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A6605B9B44B19FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySwitchMascotCanShootTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2A6605B9B44B19FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E8A5759662745383(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAdvCharacterLogicState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAdvCharacterLogicState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E8A5759662745383_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B7BC7351B0DE2890(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAdvCharacterLogicState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAdvCharacterLogicState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B7BC7351B0DE2890_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BDC0C1F4BA4C0192(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropLockable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropLockable*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BDC0C1F4BA4C0192_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5EBBB0A0E72BFCF9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropLockable* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropLockable*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5EBBB0A0E72BFCF9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CFCB2D16941DE370(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetHitBoxActive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetHitBoxActive*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CFCB2D16941DE370_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9F8D94A3B0BA1ECD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetHitBoxActive* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetHitBoxActive*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9F8D94A3B0BA1ECD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4D6F6BC3C51206AD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4D6F6BC3C51206AD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_794B31942E9E9258(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_794B31942E9E9258_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_717520899DFB59C9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_717520899DFB59C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5146FEC3ADDF38AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5146FEC3ADDF38AA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_89EF586ECB238879(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInMotionState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInMotionState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_89EF586ECB238879_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D69A21E4DCAF8B2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInMotionState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInMotionState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6D69A21E4DCAF8B2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_38BA88017389E815(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMotionHitColliderWall*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_38BA88017389E815_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA9DA575E0F2A796(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMotionHitColliderWall*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AA9DA575E0F2A796_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA3654B3C0A419CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DA3654B3C0A419CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4A1239F5A26E163F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4A1239F5A26E163F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_870E75E3F239E825(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCheckMoveInput*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCheckMoveInput*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_870E75E3F239E825_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_22AD76A9BA583810(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCheckMoveInput* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCheckMoveInput*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_22AD76A9BA583810_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4B4B09B2649E3CFC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInAnimZone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInAnimZone*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4B4B09B2649E3CFC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B1FC9886DBE9D56F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInAnimZone* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInAnimZone*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B1FC9886DBE9D56F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_19DD44003ADEC380(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareProjectileLifetime*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareProjectileLifetime*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_19DD44003ADEC380_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_735C3696118D169D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareProjectileLifetime* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareProjectileLifetime*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_735C3696118D169D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7B7832C988D5B945(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFearCharacterCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFearCharacterCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7B7832C988D5B945_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9182F36E86F4F0C6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFearCharacterCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFearCharacterCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9182F36E86F4F0C6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_935F4FE235235DE5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_935F4FE235235DE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_83DAED6DE046FE66(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_83DAED6DE046FE66_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6B312CF4512C9555(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSummonUnitCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSummonUnitCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6B312CF4512C9555_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_949D19EEA624EED6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSummonUnitCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSummonUnitCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_949D19EEA624EED6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_74B7602817576928(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDynamicValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDynamicValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_74B7602817576928_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2012D649E274831B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDynamicValue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2012D649E274831B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D416647EEF773430(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterDamageType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterDamageType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D416647EEF773430_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8CD2884BE207DB23(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterDamageType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterDamageType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8CD2884BE207DB23_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AF2F5D4F0A618925(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveAbilityTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveAbilityTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AF2F5D4F0A618925_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4ACE5E14D27FD910(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveAbilityTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveAbilityTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4ACE5E14D27FD910_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_059DB24CA74CDE57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAllowInstantKill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAllowInstantKill*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_059DB24CA74CDE57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_71BDDD75009CE7EE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAllowInstantKill* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAllowInstantKill*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_71BDDD75009CE7EE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3941135A2D18E617(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterSpeed*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterSpeed*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3941135A2D18E617_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_26DDC5BA99CFC744(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterSpeed* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterSpeed*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_26DDC5BA99CFC744_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_54B91AD9B2AD01AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPlayerMoveInput*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPlayerMoveInput*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_54B91AD9B2AD01AA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_83750F591ED54DEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPlayerMoveInput* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPlayerMoveInput*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_83750F591ED54DEB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F21D6F6F97EBC3E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::EffectModifyData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::EffectModifyData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F21D6F6F97EBC3E6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6139492390D0D569(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6139492390D0D569_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_516E13B362CF3CEF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffect* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_516E13B362CF3CEF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F53390C0243D1306(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::EffectConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::EffectConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F53390C0243D1306_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9F258B66692607AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9F258B66692607AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6EEEC50B400EBA97(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6EEEC50B400EBA97_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B2CA17552F60147B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGameEntityNotCreated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGameEntityNotCreated*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B2CA17552F60147B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_347C52BFDF6058A3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGameEntityNotCreated* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGameEntityNotCreated*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_347C52BFDF6058A3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A12B6F2D632FD897(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A12B6F2D632FD897_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9359B90BEC55CA2A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9359B90BEC55CA2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2F2B25E97AC1A821(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSubMissionState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSubMissionState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2F2B25E97AC1A821_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6DBD99AF717A8069(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSubMissionState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSubMissionState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6DBD99AF717A8069_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D4D9AAF75D98A33A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMainMissionState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMainMissionState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D4D9AAF75D98A33A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9DCE2CC19318EC96(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMainMissionState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMainMissionState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9DCE2CC19318EC96_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3076F790B92638FA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformance*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3076F790B92638FA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_21C9174F5B9D033F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformance* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformance*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_21C9174F5B9D033F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E7C4FB0B77D4DD5C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E7C4FB0B77D4DD5C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_248390D5CFF1A8CF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_248390D5CFF1A8CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1C910E4F30DDF223(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1C910E4F30DDF223_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1E377E42B5F4DAB0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1E377E42B5F4DAB0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8DE64CB94F86EB63(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveUniqueNameEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveUniqueNameEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8DE64CB94F86EB63_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0F920D4BF4C62FF0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveUniqueNameEffect* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveUniqueNameEffect*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0F920D4BF4C62FF0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_534BBF6C92AF982A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionCustomValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionCustomValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_534BBF6C92AF982A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9027B117424EC446(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionCustomValue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionCustomValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9027B117424EC446_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9D0B86BCA7347108(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFSVwithGP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFSVwithGP*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9D0B86BCA7347108_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_88C758C39D504975(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFSVwithGP* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFSVwithGP*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_88C758C39D504975_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F59AE46AC7A99A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGPwithGP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGPwithGP*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1F59AE46AC7A99A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BC59841CF40AA229(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGPwithGP* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGPwithGP*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BC59841CF40AA229_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E29BB5AF67106985(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByShowChallengeSelectPage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByShowChallengeSelectPage*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E29BB5AF67106985_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE7F5FC2905A79F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByShowChallengeSelectPage* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByShowChallengeSelectPage*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AE7F5FC2905A79F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_739B547F70570079(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropShowInfoId*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropShowInfoId*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_739B547F70570079_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F0C1DD0A70DE81A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropShowInfoId* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropShowInfoId*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1F0C1DD0A70DE81A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2232EE31F15190F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMainMissionFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMainMissionFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2232EE31F15190F1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0F977860575507DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMainMissionFinish* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMainMissionFinish*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0F977860575507DA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_45553060F2C16580(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMechanismBarPhase*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMechanismBarPhase*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_45553060F2C16580_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CA661389AA63C194(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMechanismBarPhase* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMechanismBarPhase*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CA661389AA63C194_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D2B82CBB66DE4B1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMuseumProjectorThemeNum*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3D2B82CBB66DE4B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_05EC454AF081C592(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMuseumProjectorThemeNum*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_05EC454AF081C592_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5FEFCFFFED07DB2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDimensionID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDimensionID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5FEFCFFFED07DB2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4E974B70700B0321(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDimensionID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDimensionID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4E974B70700B0321_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6B314CFF04323F13(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropPuzzleCreated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropPuzzleCreated*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6B314CFF04323F13_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ADB7431E060C212A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropPuzzleCreated* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropPuzzleCreated*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_ADB7431E060C212A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8EDAB3FD2D0C612B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByRollShopResult*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByRollShopResult*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8EDAB3FD2D0C612B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4692C2E542B128F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByRollShopResult* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByRollShopResult*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4692C2E542B128F8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_43249A1AAB9ADC1B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnvProfilePath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnvProfilePath*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_43249A1AAB9ADC1B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E67451D3F56909C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnvProfilePath* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnvProfilePath*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E67451D3F56909C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A92E7DBB47FBCB4E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnyNpcMonsterInRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A92E7DBB47FBCB4E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9F482F8F13A684DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnyNpcMonsterInRange*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9F482F8F13A684DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_911EC9D4936BE3A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInStoryMode*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInStoryMode*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_911EC9D4936BE3A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E1E9FAADAFBEC29(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInStoryMode* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInStoryMode*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2E1E9FAADAFBEC29_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEDD32CE9389C15A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BEDD32CE9389C15A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D3797995FFA3B5DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D3797995FFA3B5DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_55F5CB4651722D7A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkipNextTeleportEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkipNextTeleportEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_55F5CB4651722D7A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_38872846554B187B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkipNextTeleportEffect* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkipNextTeleportEffect*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_38872846554B187B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FB2AC9F955535041(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLeader*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLeader*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FB2AC9F955535041_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DC77C75897B200C0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLeader* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLeader*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DC77C75897B200C0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85582ED91335C36D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerAvatarID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerAvatarID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_85582ED91335C36D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E5937BDFFB60CBCE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerAvatarID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerAvatarID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E5937BDFFB60CBCE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E6231ADFC572515E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsHero*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsHero*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E6231ADFC572515E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7DEFE5F0AA4A1927(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsHero* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsHero*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7DEFE5F0AA4A1927_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01AD8A1D7E37D64D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityTimeScaleZero*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityTimeScaleZero*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_01AD8A1D7E37D64D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4AE31C6C9F6E6CE4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityTimeScaleZero* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityTimeScaleZero*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4AE31C6C9F6E6CE4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_114EE5B5D4A57872(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_114EE5B5D4A57872_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_731CC9810A7749A7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_731CC9810A7749A7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C498BC5FFD9EFAE2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C498BC5FFD9EFAE2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A720E241D3E99449(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareCharacterID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareCharacterID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A720E241D3E99449_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5BFB6638AE90D1F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareEnhancedID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareEnhancedID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5BFB6638AE90D1F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_13855B38DC63B2F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareEnhancedID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareEnhancedID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_13855B38DC63B2F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7DC89CAD9F8A4DAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsInPhantomFrozen*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7DC89CAD9F8A4DAE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CDB4FF069295B63B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsInPhantomFrozen*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CDB4FF069295B63B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0FF18ADCB2E46DD5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestProgress*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestProgress*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0FF18ADCB2E46DD5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7AC3DCB0131725C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestProgress* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestProgress*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C7AC3DCB0131725C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E51F7D0F2DA1D039(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInDistrict*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInDistrict*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E51F7D0F2DA1D039_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E701138CDF31C3DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInDistrict* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInDistrict*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E701138CDF31C3DA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DFB2D22CEE16BBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetVisible*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetVisible*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2DFB2D22CEE16BBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D4DC25B0224E348B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetVisible* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetVisible*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D4DC25B0224E348B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00061B41ADD92275(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSoundEventInCD*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSoundEventInCD*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_00061B41ADD92275_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5BE044FFC1B58FC5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSoundEventInCD* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSoundEventInCD*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5BE044FFC1B58FC5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0F63185E11043941(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimelineEntityState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimelineEntityState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0F63185E11043941_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8944FBFB02584E62(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimelineEntityState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimelineEntityState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8944FBFB02584E62_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9FD2A469B77CFA0D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9FD2A469B77CFA0D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79DED0C8A4C471D6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_79DED0C8A4C471D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1398185BE38B7F2D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1398185BE38B7F2D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4ADC335AE0A51CAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4ADC335AE0A51CAE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5861D71F53760E7C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5861D71F53760E7C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA8B26D66B44C0B1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BA8B26D66B44C0B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF7945410533DBC6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CF7945410533DBC6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AFEA226910B6B263(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AFEA226910B6B263_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_98CCA08051889A01(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_98CCA08051889A01_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8007292710860C80(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloat* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloat*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8007292710860C80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8AB1D04F0CC46178(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomString*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8AB1D04F0CC46178_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7BE30A428929BF25(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomString* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomString*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7BE30A428929BF25_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F22D0AFC199064F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBool*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F22D0AFC199064F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB753E31A042F32F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBool* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBool*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AB753E31A042F32F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D15DA05CEF0A9705(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloatV2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloatV2*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D15DA05CEF0A9705_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8300B5053AA6704C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloatV2* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloatV2*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8300B5053AA6704C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E0A0295D7E94AB8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomStringV2*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6E0A0295D7E94AB8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E02F8631DA16F65(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomStringV2*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7E02F8631DA16F65_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D3259A686B135DD0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D3259A686B135DD0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C654789F006AAA8F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C654789F006AAA8F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_061D1BBE6B4B5A2A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_061D1BBE6B4B5A2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18C07219CA06BF2F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_18C07219CA06BF2F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_833448A32EEA6A3A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValueV2*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_833448A32EEA6A3A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4A088F3DA3F8397F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValueV2*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4A088F3DA3F8397F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD879A3CF23CBCA9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BD879A3CF23CBCA9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2D6FD926C31E2078(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicFloat* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2D6FD926C31E2078_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DBAB45DC684A1B10(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicString*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DBAB45DC684A1B10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C826DFFA1BB9C1ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicString* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicString*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C826DFFA1BB9C1ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_035D44C494098DB8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePhoneMessageItem*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePhoneMessageItem*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_035D44C494098DB8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7BF41C9CDBD70527(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePhoneMessageItem* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePhoneMessageItem*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7BF41C9CDBD70527_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8ABD87BE52B0DB7A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityCreated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityCreated*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8ABD87BE52B0DB7A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B705B29367F78815(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityCreated* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityCreated*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B705B29367F78815_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_52D6336F915ED0F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_52D6336F915ED0F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C5BDD34C3669DBCA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupProperty* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupProperty*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C5BDD34C3669DBCA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E42CD936E3A29812(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::QueryHoyoTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::QueryHoyoTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E42CD936E3A29812_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8527C7E310829379(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::QueryHoyoTag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::QueryHoyoTag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8527C7E310829379_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_84511971C8657FE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareVersionFinalMainMission*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_84511971C8657FE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CD32867B6E228DB2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareVersionFinalMainMission*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CD32867B6E228DB2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_58FD0DBF7E73B0EE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStoryLineID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStoryLineID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_58FD0DBF7E73B0EE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_071BCD65DEE68BA1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStoryLineID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStoryLineID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_071BCD65DEE68BA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_167FB26E2AA3259B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_167FB26E2AA3259B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_93DFE4148ED6DC68(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDistance* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDistance*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_93DFE4148ED6DC68_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D0C219FFA06F06CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInVision*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInVision*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D0C219FFA06F06CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_17DBA0B0F85C8552(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInVision* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInVision*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_17DBA0B0F85C8552_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1823F4729C63FE97(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAlertValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAlertValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1823F4729C63FE97_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_076E1BD1BD6A2F37(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAlertValue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAlertValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_076E1BD1BD6A2F37_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5499ECE333E683A5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAngle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAngle*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5499ECE333E683A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_30663261E33BE926(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAngle* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAngle*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_30663261E33BE926_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_25A6AE35E37C3B62(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareHPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareHPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_25A6AE35E37C3B62_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_082ED417B9C6D4C9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareHPRatio* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareHPRatio*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_082ED417B9C6D4C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9422E00C5E08D893(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareSPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareSPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9422E00C5E08D893_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B325F2456E5B1C60(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareSPRatio* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareSPRatio*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B325F2456E5B1C60_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_788071B4DD58DB75(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckGameMode*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckGameMode*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_788071B4DD58DB75_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D45A9B72F13548C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckGameMode* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D45A9B72F13548C5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_949BC93E3A2DC2E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsLocateAtArea*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsLocateAtArea*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_949BC93E3A2DC2E6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6F62977FF6562DED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsLocateAtArea* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsLocateAtArea*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6F62977FF6562DED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2889FC3947EC8991(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInPosition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInPosition*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2889FC3947EC8991_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B5DEE334FC857D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInPosition* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInPosition*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1B5DEE334FC857D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C919B80E6A6BAE20(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropInPosition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropInPosition*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C919B80E6A6BAE20_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_823B07ADF76AA4B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropInPosition* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropInPosition*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_823B07ADF76AA4B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F4AC70A41A0E57C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInRotation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInRotation*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7F4AC70A41A0E57C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_893FE66B77071488(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInRotation* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInRotation*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_893FE66B77071488_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_95663A638BFD6842(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveLockTargetInCamera*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveLockTargetInCamera*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_95663A638BFD6842_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4FF76285D36CE483(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveLockTargetInCamera* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveLockTargetInCamera*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4FF76285D36CE483_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D6063ECFA0C63021(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainAdventureModifier*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainAdventureModifier*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D6063ECFA0C63021_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A528BE131E12A442(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainAdventureModifier* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainAdventureModifier*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A528BE131E12A442_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F3148AB2FF20CCA6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggerBattleAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F3148AB2FF20CCA6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D297736E8EFE4B43(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggerBattleAttacker*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D297736E8EFE4B43_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_232D6CD4FB094F4E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsWeakTypeActive*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_232D6CD4FB094F4E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3B844F81FFC82B55(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsWeakTypeActive*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3B844F81FFC82B55_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C1C0E220A61CB316(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsNPCControlled*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsNPCControlled*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C1C0E220A61CB316_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE239E79C627EE73(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsNPCControlled* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsNPCControlled*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AE239E79C627EE73_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_877A2BC870B7161C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNpcMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNpcMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_877A2BC870B7161C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF03FC29F57FEF8F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNpcMonsterRank* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNpcMonsterRank*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FF03FC29F57FEF8F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E8A4F65FF8EAB441(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFuncUnlockCheck*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFuncUnlockCheck*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E8A4F65FF8EAB441_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA857C9297F76B2A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFuncUnlockCheck* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFuncUnlockCheck*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FA857C9297F76B2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0815D20A90812624(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0815D20A90812624_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A515A7E0D8112EA9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A515A7E0D8112EA9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B29759452439D39A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNumber*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNumber*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B29759452439D39A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF98E9F7292FF85F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNumber* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNumber*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CF98E9F7292FF85F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B0CE1D4E1DF5E1DD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B0CE1D4E1DF5E1DD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A0D3C4E8010C4E74(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A0D3C4E8010C4E74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_88C1A3EE425D8F28(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimatorParam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimatorParam*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_88C1A3EE425D8F28_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_341D1A100D7AA91B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimatorParam* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimatorParam*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_341D1A100D7AA91B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8BA0899BCDB3140E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasAssistAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasAssistAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8BA0899BCDB3140E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C219D6643B6CEE97(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C219D6643B6CEE97_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3A74717A52B1E1AC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsGenderType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsGenderType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3A74717A52B1E1AC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_22E2A829D2784EA3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsGenderType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsGenderType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_22E2A829D2784EA3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_157851A1B519F476(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCamera*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCamera*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_157851A1B519F476_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_03CE0626437E4653(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCamera* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCamera*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_03CE0626437E4653_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8D07A46D9A3AD6A1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCameraByPathID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCameraByPathID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8D07A46D9A3AD6A1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A26EC8C3FDE8CF20(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCameraByPathID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCameraByPathID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A26EC8C3FDE8CF20_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ADCB8F1248F38EA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTextJoinValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTextJoinValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_ADCB8F1248F38EA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_26CE55DA60F1294C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTextJoinValue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTextJoinValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_26CE55DA60F1294C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F9A25716E01018D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsEntityInDialogue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F9A25716E01018D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5DA6DD8841CEC507(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsEntityInDialogue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5DA6DD8841CEC507_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E735A62C81DBE960(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsBookAvailable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsBookAvailable*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E735A62C81DBE960_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7B0F9CBC7B0600F4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsBookAvailable* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsBookAvailable*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7B0F9CBC7B0600F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CAD460D734153B6D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CAD460D734153B6D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C1A1177CCF6DDE84(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C1A1177CCF6DDE84_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_219C9842CD253B56(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsActivityInSchedule*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsActivityInSchedule*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_219C9842CD253B56_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A917F4EE5F8F9409(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsActivityInSchedule* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsActivityInSchedule*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A917F4EE5F8F9409_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_922D21F938B1FA4C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandGestureType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_922D21F938B1FA4C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_687E57D25A1149C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandGestureType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_687E57D25A1149C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_47DA8A8C9D0B98E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_47DA8A8C9D0B98E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_51479A91454423BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_51479A91454423BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B928621974F4F0DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B928621974F4F0DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_49DAAABCDE232283(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_49DAAABCDE232283_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB5099D4714264F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EB5099D4714264F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AD006F9645EE1EC0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AD006F9645EE1EC0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_55C107899BC010B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_55C107899BC010B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB0A8021AE183568(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AB0A8021AE183568_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EF062A6C312F3A83(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueHasMiracle*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EF062A6C312F3A83_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B10CE7ED30150578(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueHasMiracle*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B10CE7ED30150578_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5419122270E2D035(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueShopHasStage*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5419122270E2D035_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_94746704EEDDF2A0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueShopHasStage*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_94746704EEDDF2A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2D058119A4549090(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemPair*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemPair*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2D058119A4549090_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_38D7672B14E52185(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNum*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_38D7672B14E52185_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_52754401946A97D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNum* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNum*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_52754401946A97D8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF7DE34D85FF93D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIfGroupIsOccupied*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIfGroupIsOccupied*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BEF7DE34D85FF93D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4B285C6403F2C2D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIfGroupIsOccupied* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIfGroupIsOccupied*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4B285C6403F2C2D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_582C79F37ACFD9D3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSeriesID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSeriesID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_582C79F37ACFD9D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_131305C66D89FF0E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSeriesID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSeriesID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_131305C66D89FF0E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0BDFA737EDF79CFC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFirstPerformance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFirstPerformance*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0BDFA737EDF79CFC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A526D30242B2CA8B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFirstPerformance* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFirstPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A526D30242B2CA8B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E8367B1F7E3BBD9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6E8367B1F7E3BBD9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_230C36271BEC5992(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_230C36271BEC5992_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6167AFA04E1C1690(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupFetchLocalTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupFetchLocalTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6167AFA04E1C1690_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A77BB8289B457DD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupFetchLocalTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2A77BB8289B457DD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8EC264BDFCE30C29(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8EC264BDFCE30C29_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_02A28066F7C7A40B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_02A28066F7C7A40B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6477AE83A0B9BD7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByString*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A6477AE83A0B9BD7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA76DB4232385D23(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByString* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByString*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AA76DB4232385D23_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3A77BDF97B10D0E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySharedSummonUnitInUse*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySharedSummonUnitInUse*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3A77BDF97B10D0E9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7BB4D4595681ACB8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySharedSummonUnitInUse* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySharedSummonUnitInUse*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7BB4D4595681ACB8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2BEF2EF4AFD2CB42(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropStateItem*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropStateItem*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2BEF2EF4AFD2CB42_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9EFF6B870FD44EDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropDestructItem*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropDestructItem*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9EFF6B870FD44EDF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BB4E29670040A76E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BB4E29670040A76E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F7D5C052D26F0C72(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F7D5C052D26F0C72_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C31384E117CD0986(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntitiesExist*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntitiesExist*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C31384E117CD0986_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E1520B681E3CFA6F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntitiesExist* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntitiesExist*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E1520B681E3CFA6F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4A2D45FE5C6DFDA1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasUnGottenLevelReward*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasUnGottenLevelReward*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4A2D45FE5C6DFDA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_348B095045242504(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasUnGottenLevelReward* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasUnGottenLevelReward*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_348B095045242504_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_1(::SimpleJSON::JSONNode* a1, ::Class_4_BC87E1E104C4A2A7*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_BC87E1E104C4A2A7*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CACF03EAC6255BD4(::SimpleJSON::JSONNode* a1, ::Class_4_BC87E1E104C4A2A7* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_BC87E1E104C4A2A7*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CACF03EAC6255BD4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6F564641DABCFE6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowInSlot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowInSlot*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A6F564641DABCFE6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_81BC32A5D9D43AED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowInSlot* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowInSlot*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_81BC32A5D9D43AED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_510D1E812738B249(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowPermCodes*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_510D1E812738B249_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_30DEFCBB371C912A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowPermCodes*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_30DEFCBB371C912A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_2(::SimpleJSON::JSONNode* a1, ::Class_4_898D9FE991FDEB8A*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_898D9FE991FDEB8A*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_27ACA632054EC11E(::SimpleJSON::JSONNode* a1, ::Class_4_898D9FE991FDEB8A* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_898D9FE991FDEB8A*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_27ACA632054EC11E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E974CAFFFD96B5BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHipplenEnergy*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHipplenEnergy*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E974CAFFFD96B5BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A2E4C940E3E66C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHipplenEnergy* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHipplenEnergy*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9A2E4C940E3E66C1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F32CAE590984A85F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameFetchProxyByID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameFetchProxyByID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F32CAE590984A85F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7CE253EB6EBC75DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameFetchProxyByID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameFetchProxyByID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7CE253EB6EBC75DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EBAC159E87DEC66D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EBAC159E87DEC66D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E278CC4423376984(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E278CC4423376984_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3A2FE65B5F822B12(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3A2FE65B5F822B12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E833EF1A82318C47(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E833EF1A82318C47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC2AE0FDA69BA691(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CC2AE0FDA69BA691_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA5C5E3305E70034(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DA5C5E3305E70034_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96CBCF7AD65DC189(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_96CBCF7AD65DC189_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_06F012121EFA7EDD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_06F012121EFA7EDD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C8CCA923021112F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsCustomerState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsCustomerState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C8CCA923021112F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B6782D127D47AF86(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsCustomerState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsCustomerState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B6782D127D47AF86_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CE076537921DD7A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsTakeOutState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CE076537921DD7A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D9CA04B454ADA0D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsTakeOutState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6D9CA04B454ADA0D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE96E64849A50BE7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsWaiterState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsWaiterState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FE96E64849A50BE7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7EAC21E8CD0703F4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsWaiterState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsWaiterState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7EAC21E8CD0703F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A7284B603EF7CEE3(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_ByRandom*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_ByRandom*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A7284B603EF7CEE3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C5911A62599CC05F(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_ByRandom* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_ByRandom*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C5911A62599CC05F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8D965B7761F034B4(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8D965B7761F034B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F64AF1F12924E09E(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F64AF1F12924E09E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F9FBEB317CAB21BB(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F9FBEB317CAB21BB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AD175CF76A49BA67(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AD175CF76A49BA67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_887466B711DDCCDF(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_887466B711DDCCDF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4AEAB340808B2099(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4AEAB340808B2099_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA883E53BF16E83C(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AA883E53BF16E83C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5830FE01328547AE(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5830FE01328547AE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_54078FA65F610763(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_54078FA65F610763_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_227D95AAAB9BAEF6(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_227D95AAAB9BAEF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_597895C4C49E066A(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_597895C4C49E066A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8977EAF37FEA092B(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8977EAF37FEA092B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E32ED5B6BFC601F8(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E32ED5B6BFC601F8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4F33EB0828BD53E9(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4F33EB0828BD53E9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_171B0F45E868ECF9(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_171B0F45E868ECF9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_75B8DA5BECA7C71F(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_75B8DA5BECA7C71F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F2A0336E40397A7E(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F2A0336E40397A7E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_734EC280BB876614(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_734EC280BB876614_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5DA2D9B7E4DD5CC0(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5DA2D9B7E4DD5CC0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E0B2582201064286(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E0B2582201064286_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_278F59538A502496(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionBattleWin*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionBattleWin*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_278F59538A502496_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E4E2CBCE87AEFE49(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionBattleWin* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionBattleWin*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E4E2CBCE87AEFE49_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B6D8DF8D1A82507A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B6D8DF8D1A82507A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A82AFF4BBCF91ABF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A82AFF4BBCF91ABF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1295A120C6BA9FA9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1295A120C6BA9FA9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_827DE00A979C0378(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_827DE00A979C0378_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD949C33BF987EA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PhotoGraphTargetSize*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PhotoGraphTargetSize*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FD949C33BF987EA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0DA33D809AD780AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetContainerRatioInRect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetContainerRatioInRect*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0DA33D809AD780AA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C33AF8F49AA7AD22(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetContainerRatioInRect* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetContainerRatioInRect*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C33AF8F49AA7AD22_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA5E3E0D5435027A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BA5E3E0D5435027A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E6A668E2697BAF15(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevel* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevel*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E6A668E2697BAF15_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0ED6231E861EBD2F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0ED6231E861EBD2F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EE43DBA9F7CD37B6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EE43DBA9F7CD37B6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1010246F74882183(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1010246F74882183_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CA10683B8E8B63FE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CA10683B8E8B63FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9ABBAE8D4DBE18D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetNpcExists*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetNpcExists*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9ABBAE8D4DBE18D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B0B68E3917F77177(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetNpcExists* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetNpcExists*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B0B68E3917F77177_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_13E5A682E2131701(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_13E5A682E2131701_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FB202F29A1108980(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FB202F29A1108980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_115F725B481BF486(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTrainVisitorIsMeet*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTrainVisitorIsMeet*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_115F725B481BF486_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6B7A68C4E45D55D3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTrainVisitorIsMeet* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTrainVisitorIsMeet*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6B7A68C4E45D55D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4CC1256DE56DB8E2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByWaitCustomString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByWaitCustomString*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4CC1256DE56DB8E2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_117182EB495E104D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByWaitCustomString* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_117182EB495E104D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F8337A270BB7DFAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropStateNumber*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropStateNumber*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F8337A270BB7DFAB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F966BDDA643900A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropStateNumber* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropStateNumber*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8F966BDDA643900A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C5116A14808C1E5F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRogueExploreWin*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRogueExploreWin*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C5116A14808C1E5F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_32303AC8713ED932(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRogueExploreWin* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRogueExploreWin*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_32303AC8713ED932_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D9BCAD2DE6255122(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D9BCAD2DE6255122_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2C2A38CCDC7B263(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E2C2A38CCDC7B263_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DD057D2E1C49D2D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2DD057D2E1C49D2D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A96B259C2384D76(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9A96B259C2384D76_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C301AE5CDD7AD08D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckElfTodayManaged*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckElfTodayManaged*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C301AE5CDD7AD08D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A565FDDCDC74A6B8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckElfTodayManaged* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckElfTodayManaged*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A565FDDCDC74A6B8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_59449750BB162F6C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_59449750BB162F6C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B5B6CE6DE6DA7845(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B5B6CE6DE6DA7845_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1A074319C230E81A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1A074319C230E81A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4ECE09E3F00A9135(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4ECE09E3F00A9135_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_91EFC2B8907E1413(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsEliteMonster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsEliteMonster*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_91EFC2B8907E1413_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_72AA7D8722ED3882(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsEliteMonster* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsEliteMonster*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_72AA7D8722ED3882_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_81C002CCCEF22E32(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_81C002CCCEF22E32_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1AE48771CC17139D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1AE48771CC17139D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_87DE33E3455D58F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByContainBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_87DE33E3455D58F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_334EFD347C14409A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByContainBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_334EFD347C14409A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D239D0E73008164D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattlePostureType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattlePostureType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D239D0E73008164D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6B47911EED8EAF2E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattlePostureType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattlePostureType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6B47911EED8EAF2E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7BF7D447870A6D40(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattleSkillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattleSkillType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7BF7D447870A6D40_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_60FB1D5B5D71D8FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattleSkillType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattleSkillType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_60FB1D5B5D71D8FF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4F651B91CF938D03(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ConvinceByCompareHp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ConvinceByCompareHp*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4F651B91CF938D03_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CD4751E3B2735BF2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ConvinceByCompareHp* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ConvinceByCompareHp*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CD4751E3B2735BF2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C905B83312A2477B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderPath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderPath*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C905B83312A2477B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F458794F12FF59F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderPath* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderPath*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F458794F12FF59F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CAC566F702308B02(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyTrace*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyTrace*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CAC566F702308B02_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EDDF164042A89BEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyTrace* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyTrace*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EDDF164042A89BEE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F459637934B6C249(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F459637934B6C249_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BC572596AB9D13AC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BC572596AB9D13AC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E359212373FC410D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestGetReward*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestGetReward*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E359212373FC410D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8951E36307FD442D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestGetReward* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestGetReward*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8951E36307FD442D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_27BF7193B7E24CD7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptStep*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptStep*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_27BF7193B7E24CD7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_93DF9CBC1132566E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptStep* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptStep*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_93DF9CBC1132566E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FAD6005F3D77ACBC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptEmo*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptEmo*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FAD6005F3D77ACBC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D65E8F4077907EF1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptEmo* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptEmo*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D65E8F4077907EF1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4BDD8B1D7DBFB084(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4BDD8B1D7DBFB084_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_556D4C1CC53A7E9D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_556D4C1CC53A7E9D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_72B391C53462A047(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEnableStoryStreamingSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEnableStoryStreamingSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_72B391C53462A047_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C89D3AF5A664795A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEnableStoryStreamingSource* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEnableStoryStreamingSource*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C89D3AF5A664795A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5FC131FCA274057B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformanceResult*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformanceResult*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5FC131FCA274057B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_394B78E3E2FC225A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformanceResult* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformanceResult*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_394B78E3E2FC225A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F82E973DDF361749(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropAnimState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropAnimState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F82E973DDF361749_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_084871A39C3C145C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropAnimState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropAnimState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_084871A39C3C145C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CFA6D714C877B801(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CFA6D714C877B801_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3024AFEE66030F22(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3024AFEE66030F22_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CAE6660D4515F671(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CAE6660D4515F671_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FCC822E89ADBAEE4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FCC822E89ADBAEE4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC3814331704D58F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CC3814331704D58F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_58322C868BFB4122(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_58322C868BFB4122_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2FF9120397F36F8B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2FF9120397F36F8B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0157705812A43826(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0157705812A43826_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BE120DCAAB984F2E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BE120DCAAB984F2E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0DFE70239EA3B7BB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0DFE70239EA3B7BB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3C2FAF119449F41A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropPredicateWithEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropPredicateWithEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3C2FAF119449F41A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EFC09E4E014D5CBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EFC09E4E014D5CBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5441609782DA7167(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMusicRhythmSongID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5441609782DA7167_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F8B1463AF1CF173C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMusicRhythmSongID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F8B1463AF1CF173C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DF18B220398BDAA2(::SimpleJSON::JSONNode* a1, ::Class_4_3701B6A121A72CD0*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_3701B6A121A72CD0*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DF18B220398BDAA2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E81EA87F212E3BE3(::SimpleJSON::JSONNode* a1, ::Class_4_3701B6A121A72CD0* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_3701B6A121A72CD0*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E81EA87F212E3BE3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0DDF5A0655924C19(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0DDF5A0655924C19_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3FCE0D3EC32373D1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3FCE0D3EC32373D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C4B6192623497677(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournLastRoom*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournLastRoom*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C4B6192623497677_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BC154CB0C3E6A98A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournLastRoom* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournLastRoom*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BC154CB0C3E6A98A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A3704CFC60CAB90(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8A3704CFC60CAB90_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A32BB7B909111731(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A32BB7B909111731_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F0823D0B066FC464(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F0823D0B066FC464_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_459656F5C47E5BE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_459656F5C47E5BE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01487B6FE665818E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_01487B6FE665818E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_37C1C838541F5C17(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_37C1C838541F5C17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B2436418F2235944(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B2436418F2235944_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33047668AEE99935(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverFinish* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverFinish*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_33047668AEE99935_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E42B79DFC7A2A51F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E42B79DFC7A2A51F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C95976A031E49736(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C95976A031E49736_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA426140832A7BAA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntityExist*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntityExist*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FA426140832A7BAA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0CE5B79BE1E5E0AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntityExist* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntityExist*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0CE5B79BE1E5E0AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_21E620D5B9D9AF6C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsUIPageOpen*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsUIPageOpen*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_21E620D5B9D9AF6C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_91FE25381A08C0B8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsUIPageOpen* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsUIPageOpen*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_91FE25381A08C0B8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_390A214A2EFAE2D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckFarmElementActive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckFarmElementActive*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_390A214A2EFAE2D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9D0EA7BB90B98F07(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckFarmElementActive* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckFarmElementActive*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9D0EA7BB90B98F07_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE7200344619943C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropHPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropHPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FE7200344619943C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D9FA8F1580326671(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropHPRatio* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropHPRatio*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D9FA8F1580326671_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC6DC72AB6F78E0B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScreenRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScreenRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EC6DC72AB6F78E0B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01D3B0E514626AEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScreenRatio* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScreenRatio*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_01D3B0E514626AEA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61122A04FE2D20E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_61122A04FE2D20E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E9593FAC4419FFFA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E9593FAC4419FFFA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B4AF7548518CCD43(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B4AF7548518CCD43_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_26DD095132C91B32(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_26DD095132C91B32_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E3E46E811B12E3BF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEntityAuthoritySide*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E3E46E811B12E3BF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2314F389E16ACB7C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEntityAuthoritySide*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2314F389E16ACB7C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F0500B8F1318E661(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvTriggerEffectList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvTriggerEffectList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F0500B8F1318E661_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F14155A7708D5DA4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvTriggerEffectList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F14155A7708D5DA4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E32697B8360FECDA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRegionEraState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRegionEraState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E32697B8360FECDA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A32C173C11846EF5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRegionEraState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRegionEraState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A32C173C11846EF5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DB1B5FEA4ABCEEDB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DB1B5FEA4ABCEEDB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6F9458B9DFB3D5D0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6F9458B9DFB3D5D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9972E305232405AC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEraFlipperEntityShow*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9972E305232405AC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DC2731414F54CE85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEraFlipperEntityShow*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DC2731414F54CE85_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A236F741847CA8D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityOriginalEraConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityOriginalEraConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A236F741847CA8D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3EE8F93AAC81FE64(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityOriginalEraConfig* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityOriginalEraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3EE8F93AAC81FE64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AF3589C73B963480(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPartialFlipDeviceState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPartialFlipDeviceState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AF3589C73B963480_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_08B47C5D1244879D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPartialFlipDeviceState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPartialFlipDeviceState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_08B47C5D1244879D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E3619E8814EB7CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimStateLogicType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimStateLogicType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6E3619E8814EB7CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DE11FF2A6318B43F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimStateLogicType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimStateLogicType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DE11FF2A6318B43F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EE5373EA0307D81E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveSkillPointEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveSkillPointEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EE5373EA0307D81E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0B50677FF5517CE7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveSkillPointEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveSkillPointEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0B50677FF5517CE7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_065B7AC5D0F56A4A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFromBattleViewModeChange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFromBattleViewModeChange*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_065B7AC5D0F56A4A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E05A98C3669990B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFromBattleViewModeChange* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFromBattleViewModeChange*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2E05A98C3669990B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_635C0D2A3E349B96(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasBillboard*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasBillboard*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_635C0D2A3E349B96_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4FBEC9835E3FD6F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasBillboard* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasBillboard*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4FBEC9835E3FD6F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_43E23326EA882296(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_43E23326EA882296_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_043649C97C61D8EA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_043649C97C61D8EA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_15AA7F8336A61A4A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_15AA7F8336A61A4A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_549DBC514F87E7CF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildProperty*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_549DBC514F87E7CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BE07A9D1DE2B6F07(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCharacterIsPreset*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BE07A9D1DE2B6F07_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B5A2C4C1F1351E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCharacterIsPreset*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1B5A2C4C1F1351E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_510E8F9F3485A3A1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_510E8F9F3485A3A1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6675B3F598339C20(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6675B3F598339C20_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F0FC7374EE55B22C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasTrait*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasTrait*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F0FC7374EE55B22C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6EA840A9010BD89F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasTrait* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasTrait*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6EA840A9010BD89F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4F26EB62ED05E18E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasSameTrait*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasSameTrait*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4F26EB62ED05E18E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C356C5B4D4098195(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasSameTrait* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasSameTrait*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C356C5B4D4098195_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_81F63EC3AE03D9B2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGridFightProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGridFightProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_81F63EC3AE03D9B2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DB48F855FE01EF19(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGridFightProperty* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGridFightProperty*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DB48F855FE01EF19_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_29E9E6950D74568B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnActionEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnActionEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_29E9E6950D74568B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3F4FD04F6ADF336A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnActionEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnActionEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3F4FD04F6ADF336A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6425622595506043(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveEnemyAlive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveEnemyAlive*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6425622595506043_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_186194F0713E6B50(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveEnemyAlive* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveEnemyAlive*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_186194F0713E6B50_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_756640154C9C5AF4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_756640154C9C5AF4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E744EA73EFF71F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2E744EA73EFF71F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6B12C741DB2123B1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStance*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6B12C741DB2123B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33D389C115350492(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStance* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStance*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_33D389C115350492_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C2764F6B404D856C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCustomValueBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCustomValueBool*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C2764F6B404D856C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_548C0DD68853BCDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCustomValueBool* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCustomValueBool*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_548C0DD68853BCDF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_621709C080A7E5F8(::SimpleJSON::JSONNode* a1, ::Class_4_AB1BEE9CD990C4C1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_AB1BEE9CD990C4C1*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_621709C080A7E5F8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E67C8781EF1076EB(::SimpleJSON::JSONNode* a1, ::Class_4_AB1BEE9CD990C4C1* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_AB1BEE9CD990C4C1*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E67C8781EF1076EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FAE97A9B1350E10F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FAE97A9B1350E10F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2682545ACB6C1A9C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2682545ACB6C1A9C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6FC1945840AD48A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnhancedID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnhancedID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6FC1945840AD48A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3668FBCC78D7F09(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnhancedID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnhancedID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A3668FBCC78D7F09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_44AF6ACD6D5B01E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetTeam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetTeam*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_44AF6ACD6D5B01E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A70559C9A9EE73DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetTeam* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetTeam*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A70559C9A9EE73DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D22832F4133A989E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D22832F4133A989E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33A272BCA46A02EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_33A272BCA46A02EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85BC9005DD1BF5B1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSummonRelation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSummonRelation*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_85BC9005DD1BF5B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4E7D5285172FD692(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSummonRelation* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSummonRelation*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4E7D5285172FD692_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_157D5E77CCCBE2BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeak*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_157D5E77CCCBE2BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F63956C6220FC081(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeak* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeak*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F63956C6220FC081_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D6BD3B58DBF5BA10(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeakPreview*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeakPreview*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D6BD3B58DBF5BA10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF0E135293D01583(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeakPreview* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeakPreview*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FF0E135293D01583_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CD91E64D96B15FF1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CD91E64D96B15FF1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4CEF9C39A95A2BD2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4CEF9C39A95A2BD2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D5C24CF6E13260D3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByStatusCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByStatusCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D5C24CF6E13260D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_91840082A2ED2EA0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByStatusCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByStatusCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_91840082A2ED2EA0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2899F39FEF02A1A8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAvatarBaseType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAvatarBaseType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2899F39FEF02A1A8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D92C60C660105292(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAvatarBaseType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAvatarBaseType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D92C60C660105292_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6803B31349449CDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasExtraAvatarBaseType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasExtraAvatarBaseType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6803B31349449CDF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D8FD396F72B46E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasExtraAvatarBaseType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasExtraAvatarBaseType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1D8FD396F72B46E6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F9937022F1EFF52(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInsertAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInsertAction*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1F9937022F1EFF52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_839DBD7390DDAB87(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInsertAction* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInsertAction*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_839DBD7390DDAB87_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DF18B220398BDAA2_1(::SimpleJSON::JSONNode* a1, ::Class_4_3701B6A121A72CD0_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_3701B6A121A72CD0_1*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DF18B220398BDAA2_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E81EA87F212E3BE3_1(::SimpleJSON::JSONNode* a1, ::Class_4_3701B6A121A72CD0_1* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_3701B6A121A72CD0_1*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E81EA87F212E3BE3_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B7DEF1AAC87BCAE4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAutoBattle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAutoBattle*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B7DEF1AAC87BCAE4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E55890D343CE5F4B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E55890D343CE5F4B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5B1B0B0B17C4A55C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterPhase*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterPhase*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5B1B0B0B17C4A55C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_97D9A0D56FE170CF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterPhase* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterPhase*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_97D9A0D56FE170CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6C95F6721503E315(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertActionByTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertActionByTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6C95F6721503E315_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DE7913E6826CA296(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertActionByTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertActionByTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DE7913E6826CA296_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_26ED1DA6D9F5BC93(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainMonsterOnWave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainMonsterOnWave*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_26ED1DA6D9F5BC93_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_07A7D8756C64E102(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainMonsterOnWave* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainMonsterOnWave*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_07A7D8756C64E102_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_89BDCEA2C5697747(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_89BDCEA2C5697747_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_431318A9FACCD61E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_431318A9FACCD61E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_52D89A47288F2E5C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainOpInSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainOpInSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_52D89A47288F2E5C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5C952AF669B1D191(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainOpInSkill* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainOpInSkill*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5C952AF669B1D191_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B0DB42E14A44311(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1B0DB42E14A44311_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8DC1C3D903FEDB7A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8DC1C3D903FEDB7A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7636CE961670D9C7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleHasCertainResult*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleHasCertainResult*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7636CE961670D9C7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC2077C68872B2DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleHasCertainResult* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleHasCertainResult*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CC2077C68872B2DA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E21466D6A99FEFDB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstChallengeBattle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstChallengeBattle*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E21466D6A99FEFDB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_03AC71F290048536(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstChallengeBattle* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstChallengeBattle*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_03AC71F290048536_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_99EAF5C0DF51D8E2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInElationTime*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInElationTime*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_99EAF5C0DF51D8E2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_63DB7B152DC03423(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInElationTime* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInElationTime*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_63DB7B152DC03423_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF0CAA9883B9CE9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPausedElationTime*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPausedElationTime*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FF0CAA9883B9CE9B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_734C93C2254EFBF6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPausedElationTime* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPausedElationTime*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_734C93C2254EFBF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D1144951F45EC06F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsRedStance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsRedStance*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D1144951F45EC06F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D8980342F47D9F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsRedStance* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsRedStance*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1D8980342F47D9F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_086FF6051039B8B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSpareTeamFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSpareTeamFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_086FF6051039B8B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1E1DE6080AB63380(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSpareTeamFormation* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSpareTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1E1DE6080AB63380_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6766443E3ECE989A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCustomTeamFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCustomTeamFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6766443E3ECE989A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_626A1AE75BED9738(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCustomTeamFormation* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCustomTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_626A1AE75BED9738_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0FB5EE5992E1B978(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0FB5EE5992E1B978_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AFCCA78BAEE20227(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AFCCA78BAEE20227_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EDD95CB934FE11C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EDD95CB934FE11C5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_458EC4BBCA7CF50C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_458EC4BBCA7CF50C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_43211AEA0724E1B1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsCharacterState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsCharacterState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_43211AEA0724E1B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0BE1DD694138C292(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsCharacterState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsCharacterState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0BE1DD694138C292_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_3(::SimpleJSON::JSONNode* a1, ::Class_4_DA219FA494F35D19*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_DA219FA494F35D19*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CACF03EAC6255BD4_1(::SimpleJSON::JSONNode* a1, ::Class_4_DA219FA494F35D19* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_DA219FA494F35D19*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CACF03EAC6255BD4_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC7D6F7CD3F05381(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AC7D6F7CD3F05381_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_57638CE271AB7E2A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_57638CE271AB7E2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_621709C080A7E5F8_1(::SimpleJSON::JSONNode* a1, ::Class_4_5C624EAA3CE758E5*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_5C624EAA3CE758E5*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_621709C080A7E5F8_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E67C8781EF1076EB_1(::SimpleJSON::JSONNode* a1, ::Class_4_5C624EAA3CE758E5* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_5C624EAA3CE758E5*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E67C8781EF1076EB_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A5D9D362267A583A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectListForUI*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectListForUI*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A5D9D362267A583A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8911B8B6059B8DDB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectListForUI* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectListForUI*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8911B8B6059B8DDB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61D006A328BF8521(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_61D006A328BF8521_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_400762C5E15968CA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_400762C5E15968CA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9C447B8B31BE7B9D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9C447B8B31BE7B9D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F3EE4E6FD604A85E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F3EE4E6FD604A85E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FC8E98DE0BCC7494(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationWidth*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationWidth*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FC8E98DE0BCC7494_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_912ADD387DB19B99(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationWidth* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationWidth*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_912ADD387DB19B99_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_625E0F66867AF18B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainModifier*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainModifier*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_625E0F66867AF18B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8546978A2E88E1D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainModifier* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainModifier*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8546978A2E88E1D8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BED2262A7079B10A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BED2262A7079B10A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_82335FA2E403328F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnOwnerEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnOwnerEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_82335FA2E403328F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C25C6E1E38293F6D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChangeValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChangeValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C25C6E1E38293F6D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B945A568F7D3E10D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChangeValue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChangeValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B945A568F7D3E10D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF59E33095B952BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStringValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStringValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CF59E33095B952BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CADB9B1B38D305C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStringValue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStringValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CADB9B1B38D305C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_890D773E9C8FB0F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAliveEnemyNumber*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_890D773E9C8FB0F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4ABD4D00713B6AC0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAliveEnemyNumber*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4ABD4D00713B6AC0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3616A9CDA4C5190E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillUsageLimit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillUsageLimit*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3616A9CDA4C5190E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA46841F8BC8B915(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillUsageLimit* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillUsageLimit*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AA46841F8BC8B915_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF029F2FD57AA986(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChance*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CF029F2FD57AA986_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E14AB6E117854923(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChance* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChance*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E14AB6E117854923_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DFA9B651FCDF81C7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChanceClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChanceClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DFA9B651FCDF81C7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_98FF00593242E09E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChanceClientOnly* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChanceClientOnly*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_98FF00593242E09E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_621709C080A7E5F8_2(::SimpleJSON::JSONNode* a1, ::Class_4_9120FA241231E45C*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_9120FA241231E45C*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_621709C080A7E5F8_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E67C8781EF1076EB_2(::SimpleJSON::JSONNode* a1, ::Class_4_9120FA241231E45C* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_9120FA241231E45C*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E67C8781EF1076EB_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_23378F0BFC695645(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHP*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_23378F0BFC695645_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_39424FB0FA888DC6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHP* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHP*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_39424FB0FA888DC6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0CE417F85671B636(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0CE417F85671B636_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5EA1D3451990977D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHPRatio* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHPRatio*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5EA1D3451990977D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DD05136B899D3E87(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DD05136B899D3E87_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E75831598845134(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPRatio* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPRatio*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3E75831598845134_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F83625D01AE9D0DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialSPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialSPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F83625D01AE9D0DE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B2BB98219B1B9E5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialSPRatio* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialSPRatio*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1B2BB98219B1B9E5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_99F094317681C34A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_99F094317681C34A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A5E1CBE478696891(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceRatio* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceRatio*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A5E1CBE478696891_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_10916BE79BBFF1C6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_10916BE79BBFF1C6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FCD304EFE0C5D7CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FCD304EFE0C5D7CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_4(::SimpleJSON::JSONNode* a1, ::Class_4_E0D26BEB1B9C290C*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E0D26BEB1B9C290C*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_48B8135CCD2FFDDD_1(::SimpleJSON::JSONNode* a1, ::Class_4_E0D26BEB1B9C290C* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E0D26BEB1B9C290C*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_48B8135CCD2FFDDD_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61BCE0E148300ED9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterUniqueID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterUniqueID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_61BCE0E148300ED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5C96FFB52E0A25FA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterUniqueID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterUniqueID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5C96FFB52E0A25FA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_76108E9BFB484C6C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterTemplateID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterTemplateID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_76108E9BFB484C6C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_08264D07434E83DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterTemplateID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterTemplateID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_08264D07434E83DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_15620A3AFC3E243A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBattleEventID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBattleEventID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_15620A3AFC3E243A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F61E028951820201(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBattleEventID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBattleEventID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F61E028951820201_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_35DFA9ABF0B2D7D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterNumber*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterNumber*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_35DFA9ABF0B2D7D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CB2E62EFD9D53D04(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterNumber* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterNumber*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CB2E62EFD9D53D04_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD7620F24B3F66E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FD7620F24B3F66E3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F21E184F07EAB70(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierValue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7F21E184F07EAB70_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EAF9482085385B74(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EAF9482085385B74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A40756B2779B7279(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A40756B2779B7279_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9281013A62FC481C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9281013A62FC481C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A0AD19BE7C5218F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillLevel* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillLevel*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0A0AD19BE7C5218F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4D902EA623164AD6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillByName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillByName*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4D902EA623164AD6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_087DCE2734E8AE1D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillByName* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillByName*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_087DCE2734E8AE1D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F9437709709C9009(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillBySlot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillBySlot*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F9437709709C9009_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_620EA5F096CD0FEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillBySlot* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillBySlot*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_620EA5F096CD0FEA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_20D7ECF5AE7C888E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSplitDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSplitDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_20D7ECF5AE7C888E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1C8E8648F405C91B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSplitDamage* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSplitDamage*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1C8E8648F405C91B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8C95650567F4C4BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsProjectileHitTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsProjectileHitTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8C95650567F4C4BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5369AB9FDD0293FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsProjectileHitTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsProjectileHitTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5369AB9FDD0293FF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7DDABC27470F356E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7DDABC27470F356E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A8E9AA932615D75(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9A8E9AA932615D75_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33DF1630E6A9759A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetNatureID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetNatureID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_33DF1630E6A9759A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_51996C434457C6E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetNatureID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetNatureID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_51996C434457C6E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA154C90685331F4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AA154C90685331F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_702C75355085AEC7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_702C75355085AEC7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1E5995A7773EFCE2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetEntityType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetEntityType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1E5995A7773EFCE2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00E1BB894D899649(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetEntityType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetEntityType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_00E1BB894D899649_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ADC6BD4C29BC0C61(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_ADC6BD4C29BC0C61_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3AFCE419898564A9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillSkill* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillSkill*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3AFCE419898564A9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_70AC0B7542DAD65C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsControlSkillDisable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsControlSkillDisable*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_70AC0B7542DAD65C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AD6AA13F9AF7A1CF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsControlSkillDisable* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsControlSkillDisable*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AD6AA13F9AF7A1CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_5(::SimpleJSON::JSONNode* a1, ::Class_4_C2FF09D2685FF72B*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C2FF09D2685FF72B*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CACF03EAC6255BD4_2(::SimpleJSON::JSONNode* a1, ::Class_4_C2FF09D2685FF72B* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C2FF09D2685FF72B*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CACF03EAC6255BD4_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E732C2E032619FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7E732C2E032619FF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C9A5F6894C750715(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillEffect* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillEffect*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C9A5F6894C750715_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D05E29C839EB54C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSelectSkillEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSelectSkillEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6D05E29C839EB54C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7AE716E2083B018(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSelectSkillEffect* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSelectSkillEffect*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C7AE716E2083B018_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C90C39558EED088A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C90C39558EED088A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4571F0558B8DB5D1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffect* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffect*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4571F0558B8DB5D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1A9D60B256C09DC4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1A9D60B256C09DC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7DBE6B9AA4A241D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7DBE6B9AA4A241D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_414A4691E58B08F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_414A4691E58B08F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DF11708B80BAB5FE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DF11708B80BAB5FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_58D3224A627F149F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllLightTeamDied*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllLightTeamDied*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_58D3224A627F149F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1E0EF079FC31655C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllLightTeamDied* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllLightTeamDied*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1E0EF079FC31655C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F10300019BEE2D3F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSecretWeak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSecretWeak*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F10300019BEE2D3F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C700920114026EC6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSecretWeak* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSecretWeak*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C700920114026EC6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_62E987A3B7A5972D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_62E987A3B7A5972D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A2DA2A2B4BF34AE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9A2DA2A2B4BF34AE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_87915A87C69AB82D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_87915A87C69AB82D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BED57586C3B455AE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillTag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillTag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BED57586C3B455AE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B92AA93612FE91D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleEventEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleEventEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B92AA93612FE91D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4E796279FC20F704(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleEventEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleEventEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4E796279FC20F704_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C27902677E8D8D7C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLocationIndexType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLocationIndexType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C27902677E8D8D7C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_292A913BF5D925EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLocationIndexType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLocationIndexType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_292A913BF5D925EF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E69C20A37C2AE5E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMatchTeammateCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMatchTeammateCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E69C20A37C2AE5E9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_27D93703579BC1B8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMatchTeammateCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMatchTeammateCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_27D93703579BC1B8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A9E208145AED60C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckBloodLinkDead*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckBloodLinkDead*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2A9E208145AED60C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EF17AB37836BCAE5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckBloodLinkDead* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckBloodLinkDead*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EF17AB37836BCAE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79AB020DD0859779(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckIsLimboRevivable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckIsLimboRevivable*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_79AB020DD0859779_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3502343B1CCA6C5C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3502343B1CCA6C5C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_693742B1E897FAE7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetAbleToAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetAbleToAction*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_693742B1E897FAE7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_72A452B690D085BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetAbleToAction* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetAbleToAction*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_72A452B690D085BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FAC9875418F9660D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FAC9875418F9660D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4150D18B0A23108E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterRank* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterRank*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4150D18B0A23108E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_34271B7F4BF18310(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_34271B7F4BF18310_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4D1BCE688EF5EEB1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4D1BCE688EF5EEB1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1612E9E35D9C7CDE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAllWaveMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAllWaveMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1612E9E35D9C7CDE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_48091A6DFA3DCD2B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAllWaveMonsterRank* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAllWaveMonsterRank*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_48091A6DFA3DCD2B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5BDB9B0F92C80A20(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayChanged*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayChanged*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5BDB9B0F92C80A20_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_94A360B27C3F7DBD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayChanged* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayChanged*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_94A360B27C3F7DBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CF791252F9D0375(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleReStart*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleReStart*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9CF791252F9D0375_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C257162A179221E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleReStart* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleReStart*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C257162A179221E0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3051BBA3D1CA4E48(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3051BBA3D1CA4E48_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE564220C49887A9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FE564220C49887A9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_25CDEC7350B291A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackName*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_25CDEC7350B291A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0550D52EE0901043(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackName* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackName*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0550D52EE0901043_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7DF6B3D0710F747B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7DF6B3D0710F747B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A94974EC716C86F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A94974EC716C86F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DF18B220398BDAA2_2(::SimpleJSON::JSONNode* a1, ::Class_4_3701B6A121A72CD0_2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_3701B6A121A72CD0_2*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DF18B220398BDAA2_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E81EA87F212E3BE3_2(::SimpleJSON::JSONNode* a1, ::Class_4_3701B6A121A72CD0_2* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_3701B6A121A72CD0_2*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E81EA87F212E3BE3_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_73F04E8E2494ECF9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_73F04E8E2494ECF9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_632402E860D58C08(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_632402E860D58C08_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7BEF2DBEAB3AD3A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7BEF2DBEAB3AD3A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_84F5241D92DD34E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_84F5241D92DD34E3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_29ED9AFFCCB2CB9A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCustomEvent*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCustomEvent*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_29ED9AFFCCB2CB9A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F6FC62B4033EA676(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCustomEvent* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCustomEvent*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F6FC62B4033EA676_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E53705D7600C7EE5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierDeathSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierDeathSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E53705D7600C7EE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D033B9E18EDF2B76(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierDeathSource* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierDeathSource*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D033B9E18EDF2B76_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F654DE214690DEF9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTopActionDelayTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTopActionDelayTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F654DE214690DEF9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A1C5A7727D47C69A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTopActionDelayTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTopActionDelayTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A1C5A7727D47C69A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_20EEB4CC6377DFC3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_20EEB4CC6377DFC3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D52AE7973F65EAD0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D52AE7973F65EAD0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_659CC03734643F91(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_659CC03734643F91_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_583BFFA55CF93972(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_583BFFA55CF93972_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_46854500BF5D1BFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_46854500BF5D1BFD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD2C70891A9592BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FD2C70891A9592BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9862AE5F05E5D9E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllowUseSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllowUseSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9862AE5F05E5D9E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_940864D62A612C94(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllowUseSkill* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllowUseSkill*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_940864D62A612C94_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7DDBB09B17C2D141(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDirectKillBattle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDirectKillBattle*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7DDBB09B17C2D141_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD3A63437D19BC24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDirectKillBattle* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDirectKillBattle*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BD3A63437D19BC24_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF346CF8578CD776(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBP*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CF346CF8578CD776_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD8A217CE5F12953(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBP* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBP*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BD8A217CE5F12953_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_78673577AAFC4669(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasCharacterRevived*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasCharacterRevived*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_78673577AAFC4669_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9A44BD7866D2238(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasCharacterRevived* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasCharacterRevived*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B9A44BD7866D2238_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_86445BB90CA1EF97(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivated*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_86445BB90CA1EF97_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_73E10E197958D0C4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivated* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivated*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_73E10E197958D0C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_586848E53BB7384D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivatedFromLineup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivatedFromLineup*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_586848E53BB7384D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A36DDBD982B23B6D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivatedFromLineup* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivatedFromLineup*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A36DDBD982B23B6D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C5CCCC211A888092(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C5CCCC211A888092_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_806A55171EA380FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_806A55171EA380FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_07109B292C1CEC5D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueMode*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueMode*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_07109B292C1CEC5D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_72CE5A3944BA71BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueMode* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueMode*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_72CE5A3944BA71BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_100FA24B4B7C7580(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInfiniteBattle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInfiniteBattle*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_100FA24B4B7C7580_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BCAF276C8C0BF0E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInfiniteBattle* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInfiniteBattle*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BCAF276C8C0BF0E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E980F1A6284FF78D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEntityActionState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEntityActionState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E980F1A6284FF78D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E41A806D11659A24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEntityActionState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEntityActionState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E41A806D11659A24_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7B97D46016D114F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveDyingEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveDyingEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C7B97D46016D114F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7B0BD0D00C01EED6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveDyingEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveDyingEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7B0BD0D00C01EED6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FFF5DB4CFFCA51F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AttackDamageTypeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AttackDamageTypeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FFF5DB4CFFCA51F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0D38275613BEFEC0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasActiveUnitOnScepter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasActiveUnitOnScepter*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0D38275613BEFEC0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_279E14AEB6188BD4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasActiveUnitOnScepter* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasActiveUnitOnScepter*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_279E14AEB6188BD4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_25484159AA618F31(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterFuncType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterFuncType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_25484159AA618F31_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EE0903D8E4757012(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterFuncType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterFuncType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EE0903D8E4757012_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7CDABEC50F1BADD1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsScepter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsScepter*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7CDABEC50F1BADD1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5B079E6303B4C6D0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsScepter* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsScepter*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5B079E6303B4C6D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CCD519D876B9057D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CCD519D876B9057D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_837C4560D1F17C3E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_837C4560D1F17C3E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD2001DC903880EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySaveModelWhenDead*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySaveModelWhenDead*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BD2001DC903880EF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_099538BECB219A76(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySaveModelWhenDead* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySaveModelWhenDead*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_099538BECB219A76_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3B640AE8C18AB579(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3B640AE8C18AB579_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A97BF42FDCB5488(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2A97BF42FDCB5488_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1E66CFD0090A9F08(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySimulateSpeedUp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySimulateSpeedUp*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1E66CFD0090A9F08_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D7D63547072F9069(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySimulateSpeedUp* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySimulateSpeedUp*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D7D63547072F9069_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E5E3F0C8F86A0712(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDieAnimFinished*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDieAnimFinished*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E5E3F0C8F86A0712_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_93E7F9881B196847(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDieAnimFinished* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDieAnimFinished*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_93E7F9881B196847_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F0F90A3C31405A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTimelinePerform*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTimelinePerform*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1F0F90A3C31405A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FC9D408394C81F15(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTimelinePerform* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTimelinePerform*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FC9D408394C81F15_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_119D9F58AEBBA56B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_119D9F58AEBBA56B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DDCEEFD762FE0DD3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DDCEEFD762FE0DD3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_91328C70672193D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPart*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPart*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_91328C70672193D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5BB68049E0B21D1D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPart* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPart*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5BB68049E0B21D1D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DD2FE9290160F0D0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DD2FE9290160F0D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A38FA0BC83F2C4AD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartClientOnly* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartClientOnly*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A38FA0BC83F2C4AD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7B4EDA37C02FE503(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7B4EDA37C02FE503_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F9311089A30FB3F2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartOwner* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartOwner*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F9311089A30FB3F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4ADF3A933F1D8BFF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4ADF3A933F1D8BFF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB40149633D29A4C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EB40149633D29A4C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9801F6882BCB66BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9801F6882BCB66BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_78BDEED6810F4481(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_78BDEED6810F4481_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2581CB816C8511C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixTaskConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixTaskConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2581CB816C8511C1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EBA1ECE5679E03E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixBasePredicate*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixBasePredicate*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EBA1ECE5679E03E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18319858F4E5C3D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixBasePredicate* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixBasePredicate*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_18319858F4E5C3D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE0E4F511C372956(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateA*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateA*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AE0E4F511C372956_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6498F5DAD14DE3B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateA* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateA*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6498F5DAD14DE3B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_17C4261DB539DE87(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateB*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateB*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_17C4261DB539DE87_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9F8D02DC7FF1915E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateB* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateB*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9F8D02DC7FF1915E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EE4E8BC5DB745FF0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateC*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EE4E8BC5DB745FF0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BE10F352F8109B4D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BE10F352F8109B4D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F82709E2C054A9E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharacterIDGroup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharacterIDGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8F82709E2C054A9E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5DC86C98CB3181A5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharacterIDGroup* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharacterIDGroup*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5DC86C98CB3181A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC5F5625DEA66E17(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialAvatarType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialAvatarType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AC5F5625DEA66E17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_99FC08864B5D4F44(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialAvatarType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialAvatarType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_99FC08864B5D4F44_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D51DBEC909C4AD72(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertBattlePerform*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertBattlePerform*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D51DBEC909C4AD72_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C6B7DCE2C8CFD6B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertBattlePerform* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertBattlePerform*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C6B7DCE2C8CFD6B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4A907D82C47BBAE8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainCustomString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainCustomString*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4A907D82C47BBAE8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ACE66C7F010F2CDB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainCustomString* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainCustomString*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_ACE66C7F010F2CDB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A7D04581E34C9988(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareWaveCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareWaveCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A7D04581E34C9988_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_938C1788D96871F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareWaveCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareWaveCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_938C1788D96871F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D13CE81678C654BB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLevelLoseCheck*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLevelLoseCheck*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D13CE81678C654BB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_663B50F9A09FA996(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_663B50F9A09FA996_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9E9BF1DC3EBB759C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdditionalConditions*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdditionalConditions*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9E9BF1DC3EBB759C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_606E465364F3DDAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdditionalConditions* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdditionalConditions*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_606E465364F3DDAB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E26E9ED62F1E7023(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterDie*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterDie*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E26E9ED62F1E7023_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8D890CC4DAF4D318(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8D890CC4DAF4D318_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D221FD635F43E462(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterHurt*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterHurt*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D221FD635F43E462_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4F0501F59D91B7CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterHurt* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterHurt*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4F0501F59D91B7CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_31C4A03450D4E59C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterDie*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterDie*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_31C4A03450D4E59C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F396F4AB770D4DAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterDie* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterDie*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F396F4AB770D4DAB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF86B0B4127C652(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTrialCharacterDie*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTrialCharacterDie*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BEF86B0B4127C652_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BC125C9BA7AAD645(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTrialCharacterDie* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTrialCharacterDie*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BC125C9BA7AAD645_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_59FD4AC7D783BB68(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTurnCountMatch*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTurnCountMatch*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_59FD4AC7D783BB68_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2A1A4C247FBD40C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTurnCountMatch* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTurnCountMatch*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E2A1A4C247FBD40C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5ACE2580FB64A994(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckDarkTeamDestroy*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5ACE2580FB64A994_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_75E0EF90E916D203(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckDarkTeamDestroy*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_75E0EF90E916D203_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D0F464492764348(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeGroupType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeGroupType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3D0F464492764348_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DCAF78B83DBE5BB7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeGroupType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeGroupType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DCAF78B83DBE5BB7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D6976365E2664B6B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFightFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFightFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D6976365E2664B6B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F5ABE09A3389FB86(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFightFinish* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFightFinish*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F5ABE09A3389FB86_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_348C29F7D9974FEF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetAliveState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetAliveState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_348C29F7D9974FEF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A48F494646ECD37C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetAliveState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetAliveState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A48F494646ECD37C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B1ADEFF3EBC7BDF9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayEffectType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayEffectType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B1ADEFF3EBC7BDF9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_952839A36E6F2E32(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_952839A36E6F2E32_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3909777397355346(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3909777397355346_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C4BA83663AC42CAF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C4BA83663AC42CAF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C48FB23093D62A74(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C48FB23093D62A74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_894EA22A5033AD8D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_894EA22A5033AD8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4D5004DE0C958640(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4D5004DE0C958640_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_26153EE2E425D2A1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_26153EE2E425D2A1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9FA458B7B39221E2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnemy*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnemy*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9FA458B7B39221E2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_822C7E9989DCBB49(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnemy* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnemy*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_822C7E9989DCBB49_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC8F344C9FED3C13(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EC8F344C9FED3C13_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_84D0EFBEA2F1B4B8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_84D0EFBEA2F1B4B8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_655A39ADDDEAD2A9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeammate*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeammate*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_655A39ADDDEAD2A9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D5427897AECC3678(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeammate* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeammate*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D5427897AECC3678_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_825B2DFE10391584(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCasterAliveOrLimbo*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCasterAliveOrLimbo*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_825B2DFE10391584_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2FF3434A5B07CEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCasterAliveOrLimbo* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCasterAliveOrLimbo*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E2FF3434A5B07CEB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0642733BC87B7112(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0642733BC87B7112_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A73D61E7F55B6C79(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A73D61E7F55B6C79_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_122D9A675E398E13(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareResistChance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareResistChance*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_122D9A675E398E13_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3130ACA06E8BD1E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareResistChance* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareResistChance*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3130ACA06E8BD1E0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_034038EADDA6D3E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageCritical*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageCritical*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_034038EADDA6D3E6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_556A9D39DE30B9CF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageCritical* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageCritical*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_556A9D39DE30B9CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0B4EF7F935234091(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsIndirectDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsIndirectDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0B4EF7F935234091_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1980752E946E9A34(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsIndirectDamage* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsIndirectDamage*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1980752E946E9A34_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2C6691F2917F1B1A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsConvertDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsConvertDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2C6691F2917F1B1A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_34FF95458C6CDD9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsConvertDamage* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsConvertDamage*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_34FF95458C6CDD9B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61AD3E1D1B312F64(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharmAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharmAction*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_61AD3E1D1B312F64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF0FBF262D033C7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharmAction* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharmAction*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CF0FBF262D033C7D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4CF89D9549507B8B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageLuckCritical*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageLuckCritical*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4CF89D9549507B8B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1E56FBE9C4014426(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageLuckCritical* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageLuckCritical*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1E56FBE9C4014426_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E16A7C6AA2BF3858(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E16A7C6AA2BF3858_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_21A1FD7F84401D4B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_21A1FD7F84401D4B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F8435E43333DF41B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHealCallBackStack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHealCallBackStack*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F8435E43333DF41B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6C83476CD4D32176(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHealCallBackStack* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHealCallBackStack*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6C83476CD4D32176_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B18B104650182EFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHitAllCallBackStack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHitAllCallBackStack*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B18B104650182EFD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A9055BE89AC4F1E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHitAllCallBackStack* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHitAllCallBackStack*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A9055BE89AC4F1E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D057F9E58D0FD34A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRootHitCallback*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRootHitCallback*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D057F9E58D0FD34A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F80228ABF284020B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRootHitCallback* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRootHitCallback*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F80228ABF284020B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85DB57B26550C3B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_85DB57B26550C3B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A9B89DFC8D89F5EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A9B89DFC8D89F5EF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E4B763549DED2CD7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E4B763549DED2CD7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_50D78E7CF73D366E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_50D78E7CF73D366E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5DA06E5DE116269A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillTargetType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillTargetType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5DA06E5DE116269A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7AA1FF0FE60C4B5F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillTargetType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillTargetType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7AA1FF0FE60C4B5F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B5A324D03FCE2F74(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B5A324D03FCE2F74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9DC0BD4054DE1463(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9DC0BD4054DE1463_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DC6D34FEFE4AA2B8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillName*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DC6D34FEFE4AA2B8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC662ACC4402C765(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillName* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillName*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EC662ACC4402C765_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7B6708ECBBF078D0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentContainAbilityTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentContainAbilityTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7B6708ECBBF078D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96678D079396EC24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentContainAbilityTag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentContainAbilityTag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_96678D079396EC24_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_60D0FCCF47535E99(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillBPChangePreview*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_60D0FCCF47535E99_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_990E2601947A5D28(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillBPChangePreview*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_990E2601947A5D28_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B4A97DD9CB38BAB4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B4A97DD9CB38BAB4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_11A92FE6AEE7A887(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_11A92FE6AEE7A887_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8C863EBC256F6F8E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackSkillEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackSkillEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8C863EBC256F6F8E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00B6190E0C730F95(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackSkillEffect* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackSkillEffect*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_00B6190E0C730F95_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3FC2C9AC51B71989(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeak*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3FC2C9AC51B71989_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A88DF89377E7996A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeak* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeak*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A88DF89377E7996A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6167543F445A7574(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6167543F445A7574_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_277E7CE42C8CF247(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_277E7CE42C8CF247_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CD9C2383EDFC65AC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CD9C2383EDFC65AC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4B47F0B800B28C1F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4B47F0B800B28C1F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_970591631D2403F7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterFly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterFly*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_970591631D2403F7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA24E59D050EC98E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterFly* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterFly*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AA24E59D050EC98E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6DAF871BA7835B21(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6DAF871BA7835B21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3CD2065F24CFCF42(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3CD2065F24CFCF42_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2CBF4C15A18BA918(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBreakStanceDamageType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBreakStanceDamageType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2CBF4C15A18BA918_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4CADD3893F28620B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBreakStanceDamageType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBreakStanceDamageType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4CADD3893F28620B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8154DFA834013E25(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8154DFA834013E25_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1CF3E06DFC1F8E10(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1CF3E06DFC1F8E10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6FCDBC05855FAF68(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6FCDBC05855FAF68_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_329B90964E3B6549(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_329B90964E3B6549_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5E74AC5DDE670143(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageFirstWave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageFirstWave*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5E74AC5DDE670143_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A2D7FBE49CD614BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageFirstWave* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageFirstWave*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A2D7FBE49CD614BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C75A10929DD27D28(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeLeft*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeLeft*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C75A10929DD27D28_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB2EC7B30A69F695(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeLeft* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeLeft*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EB2EC7B30A69F695_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5DDA9742151991AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5DDA9742151991AA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_43EEF53AE083F185(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_43EEF53AE083F185_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE73FCEEDBA31C56(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AE73FCEEDBA31C56_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_69619C6FED757F9D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetUnselectable* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetUnselectable*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_69619C6FED757F9D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_30F621A5024D7A2D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetCustomUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_30F621A5024D7A2D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_683A3CA3FF6717AE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetCustomUnselectable*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_683A3CA3FF6717AE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DC5F40CAFB9E2287(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DC5F40CAFB9E2287_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64281D89C655D55E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_64281D89C655D55E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_41A224A3ABA1EECD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_41A224A3ABA1EECD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C2D535F3BB8C23A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C2D535F3BB8C23A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7C9D531D632D40B5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCountClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7C9D531D632D40B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D64A358BF3FA6B6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCountClientOnly*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3D64A358BF3FA6B6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FFCF6D976B3E952D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillActive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillActive*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FFCF6D976B3E952D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_35B195479FCB3E44(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillActive* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillActive*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_35B195479FCB3E44_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C4154C8BC84E25F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalWin*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalWin*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C4154C8BC84E25F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E974D190B0434460(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalWin* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalWin*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E974D190B0434460_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6C44089D224AF87C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityPending*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityPending*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6C44089D224AF87C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7A30A662890C555(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityPending* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityPending*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C7A30A662890C555_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_76FCFA1F5B75AA2B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_76FCFA1F5B75AA2B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_577135B274C3CC46(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_577135B274C3CC46_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8117C814526671EE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8117C814526671EE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BCC4E3D06536B27B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamValue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BCC4E3D06536B27B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC6DE871C6D3249C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamString*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EC6DE871C6D3249C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1CFC365AD4B329D1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamString* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamString*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1CFC365AD4B329D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01089DE54F0BD1D3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsParamFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsParamFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_01089DE54F0BD1D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79F08B8F3ADA2D78(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsParamFlag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsParamFlag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_79F08B8F3ADA2D78_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CE583C3B665998AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowStanceBreak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowStanceBreak*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CE583C3B665998AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D405929DB038E13C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowStanceBreak* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D405929DB038E13C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_09A460DEEBFE9794(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowRedStanceBreak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowRedStanceBreak*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_09A460DEEBFE9794_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6120CBA8B908067(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowRedStanceBreak* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowRedStanceBreak*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A6120CBA8B908067_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6FB80EA0E5B0D538(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6FB80EA0E5B0D538_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8EB1A146C942612B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8EB1A146C942612B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_409DE1F488519B82(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentTurnState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentTurnState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_409DE1F488519B82_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_63B7913DC8C9AC6E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentTurnState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentTurnState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_63B7913DC8C9AC6E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61A73A635A777B83(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_61A73A635A777B83_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_30BE381EA8E15090(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_30BE381EA8E15090_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D8A8822066D29746(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAbilityProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAbilityProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D8A8822066D29746_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C4EA1B28ABD87D4D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAbilityProperty* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAbilityProperty*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C4EA1B28ABD87D4D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0672A3E22B6372D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTurnBasedGameModeState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTurnBasedGameModeState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0672A3E22B6372D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8D1DEE4A05EBAE3D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTurnBasedGameModeState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTurnBasedGameModeState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8D1DEE4A05EBAE3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4F22F61BE62BE386(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkillPointActivated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkillPointActivated*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4F22F61BE62BE386_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_222C071240D1538D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkillPointActivated* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkillPointActivated*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_222C071240D1538D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A4D8AA3A484CAE15(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveInsertUltraWait*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveInsertUltraWait*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A4D8AA3A484CAE15_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_08B51998D1E4C426(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveInsertUltraWait* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveInsertUltraWait*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_08B51998D1E4C426_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_920510DD72C039E5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPChangeTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPChangeTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_920510DD72C039E5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_78B07BC22C3B2038(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPChangeTag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPChangeTag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_78B07BC22C3B2038_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F77B6FA35B570DE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F77B6FA35B570DE3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_40C1A00457EB450E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageTag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageTag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_40C1A00457EB450E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8BBD4E8D8298F445(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageCustomName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageCustomName*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8BBD4E8D8298F445_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F078DE579AC0156(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageCustomName* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageCustomName*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1F078DE579AC0156_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E48098CD5AC89C69(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBaseTypeCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBaseTypeCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E48098CD5AC89C69_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DD8A84363B14ADCA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBaseTypeCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBaseTypeCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DD8A84363B14ADCA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB0A62414F41CAA6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCountOfBaseType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCountOfBaseType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EB0A62414F41CAA6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3C910B1043E358AD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCountOfBaseType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCountOfBaseType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3C910B1043E358AD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E778B50961FD5130(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E778B50961FD5130_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A034D8D6548DF823(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeSource* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeSource*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A034D8D6548DF823_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D38798D0E11D5C6C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D38798D0E11D5C6C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_659D573C292393DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_659D573C292393DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8FF445483E78BEC6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockHP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockHP*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8FF445483E78BEC6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7C35DE50837EA4CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockHP* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockHP*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7C35DE50837EA4CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D696ED4E3ACA5A66(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockStance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockStance*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D696ED4E3ACA5A66_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B15DBB8FF6F2C56D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockStance* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockStance*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B15DBB8FF6F2C56D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_765AE63804D12C97(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerSDFTextEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerSDFTextEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_765AE63804D12C97_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_82B67930CB677C40(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerSDFTextEffect* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerSDFTextEffect*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_82B67930CB677C40_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_24A5972E9263117C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainResistBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainResistBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_24A5972E9263117C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8B57260309AEA9EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainResistBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainResistBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8B57260309AEA9EF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E39602EB0AFD0BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6E39602EB0AFD0BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_350DA6C925BD9FFF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_350DA6C925BD9FFF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8BEF3E71FDF9684A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterSomatoWidthType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterSomatoWidthType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8BEF3E71FDF9684A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_97E07624FFE10D91(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterSomatoWidthType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterSomatoWidthType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_97E07624FFE10D91_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_147E290013CDB2DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentModifierAlive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentModifierAlive*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_147E290013CDB2DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_819CF9B404806DB2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentModifierAlive* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentModifierAlive*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_819CF9B404806DB2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0CDBB7B7D7DE9E95(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnableNegativeHP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnableNegativeHP*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0CDBB7B7D7DE9E95_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1AA6D04820F8F51C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnableNegativeHP* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnableNegativeHP*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1AA6D04820F8F51C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5AA56667D5C64725(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5AA56667D5C64725_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2443CAFE1B4B57EC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2443CAFE1B4B57EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_68B6688187A4642C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSomatoType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSomatoType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_68B6688187A4642C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E66235B59A5A8A9F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSomatoType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSomatoType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E66235B59A5A8A9F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_38B0BF7CE6018493(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ChessByIsContainModifier*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ChessByIsContainModifier*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_38B0BF7CE6018493_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_57B3D1B5F653C860(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ChessByIsContainModifier* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ChessByIsContainModifier*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_57B3D1B5F653C860_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_651B0623A532A426(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ChessByContainBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ChessByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_651B0623A532A426_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B6A1AEF299D4322D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ChessByContainBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ChessByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B6A1AEF299D4322D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2C09F9DD0CB73510(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_Chess_ByCanMove*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_Chess_ByCanMove*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2C09F9DD0CB73510_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_44FEACC64FBBA0B1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_Chess_ByCanMove* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_Chess_ByCanMove*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_44FEACC64FBBA0B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BFD6B88DB7BB0205(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_Chess_ByHasLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_Chess_ByHasLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BFD6B88DB7BB0205_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8BBA62A0E1051270(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_Chess_ByHasLockTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_Chess_ByHasLockTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8BBA62A0E1051270_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33494DCD2C1AC982(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_Chess_ByHasTargetInAlertRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_Chess_ByHasTargetInAlertRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_33494DCD2C1AC982_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_348E5E9DE0551DC3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_Chess_ByHasTargetInAlertRange* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_Chess_ByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_348E5E9DE0551DC3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5D40241ED1FACB74(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_Chess_ByInAttackRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_Chess_ByInAttackRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5D40241ED1FACB74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_164E32B0C45DE279(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_Chess_ByInAttackRange* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_Chess_ByInAttackRange*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_164E32B0C45DE279_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C5C4A7F060E76708(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_Chess_ByInAlertRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_Chess_ByInAlertRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C5C4A7F060E76708_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B18079F757033F75(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_Chess_ByInAlertRange* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_Chess_ByInAlertRange*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B18079F757033F75_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EE9896936F70DF0A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_Chess_ByDistanceToTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_Chess_ByDistanceToTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EE9896936F70DF0A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6AFE4D936C118C51(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_Chess_ByDistanceToTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_Chess_ByDistanceToTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6AFE4D936C118C51_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DE10D89DFC57FEF4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PredicateConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DE10D89DFC57FEF4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4A0B2311B587CD6A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PredicateConfig* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4A0B2311B587CD6A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96D5EC625457004F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_96D5EC625457004F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B571ADBE19D3F564(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B571ADBE19D3F564_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C12CBD0E7A2E2CC1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C12CBD0E7A2E2CC1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1631CC4D79302AD6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1631CC4D79302AD6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0B2FCB9EFE9175DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetAlias*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetAlias*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0B2FCB9EFE9175DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A0315593634193B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetAlias* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetAlias*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0A0315593634193B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_20861141D76DDB34(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHeroGender*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHeroGender*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_20861141D76DDB34_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C88167FFCD1B57DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHeroGender* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHeroGender*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C88167FFCD1B57DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2C0B710B94F4AC21(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAny*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAny*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2C0B710B94F4AC21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C1E92A933F3CA7D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAny* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAny*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C1E92A933F3CA7D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E88730B7828C9A2A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnd*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnd*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E88730B7828C9A2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6965DBB62CE1814D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnd* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnd*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6965DBB62CE1814D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_53746D0D64D5F1C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNot*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_53746D0D64D5F1C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D91DAE33B5F58CAD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNot* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNot*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D91DAE33B5F58CAD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B8256E4A094C5303(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAny*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAny*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B8256E4A094C5303_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_873C6C0557B62810(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAny* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAny*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_873C6C0557B62810_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D4292921E9FE29D6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAll*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAll*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D4292921E9FE29D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F16C8A2FBD08D1D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAll* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAll*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8F16C8A2FBD08D1D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5FF8BC45283CD50A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCustomString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCustomString*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5FF8BC45283CD50A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2359F5BD9BC6568F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCustomString* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCustomString*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2359F5BD9BC6568F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BFB760888F2B87DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDynamicValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDynamicValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BFB760888F2B87DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_87364B85CB5869A8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_87364B85CB5869A8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_658A230FF68272BF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListIntersects*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListIntersects*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_658A230FF68272BF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D325C6D05F6600C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListIntersects* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListIntersects*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7D325C6D05F6600C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8B3C737B57B12F0A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DebugLogInPredicates*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DebugLogInPredicates*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8B3C737B57B12F0A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4E9DACF3CB3AB08F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DebugLogInPredicates* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DebugLogInPredicates*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4E9DACF3CB3AB08F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD7AC417EDCECD6B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetValid*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetValid*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FD7AC417EDCECD6B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96712AE5B3DCB938(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetValid* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetValid*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_96712AE5B3DCB938_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C3837AEEBCA0FF69(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleMissionTalkFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleMissionTalkFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C3837AEEBCA0FF69_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7E8BE05F628AACC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleMissionTalkFinish* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleMissionTalkFinish*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C7E8BE05F628AACC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5BDCA6124D730F1A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentAudioLanguage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentAudioLanguage*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5BDCA6124D730F1A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_28EB6DC683FEE9F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentAudioLanguage* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentAudioLanguage*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_28EB6DC683FEE9F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_6(::SimpleJSON::JSONNode* a1, ::Class_4_1B352B009B1CD57B*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_1B352B009B1CD57B*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CACF03EAC6255BD4_3(::SimpleJSON::JSONNode* a1, ::Class_4_1B352B009B1CD57B* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_1B352B009B1CD57B*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CACF03EAC6255BD4_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CB4E56321F62FB5D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CB4E56321F62FB5D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2F666F0065D275C8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2F666F0065D275C8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BCE3B25AF1A3FC51(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamLeader*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BCE3B25AF1A3FC51_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_141EFB83F004B9BD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamLeader*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_141EFB83F004B9BD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_480B7EFB4DDB6A74(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamMembers*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_480B7EFB4DDB6A74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E10DDCFA89EA846D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamMembers*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E10DDCFA89EA846D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_28B96E6752967983(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_28B96E6752967983_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E9C21F5D38540BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6E9C21F5D38540BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4C3ECF4575364FD5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4C3ECF4575364FD5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00761F0D1664988C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_00761F0D1664988C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_04F8999B30797C8F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_04F8999B30797C8F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2F6D5308EB922E66(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2F6D5308EB922E66_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_161FECCF0E0CB44A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvMonsterData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvMonsterData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_161FECCF0E0CB44A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A02512A7F5701E88(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonster*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A02512A7F5701E88_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2BC71AD7CAB4A7D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonster* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonster*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2BC71AD7CAB4A7D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7A27E7D0610E9BD2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvPropData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvPropData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7A27E7D0610E9BD2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9F8D4F9F5F7DCCA1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvProp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvProp*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9F8D4F9F5F7DCCA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DE1FC3655636A4E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvProp* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DE1FC3655636A4E9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_20648125986A9BD3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvNPCData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvNPCData*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_20648125986A9BD3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_12F41E05761FCEA3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNPC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNPC*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_12F41E05761FCEA3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5B2E21249A3E633F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNPC* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNPC*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5B2E21249A3E633F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F4AAAC1EC456904(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPropEx*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPropEx*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7F4AAAC1EC456904_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1376EBB7E44A9B89(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPropEx* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPropEx*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1376EBB7E44A9B89_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C942D2F695796C7E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvNPCDataEx*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvNPCDataEx*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C942D2F695796C7E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5FC50CA15A641BCE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNpcEx*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNpcEx*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5FC50CA15A641BCE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_55DEBE75260ED55B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNpcEx* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNpcEx*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_55DEBE75260ED55B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_343702734D743631(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNormalPam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNormalPam*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_343702734D743631_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F743A7D6C5483553(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNormalPam* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNormalPam*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F743A7D6C5483553_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9D6C2833CD1AC58(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B9D6C2833CD1AC58_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_37BE0359D84CEEAA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_37BE0359D84CEEAA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A981BD1D2871E768(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A981BD1D2871E768_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1FCB6CE54285D0C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1FCB6CE54285D0C1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1883CBC103A53BF4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchor*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchor*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1883CBC103A53BF4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AEC5F912B6C49B8F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchor* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchor*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AEC5F912B6C49B8F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85422902C47BD856(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchorByName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchorByName*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_85422902C47BD856_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CA21E25E430C8362(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchorByName* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchorByName*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CA21E25E430C8362_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F164B8F3992F2AF9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F164B8F3992F2AF9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8B7CDD538F97985B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8B7CDD538F97985B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6065BE1DFDBC6E0D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDialogueEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDialogueEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6065BE1DFDBC6E0D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A73C4D5BF540DAD7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDialogueEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDialogueEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A73C4D5BF540DAD7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E5004F7EC315AE0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastSearchEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastSearchEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7E5004F7EC315AE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E1BC7904816250B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastSearchEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E1BC7904816250B9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2D5ADA5964D8EF09(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2D5ADA5964D8EF09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B2B14B1404C85E6B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B2B14B1404C85E6B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_53C5FA2E5A3BDFFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonsterEx*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_53C5FA2E5A3BDFFE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_008C6B9298DBEF5E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonsterEx*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_008C6B9298DBEF5E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_05BC85F326807B8D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_05BC85F326807B8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4C9315311E04E857(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4C9315311E04E857_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4619BCE4DA5849C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonUnit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonUnit*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4619BCE4DA5849C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_446DD86D992A8D3B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonUnit* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonUnit*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_446DD86D992A8D3B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1BC5A006C02807D5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1BC5A006C02807D5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_101723072CC55EC0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_101723072CC55EC0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CB867586E035719A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPuzzleEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPuzzleEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CB867586E035719A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B52A50AB4176CE56(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPuzzleEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPuzzleEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B52A50AB4176CE56_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8901C8498EC3AFE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchChessLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchChessLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8901C8498EC3AFE3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_282BC4BE6C2B6C37(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchChessLockTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchChessLockTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_282BC4BE6C2B6C37_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3C26E144959FBE7F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchChessSkillTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchChessSkillTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3C26E144959FBE7F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7A2CBC1F88AB0AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchChessSkillTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchChessSkillTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C7A2CBC1F88AB0AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD7C7B3472E23E45(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchChessMoveTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchChessMoveTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FD7C7B3472E23E45_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BFB916531EF81A1D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchChessMoveTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchChessMoveTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BFB916531EF81A1D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C279C38E2D1CF37C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchChessBase*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchChessBase*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C279C38E2D1CF37C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4C2C1E81E56D13AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchChessBase* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchChessBase*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4C2C1E81E56D13AA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_10BF8372A36E7E3B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchEnemyInAttackRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchEnemyInAttackRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_10BF8372A36E7E3B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_17CF18B8E75DC04F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchEnemyInAttackRange* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchEnemyInAttackRange*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_17CF18B8E75DC04F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_385F23EA48E96029(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchEnemyInAlertRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchEnemyInAlertRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_385F23EA48E96029_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A5D280C40A17099(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchEnemyInAlertRange* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchEnemyInAlertRange*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0A5D280C40A17099_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_59FD0634B642C224(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetConcat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetConcat*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_59FD0634B642C224_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_88C354BE6B39FF1D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetConcat* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetConcat*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_88C354BE6B39FF1D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F01BE215C80606C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetCompute*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetCompute*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F01BE215C80606C1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2316C02821E957A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetCompute* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetCompute*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2316C02821E957A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8BEDE95ACB6047A3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSequence*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSequence*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8BEDE95ACB6047A3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_92ABCA094FFE2170(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSequence* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_92ABCA094FFE2170_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BBB4D4673CB8087F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSelector*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSelector*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BBB4D4673CB8087F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_38898C22C6430B99(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSelector* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSelector*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_38898C22C6430B99_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A5A3FAD89FDC3C12(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilter*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A5A3FAD89FDC3C12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_090B833F5BBA8447(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilter* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilter*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_090B833F5BBA8447_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E35CBC21CAA4DB5A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetShuffle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetShuffle*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E35CBC21CAA4DB5A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DF571A8D04A9105A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetShuffle* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetShuffle*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DF571A8D04A9105A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CD8F1BAA11F67EEC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetTake*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetTake*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CD8F1BAA11F67EEC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BE86830326113DEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetTake* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetTake*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BE86830326113DEB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F142E196D16FDB42(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetIndex*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetIndex*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F142E196D16FDB42_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E00808DFC73B9A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetIndex* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetIndex*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6E00808DFC73B9A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_489D2FAAC5CA9EE6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetRemoveUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetRemoveUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_489D2FAAC5CA9EE6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CA0752CA223A31A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetRemoveUnselectable* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetRemoveUnselectable*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CA0752CA223A31A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_39997008EB1A02E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterAliveState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterAliveState*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_39997008EB1A02E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D06B2BAE8A831960(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterAliveState* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterAliveState*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D06B2BAE8A831960_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DBAA8A55402A4CB2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterTargetType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterTargetType*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DBAA8A55402A4CB2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B68A984FB0824F54(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterTargetType* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterTargetType*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B68A984FB0824F54_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_035756E480BFE7F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_035756E480BFE7F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_16EA0FD679CFED2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCaster* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCaster*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_16EA0FD679CFED2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2AF9C1E1A0B6364F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchModifierOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchModifierOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2AF9C1E1A0B6364F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D7891593DDBD6D26(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchModifierOwner* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchModifierOwner*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D7891593DDBD6D26_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_65145C9A49024623(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNone*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_65145C9A49024623_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B8E6C682138E53DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNone* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNone*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B8E6C682138E53DA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F8791FAC07C4DAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1F8791FAC07C4DAE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E59C0874F8ACB727(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E59C0874F8ACB727_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E31EB028273987E2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityGroup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E31EB028273987E2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_74B4AB4DAA70BDFB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityGroup* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityGroup*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_74B4AB4DAA70BDFB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F1BEEC778192E08E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F1BEEC778192E08E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2BEB4D3D08381AC0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2BEB4D3D08381AC0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B563B0EC32426EED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTeamEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTeamEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B563B0EC32426EED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0DCB201B079071AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTeamEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTeamEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0DCB201B079071AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_025327A769F5A4FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_025327A769F5A4FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E97654CA20283B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7E97654CA20283B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5460FD2230EF85B1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPassiveEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPassiveEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5460FD2230EF85B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_675BCBC480629A48(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPassiveEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPassiveEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_675BCBC480629A48_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C05A26B75F3FF019(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C05A26B75F3FF019_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F1E6F5FC5860A770(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F1E6F5FC5860A770_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B6A2A259B7CC4B09(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B6A2A259B7CC4B09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3BF9131457BBBA6B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLockTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLockTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3BF9131457BBBA6B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_30443E2DF67545A5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAITarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAITarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_30443E2DF67545A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_14B9DE76B950689C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAITarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAITarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_14B9DE76B950689C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_789DD059F7D31BE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_789DD059F7D31BE3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6626940828AF1B9A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6626940828AF1B9A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC461EB4A2BDE4AD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityByIndex*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EC461EB4A2BDE4AD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_205988D3FC045956(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityByIndex*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_205988D3FC045956_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9054BA35002B370E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9054BA35002B370E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D1793B12E5076D87(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D1793B12E5076D87_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EAAB3A90AD38538B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitPos*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitPos*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EAAB3A90AD38538B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E306282B4BDD7B82(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitPos* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitPos*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E306282B4BDD7B82_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8DE1262782F638D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTaskActionTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTaskActionTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8DE1262782F638D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0FB03289B6B443AE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTaskActionTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTaskActionTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0FB03289B6B443AE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B8C279934D20A6CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPropFarmElement*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPropFarmElement*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B8C279934D20A6CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_921AEF3DBA42C697(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPropFarmElement* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPropFarmElement*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_921AEF3DBA42C697_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9E99E1DB54837690(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLevelEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLevelEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9E99E1DB54837690_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BE90BEE6EB872FE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLevelEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BE90BEE6EB872FE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_25B2F673DF158849(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLineup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLineup*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_25B2F673DF158849_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_90F41F38147C10E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLineup* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLineup*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_90F41F38147C10E0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6464A2442BC75A02(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchInstigator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchInstigator*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6464A2442BC75A02_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD0CA588EEE12690(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchInstigator* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchInstigator*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FD0CA588EEE12690_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D4BBF6F62AFAB435(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D4BBF6F62AFAB435_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2EE6A407800CC36C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventCaster* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventCaster*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2EE6A407800CC36C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BB3A5A836A4BAEAC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMainMonster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMainMonster*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BB3A5A836A4BAEAC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B920E50304484A45(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMainMonster* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMainMonster*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B920E50304484A45_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_627E83ABE540626E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_627E83ABE540626E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_05BED5382E8D10E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCaster* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCaster*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_05BED5382E8D10E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C1D57FC6006A875C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCreator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCreator*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C1D57FC6006A875C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_561BA3AAA89CAD35(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCreator* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCreator*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_561BA3AAA89CAD35_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_271D1C9D2F7A54B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreatedBattleEvent*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreatedBattleEvent*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_271D1C9D2F7A54B9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4DF4965030F2B6C9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreatedBattleEvent* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreatedBattleEvent*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4DF4965030F2B6C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CE45E30865654E0D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUniqueNameEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CE45E30865654E0D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D3149FFF5C427C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUniqueNameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7D3149FFF5C427C1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BAE7C44E17AF1F96(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPartner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPartner*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BAE7C44E17AF1F96_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5CF2FA8ABD1ECA87(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPartner* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPartner*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5CF2FA8ABD1ECA87_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A09E79600279ADA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMazeBuffTargets*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A09E79600279ADA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C24F50618D262ABA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMazeBuffTargets*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C24F50618D262ABA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F4F24B3F4FDFF9FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBloodLinkTargets*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F4F24B3F4FDFF9FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5C03A9B4F5BD0F06(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBloodLinkTargets*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5C03A9B4F5BD0F06_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D1F7761EC02A066(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3D1F7761EC02A066_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_995E3FAE10945E98(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllUnselectable* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllUnselectable*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_995E3FAE10945E98_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1CF0203D2CF72EE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1CF0203D2CF72EE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7992F87611800E69(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7992F87611800E69_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_677BB5DECDB2EF1C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActionDelayExceed*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActionDelayExceed*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_677BB5DECDB2EF1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8D4E9517F6490F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActionDelayExceed* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActionDelayExceed*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A8D4E9517F6490F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6ECDBDC430C64F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarAssistant*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarAssistant*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A6ECDBDC430C64F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC5A87492E1407AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarAssistant* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarAssistant*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CC5A87492E1407AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEBEB15BD3D1CB77(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeAllTargets*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeAllTargets*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BEBEB15BD3D1CB77_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CBA3CCA4D3A99D4E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeAllTargets* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeAllTargets*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CBA3CCA4D3A99D4E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEAD9C1F0D94CD42(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BEAD9C1F0D94CD42_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_74E3EDA2F5708BD0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeSource* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeSource*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_74E3EDA2F5708BD0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BDCD4B46E9770209(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonMonsters*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonMonsters*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BDCD4B46E9770209_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B753EE33C809EA0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonMonsters* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonMonsters*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1B753EE33C809EA0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_808D67FCECCAD9CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTemplateEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTemplateEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_808D67FCECCAD9CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0EF47C3794C40C47(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTemplateEntityList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTemplateEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0EF47C3794C40C47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_871BF451CE165DE5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_871BF451CE165DE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_47A9420B7D9791F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_47A9420B7D9791F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F8875C39A0D7ABF7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapEnemyTeamEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapEnemyTeamEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F8875C39A0D7ABF7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F1ECF942793B0B67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapEnemyTeamEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapEnemyTeamEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F1ECF942793B0B67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_08197ABF01E7732B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMember*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMember*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_08197ABF01E7732B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB202D182BCDC9A1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMember* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMember*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AB202D182BCDC9A1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_57D2149B01CC92A1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_57D2149B01CC92A1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E59668EE3882D59(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7E59668EE3882D59_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B84B712436BF2B83(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllOffTeamMember*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllOffTeamMember*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B84B712436BF2B83_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE2E24B2B7ADF2BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllOffTeamMember* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllOffTeamMember*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FE2E24B2B7ADF2BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_944E041F182C7A7B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillPointEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillPointEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_944E041F182C7A7B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_863F85134BAD4031(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillPointEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillPointEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_863F85134BAD4031_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3765F09E1DA8F139(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillActualAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillActualAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3765F09E1DA8F139_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5E3D6A511F215349(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillActualAttacker* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillActualAttacker*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5E3D6A511F215349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_68EF654DD5FE7EFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummoner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummoner*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_68EF654DD5FE7EFD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB1B572902096807(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummoner* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AB1B572902096807_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BF26B22D7F08DD47(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreator*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BF26B22D7F08DD47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BC1D85F94DF364DD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreator* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BC1D85F94DF364DD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D5ECD02B71126C86(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummonedMinions*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummonedMinions*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D5ECD02B71126C86_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BBEED9848CF4BAC6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummonedMinions* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummonedMinions*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BBEED9848CF4BAC6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC19BE4D9F7694C4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AC19BE4D9F7694C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F43CE39E1C56ED3D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamFormation* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F43CE39E1C56ED3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C2A74AD0B825D49A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSnapshotEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSnapshotEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C2A74AD0B825D49A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AEC8D02ED353079A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSnapshotEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSnapshotEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AEC8D02ED353079A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D15265A02E32CD4E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartToOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartToOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D15265A02E32CD4E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_46D93676DEE41B14(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartToOwner* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartToOwner*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_46D93676DEE41B14_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B94B65FA78301F3E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B94B65FA78301F3E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_15DFF46E0F762A37(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_15DFF46E0F762A37_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BF7D0BBB99EC878D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BF7D0BBB99EC878D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E71548444E0FB04(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2E71548444E0FB04_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_28E8E37654A76612(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMonsterByID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMonsterByID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_28E8E37654A76612_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_97D6105BFDCA2441(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMonsterByID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_97D6105BFDCA2441_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C70DC32786D23145(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarByID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarByID*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C70DC32786D23145_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0DC758751C664FB0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarByID* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarByID*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0DC758751C664FB0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_52549B54AEA67D3F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_52549B54AEA67D3F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_58DC7C0961F7F58F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLockTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLockTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_58DC7C0961F7F58F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_129BC09A720273B5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFarmElementEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFarmElementEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_129BC09A720273B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BFE59B21879B2C7F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFarmElementEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFarmElementEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BFE59B21879B2C7F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_16CA4C1CBAAACC18(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActualOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActualOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_16CA4C1CBAAACC18_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1CC8438339E45518(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActualOwner* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActualOwner*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1CC8438339E45518_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33174D87CD917D7A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAliveSourceEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_33174D87CD917D7A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_82F137E52733B8FA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAliveSourceEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_82F137E52733B8FA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C83EA2613E0BC4A1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTrailblazer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTrailblazer*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C83EA2613E0BC4A1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_86BE90C8996584F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTrailblazer* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_86BE90C8996584F8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6269FA6019073064(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchByTauntAndAggro*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6269FA6019073064_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_88DD1A81F98C4248(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchByTauntAndAggro*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_88DD1A81F98C4248_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_687BC6D8A57BE6FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDynamicEntityParam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDynamicEntityParam*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_687BC6D8A57BE6FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_40C812105BFCDDB5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDynamicEntityParam* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDynamicEntityParam*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_40C812105BFCDDB5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_975A0801A2D3DA50(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetQuery*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetQuery*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_975A0801A2D3DA50_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8044A69880018BA2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetQuery* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetQuery*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8044A69880018BA2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D76F19611A4099F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1D76F19611A4099F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D6D5768343F25EB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D6D5768343F25EB6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7A8A97B06BF67157(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUnstageTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUnstageTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7A8A97B06BF67157_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_743BD67D6A1B7CF3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUnstageTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUnstageTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_743BD67D6A1B7CF3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A16176B6E7A364F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A16176B6E7A364F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B4F42FA8E0B36A2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B4F42FA8E0B36A2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AF85B06886DC5B55(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextSkillCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextSkillCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AF85B06886DC5B55_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_63BD0030280AA40C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextSkillCaster* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextSkillCaster*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_63BD0030280AA40C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4036E52C3BDB289F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4036E52C3BDB289F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F9956A196E297DB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchOwnerEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchOwnerEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F9956A196E297DB6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7AB6117CDE418C85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7AB6117CDE418C85_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_549A234DEA7881DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeSource* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeSource*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_549A234DEA7881DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_44A837D169268849(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_44A837D169268849_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D856E3918F14F633(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D856E3918F14F633_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C95D2F2338E5887A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortSequence*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortSequence*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C95D2F2338E5887A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1A07FAF24C897A5F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortSequence* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1A07FAF24C897A5F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA8A9427D9BFB765(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPredicate*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPredicate*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FA8A9427D9BFB765_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C4055D14A4542350(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPredicate* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPredicate*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C4055D14A4542350_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A7AA8021E481EF02(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A7AA8021E481EF02_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_62720F100EA774F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByProperty* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByProperty*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_62720F100EA774F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6B5A31E1AFECB4FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6B5A31E1AFECB4FB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B53C766A28D747A5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B53C766A28D747A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AFD721DAD19E4FF3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AFD721DAD19E4FF3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_288A47C4B7F4BCD9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByFormation* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByFormation*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_288A47C4B7F4BCD9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D44CF768ACE644B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDeathOrder*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDeathOrder*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D44CF768ACE644B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_04327ACD1BF69E0A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDeathOrder* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDeathOrder*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_04327ACD1BF69E0A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D1C9213AB4328444(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierStatusCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierStatusCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D1C9213AB4328444_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0BD4ABD74A2D1011(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierStatusCount* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierStatusCount*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0BD4ABD74A2D1011_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3339723D697DF97(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A3339723D697DF97_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2F210D590A633B80(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortMonsterRank* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortMonsterRank*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2F210D590A633B80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A566342C80E78C54(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A566342C80E78C54_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E605941434A6B6FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierValue* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E605941434A6B6FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A3530B73E3EDA63(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByMultiModifierValueSum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByMultiModifierValueSum*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9A3530B73E3EDA63_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D50CB5C9D2806858(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByMultiModifierValueSum* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D50CB5C9D2806858_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6912719F4561B9CF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByActionOrder*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByActionOrder*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6912719F4561B9CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E6620681268343CF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByActionOrder* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByActionOrder*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E6620681268343CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3F2801115D09C90(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByAITag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByAITag*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A3F2801115D09C90_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7FA4744A6BD92868(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByAITag* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByAITag*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7FA4744A6BD92868_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F57C1CF81E504420(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F57C1CF81E504420_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_70BA63B527D44E99(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDistance* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDistance*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_70BA63B527D44E99_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA7B7CFB8112AC16(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByWeaknessMatch*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByWeaknessMatch*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BA7B7CFB8112AC16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5C86B33826825707(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByWeaknessMatch* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByWeaknessMatch*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5C86B33826825707_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_476018D4271CE0EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_476018D4271CE0EF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6316917967BEBECB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6316917967BEBECB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FCFF1FB7DF9695C9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightPower*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightPower*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FCFF1FB7DF9695C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA238D46DB7C4165(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightPower* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightPower*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_DA238D46DB7C4165_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E4A54AC1DEE1787(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPropertyRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPropertyRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2E4A54AC1DEE1787_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE0C07073CD4FDDC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPropertyRatio* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPropertyRatio*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FE0C07073CD4FDDC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8C093688EE2200B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnActionEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnActionEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A8C093688EE2200B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A11B81032D874802(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnActionEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnActionEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A11B81032D874802_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D1ED821A1811348(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3D1ED821A1811348_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_59626BCA16CD7C21(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_59626BCA16CD7C21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_021DFD39D20E407C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_021DFD39D20E407C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB1B723184C63D55(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EB1B723184C63D55_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0035AEE5CC1F17F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0035AEE5CC1F17F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_25A35A52B726BAAF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_25A35A52B726BAAF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7DA2273CE092FB2D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastZombieEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastZombieEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7DA2273CE092FB2D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5B91C246067378F7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastZombieEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastZombieEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5B91C246067378F7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9905A0102E83802E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9905A0102E83802E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3CC01C72FC7BFDD4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillCaster* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillCaster*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3CC01C72FC7BFDD4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_618FC8EAA9C2DD29(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_618FC8EAA9C2DD29_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D9ACCD576F49D48B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D9ACCD576F49D48B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7392B17A038AF4DD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFightMVPEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFightMVPEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7392B17A038AF4DD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_547B6833E0352D14(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFightMVPEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFightMVPEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_547B6833E0352D14_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_351307CAC4B04A84(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_351307CAC4B04A84_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_77FD362630DAC3FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_77FD362630DAC3FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E1B7BA8CEADECC3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2E1B7BA8CEADECC3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_19B3DD808F99BD41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidAttacker* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidAttacker*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_19B3DD808F99BD41_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_907DE35CFE77E4F4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidDefender*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidDefender*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_907DE35CFE77E4F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2980415C3A86FEED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidDefender* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidDefender*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2980415C3A86FEED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A32FC6FE39D695F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidProtector*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidProtector*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A32FC6FE39D695F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3928B57501EE2350(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidProtector* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidProtector*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3928B57501EE2350_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7B58BF3B32AEDFA5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7B58BF3B32AEDFA5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18D02933E0E993EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_18D02933E0E993EF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_38EC072BC5E2C439(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_38EC072BC5E2C439_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_25DCE92F15A36C9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_25DCE92F15A36C9B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B65F467C7544EBA4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSnapshotEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSnapshotEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B65F467C7544EBA4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_27371183311D8C1D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSnapshotEntityList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSnapshotEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_27371183311D8C1D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8325EE0CDEA73984(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8325EE0CDEA73984_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C6101C684AD1B2FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C6101C684AD1B2FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C3CD1772CACF22AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAdjoinEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAdjoinEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C3CD1772CACF22AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B59BCB53D9166130(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAdjoinEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAdjoinEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B59BCB53D9166130_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2895015B493F7909(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2895015B493F7909_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9EE2CEABBA130C58(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9EE2CEABBA130C58_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_51EDF7CED791EFE5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_51EDF7CED791EFE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_127B4588871323F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageAttacker* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageAttacker*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_127B4588871323F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_97D3ED4FFBED5905(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageDefender*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageDefender*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_97D3ED4FFBED5905_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_48E6ADFA93845395(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageDefender* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageDefender*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_48E6ADFA93845395_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7FBDE6E033E7658(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAttackTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAttackTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C7FBDE6E033E7658_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_443D0165800D8958(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAttackTargetList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAttackTargetList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_443D0165800D8958_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8400CA73D281325D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageChunkTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8400CA73D281325D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64E9812DAF2B6A94(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_64E9812DAF2B6A94_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_62D3F9127AD76493(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_62D3F9127AD76493_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AF7202101C31DE79(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AF7202101C31DE79_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7B47DE64CE776BD5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7B47DE64CE776BD5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2F7F2E2C6FA5B48C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartOwnerEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartOwnerEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2F7F2E2C6FA5B48C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D478A2C3ECCFD1F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7D478A2C3ECCFD1F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_09C0CFA722B4EA45(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_09C0CFA722B4EA45_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CCA92404B55A770F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillSubTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillSubTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CCA92404B55A770F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_56D0FA57948E7E9F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillSubTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillSubTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_56D0FA57948E7E9F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A3D7264CD367121(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBetweenEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBetweenEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0A3D7264CD367121_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C8BD60CC28903178(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBetweenEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBetweenEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C8BD60CC28903178_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64828F4C5691276A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAimAtTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAimAtTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_64828F4C5691276A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E5D361B994DA2E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAimAtTargetList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAimAtTargetList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3E5D361B994DA2E6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2FAF80DD497C5BBC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2FAF80DD497C5BBC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B2B5962AE26E5E95(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B2B5962AE26E5E95_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A3DC011CE098AB0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAimTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9A3DC011CE098AB0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1A1CD5C15A6FE689(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAimTargetList*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1A1CD5C15A6FE689_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F6A748A5ADF1C2F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F6A748A5ADF1C2F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8CA0371C76095050(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_8CA0371C76095050_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85CF8E854447F24A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_85CF8E854447F24A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_73983B5BEC62008A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_73983B5BEC62008A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F7EF489593BB209B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetReverse*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetReverse*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F7EF489593BB209B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9F195BB8308DE9EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetReverse* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetReverse*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9F195BB8308DE9EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_40489E8D54DF2A9C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDummyEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDummyEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_40489E8D54DF2A9C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E2128BBE161E7AC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDummyEntity* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDummyEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2E2128BBE161E7AC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F676C74C552B4759(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareMP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareMP*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F676C74C552B4759_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2328D063377704E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareMP* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareMP*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2328D063377704E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_30E54D5B62B61A5F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_30E54D5B62B61A5F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5F2CF6DAD74A20F4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5F2CF6DAD74A20F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_7(::SimpleJSON::JSONNode* a1, ::Class_4_280EADA080C75A9D*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_280EADA080C75A9D*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3E9E85BB9A92923D_7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CACF03EAC6255BD4_4(::SimpleJSON::JSONNode* a1, ::Class_4_280EADA080C75A9D* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_280EADA080C75A9D*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CACF03EAC6255BD4_4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_99886615E7950AC7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSkillTypeDisable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSkillTypeDisable*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_99886615E7950AC7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F37EC25073E22674(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSkillTypeDisable* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSkillTypeDisable*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F37EC25073E22674_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ACD2F36886BED644(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTutorialFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTutorialFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_ACD2F36886BED644_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A365B923C53E6C73(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTutorialFinish* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTutorialFinish*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A365B923C53E6C73_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_243D8E5FBA54BB2E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_243D8E5FBA54BB2E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4BFA3280543E2437(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_4BFA3280543E2437_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BDCAAB8144AE21CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsShowInActionBar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsShowInActionBar*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BDCAAB8144AE21CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_22A056C6F8007881(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsShowInActionBar* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsShowInActionBar*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_22A056C6F8007881_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F26E88582B7921F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F26E88582B7921F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C5950878D6BBA9C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C5950878D6BBA9C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33DC8DC5B5B9A6CA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_33DC8DC5B5B9A6CA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E9612CFE3F7E90FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E9612CFE3F7E90FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BCC3514628A89CB8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BCC3514628A89CB8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_355A291E70761427(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_355A291E70761427_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_696F7E4EAF6255AC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_696F7E4EAF6255AC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC23CC8ADB931E85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AC23CC8ADB931E85_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A04C200D1E714A22(::SimpleJSON::JSONNode* a1, ::System::SByte& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::SByte&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A04C200D1E714A22_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F3352E2A01C4383A(::SimpleJSON::JSONNode* a1, ::System::Byte& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F3352E2A01C4383A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD1ECB8003738FD1(::SimpleJSON::JSONNode* a1, ::System::Int16& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FD1ECB8003738FD1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C0F5CEE301445EC5(::SimpleJSON::JSONNode* a1, ::System::UInt16& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt16&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C0F5CEE301445EC5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0BCFB35AC5D3C094(::SimpleJSON::JSONNode* a1, ::System::Int64& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0BCFB35AC5D3C094_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B6FD100C464EB396(::SimpleJSON::JSONNode* a1, ::System::UInt64& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B6FD100C464EB396_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_52E055324D60B9F5(::SimpleJSON::JSONNode* a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_52E055324D60B9F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9790BD1B475E2CE(::SimpleJSON::JSONNode* a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B9790BD1B475E2CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_673FC7775A5BF1AF(::SimpleJSON::JSONNode* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_673FC7775A5BF1AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7A23EC28D7FD16D2(::SimpleJSON::JSONNode* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7A23EC28D7FD16D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9B9BA2C5852E5BE0(::SimpleJSON::JSONNode* a1, ::System::Double& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9B9BA2C5852E5BE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB1AC47CD927F79B(::SimpleJSON::JSONNode* a1, ::System::String*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_AB1AC47CD927F79B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6A364CEEF299CA0C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixVec2& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixVec2&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6A364CEEF299CA0C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A77B73CE6EB1A548(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixVec3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixVec3&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A77B73CE6EB1A548_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A2815517E087C7F2(::SimpleJSON::JSONNode* a1, ::RPG::MVector3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A2815517E087C7F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE50D68C42285EFE(::SimpleJSON::JSONNode* a1, ::RPG::MVector2& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_FE50D68C42285EFE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E504A6E2104B8F65(::SimpleJSON::JSONNode* a1, ::Struct_2_0ACB88BD1D804FF7& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Struct_2_0ACB88BD1D804FF7&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E504A6E2104B8F65_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5E5F6897ACF65860(::SimpleJSON::JSONNode* a1, ::Struct_2_331ACDD60B60D2E3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Struct_2_331ACDD60B60D2E3&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5E5F6897ACF65860_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6E6762D2FE592E8(::SimpleJSON::JSONNode* a1, ::RPG::MColor& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MColor&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A6E6762D2FE592E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CB8DAD5C482558E8(::SimpleJSON::JSONNode* a1, ::RPG::MRect& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MRect&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CB8DAD5C482558E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E53493A35EA2773F(::SimpleJSON::JSONNode* a1, ::RPG::FloatCurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::FloatCurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E53493A35EA2773F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3EE3A103C638C4B1(::SimpleJSON::JSONNode* a1, ::RPG::Vector3CurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector3CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3EE3A103C638C4B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E8F377C24C95608E(::SimpleJSON::JSONNode* a1, ::RPG::Vector4CurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector4CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E8F377C24C95608E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2747C2FA7299E4D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicString*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2747C2FA7299E4D8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A21322F942BBF2A5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicBool*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_A21322F942BBF2A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E1F35C211CB65375(::SimpleJSON::JSONNode* a1, ::Class_1_2CAAA2FDF9170110*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_1_2CAAA2FDF9170110*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E1F35C211CB65375_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5340986F924D72A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5340986F924D72A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B8B3FE750153E10(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::JsonEnum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::JsonEnum*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1B8B3FE750153E10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_396D35D441E45045(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_396D35D441E45045_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5718463C54690C6D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FilePath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FilePath*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5718463C54690C6D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7658EFDE9102BF71(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SurfaceType& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SurfaceType&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7658EFDE9102BF71_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_245A8B7F14CA4855(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ThreadTaskType& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ThreadTaskType&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_245A8B7F14CA4855_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CB79D0AEFC63675D(::SimpleJSON::JSONNode* a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_CB79D0AEFC63675D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_459E860141372156(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FormatString& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FormatString&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_459E860141372156_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CDE6E714778D8A0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StringHash& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StringHash&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_9CDE6E714778D8A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_21B627DCA80BA9AC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameEvent*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameEvent*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_21B627DCA80BA9AC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EF87251102042005(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FiveDimDynamicVar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FiveDimDynamicVar*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EF87251102042005_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BE4C6F65C0B2591E(::SimpleJSON::JSONNode* a1, ::System::SByte& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::SByte&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BE4C6F65C0B2591E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_043F6A732A160196(::SimpleJSON::JSONNode* a1, ::System::Byte& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_043F6A732A160196_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7A22549F4C62F6E5(::SimpleJSON::JSONNode* a1, ::System::Int16& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7A22549F4C62F6E5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D8D9463596BD4539(::SimpleJSON::JSONNode* a1, ::System::UInt16& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt16&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D8D9463596BD4539_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7FDDB3FCC47B484B(::SimpleJSON::JSONNode* a1, ::System::Int64& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_7FDDB3FCC47B484B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6AEB242F7EB08981(::SimpleJSON::JSONNode* a1, ::System::UInt64& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6AEB242F7EB08981_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA6567291AE803E9(::SimpleJSON::JSONNode* a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BA6567291AE803E9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_99AA193F1E9E5A59(::SimpleJSON::JSONNode* a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_99AA193F1E9E5A59_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5C837AEB22914A03(::SimpleJSON::JSONNode* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5C837AEB22914A03_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_300E08BCF7901B0E(::SimpleJSON::JSONNode* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_300E08BCF7901B0E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E6EBEA4B7B1299C(::SimpleJSON::JSONNode* a1, ::System::Double& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_6E6EBEA4B7B1299C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_37D5C66B0A5C6049(::SimpleJSON::JSONNode* a1, ::System::String*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_37D5C66B0A5C6049_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0EA83C0F2A9B254E(::SimpleJSON::JSONNode* a1, ::RPG::MVector3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0EA83C0F2A9B254E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_65EA9530AEEFB3CC(::SimpleJSON::JSONNode* a1, ::RPG::MVector2& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_65EA9530AEEFB3CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85C56F115AAC3000(::SimpleJSON::JSONNode* a1, ::Struct_2_0ACB88BD1D804FF7& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Struct_2_0ACB88BD1D804FF7&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_85C56F115AAC3000_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E6594F92F4AC63DA(::SimpleJSON::JSONNode* a1, ::Struct_2_331ACDD60B60D2E3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Struct_2_331ACDD60B60D2E3&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_E6594F92F4AC63DA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3BDD512DAF1676BB(::SimpleJSON::JSONNode* a1, ::RPG::FloatCurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::FloatCurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3BDD512DAF1676BB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C228CC169C069A8C(::SimpleJSON::JSONNode* a1, ::RPG::Vector3CurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector3CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C228CC169C069A8C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BC2EDD050B3543D1(::SimpleJSON::JSONNode* a1, ::RPG::Vector4CurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector4CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_BC2EDD050B3543D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_70578C9F29207F60(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicString*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_70578C9F29207F60_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F64C7C58309BDB98(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicBool*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_F64C7C58309BDB98_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D8947BD877AF1D23(::SimpleJSON::JSONNode* a1, ::Class_1_2CAAA2FDF9170110*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_1_2CAAA2FDF9170110*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D8947BD877AF1D23_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B2C66C0AF3542A3D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_B2C66C0AF3542A3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5150AD26D75D36B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_5150AD26D75D36B9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_554845972EA49FE4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FilePath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FilePath*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_554845972EA49FE4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1C38EF78E475F267(::SimpleJSON::JSONNode* a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_1C38EF78E475F267_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A4F337042F34D56(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FormatString& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FormatString&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_0A4F337042F34D56_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_83104D9D616DFD6B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StringHash& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StringHash&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_83104D9D616DFD6B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3CD748DF70D4E711(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameEvent*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameEvent*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_3CD748DF70D4E711_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB9CCDF723B4CA57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::JsonEnum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::JsonEnum*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EB9CCDF723B4CA57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D08B245D3EBCE1BC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FiveDimDynamicVar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FiveDimDynamicVar*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D08B245D3EBCE1BC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D72A8BA1AB8D977A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AttackDamageTypeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AttackDamageTypeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_D72A8BA1AB8D977A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC7469475FA05107(::Class_1_9DED06D267F0347B_Struct_2_40DF9A6F3D8A7F3F a1, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillConfig*>*& a2, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillAbilityConfig*>*& a3)
	{
		return ((::System::Void(*)(::Class_1_9DED06D267F0347B_Struct_2_40DF9A6F3D8A7F3F, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillConfig*>*&, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillAbilityConfig*>*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_EC7469475FA05107_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C4A0B2D797978714(::Class_1_9DED06D267F0347B_Struct_2_40DF9A6F3D8A7F3F a1, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillConfig*>*& a2, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillAbilityConfig*>*& a3)
	{
		return ((::System::Void(*)(::Class_1_9DED06D267F0347B_Struct_2_40DF9A6F3D8A7F3F, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillConfig*>*&, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillAbilityConfig*>*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C4A0B2D797978714_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_2814500FC2096A12(::Il2CppArray<::RPG::GameCore::SkillConfig*>* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::SkillConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_2814500FC2096A12_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_929DB29232C80A02(::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_929DB29232C80A02_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C8F2B30187619CBF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_C8F2B30187619CBF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_09C01E14037D696D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*&))((::PBYTE)hIl2Cpp + CLASS_1_9DED06D267F0347B_METHOD_1_09C01E14037D696D_OFFSET))(a1, a2);
	}
};
