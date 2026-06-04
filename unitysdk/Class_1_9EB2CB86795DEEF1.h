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
class Class_4_0A2C2B4DF8EF2285;
class Class_4_1309A16363C9CF81;
class Class_4_1DA131B5B4B4CFC5;
class Class_4_232F1518392E1F66;
class Class_4_280EADA080C75A9D;
class Class_4_2D6C5540BE1566A6;
class Class_4_333AF9D5F338A2DD;
class Class_4_3A31B1679E500164;
class Class_4_455C7EBC1BF713C6;
class Class_4_472E12A36DB951F3;
class Class_4_508FA88832348AA4;
class Class_4_59EBCD318C631192;
class Class_4_5CB8D642DC82A502;
class Class_4_5F47BDCAFFA8140E;
class Class_4_6C451618FA553762;
class Class_4_6C451618FA553762_10;
class Class_4_6C451618FA553762_11;
class Class_4_6C451618FA553762_12;
class Class_4_6C451618FA553762_1;
class Class_4_6C451618FA553762_2;
class Class_4_6C451618FA553762_3;
class Class_4_6C451618FA553762_4;
class Class_4_6C451618FA553762_5;
class Class_4_6C451618FA553762_6;
class Class_4_6C451618FA553762_7;
class Class_4_6C451618FA553762_8;
class Class_4_6C451618FA553762_9;
class Class_4_6C65A57FFF554AAC;
class Class_4_70CD0600B28C3054;
class Class_4_78A6531D3CAA198B;
class Class_4_7C38BD1AB441597F;
class Class_4_81F3F771E22D0900;
class Class_4_83E48A42EFE1B97C;
class Class_4_890BC79DA352586D;
class Class_4_898D9FE991FDEB8A;
class Class_4_898D9FE991FDEB8A_1;
class Class_4_97C5C900501AC698;
class Class_4_B1452AB91A4F872E;
class Class_4_B845218F1B6B1C41;
class Class_4_B845218F1B6B1C41_1;
class Class_4_B845218F1B6B1C41_2;
class Class_4_BC87E1E104C4A2A7;
class Class_4_C1D584E9758BB4C6;
class Class_4_C2FF09D2685FF72B;
class Class_4_C6B158EB9941F4E8;
class Class_4_DA219FA494F35D19;
class Class_4_E0D26BEB1B9C290C;
class Class_4_E262A9056672EE4F;
class Class_4_E262A9056672EE4F_1;
class Class_4_E69DD69FF08AC92C;
class Class_4_E96CE06DD2A46EC2;
class Class_4_EC5C27B86F3A2D8A;
class Class_4_F3347716CE7811F5;
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
template <typename T> class Class_1_9EB2CB86795DEEF1_DelegateParseJson_1;

#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_000475D7C5B51CB1_OFFSET UNITYSDK_OFFSET(0x1912FB20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_00060AD90B27E629_OFFSET UNITYSDK_OFFSET(0x19123B90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_000D135BF53E07C5_OFFSET UNITYSDK_OFFSET(0x19127BD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0020DB5F783054E8_OFFSET UNITYSDK_OFFSET(0x1912ACF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0091EB311685F668_OFFSET UNITYSDK_OFFSET(0x191365C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0106DD444772739F_OFFSET UNITYSDK_OFFSET(0x19136CD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_010B7C37228ADA1B_OFFSET UNITYSDK_OFFSET(0x19130520)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_01347C146E95CF88_OFFSET UNITYSDK_OFFSET(0x19128BF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_01A2D5804AD76405_OFFSET UNITYSDK_OFFSET(0x191366E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_01B8845E08832E78_OFFSET UNITYSDK_OFFSET(0x19125DF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_025D85F42749601B_OFFSET UNITYSDK_OFFSET(0x19136DD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_02928B39B9B9BC84_OFFSET UNITYSDK_OFFSET(0x19123020)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_02CB0385A8A7402F_OFFSET UNITYSDK_OFFSET(0x19121350)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_02D7C242EF5CFFF7_OFFSET UNITYSDK_OFFSET(0x191277A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_030B953494FD202C_OFFSET UNITYSDK_OFFSET(0x19133D30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_030EB3E005CBADEC_OFFSET UNITYSDK_OFFSET(0x191314D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_03295B42B870A0B9_OFFSET UNITYSDK_OFFSET(0x19136930)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_037AD04D4C04468E_OFFSET UNITYSDK_OFFSET(0x1912FA10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0381868994C87CB9_OFFSET UNITYSDK_OFFSET(0x19138CE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_038B82ACDF5D4A2A_OFFSET UNITYSDK_OFFSET(0x19122DC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_039C84148CD98C70_OFFSET UNITYSDK_OFFSET(0x19122E30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0438A98F1F910F57_OFFSET UNITYSDK_OFFSET(0x1912E3C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_043F6A732A160196_OFFSET UNITYSDK_OFFSET(0x19121CB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_045B01F1DD41A8CE_OFFSET UNITYSDK_OFFSET(0x19125B90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_04C6085F16329608_OFFSET UNITYSDK_OFFSET(0x19124420)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_04C92C8614883312_OFFSET UNITYSDK_OFFSET(0x191380E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_04E9896874D6D9B3_OFFSET UNITYSDK_OFFSET(0x19133060)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_050F0D8CA83D07BD_OFFSET UNITYSDK_OFFSET(0x19122D60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_058F94A5CA6B9747_OFFSET UNITYSDK_OFFSET(0x1912EFC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0590F65DE2FCE598_OFFSET UNITYSDK_OFFSET(0x19123A90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_05BD9235D26A07C4_OFFSET UNITYSDK_OFFSET(0x1912FBA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0617BB01CB769054_OFFSET UNITYSDK_OFFSET(0x19136480)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0717DAABBF491F36_OFFSET UNITYSDK_OFFSET(0x19136190)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_074BB31B48C20D36_OFFSET UNITYSDK_OFFSET(0x19133200)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_075D5319E752AF53_OFFSET UNITYSDK_OFFSET(0x19132370)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_079821407A39BCB2_OFFSET UNITYSDK_OFFSET(0x19138650)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_07E1EE49C1A0F3F9_OFFSET UNITYSDK_OFFSET(0x191381F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_07E5F6F5119BB691_OFFSET UNITYSDK_OFFSET(0x1912FEA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_08197ABF01E7732B_OFFSET UNITYSDK_OFFSET(0x19134BC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0846118172E783E5_OFFSET UNITYSDK_OFFSET(0x19127ED0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0856BE86AB8B1C5E_OFFSET UNITYSDK_OFFSET(0x19136D90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_094CC006AA05BAFE_OFFSET UNITYSDK_OFFSET(0x19135BD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0A2836F70137B5D2_OFFSET UNITYSDK_OFFSET(0x191286E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0A80DB987D087180_OFFSET UNITYSDK_OFFSET(0x1912D810)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0ADEB13A805E88F5_OFFSET UNITYSDK_OFFSET(0x19130720)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0AF5FEC9238836B4_OFFSET UNITYSDK_OFFSET(0x191368D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0AFB023BCEFBD1FC_OFFSET UNITYSDK_OFFSET(0x19131E60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0B71E5E66437F613_OFFSET UNITYSDK_OFFSET(0x191347F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0BCB198334300DE0_OFFSET UNITYSDK_OFFSET(0x191387C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0BCFB35AC5D3C094_OFFSET UNITYSDK_OFFSET(0x1911F910)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0C2FFB81EDA9BDB3_OFFSET UNITYSDK_OFFSET(0x19131660)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0C4B7DF62BE9B570_OFFSET UNITYSDK_OFFSET(0x19121510)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0C59382F5629B177_OFFSET UNITYSDK_OFFSET(0x191345E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0C5DF1CFB34442FA_OFFSET UNITYSDK_OFFSET(0x1912BF90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0CADEBD76ACC6CA7_OFFSET UNITYSDK_OFFSET(0x1912F990)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0CD4D267F6294FF7_OFFSET UNITYSDK_OFFSET(0x1912C210)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0D46849FA1E9409D_OFFSET UNITYSDK_OFFSET(0x19135E90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0E0E5497E37FB4FB_OFFSET UNITYSDK_OFFSET(0x191369F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0E0F78CBEFF73940_OFFSET UNITYSDK_OFFSET(0x19136AF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0EA04FE2FC8E6DC3_OFFSET UNITYSDK_OFFSET(0x19129D90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0EA83C0F2A9B254E_OFFSET UNITYSDK_OFFSET(0x191224D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0EB1871124E2D81C_OFFSET UNITYSDK_OFFSET(0x19128A70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0EB4FA5737703CFE_OFFSET UNITYSDK_OFFSET(0x19135E10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0F0B7820A6538D5E_OFFSET UNITYSDK_OFFSET(0x19132CF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0F2DABF5A9526733_OFFSET UNITYSDK_OFFSET(0x19132860)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0F47F485DFD7163A_OFFSET UNITYSDK_OFFSET(0x19131AE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_0FA7FDE8DDF819B7_OFFSET UNITYSDK_OFFSET(0x19137190)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1050366EA4FF506A_OFFSET UNITYSDK_OFFSET(0x1912B200)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1060F59C14E6C929_OFFSET UNITYSDK_OFFSET(0x19128460)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_10746A86154753FB_OFFSET UNITYSDK_OFFSET(0x19126A10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_10A9C91F322D679A_OFFSET UNITYSDK_OFFSET(0x191332F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_10BE2EF60DE62C12_OFFSET UNITYSDK_OFFSET(0x191336E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_11392B24708FCC1C_OFFSET UNITYSDK_OFFSET(0x19131D60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_114C6E89E805F120_OFFSET UNITYSDK_OFFSET(0x19128C80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1169DFD3F8C43F04_OFFSET UNITYSDK_OFFSET(0x19123F90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1180DEB38A693A22_OFFSET UNITYSDK_OFFSET(0x1912F560)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_11D8F9F2D2E8A045_OFFSET UNITYSDK_OFFSET(0x19133760)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1225AE6336411FC3_OFFSET UNITYSDK_OFFSET(0x19129EB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_12C840EF41BBCCC5_OFFSET UNITYSDK_OFFSET(0x19136990)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_12DE96EBF8B8A088_OFFSET UNITYSDK_OFFSET(0x1912C090)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1316910AFB834FD0_OFFSET UNITYSDK_OFFSET(0x1912AF80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1326D0EA955DB60B_OFFSET UNITYSDK_OFFSET(0x19138850)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_13736C8700727D99_OFFSET UNITYSDK_OFFSET(0x19128160)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_13C6574F3BC28147_OFFSET UNITYSDK_OFFSET(0x191290B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1402C501ADB4F20C_OFFSET UNITYSDK_OFFSET(0x19126BA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_14396501191C2650_OFFSET UNITYSDK_OFFSET(0x19138730)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_149127BE48FEFA41_OFFSET UNITYSDK_OFFSET(0x19133B80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_14E3FCD862E87C6E_OFFSET UNITYSDK_OFFSET(0x191349A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_15021AFFE975D43A_OFFSET UNITYSDK_OFFSET(0x191254D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1510425851A84E80_OFFSET UNITYSDK_OFFSET(0x19122D90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1541EF1C2CDAC1ED_OFFSET UNITYSDK_OFFSET(0x1912B620)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_154827FFD44F310A_OFFSET UNITYSDK_OFFSET(0x191303A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_155EA8D95FDB0A53_OFFSET UNITYSDK_OFFSET(0x1912D760)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_16D537A80B3F8320_OFFSET UNITYSDK_OFFSET(0x1912B4A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1722F185FC5F3B87_OFFSET UNITYSDK_OFFSET(0x19122DF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_178DEEA9F0FE9C05_OFFSET UNITYSDK_OFFSET(0x19122BD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_17980F78F0EFA7C0_OFFSET UNITYSDK_OFFSET(0x19130E40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_17D7D2F4D8389415_OFFSET UNITYSDK_OFFSET(0x1912DD90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_182D027A9B96A9FD_OFFSET UNITYSDK_OFFSET(0x191230B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_184A63D00468D7B1_OFFSET UNITYSDK_OFFSET(0x19123990)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_18A004C9AC821B63_OFFSET UNITYSDK_OFFSET(0x1912A4C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_18DD318B16D96621_OFFSET UNITYSDK_OFFSET(0x19135C20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_18F2F0BBE12592D7_OFFSET UNITYSDK_OFFSET(0x1912F350)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1955E9206A6AB249_OFFSET UNITYSDK_OFFSET(0x191228D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1ABC27D71779867D_OFFSET UNITYSDK_OFFSET(0x19132EE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1B67FE6930F03A42_OFFSET UNITYSDK_OFFSET(0x19132DF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1B6E64034CD6508B_OFFSET UNITYSDK_OFFSET(0x19128C60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1B8B3FE750153E10_OFFSET UNITYSDK_OFFSET(0x191211C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1BB6A972D093BC92_OFFSET UNITYSDK_OFFSET(0x19127820)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1C2E74BA35C34FA1_OFFSET UNITYSDK_OFFSET(0x19126570)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1C557FB2898B1AE5_OFFSET UNITYSDK_OFFSET(0x19122DD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1DB2418A411E2330_OFFSET UNITYSDK_OFFSET(0x19123040)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1EA76C67B15B23E9_OFFSET UNITYSDK_OFFSET(0x19135A30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F0F222EF76CBE2E_OFFSET UNITYSDK_OFFSET(0x19138320)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F153022D175766E_OFFSET UNITYSDK_OFFSET(0x19122A30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F1CF4239D5E1E54_OFFSET UNITYSDK_OFFSET(0x19122E80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F2735F625F7215F_OFFSET UNITYSDK_OFFSET(0x1912ECC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F2C5148E76670EB_OFFSET UNITYSDK_OFFSET(0x1912F4E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F434A0C0ACE8A81_OFFSET UNITYSDK_OFFSET(0x19122CD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F67D79540EBE365_OFFSET UNITYSDK_OFFSET(0x1912FC20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1FD313AAAC3EA8B7_OFFSET UNITYSDK_OFFSET(0x19133E50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_1FF75D603ED1E14C_OFFSET UNITYSDK_OFFSET(0x1912FB10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_205327766052338B_OFFSET UNITYSDK_OFFSET(0x1912F140)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_205E69A45A3A0756_OFFSET UNITYSDK_OFFSET(0x1912EC40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_20B11304BD3012D0_OFFSET UNITYSDK_OFFSET(0x19136CF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_20B90ADDCD2627F2_OFFSET UNITYSDK_OFFSET(0x191216B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_20E8DC7EA9F048B3_OFFSET UNITYSDK_OFFSET(0x1912B220)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_218C106E1D441D5A_OFFSET UNITYSDK_OFFSET(0x1912F910)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_21912E78E9115077_OFFSET UNITYSDK_OFFSET(0x19137AC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_21A00B020B8A2A0A_OFFSET UNITYSDK_OFFSET(0x191310D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_21DD92D657A724CF_OFFSET UNITYSDK_OFFSET(0x19122E00)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_224B7DA60F6CCAD1_OFFSET UNITYSDK_OFFSET(0x1912C540)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_23402E3C2771B0A3_OFFSET UNITYSDK_OFFSET(0x1912A440)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_237A39D55F058880_OFFSET UNITYSDK_OFFSET(0x19128F30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_239BEE13C24729F8_OFFSET UNITYSDK_OFFSET(0x1912BC90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_23F964E43B264DDF_OFFSET UNITYSDK_OFFSET(0x1912AC50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_245A8B7F14CA4855_OFFSET UNITYSDK_OFFSET(0x191212E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_24701D2FC51484D7_OFFSET UNITYSDK_OFFSET(0x19127DD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_24C15582DB553925_OFFSET UNITYSDK_OFFSET(0x1912C860)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_256F1E23C9DDAA7F_OFFSET UNITYSDK_OFFSET(0x19129D10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2613C42DD498E061_OFFSET UNITYSDK_OFFSET(0x19127520)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_267CC138EDD7174E_OFFSET UNITYSDK_OFFSET(0x1912A9D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2738F0D4D8390883_OFFSET UNITYSDK_OFFSET(0x19125E70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2759A13DC9C2D40A_OFFSET UNITYSDK_OFFSET(0x19125860)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_275C9BF298EBABB0_OFFSET UNITYSDK_OFFSET(0x1912D940)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_278540F7FD8385B0_OFFSET UNITYSDK_OFFSET(0x19129A30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_27B570AAB7F88477_OFFSET UNITYSDK_OFFSET(0x1912DA70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_27B826C68EF087D3_OFFSET UNITYSDK_OFFSET(0x19136A50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_27F58F8F3A90FBB8_OFFSET UNITYSDK_OFFSET(0x19138640)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_28865CAFB703FEE3_OFFSET UNITYSDK_OFFSET(0x1912E8C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_288E1D6E868F23C4_OFFSET UNITYSDK_OFFSET(0x1912A650)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_28D2DD536D808902_OFFSET UNITYSDK_OFFSET(0x19123590)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_28EF945A458F7FBA_OFFSET UNITYSDK_OFFSET(0x1912F670)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_290D408CD374DBDE_OFFSET UNITYSDK_OFFSET(0x191296E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2A5F730F8F8E18F8_OFFSET UNITYSDK_OFFSET(0x19134C10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2A6A05E562D233B2_OFFSET UNITYSDK_OFFSET(0x19124530)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2A99F93A53185243_OFFSET UNITYSDK_OFFSET(0x191359C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2AE10272BA10F86C_OFFSET UNITYSDK_OFFSET(0x19134520)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2AF27C97C34FC0F7_OFFSET UNITYSDK_OFFSET(0x19131760)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2B15F09C7B357520_OFFSET UNITYSDK_OFFSET(0x19123610)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2B79E0AA305CE3CB_OFFSET UNITYSDK_OFFSET(0x19125030)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2C1B34C7D6FFB3D2_OFFSET UNITYSDK_OFFSET(0x1912B6F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2CC396FC92112733_OFFSET UNITYSDK_OFFSET(0x19127320)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2D885FAFFAB37288_OFFSET UNITYSDK_OFFSET(0x1912C3A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2DF28CF891955329_OFFSET UNITYSDK_OFFSET(0x19128960)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2E313824D0B27F39_OFFSET UNITYSDK_OFFSET(0x191344A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2E6367CC29A92569_OFFSET UNITYSDK_OFFSET(0x19122BF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2F1A8C4B74FA43AA_OFFSET UNITYSDK_OFFSET(0x191287E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2F2387F12113D6A4_OFFSET UNITYSDK_OFFSET(0x19136840)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2F3C34EE1A70A09D_OFFSET UNITYSDK_OFFSET(0x1912FF20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2F779D9EC096AA24_OFFSET UNITYSDK_OFFSET(0x191308B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2FA27ECBA05788F4_OFFSET UNITYSDK_OFFSET(0x19133FF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2FC8B21A5EFE6CBB_OFFSET UNITYSDK_OFFSET(0x1912A5C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_2FFEEE113E10183B_OFFSET UNITYSDK_OFFSET(0x1912BE90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_300E08BCF7901B0E_OFFSET UNITYSDK_OFFSET(0x19121F30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3143FE00062A56AB_OFFSET UNITYSDK_OFFSET(0x191369C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_318B25549DD533EC_OFFSET UNITYSDK_OFFSET(0x19125CA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_31B62F3F86A36E49_OFFSET UNITYSDK_OFFSET(0x191386B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_326F1B89144CBE0C_OFFSET UNITYSDK_OFFSET(0x19128DA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3277D7E0D0FAA8E3_OFFSET UNITYSDK_OFFSET(0x1912DAF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_32E50DDC16EB3FD4_OFFSET UNITYSDK_OFFSET(0x19128060)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_338DA0F457B7C6F7_OFFSET UNITYSDK_OFFSET(0x1912ACE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_33AEF02803A8AA6D_OFFSET UNITYSDK_OFFSET(0x19137D40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_33DDE9D21AB46FFB_OFFSET UNITYSDK_OFFSET(0x19124630)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3417FD1B0DF8917D_OFFSET UNITYSDK_OFFSET(0x19130EC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_345D6517B6810B78_OFFSET UNITYSDK_OFFSET(0x1912D040)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3471F89CF599B716_OFFSET UNITYSDK_OFFSET(0x191245B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_349CF95126A7A24E_OFFSET UNITYSDK_OFFSET(0x1912D830)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_34F8EF56B991941B_OFFSET UNITYSDK_OFFSET(0x19129240)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_352F886FE902490D_OFFSET UNITYSDK_OFFSET(0x19135FF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3553E743DC51C48C_OFFSET UNITYSDK_OFFSET(0x19125A80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3562E18974867089_OFFSET UNITYSDK_OFFSET(0x1912F150)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_356AC494B8119717_OFFSET UNITYSDK_OFFSET(0x19130DC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3640E9F4111284A4_OFFSET UNITYSDK_OFFSET(0x1912CAE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_37217F338C1AFAD6_OFFSET UNITYSDK_OFFSET(0x1912B5A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3735BE4983965D52_OFFSET UNITYSDK_OFFSET(0x191294D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_373FC891F3DAE013_OFFSET UNITYSDK_OFFSET(0x19132A60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_37D5C66B0A5C6049_OFFSET UNITYSDK_OFFSET(0x19122440)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_38819DB9437382F6_OFFSET UNITYSDK_OFFSET(0x19129910)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_388D2620B0450B3D_OFFSET UNITYSDK_OFFSET(0x1912CDE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_388E9603D9E4A565_OFFSET UNITYSDK_OFFSET(0x19136800)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_38A46E28FF170162_OFFSET UNITYSDK_OFFSET(0x19133470)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_38C98DC19F06B970_OFFSET UNITYSDK_OFFSET(0x19126C20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_390EBE6DD7028446_OFFSET UNITYSDK_OFFSET(0x19129F30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3939400D92CD5E97_OFFSET UNITYSDK_OFFSET(0x19134260)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_394280C9472C08BD_OFFSET UNITYSDK_OFFSET(0x1912A2C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_396D35D441E45045_OFFSET UNITYSDK_OFFSET(0x1911FBB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_39CDDFA912B9849B_OFFSET UNITYSDK_OFFSET(0x191254C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3A46AA52BFA648DA_OFFSET UNITYSDK_OFFSET(0x1912FCA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3A626A9DDE7A86D6_OFFSET UNITYSDK_OFFSET(0x19138920)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3AA91DE07C8F5AAB_OFFSET UNITYSDK_OFFSET(0x19127A30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3AC0332A3E74A975_OFFSET UNITYSDK_OFFSET(0x191281E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3AE68E1A929B830A_OFFSET UNITYSDK_OFFSET(0x191305A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3AEDD65FFA5B9EF2_OFFSET UNITYSDK_OFFSET(0x19136F70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3BB49F956541C77F_OFFSET UNITYSDK_OFFSET(0x19136440)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3BDD512DAF1676BB_OFFSET UNITYSDK_OFFSET(0x191225D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3BE4F4D92434300F_OFFSET UNITYSDK_OFFSET(0x19131150)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3BF1B745A528F6A0_OFFSET UNITYSDK_OFFSET(0x19137210)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3C2EEA3E4ADFF2E0_OFFSET UNITYSDK_OFFSET(0x19130420)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3C3E34A7A0E4D843_OFFSET UNITYSDK_OFFSET(0x19125130)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3C78C874B0CE6B84_OFFSET UNITYSDK_OFFSET(0x19123A10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3C7DFD4D3E57442D_OFFSET UNITYSDK_OFFSET(0x19126700)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3CEC76C4A293E9FB_OFFSET UNITYSDK_OFFSET(0x19138880)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3CFF12518D4BD915_OFFSET UNITYSDK_OFFSET(0x191285E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3D1B43F3789D57DF_OFFSET UNITYSDK_OFFSET(0x19124090)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3D288FE505203321_OFFSET UNITYSDK_OFFSET(0x1912CCE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3D91FC67106E89B4_OFFSET UNITYSDK_OFFSET(0x19125CC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3DCC87604A12AEB6_OFFSET UNITYSDK_OFFSET(0x19128DB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3DF14618825A01B0_OFFSET UNITYSDK_OFFSET(0x1912F360)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3DFE2EDEA89E4F8C_OFFSET UNITYSDK_OFFSET(0x191311D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E1706C270B63F56_OFFSET UNITYSDK_OFFSET(0x19132670)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_10_OFFSET UNITYSDK_OFFSET(0x19137390)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_11_OFFSET UNITYSDK_OFFSET(0x19137840)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_12_OFFSET UNITYSDK_OFFSET(0x19137A40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_1_OFFSET UNITYSDK_OFFSET(0x19123190)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_2_OFFSET UNITYSDK_OFFSET(0x19123210)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_3_OFFSET UNITYSDK_OFFSET(0x19123310)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_4_OFFSET UNITYSDK_OFFSET(0x19123390)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_5_OFFSET UNITYSDK_OFFSET(0x19129560)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_6_OFFSET UNITYSDK_OFFSET(0x1912AF00)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_7_OFFSET UNITYSDK_OFFSET(0x1912C640)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_8_OFFSET UNITYSDK_OFFSET(0x1912E740)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_9_OFFSET UNITYSDK_OFFSET(0x19137050)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_OFFSET UNITYSDK_OFFSET(0x19123110)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3EE3A103C638C4B1_OFFSET UNITYSDK_OFFSET(0x191208A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3F07556FA5CA504B_OFFSET UNITYSDK_OFFSET(0x19131A60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3F4BF9EDFCE53DC2_OFFSET UNITYSDK_OFFSET(0x191342C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3F5168317BE77C34_OFFSET UNITYSDK_OFFSET(0x191289F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_3F94AD3D01AA8E5C_OFFSET UNITYSDK_OFFSET(0x1911FCF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_40266F153584400F_OFFSET UNITYSDK_OFFSET(0x191297F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_403CE5903544E178_OFFSET UNITYSDK_OFFSET(0x19130FD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_40FE84E1F9C8412C_OFFSET UNITYSDK_OFFSET(0x1912DF10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_410E868806A47842_OFFSET UNITYSDK_OFFSET(0x1912B420)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_41C1F7F72A15A87F_OFFSET UNITYSDK_OFFSET(0x1912BB10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_42A99989A25795DE_OFFSET UNITYSDK_OFFSET(0x19133590)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_433B4EB9322AAFC5_OFFSET UNITYSDK_OFFSET(0x1912E0C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_43E23BDDD5C83000_OFFSET UNITYSDK_OFFSET(0x19125660)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_444EE53A2252B138_OFFSET UNITYSDK_OFFSET(0x19129880)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_44A837D169268849_OFFSET UNITYSDK_OFFSET(0x19135510)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_454C922C7A70295D_OFFSET UNITYSDK_OFFSET(0x19127C50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_459CD8E636E37249_OFFSET UNITYSDK_OFFSET(0x19123510)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_461EA6EB56C0C4CC_OFFSET UNITYSDK_OFFSET(0x19129FB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_468255E3864077C5_OFFSET UNITYSDK_OFFSET(0x19138210)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_46E484EA07902335_OFFSET UNITYSDK_OFFSET(0x19126780)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_476018D4271CE0EF_OFFSET UNITYSDK_OFFSET(0x19135AF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_476AE579C4E3947B_OFFSET UNITYSDK_OFFSET(0x1912D8B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_477028AC0311ED49_OFFSET UNITYSDK_OFFSET(0x19125960)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4776DC29E16E7910_OFFSET UNITYSDK_OFFSET(0x19138AD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4791D77420C4879A_OFFSET UNITYSDK_OFFSET(0x19129BE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_47CB8CA94423044A_OFFSET UNITYSDK_OFFSET(0x19135620)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_47D924735506932E_OFFSET UNITYSDK_OFFSET(0x191346A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4816E8F1163A76FD_OFFSET UNITYSDK_OFFSET(0x1912C010)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_485B911F518B7312_OFFSET UNITYSDK_OFFSET(0x19126600)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_486D043FD71859FD_OFFSET UNITYSDK_OFFSET(0x19123C90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4894B1674120753E_OFFSET UNITYSDK_OFFSET(0x19122BC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_49504C305D0B812B_OFFSET UNITYSDK_OFFSET(0x19130320)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4A6D4C35E1EC3C29_OFFSET UNITYSDK_OFFSET(0x1912B900)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4B149E007B7787C3_OFFSET UNITYSDK_OFFSET(0x1912E1C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4B6163FC7A1BCBE5_OFFSET UNITYSDK_OFFSET(0x19133070)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4B634E3F03498C88_OFFSET UNITYSDK_OFFSET(0x19122AD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4B8B982DEC169FF5_OFFSET UNITYSDK_OFFSET(0x1912D960)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4C035A21FA0D37FC_OFFSET UNITYSDK_OFFSET(0x19123810)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4C6BD95E4D2DD46F_OFFSET UNITYSDK_OFFSET(0x1912D450)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4C7AFC34AD7E2F7D_OFFSET UNITYSDK_OFFSET(0x1912CA60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4CA633219685EE1B_OFFSET UNITYSDK_OFFSET(0x19137DC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4CFF75C2FF900616_OFFSET UNITYSDK_OFFSET(0x1912F6F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4D99CCFDC84044D9_OFFSET UNITYSDK_OFFSET(0x191343E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4DACBECCAF552C01_OFFSET UNITYSDK_OFFSET(0x19138450)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4E5A3A43FA0B1B4B_OFFSET UNITYSDK_OFFSET(0x19122AE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4E696CD22BA5B8A4_OFFSET UNITYSDK_OFFSET(0x19124D30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4E8786AE623E8062_OFFSET UNITYSDK_OFFSET(0x1912A1C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4EDCC855D6668973_OFFSET UNITYSDK_OFFSET(0x19135560)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4F3BE60817F166A0_OFFSET UNITYSDK_OFFSET(0x1912ED40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4F53AE2D5201BAA7_OFFSET UNITYSDK_OFFSET(0x1912C320)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4F7A88A8E1EA750A_OFFSET UNITYSDK_OFFSET(0x19125B10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4FA1BA116FF21770_OFFSET UNITYSDK_OFFSET(0x19124B30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4FA6115A0E57B18A_OFFSET UNITYSDK_OFFSET(0x1912C760)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_4FC3ADE024369918_OFFSET UNITYSDK_OFFSET(0x19122EE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_502877E39A8961DF_OFFSET UNITYSDK_OFFSET(0x19135DB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5050096A7006D40C_OFFSET UNITYSDK_OFFSET(0x19132FA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5150AD26D75D36B9_OFFSET UNITYSDK_OFFSET(0x191227B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_515C826E974EBEBF_OFFSET UNITYSDK_OFFSET(0x191383F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5185578DA2D10D8A_OFFSET UNITYSDK_OFFSET(0x19127A20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_51ECDF36565BDCEF_OFFSET UNITYSDK_OFFSET(0x1912E5C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_51F1DB3F56DA5B87_OFFSET UNITYSDK_OFFSET(0x19122E20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_52E055324D60B9F5_OFFSET UNITYSDK_OFFSET(0x1911F9B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5340986F924D72A2_OFFSET UNITYSDK_OFFSET(0x19121180)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5380C536DF6DC384_OFFSET UNITYSDK_OFFSET(0x19122C10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_53AB0F237CAB9586_OFFSET UNITYSDK_OFFSET(0x1912CB60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_540CBE29523EA9B8_OFFSET UNITYSDK_OFFSET(0x1912A240)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_543B8F68327623F3_OFFSET UNITYSDK_OFFSET(0x19132AE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_54703A1EC05334A4_OFFSET UNITYSDK_OFFSET(0x19131560)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_54BD0C2090B3D8E1_OFFSET UNITYSDK_OFFSET(0x1912F7F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5529425F9B459186_OFFSET UNITYSDK_OFFSET(0x19122C00)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_554845972EA49FE4_OFFSET UNITYSDK_OFFSET(0x19122810)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_55C571C648EF874D_OFFSET UNITYSDK_OFFSET(0x19134E30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_561EF274814DDA66_OFFSET UNITYSDK_OFFSET(0x19133D90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_56365CCF72A5195A_OFFSET UNITYSDK_OFFSET(0x19123010)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5677F19D302329C9_OFFSET UNITYSDK_OFFSET(0x19129AC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_567EA6E13037C8CD_OFFSET UNITYSDK_OFFSET(0x19138C60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_56865C8FFC634A41_OFFSET UNITYSDK_OFFSET(0x19131050)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5693CC7851C09A3E_OFFSET UNITYSDK_OFFSET(0x19122C40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_56B20C0E0C30CE8A_OFFSET UNITYSDK_OFFSET(0x19128D10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_56EE16FC8E974478_OFFSET UNITYSDK_OFFSET(0x19127FD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5718463C54690C6D_OFFSET UNITYSDK_OFFSET(0x19121200)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_57E05A80DBAB4AFD_OFFSET UNITYSDK_OFFSET(0x191244B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5801D6A4D4BEE3C4_OFFSET UNITYSDK_OFFSET(0x19126990)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5821F87443352FAE_OFFSET UNITYSDK_OFFSET(0x19134D10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_582890F2F6BCE54F_OFFSET UNITYSDK_OFFSET(0x19138C50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_584CB9720D0D3747_OFFSET UNITYSDK_OFFSET(0x19126CA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5925264D39FFA1E4_OFFSET UNITYSDK_OFFSET(0x19125CB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_59DC15CD3AE88666_OFFSET UNITYSDK_OFFSET(0x19122AC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5A3FFA54DD350DA7_OFFSET UNITYSDK_OFFSET(0x19136960)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5A4892DF99AC37D7_OFFSET UNITYSDK_OFFSET(0x1912B080)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5A54384EF7D919CA_OFFSET UNITYSDK_OFFSET(0x1912C4C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5A7567C237C44263_OFFSET UNITYSDK_OFFSET(0x19132D70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5A807A4F4ADF7250_OFFSET UNITYSDK_OFFSET(0x191321E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5A8C865EDB8BD833_OFFSET UNITYSDK_OFFSET(0x19125330)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5B25CA02355AA020_OFFSET UNITYSDK_OFFSET(0x19127720)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5B36EC3C6A9B053F_OFFSET UNITYSDK_OFFSET(0x19131350)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5B4A21808B3EC035_OFFSET UNITYSDK_OFFSET(0x19122EB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5BAFA488C2CE0A2C_OFFSET UNITYSDK_OFFSET(0x19126AA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5C35EF84C1B12BC5_OFFSET UNITYSDK_OFFSET(0x19125C20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5C39300DCB6759E3_OFFSET UNITYSDK_OFFSET(0x19130B30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5C837AEB22914A03_OFFSET UNITYSDK_OFFSET(0x19120DA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5CDD749E7B8DAFA5_OFFSET UNITYSDK_OFFSET(0x19138570)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5CE804F26F80AFFA_OFFSET UNITYSDK_OFFSET(0x1912B520)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5CF2DB0D2CEB6B3E_OFFSET UNITYSDK_OFFSET(0x19137EC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5CFED1880E5E2BEA_OFFSET UNITYSDK_OFFSET(0x1912D3C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5D4CE01D206EE5F6_OFFSET UNITYSDK_OFFSET(0x19137CC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5DB5507D9E145455_OFFSET UNITYSDK_OFFSET(0x19123B10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5E5B82F243AF3ADC_OFFSET UNITYSDK_OFFSET(0x19134190)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5E5F6897ACF65860_OFFSET UNITYSDK_OFFSET(0x19120420)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5F6C4253873DABBE_OFFSET UNITYSDK_OFFSET(0x1912C7E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5F9502E227FC5CF8_OFFSET UNITYSDK_OFFSET(0x191282E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_5FFD3A3F2B19F43E_OFFSET UNITYSDK_OFFSET(0x19124220)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_603B91AFD8CAA2F5_OFFSET UNITYSDK_OFFSET(0x191264F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6090DA95753B00A5_OFFSET UNITYSDK_OFFSET(0x19122890)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_609BAD2C61D229F2_OFFSET UNITYSDK_OFFSET(0x1912ABD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_60DC66417899527C_OFFSET UNITYSDK_OFFSET(0x191308A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6179AE9BAC061498_OFFSET UNITYSDK_OFFSET(0x19122FF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_61BE79F520304C2D_OFFSET UNITYSDK_OFFSET(0x19136290)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_61BF394D4ACB1881_OFFSET UNITYSDK_OFFSET(0x19123790)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6209C75F8344BFCC_OFFSET UNITYSDK_OFFSET(0x19132470)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_625DEA9D3CC5F326_OFFSET UNITYSDK_OFFSET(0x19124830)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_62837FC8234F3A13_OFFSET UNITYSDK_OFFSET(0x19132BF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_62D3F9127AD76493_OFFSET UNITYSDK_OFFSET(0x191364E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_632E8C38C81600FD_OFFSET UNITYSDK_OFFSET(0x191360D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6439FB053ECB9CED_OFFSET UNITYSDK_OFFSET(0x19135220)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_643B418FB25B5ABF_OFFSET UNITYSDK_OFFSET(0x19130FC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_646B201E5DDC111C_OFFSET UNITYSDK_OFFSET(0x1912E940)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_64828F4C5691276A_OFFSET UNITYSDK_OFFSET(0x19136660)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_64BF7A84B3ADB329_OFFSET UNITYSDK_OFFSET(0x1912E020)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_64F964446033A637_OFFSET UNITYSDK_OFFSET(0x19122D30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6528DDEA7129F677_OFFSET UNITYSDK_OFFSET(0x19128D20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_65534FC1F29D35ED_OFFSET UNITYSDK_OFFSET(0x19122A70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_656B1A9F83843E5F_OFFSET UNITYSDK_OFFSET(0x19128260)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6584E619F90D592A_OFFSET UNITYSDK_OFFSET(0x19133AA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_65BBA9F8ED94F7AF_OFFSET UNITYSDK_OFFSET(0x191320E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_65C6286C8EABEDBA_OFFSET UNITYSDK_OFFSET(0x19132960)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_65EA9530AEEFB3CC_OFFSET UNITYSDK_OFFSET(0x19122510)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_65EC2B46BC1EC63A_OFFSET UNITYSDK_OFFSET(0x19134C60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_65FF05EE291FCBE3_OFFSET UNITYSDK_OFFSET(0x1912CC60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_660833D3ED446250_OFFSET UNITYSDK_OFFSET(0x19130D30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_662BE8693D054C24_OFFSET UNITYSDK_OFFSET(0x19121430)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_665706397F0464D5_OFFSET UNITYSDK_OFFSET(0x19135180)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_66DE808C4779A954_OFFSET UNITYSDK_OFFSET(0x19132630)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_66E41288138A193C_OFFSET UNITYSDK_OFFSET(0x19128970)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_673FC7775A5BF1AF_OFFSET UNITYSDK_OFFSET(0x191071A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_67930318568B271F_OFFSET UNITYSDK_OFFSET(0x1912D5E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_67A3B1DEB4D96F7D_OFFSET UNITYSDK_OFFSET(0x1912C4B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6801ACA8CD228C62_OFFSET UNITYSDK_OFFSET(0x1912D820)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_681D00E59DB04AE2_OFFSET UNITYSDK_OFFSET(0x1912C420)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6838E4E338A01EA4_OFFSET UNITYSDK_OFFSET(0x19126EA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_684188DEB7311E4F_OFFSET UNITYSDK_OFFSET(0x19136900)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_687BC6D8A57BE6FC_OFFSET UNITYSDK_OFFSET(0x19135270)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_68EF654DD5FE7EFD_OFFSET UNITYSDK_OFFSET(0x19134D50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_69022A3173672BF5_OFFSET UNITYSDK_OFFSET(0x19132570)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_696031B356A8D18F_OFFSET UNITYSDK_OFFSET(0x19131F60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6970F6AB54966964_OFFSET UNITYSDK_OFFSET(0x19136DB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6A364CEEF299CA0C_OFFSET UNITYSDK_OFFSET(0x1911FAF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6A8236C8C08CBC8D_OFFSET UNITYSDK_OFFSET(0x19124110)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6AEB242F7EB08981_OFFSET UNITYSDK_OFFSET(0x19121E10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6B640E3D3EAB3D35_OFFSET UNITYSDK_OFFSET(0x19133BD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6C039E3203F12526_OFFSET UNITYSDK_OFFSET(0x191292C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6C5143EEB1374135_OFFSET UNITYSDK_OFFSET(0x1912C110)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6CB4056184BEB819_OFFSET UNITYSDK_OFFSET(0x19123890)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6D1710678160EF7C_OFFSET UNITYSDK_OFFSET(0x1912CD60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6D250800DA8C47E8_OFFSET UNITYSDK_OFFSET(0x1912C8E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6D39CE2AC9039265_OFFSET UNITYSDK_OFFSET(0x191317E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6D6F6E22B0F6A4A5_OFFSET UNITYSDK_OFFSET(0x19133C10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6D7E65BB5DF30053_OFFSET UNITYSDK_OFFSET(0x19133190)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6DCDAE2A9EF5097B_OFFSET UNITYSDK_OFFSET(0x1912AAD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6DF8962DB4E5015B_OFFSET UNITYSDK_OFFSET(0x1912FE20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6E6EBEA4B7B1299C_OFFSET UNITYSDK_OFFSET(0x191223F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6F059005F6B0F8D8_OFFSET UNITYSDK_OFFSET(0x19127020)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6F1F714B20F79F02_OFFSET UNITYSDK_OFFSET(0x19136210)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6F3F6E9A09C1D70E_OFFSET UNITYSDK_OFFSET(0x19127920)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_6FDE54FD64FFB3EB_OFFSET UNITYSDK_OFFSET(0x1912C220)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7012EFF432BE8712_OFFSET UNITYSDK_OFFSET(0x191255E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7048059C0DA33B1C_OFFSET UNITYSDK_OFFSET(0x19123060)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_716A5A250687D38F_OFFSET UNITYSDK_OFFSET(0x19127D50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_716A8AB565621988_OFFSET UNITYSDK_OFFSET(0x19122EF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_721AAE13ED3F52F8_OFFSET UNITYSDK_OFFSET(0x19133110)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7250E4D126DB68DE_OFFSET UNITYSDK_OFFSET(0x19128660)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_72A4132128CD9DEF_OFFSET UNITYSDK_OFFSET(0x19122E10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_72E8150CBAF48F49_OFFSET UNITYSDK_OFFSET(0x191263F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_73D49C24F5BEFFF4_OFFSET UNITYSDK_OFFSET(0x1912EB40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_746919CBC165CADA_OFFSET UNITYSDK_OFFSET(0x19125FF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_74F9467299902123_OFFSET UNITYSDK_OFFSET(0x191363B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_76288FAF31264CB0_OFFSET UNITYSDK_OFFSET(0x191262F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_762FD1E815FF7519_OFFSET UNITYSDK_OFFSET(0x19130CB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7658EFDE9102BF71_OFFSET UNITYSDK_OFFSET(0x19121270)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_765BBA13D26DAF65_OFFSET UNITYSDK_OFFSET(0x1912A640)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_767D89BDE5643930_OFFSET UNITYSDK_OFFSET(0x1912E7C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7688313BA1CDBAE0_OFFSET UNITYSDK_OFFSET(0x19138630)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_769EAA6A74BF28D4_OFFSET UNITYSDK_OFFSET(0x19134250)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_775A88D0E4EAAEB5_OFFSET UNITYSDK_OFFSET(0x191356E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7834B004F19613AC_OFFSET UNITYSDK_OFFSET(0x19127A40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_79685B45C3BBF906_OFFSET UNITYSDK_OFFSET(0x19123000)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_79F23AAAB9756533_OFFSET UNITYSDK_OFFSET(0x191260F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7A050EAA0D81E89A_OFFSET UNITYSDK_OFFSET(0x191341F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7A22549F4C62F6E5_OFFSET UNITYSDK_OFFSET(0x19121D00)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7A23EC28D7FD16D2_OFFSET UNITYSDK_OFFSET(0x1911FA20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7A5FFA4820419D9E_OFFSET UNITYSDK_OFFSET(0x1912D7E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7A8A97B06BF67157_OFFSET UNITYSDK_OFFSET(0x19135330)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7AA0D20941220E39_1_OFFSET UNITYSDK_OFFSET(0x1912DD00)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7AA0D20941220E39_OFFSET UNITYSDK_OFFSET(0x1912D7F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7AA1500C0DD48E68_OFFSET UNITYSDK_OFFSET(0x19127AD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7AA5FCB1DD1A4D30_OFFSET UNITYSDK_OFFSET(0x19129760)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7AB6117CDE418C85_OFFSET UNITYSDK_OFFSET(0x191354C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7AD276F2CF1E156A_OFFSET UNITYSDK_OFFSET(0x19124190)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7B74D4B35DAB76CD_OFFSET UNITYSDK_OFFSET(0x19135810)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7B7EB4D6E5D3DD9A_OFFSET UNITYSDK_OFFSET(0x19124320)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7BCDF0DC08BD43AB_OFFSET UNITYSDK_OFFSET(0x1912FD20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7BD033D13D142BCF_OFFSET UNITYSDK_OFFSET(0x19128EB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7BDD93835A513158_OFFSET UNITYSDK_OFFSET(0x19123E10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7BFCD24B44049B89_OFFSET UNITYSDK_OFFSET(0x19138A10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7C211C6422B8FA39_OFFSET UNITYSDK_OFFSET(0x19125560)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7C6C9CD30C376383_OFFSET UNITYSDK_OFFSET(0x19134760)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7C7B92F6C071F085_OFFSET UNITYSDK_OFFSET(0x191299A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7CC5F56C31F14DFD_OFFSET UNITYSDK_OFFSET(0x1912DB70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7D003AD597903531_OFFSET UNITYSDK_OFFSET(0x191250B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7D29D3CE0EEA79E1_OFFSET UNITYSDK_OFFSET(0x19138160)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7D339F6AB5737E80_OFFSET UNITYSDK_OFFSET(0x1912AB50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7D478A2C3ECCFD1F_OFFSET UNITYSDK_OFFSET(0x19136570)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7D628D5452071835_OFFSET UNITYSDK_OFFSET(0x19132060)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7DB873051A90E30E_OFFSET UNITYSDK_OFFSET(0x19125440)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7E141E5D8B4CA8B7_OFFSET UNITYSDK_OFFSET(0x19126B20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7E8AA5F25D2140C2_OFFSET UNITYSDK_OFFSET(0x1912BF10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7EB7BADC0CAA415E_OFFSET UNITYSDK_OFFSET(0x1912AE80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7ED12F00306D98F2_OFFSET UNITYSDK_OFFSET(0x1912E6C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7F9167D7B37E5579_OFFSET UNITYSDK_OFFSET(0x19122690)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7FDDB3FCC47B484B_OFFSET UNITYSDK_OFFSET(0x19121DA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_7FE395AAB4DB6858_OFFSET UNITYSDK_OFFSET(0x19138510)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8084E17F0C4278BE_OFFSET UNITYSDK_OFFSET(0x19127AC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8093675DC3989416_OFFSET UNITYSDK_OFFSET(0x1912DD10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_80B6DC3B9781B800_OFFSET UNITYSDK_OFFSET(0x1912C960)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_80BB0903449BA90C_OFFSET UNITYSDK_OFFSET(0x1912A130)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_80EC186F78F612BF_OFFSET UNITYSDK_OFFSET(0x191329E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_81D01857B6D60F57_OFFSET UNITYSDK_OFFSET(0x19134AE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_81EA04715C397398_OFFSET UNITYSDK_OFFSET(0x19122A40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8271245A36D93CA4_OFFSET UNITYSDK_OFFSET(0x1912A340)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_82732DF462C7B851_OFFSET UNITYSDK_OFFSET(0x191280E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8277AEA3348B140D_OFFSET UNITYSDK_OFFSET(0x191304A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_82B131A7812078DC_OFFSET UNITYSDK_OFFSET(0x191279A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_82B65F027918B258_OFFSET UNITYSDK_OFFSET(0x1912CE70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_82E0498B85AB62C5_OFFSET UNITYSDK_OFFSET(0x19135D50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_82F38CF83D1B9222_OFFSET UNITYSDK_OFFSET(0x19122910)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8317016422AC8665_OFFSET UNITYSDK_OFFSET(0x191309B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_832934BEEEB184A8_OFFSET UNITYSDK_OFFSET(0x1912F250)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_83426EB202F9380D_OFFSET UNITYSDK_OFFSET(0x191362F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8342B943ABED8DEE_OFFSET UNITYSDK_OFFSET(0x1912D950)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_834E1C82A4817779_OFFSET UNITYSDK_OFFSET(0x19130A30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_83882E33ED7156E4_OFFSET UNITYSDK_OFFSET(0x19126890)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_848112803BDF5EB3_OFFSET UNITYSDK_OFFSET(0x191312D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8486ECA4DF30D3F1_OFFSET UNITYSDK_OFFSET(0x19134DF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8506EA7F25D2E9E9_OFFSET UNITYSDK_OFFSET(0x1912E4C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8508450C153DF895_OFFSET UNITYSDK_OFFSET(0x191257E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_85510344A93E1E50_OFFSET UNITYSDK_OFFSET(0x19125D70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8596EE2C576219A4_OFFSET UNITYSDK_OFFSET(0x191313D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_859A893D65B28ACA_OFFSET UNITYSDK_OFFSET(0x19131860)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_85BD267B4FB28859_OFFSET UNITYSDK_OFFSET(0x1912C430)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_85C56F115AAC3000_OFFSET UNITYSDK_OFFSET(0x19122550)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8651F666701D3D5B_OFFSET UNITYSDK_OFFSET(0x191307A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_86A26A6D86D8E7B2_OFFSET UNITYSDK_OFFSET(0x19122C20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_86A2CA29291275A6_OFFSET UNITYSDK_OFFSET(0x19133000)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_86E641EEA847AD5F_OFFSET UNITYSDK_OFFSET(0x19125C10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_873F92A00715E64B_OFFSET UNITYSDK_OFFSET(0x191247B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_87D19756708C9427_OFFSET UNITYSDK_OFFSET(0x1912E010)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_87E725F3B85F5D40_OFFSET UNITYSDK_OFFSET(0x19122F70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_883E67E69B325643_OFFSET UNITYSDK_OFFSET(0x19125EF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8853CDAC096C4B7D_OFFSET UNITYSDK_OFFSET(0x19130BB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_88BCAB2C23003C5C_OFFSET UNITYSDK_OFFSET(0x191324F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_891B5E5B1924EB19_OFFSET UNITYSDK_OFFSET(0x1912B180)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_89278BB725124A54_OFFSET UNITYSDK_OFFSET(0x1912EF40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_893583F802E514D5_OFFSET UNITYSDK_OFFSET(0x19126800)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_896618A933D567BD_OFFSET UNITYSDK_OFFSET(0x191230F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_89674D68C2A2D429_OFFSET UNITYSDK_OFFSET(0x1912E030)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_89C3916FAACC2C53_OFFSET UNITYSDK_OFFSET(0x19136880)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_89DBE2669696E2E3_OFFSET UNITYSDK_OFFSET(0x19138F60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8A06717622871DDC_OFFSET UNITYSDK_OFFSET(0x19123490)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8A222DBB85C0F3F2_OFFSET UNITYSDK_OFFSET(0x19122B40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8A2EAB64127414EA_OFFSET UNITYSDK_OFFSET(0x191242A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8AAB30FEDC06E959_OFFSET UNITYSDK_OFFSET(0x191274A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8B103DE2E92CB9B8_OFFSET UNITYSDK_OFFSET(0x1912DC70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8B4E8C3BA5881423_OFFSET UNITYSDK_OFFSET(0x1912B670)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8C26653201E78534_OFFSET UNITYSDK_OFFSET(0x19122A80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8C4C9A7838D8F93F_OFFSET UNITYSDK_OFFSET(0x19122BA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8C7C939E8BF2D4B0_OFFSET UNITYSDK_OFFSET(0x191256E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8C9E75CCB8EB034E_OFFSET UNITYSDK_OFFSET(0x19134320)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8CA1F389A194BF45_OFFSET UNITYSDK_OFFSET(0x19128AF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8CCAA3A0D0B2E72B_OFFSET UNITYSDK_OFFSET(0x19133EB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8DE897A91EF0094C_OFFSET UNITYSDK_OFFSET(0x19125760)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8E2251DA07BECCFE_OFFSET UNITYSDK_OFFSET(0x19122D00)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8E5C481138C14F2B_OFFSET UNITYSDK_OFFSET(0x19130220)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8E609660DAA94CDA_OFFSET UNITYSDK_OFFSET(0x19136EA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F4D8B096535B81A_OFFSET UNITYSDK_OFFSET(0x19126070)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_1_OFFSET UNITYSDK_OFFSET(0x1912CEF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_2_OFFSET UNITYSDK_OFFSET(0x191376C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_3_OFFSET UNITYSDK_OFFSET(0x19137740)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_4_OFFSET UNITYSDK_OFFSET(0x19137F50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_5_OFFSET UNITYSDK_OFFSET(0x19137FE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_6_OFFSET UNITYSDK_OFFSET(0x19138060)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_OFFSET UNITYSDK_OFFSET(0x1912C190)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8FD704EDE6F18C3F_OFFSET UNITYSDK_OFFSET(0x19135140)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8FDB4C220D730E71_OFFSET UNITYSDK_OFFSET(0x1912FFA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_8FEADDFF1C7DDE71_OFFSET UNITYSDK_OFFSET(0x19135CF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9042E5D64FC0E5EA_OFFSET UNITYSDK_OFFSET(0x19136400)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_90C081FF18789D61_OFFSET UNITYSDK_OFFSET(0x19127220)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9118942B1FFF6153_OFFSET UNITYSDK_OFFSET(0x1912BB90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9132426B0F79F995_OFFSET UNITYSDK_OFFSET(0x19124A30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_91F4E4D8AD46EEBE_OFFSET UNITYSDK_OFFSET(0x1912A8D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_92397710B9868795_OFFSET UNITYSDK_OFFSET(0x19120DF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9269C39F3FDD0DFC_OFFSET UNITYSDK_OFFSET(0x19125CD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_926E8E0A264027E1_OFFSET UNITYSDK_OFFSET(0x191319E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9276AE94E6430DDB_OFFSET UNITYSDK_OFFSET(0x19128D00)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_93AD9CF67267CADE_OFFSET UNITYSDK_OFFSET(0x1912E2C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_93BE3B01B3309225_OFFSET UNITYSDK_OFFSET(0x19134640)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9437A23225F95DE6_OFFSET UNITYSDK_OFFSET(0x19135970)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_944E041F182C7A7B_OFFSET UNITYSDK_OFFSET(0x19134CC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_945C4ACD5F31DCE0_OFFSET UNITYSDK_OFFSET(0x19127420)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_95A2911388AF9040_OFFSET UNITYSDK_OFFSET(0x19134A80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_961932773C17BC13_OFFSET UNITYSDK_OFFSET(0x1912D240)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9630B20EC31B11C6_OFFSET UNITYSDK_OFFSET(0x1912D440)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_96CBCF7AD65DC189_OFFSET UNITYSDK_OFFSET(0x19129340)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_97B084E20D3A3E79_OFFSET UNITYSDK_OFFSET(0x19136740)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_984B0FED82F60E6F_OFFSET UNITYSDK_OFFSET(0x19133500)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_990A152C6A43127E_OFFSET UNITYSDK_OFFSET(0x1912BC10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9978FE3283B2E34E_OFFSET UNITYSDK_OFFSET(0x1912A030)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_99A33FF1B6E9C7D8_OFFSET UNITYSDK_OFFSET(0x19137420)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_99AA193F1E9E5A59_OFFSET UNITYSDK_OFFSET(0x19121ED0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9A05F6F660D98812_OFFSET UNITYSDK_OFFSET(0x19134110)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9A3374554A8EB5E1_OFFSET UNITYSDK_OFFSET(0x191226D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9A3D6D3F00CF0694_OFFSET UNITYSDK_OFFSET(0x19122710)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9A45D269802BD911_OFFSET UNITYSDK_OFFSET(0x1912C750)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9A873C57E935874D_OFFSET UNITYSDK_OFFSET(0x19126880)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9A9B1DADDBBFC369_OFFSET UNITYSDK_OFFSET(0x19126910)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9ACC00D5CBCD4AF8_OFFSET UNITYSDK_OFFSET(0x191351C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9B44F8E10D0103CE_OFFSET UNITYSDK_OFFSET(0x19128C70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9B9BA2C5852E5BE0_OFFSET UNITYSDK_OFFSET(0x1911FA50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9B9C6F0753EDA71A_OFFSET UNITYSDK_OFFSET(0x19135900)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9BDAB6141F018CB1_OFFSET UNITYSDK_OFFSET(0x191301A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9BED9ABE98A70F52_OFFSET UNITYSDK_OFFSET(0x19136A20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9C8E03E97EDA0443_OFFSET UNITYSDK_OFFSET(0x191325F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9CA6E48EB68ED53A_OFFSET UNITYSDK_OFFSET(0x19128860)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9CB779A694868211_OFFSET UNITYSDK_OFFSET(0x19124EB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9CC79302D80E15B3_OFFSET UNITYSDK_OFFSET(0x191388E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9D631EDC86B1199B_OFFSET UNITYSDK_OFFSET(0x19122A60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9DBA94878DE6128F_OFFSET UNITYSDK_OFFSET(0x19124AB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9E2FD357E461E17B_OFFSET UNITYSDK_OFFSET(0x19129B50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9E478EBCD7C1BDAE_OFFSET UNITYSDK_OFFSET(0x1912BA00)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9E82FA49A82B7BB9_OFFSET UNITYSDK_OFFSET(0x19127120)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9F2EF05041F53CCA_OFFSET UNITYSDK_OFFSET(0x191363C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9FB623C4932AFB84_OFFSET UNITYSDK_OFFSET(0x19126E20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9FC2A74E026FDFCB_OFFSET UNITYSDK_OFFSET(0x19129EA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_9FCF9608FF10A1C3_OFFSET UNITYSDK_OFFSET(0x19136530)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A02C874533E6583D_OFFSET UNITYSDK_OFFSET(0x19132760)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A04C200D1E714A22_OFFSET UNITYSDK_OFFSET(0x1911F850)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A05345A25A8B1393_OFFSET UNITYSDK_OFFSET(0x1912DE10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A0F446E6BA71734E_OFFSET UNITYSDK_OFFSET(0x1912B7F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A115B506FBE09D2C_OFFSET UNITYSDK_OFFSET(0x191353A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A11F6A18A7054275_OFFSET UNITYSDK_OFFSET(0x19134E90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A27542BA48CC33FC_OFFSET UNITYSDK_OFFSET(0x1912D560)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A2815517E087C7F2_OFFSET UNITYSDK_OFFSET(0x1911FE80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A2C8FC6D5FC91ADF_OFFSET UNITYSDK_OFFSET(0x19127620)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A339E55B3B1A5E76_OFFSET UNITYSDK_OFFSET(0x19129130)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A36A2DB87585D3E8_OFFSET UNITYSDK_OFFSET(0x19136050)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A3797D14E5803E38_OFFSET UNITYSDK_OFFSET(0x191323F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A3AE93B4C8DFB506_OFFSET UNITYSDK_OFFSET(0x191350C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A4228E7AE7D1DF09_OFFSET UNITYSDK_OFFSET(0x1912A6D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A423BBE55819988F_OFFSET UNITYSDK_OFFSET(0x1912E640)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A49EDBC7812C3FBB_OFFSET UNITYSDK_OFFSET(0x19122B10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A52587B8A8243915_OFFSET UNITYSDK_OFFSET(0x19123690)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A52784F05E68E49E_OFFSET UNITYSDK_OFFSET(0x19124CB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A53CCD77AC936D9B_OFFSET UNITYSDK_OFFSET(0x191352C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A540A9F1B45014AF_OFFSET UNITYSDK_OFFSET(0x19126FA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A54AB8AE6B13D332_OFFSET UNITYSDK_OFFSET(0x19138A70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A553363E7C1C00AE_OFFSET UNITYSDK_OFFSET(0x19136FA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A566342C80E78C54_OFFSET UNITYSDK_OFFSET(0x191358B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A567E380460033C5_OFFSET UNITYSDK_OFFSET(0x19132270)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A5BD022DFAA5E230_OFFSET UNITYSDK_OFFSET(0x19136130)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A5DFC69A6DA016D8_OFFSET UNITYSDK_OFFSET(0x1912AC60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A60E31CDBCEF23C5_OFFSET UNITYSDK_OFFSET(0x1912D800)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A613F39D01FAA3CB_OFFSET UNITYSDK_OFFSET(0x19135690)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A627980135A1E030_OFFSET UNITYSDK_OFFSET(0x1912B000)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A6A1D1B0788BB589_OFFSET UNITYSDK_OFFSET(0x19123910)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A6E6762D2FE592E8_OFFSET UNITYSDK_OFFSET(0x19120540)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A7196DB1B7411B41_OFFSET UNITYSDK_OFFSET(0x191389E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A77B73CE6EB1A548_OFFSET UNITYSDK_OFFSET(0x1911FBE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A77D1918695DB7D1_OFFSET UNITYSDK_OFFSET(0x19128360)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A789FB7B342CA795_OFFSET UNITYSDK_OFFSET(0x19137E40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A7939EAC42D640D3_OFFSET UNITYSDK_OFFSET(0x19124DB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A8576A03A76CE751_OFFSET UNITYSDK_OFFSET(0x19125A70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A8939D442E87B678_OFFSET UNITYSDK_OFFSET(0x19127CD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A8A2823953CD53DB_OFFSET UNITYSDK_OFFSET(0x191283E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_A981BD1D2871E768_OFFSET UNITYSDK_OFFSET(0x191333F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_AA14FCFD66B422A9_OFFSET UNITYSDK_OFFSET(0x1911FDA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_AA712E16120700D7_OFFSET UNITYSDK_OFFSET(0x19126680)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_AB1AC47CD927F79B_OFFSET UNITYSDK_OFFSET(0x1911FA80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_AB27B52D9278BF26_OFFSET UNITYSDK_OFFSET(0x191306A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_AB71BCBB5A32B64F_OFFSET UNITYSDK_OFFSET(0x19132160)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_ABCF25C23CA18A7C_OFFSET UNITYSDK_OFFSET(0x19122FA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_AC8D0318805080FC_OFFSET UNITYSDK_OFFSET(0x191251B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_AD30643EB68A8574_OFFSET UNITYSDK_OFFSET(0x191316E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_AD845DBCDE9D175E_OFFSET UNITYSDK_OFFSET(0x19137B40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_ADE2E1A052092FD3_OFFSET UNITYSDK_OFFSET(0x19138390)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_AE6FE6D115EED02F_OFFSET UNITYSDK_OFFSET(0x19131B60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_AEBC956C923E45C4_OFFSET UNITYSDK_OFFSET(0x1912EE40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_AEEDB1D39A556CC4_OFFSET UNITYSDK_OFFSET(0x19122E60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_AF4AA26D9F12EDD3_OFFSET UNITYSDK_OFFSET(0x19138E60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_AFD721DAD19E4FF3_OFFSET UNITYSDK_OFFSET(0x19135750)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B073E037C434AABC_OFFSET UNITYSDK_OFFSET(0x19122E50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B0960E81C9BBE571_OFFSET UNITYSDK_OFFSET(0x19124730)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B0B33332B8E63AC5_OFFSET UNITYSDK_OFFSET(0x19129C70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B0D9913CB9FE4245_OFFSET UNITYSDK_OFFSET(0x1912F890)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B1301AF50E8B06E3_OFFSET UNITYSDK_OFFSET(0x19127FE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B19FA035364497D9_OFFSET UNITYSDK_OFFSET(0x19124C30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B26FA1314D832E8D_OFFSET UNITYSDK_OFFSET(0x1912FA90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B29085ED53055365_OFFSET UNITYSDK_OFFSET(0x1912FDA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B2C66C0AF3542A3D_OFFSET UNITYSDK_OFFSET(0x19122750)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B396EA8D81ACDF8C_OFFSET UNITYSDK_OFFSET(0x19135400)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B3A49284EEBE38F2_OFFSET UNITYSDK_OFFSET(0x19125CF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B43B2B23AC970A30_OFFSET UNITYSDK_OFFSET(0x19130120)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B484513930E6F251_OFFSET UNITYSDK_OFFSET(0x19130620)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B4C94B3A11258E55_OFFSET UNITYSDK_OFFSET(0x191230A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B50410B9832A9437_OFFSET UNITYSDK_OFFSET(0x19138740)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B5582A02BEB3B63E_OFFSET UNITYSDK_OFFSET(0x1912D4D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B563B0EC32426EED_OFFSET UNITYSDK_OFFSET(0x19133F80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B572CF049F20ADDB_OFFSET UNITYSDK_OFFSET(0x19131BE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B65A0058C2A21AB4_OFFSET UNITYSDK_OFFSET(0x19130020)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B69719B7CF0878D4_OFFSET UNITYSDK_OFFSET(0x1912AD70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B6FD100C464EB396_OFFSET UNITYSDK_OFFSET(0x1911F960)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B6FECEC3D627DBC2_OFFSET UNITYSDK_OFFSET(0x1912D1C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B722EFC961E42506_OFFSET UNITYSDK_OFFSET(0x191300A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B761AC2587B5C5FE_OFFSET UNITYSDK_OFFSET(0x19131450)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B7B41409FA4C4468_OFFSET UNITYSDK_OFFSET(0x1912EAC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B7E7F8DB48F35C4E_OFFSET UNITYSDK_OFFSET(0x1912E040)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B8077EC615B4E1FE_OFFSET UNITYSDK_OFFSET(0x1912D660)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B82471DA7F02DB21_OFFSET UNITYSDK_OFFSET(0x191270A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B89C7DD843AED29C_OFFSET UNITYSDK_OFFSET(0x19123F10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B8B411B019A35AAC_OFFSET UNITYSDK_OFFSET(0x19123050)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B8C733C2678A89D6_OFFSET UNITYSDK_OFFSET(0x19132B70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B91A824466921D65_OFFSET UNITYSDK_OFFSET(0x1912B980)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B9790BD1B475E2CE_OFFSET UNITYSDK_OFFSET(0x1911F9E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B9ADB6472A9AE825_OFFSET UNITYSDK_OFFSET(0x19125F70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B9AEF24FEE40376D_OFFSET UNITYSDK_OFFSET(0x1912C6C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_B9DF471D0A5892E3_OFFSET UNITYSDK_OFFSET(0x1912B770)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BA5B21744DBEE431_OFFSET UNITYSDK_OFFSET(0x19133870)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BA6567291AE803E9_OFFSET UNITYSDK_OFFSET(0x19121E80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BAA8B66BC4E0090A_OFFSET UNITYSDK_OFFSET(0x1912A540)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BAE7C44E17AF1F96_OFFSET UNITYSDK_OFFSET(0x191346F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BB3B5C52BE4BB917_OFFSET UNITYSDK_OFFSET(0x19122950)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BB55495DC7BDBCA0_OFFSET UNITYSDK_OFFSET(0x19131EE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BB861C33560E7675_OFFSET UNITYSDK_OFFSET(0x19134580)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BBB4D4673CB8087F_OFFSET UNITYSDK_OFFSET(0x19133B10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BC2EDD050B3543D1_OFFSET UNITYSDK_OFFSET(0x19122650)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BCE19F1D10D353E1_OFFSET UNITYSDK_OFFSET(0x191326B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BCE3B25AF1A3FC51_OFFSET UNITYSDK_OFFSET(0x19132E70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BCEC6816D98A1EDA_OFFSET UNITYSDK_OFFSET(0x19133DF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BD0168E536AC807E_OFFSET UNITYSDK_OFFSET(0x191387F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BD6FAE8D54B3E1E4_OFFSET UNITYSDK_OFFSET(0x1912C9E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BD70D133E9200620_OFFSET UNITYSDK_OFFSET(0x1912E140)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BDA9F0FC4ED6777D_OFFSET UNITYSDK_OFFSET(0x1912D8C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BE4C6F65C0B2591E_OFFSET UNITYSDK_OFFSET(0x19121C60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BE5D8F7A975AAA37_OFFSET UNITYSDK_OFFSET(0x1912ADF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BE7F71DD40BD959A_OFFSET UNITYSDK_OFFSET(0x1912E540)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEAF7A37BDAEEC38_OFFSET UNITYSDK_OFFSET(0x19132AF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEDDE5E59E131318_OFFSET UNITYSDK_OFFSET(0x19127F50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_10_OFFSET UNITYSDK_OFFSET(0x1912CDF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_11_OFFSET UNITYSDK_OFFSET(0x19136FC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_12_OFFSET UNITYSDK_OFFSET(0x191370E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_13_OFFSET UNITYSDK_OFFSET(0x19137290)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_14_OFFSET UNITYSDK_OFFSET(0x19137310)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_15_OFFSET UNITYSDK_OFFSET(0x19137430)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_16_OFFSET UNITYSDK_OFFSET(0x191374B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_17_OFFSET UNITYSDK_OFFSET(0x191375B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_18_OFFSET UNITYSDK_OFFSET(0x19137630)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_19_OFFSET UNITYSDK_OFFSET(0x191377C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_1_OFFSET UNITYSDK_OFFSET(0x19123410)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_20_OFFSET UNITYSDK_OFFSET(0x191378C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_21_OFFSET UNITYSDK_OFFSET(0x19137940)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_22_OFFSET UNITYSDK_OFFSET(0x191379C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_23_OFFSET UNITYSDK_OFFSET(0x19138BD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_2_OFFSET UNITYSDK_OFFSET(0x19128E30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_3_OFFSET UNITYSDK_OFFSET(0x19128FB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_4_OFFSET UNITYSDK_OFFSET(0x19129030)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_5_OFFSET UNITYSDK_OFFSET(0x191293C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_6_OFFSET UNITYSDK_OFFSET(0x19129450)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_7_OFFSET UNITYSDK_OFFSET(0x191294E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_8_OFFSET UNITYSDK_OFFSET(0x1912BA10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_9_OFFSET UNITYSDK_OFFSET(0x1912BA90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x19123290)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BF0D5BDC0EB95757_OFFSET UNITYSDK_OFFSET(0x19138D60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BF26B22D7F08DD47_OFFSET UNITYSDK_OFFSET(0x19134DA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BF41F41DE310DFEA_OFFSET UNITYSDK_OFFSET(0x19128760)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BF4700FE89A99971_OFFSET UNITYSDK_OFFSET(0x19125230)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BF608B16759A8904_OFFSET UNITYSDK_OFFSET(0x19134F80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BF837C8F8426ED90_OFFSET UNITYSDK_OFFSET(0x19128B70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_BFA0A6F0E5AA38FF_OFFSET UNITYSDK_OFFSET(0x19127E50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C08C6D791264D2E4_OFFSET UNITYSDK_OFFSET(0x1912D2C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C095D51C7497E99B_OFFSET UNITYSDK_OFFSET(0x1912EEC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C098A60C2B503603_OFFSET UNITYSDK_OFFSET(0x191322F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C0F5CEE301445EC5_OFFSET UNITYSDK_OFFSET(0x1911F8E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C10B9A98BE3CA651_OFFSET UNITYSDK_OFFSET(0x19131250)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C228CC169C069A8C_OFFSET UNITYSDK_OFFSET(0x19122610)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C2C80676118A98B6_OFFSET UNITYSDK_OFFSET(0x191352D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C2D908A38FB5A9DE_OFFSET UNITYSDK_OFFSET(0x1912EBC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C449142B0039904D_OFFSET UNITYSDK_OFFSET(0x1912DE90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C4BB22B957F00C7C_OFFSET UNITYSDK_OFFSET(0x19123D10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C54075E3A80F2D28_OFFSET UNITYSDK_OFFSET(0x19122DA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C5915DBC0530F3D0_OFFSET UNITYSDK_OFFSET(0x191340B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C5C4C5D1CF916BF3_OFFSET UNITYSDK_OFFSET(0x19133370)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C62CD3D7EE2F5353_OFFSET UNITYSDK_OFFSET(0x19137C40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C661BB51A53A13CB_OFFSET UNITYSDK_OFFSET(0x191243A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C700C7E6E2C50AA7_OFFSET UNITYSDK_OFFSET(0x19134380)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C71D1B1E3D693023_OFFSET UNITYSDK_OFFSET(0x191368F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C7425D496AD2527F_OFFSET UNITYSDK_OFFSET(0x19138950)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C79499F9AD99E0A1_OFFSET UNITYSDK_OFFSET(0x19125A60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C7D66C1E12B28494_OFFSET UNITYSDK_OFFSET(0x1912D0C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C805892020B85C2B_OFFSET UNITYSDK_OFFSET(0x1912DBF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C880E773164E4B2C_OFFSET UNITYSDK_OFFSET(0x191295E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C90460320E50CEE4_OFFSET UNITYSDK_OFFSET(0x191284E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C9274476816BC27A_OFFSET UNITYSDK_OFFSET(0x1912EA40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C92EDA721FA93FCB_OFFSET UNITYSDK_OFFSET(0x1912A850)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C9BC37A7D3A37578_OFFSET UNITYSDK_OFFSET(0x1912AE70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C9BC72CE411EB017_OFFSET UNITYSDK_OFFSET(0x1912D970)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C9CA47DE4EBB61AB_OFFSET UNITYSDK_OFFSET(0x191388F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_C9E03362D2006BF2_OFFSET UNITYSDK_OFFSET(0x1912A7D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CA8C2F819098DAAE_OFFSET UNITYSDK_OFFSET(0x19124E30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CAB8E1BF5765FA2D_OFFSET UNITYSDK_OFFSET(0x191261F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CB031A9CBA490CD6_OFFSET UNITYSDK_OFFSET(0x19136F40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CB867586E035719A_OFFSET UNITYSDK_OFFSET(0x19133950)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CB8DAD5C482558E8_OFFSET UNITYSDK_OFFSET(0x19120660)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CBC115592AC36B35_OFFSET UNITYSDK_OFFSET(0x1912B2A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CC0D5604183B5F45_OFFSET UNITYSDK_OFFSET(0x191258E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CC11C006FCDC6E5A_OFFSET UNITYSDK_OFFSET(0x191288E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CC6D7209A914B2A8_OFFSET UNITYSDK_OFFSET(0x19133C20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CC8C304A5DDF0E6F_OFFSET UNITYSDK_OFFSET(0x19131C60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CCC955023ED2B505_OFFSET UNITYSDK_OFFSET(0x1912AA50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CCCDCB399DE10870_OFFSET UNITYSDK_OFFSET(0x19124930)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CCD5966F7007DCB3_OFFSET UNITYSDK_OFFSET(0x19123E90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CCF6D5A6446E2EF2_OFFSET UNITYSDK_OFFSET(0x191249B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CD141103C7F90C08_OFFSET UNITYSDK_OFFSET(0x1912F1D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CD82A4A1A9E208FD_OFFSET UNITYSDK_OFFSET(0x19124FB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CDA141C53A963B62_OFFSET UNITYSDK_OFFSET(0x19129D00)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CDBFCB8B911A00E7_OFFSET UNITYSDK_OFFSET(0x1912D6E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CDC72C78B261480E_OFFSET UNITYSDK_OFFSET(0x191346E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CDE7E533D9BF2D75_OFFSET UNITYSDK_OFFSET(0x19130F40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CDEBB55472016BE0_OFFSET UNITYSDK_OFFSET(0x1912B8F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CDEE6363C5225A19_OFFSET UNITYSDK_OFFSET(0x191272A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CE2425DCB67042EB_OFFSET UNITYSDK_OFFSET(0x19129660)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CE5F87905C1D243F_OFFSET UNITYSDK_OFFSET(0x19128560)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CE996224A2DC3A5B_OFFSET UNITYSDK_OFFSET(0x1912C5C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CE9BB1B918055424_OFFSET UNITYSDK_OFFSET(0x1912F810)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_CF66E8547654C5C8_OFFSET UNITYSDK_OFFSET(0x19126370)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D06554D747749C85_OFFSET UNITYSDK_OFFSET(0x1912B3A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D0FCA84B2AD86B9D_OFFSET UNITYSDK_OFFSET(0x1912D140)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D12755E6796AF9C2_OFFSET UNITYSDK_OFFSET(0x19133510)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D15265A02E32CD4E_OFFSET UNITYSDK_OFFSET(0x19134ED0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D189294F2EA7E7F9_OFFSET UNITYSDK_OFFSET(0x19125A90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D204CA5A6A7A3C57_OFFSET UNITYSDK_OFFSET(0x191278A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D21634B69F25BFDE_OFFSET UNITYSDK_OFFSET(0x19122E40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D2C25E99F24384EC_OFFSET UNITYSDK_OFFSET(0x191314E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D35AF3F290D52EAD_OFFSET UNITYSDK_OFFSET(0x19123710)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D3871288F8CED0FD_OFFSET UNITYSDK_OFFSET(0x19138290)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D396A549806584D4_OFFSET UNITYSDK_OFFSET(0x19130820)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D44CF768ACE644B0_OFFSET UNITYSDK_OFFSET(0x191357A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D45CECD33879AACA_OFFSET UNITYSDK_OFFSET(0x19134B40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D4A96B83C3BC9575_OFFSET UNITYSDK_OFFSET(0x19137BC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D4CA5EEC80E4BE09_OFFSET UNITYSDK_OFFSET(0x19133A30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D5132D5368EDEF70_OFFSET UNITYSDK_OFFSET(0x19122F30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D52D4F15E4284E4D_OFFSET UNITYSDK_OFFSET(0x191384B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D5938E80A98ACF83_OFFSET UNITYSDK_OFFSET(0x191273A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D65A2889D7F6143A_OFFSET UNITYSDK_OFFSET(0x19132F40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D7D9009A7917AC7A_OFFSET UNITYSDK_OFFSET(0x191219E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D7F51A0DCC9C6B3A_OFFSET UNITYSDK_OFFSET(0x19133180)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D7F8B2245B6FED19_OFFSET UNITYSDK_OFFSET(0x1912F5F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D86F60D433682E2A_OFFSET UNITYSDK_OFFSET(0x191385D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D87CFBDB928E0C88_OFFSET UNITYSDK_OFFSET(0x19138820)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D8D9463596BD4539_OFFSET UNITYSDK_OFFSET(0x19121D50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D923F32EB5F4A21C_OFFSET UNITYSDK_OFFSET(0x19122DE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D9242371071330C5_OFFSET UNITYSDK_OFFSET(0x19126F20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D947E283825FBD18_OFFSET UNITYSDK_OFFSET(0x19135080)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D9C43A6220BEFA52_OFFSET UNITYSDK_OFFSET(0x19125CE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D9F68BD30B069D8A_OFFSET UNITYSDK_OFFSET(0x19122A50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_D9F8DB14B33015B0_OFFSET UNITYSDK_OFFSET(0x19134B80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA4A9E89A6988726_OFFSET UNITYSDK_OFFSET(0x191388B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_1_OFFSET UNITYSDK_OFFSET(0x19137040)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_2_OFFSET UNITYSDK_OFFSET(0x191370D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_3_OFFSET UNITYSDK_OFFSET(0x19137160)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_4_OFFSET UNITYSDK_OFFSET(0x19137170)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_5_OFFSET UNITYSDK_OFFSET(0x19137180)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_6_OFFSET UNITYSDK_OFFSET(0x19137410)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_7_OFFSET UNITYSDK_OFFSET(0x191376B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_OFFSET UNITYSDK_OFFSET(0x1912D550)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DB0AAE35BAE3F66A_OFFSET UNITYSDK_OFFSET(0x19126270)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DB75015A0C418B3D_OFFSET UNITYSDK_OFFSET(0x1912E840)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DB76ACB4179E9670_OFFSET UNITYSDK_OFFSET(0x19137530)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DBA7902A7372A0F0_OFFSET UNITYSDK_OFFSET(0x1912C740)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DBAA8A55402A4CB2_OFFSET UNITYSDK_OFFSET(0x19133CC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DCC86E7303C95E49_OFFSET UNITYSDK_OFFSET(0x1912B870)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DCCAD0D95AF7F778_OFFSET UNITYSDK_OFFSET(0x19136600)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DCD0EDFC757D8480_OFFSET UNITYSDK_OFFSET(0x19122DB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DCD8E008A2A5436D_OFFSET UNITYSDK_OFFSET(0x19135A80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DD3C632788ECD484_OFFSET UNITYSDK_OFFSET(0x19136E00)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DD5FD5E079FFC80E_OFFSET UNITYSDK_OFFSET(0x1912EDC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DDF2B767203354BD_OFFSET UNITYSDK_OFFSET(0x19138200)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DE12704C0B0A8E9D_OFFSET UNITYSDK_OFFSET(0x19131960)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DE6CC66119BC766D_OFFSET UNITYSDK_OFFSET(0x19122FD0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DEEAFF2C2D58FE79_OFFSET UNITYSDK_OFFSET(0x19134A00)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DEF4AAE2E2952A03_OFFSET UNITYSDK_OFFSET(0x1912D9F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DEF5E2323DB2011B_OFFSET UNITYSDK_OFFSET(0x191276A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DF79D0AF6937EF61_OFFSET UNITYSDK_OFFSET(0x19138EE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DFBE875A3DB312B0_OFFSET UNITYSDK_OFFSET(0x191355D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_DFDF08CDF11550CB_OFFSET UNITYSDK_OFFSET(0x19137F40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E022FA9E78CB1653_OFFSET UNITYSDK_OFFSET(0x1912BD10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E0ACF9C45279701B_OFFSET UNITYSDK_OFFSET(0x1912F460)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E0B42163C7F545A7_OFFSET UNITYSDK_OFFSET(0x19133270)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E0F2845D944BD076_OFFSET UNITYSDK_OFFSET(0x19138B50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E15A2D0D26992B61_OFFSET UNITYSDK_OFFSET(0x19124010)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E185DFDD5899D855_OFFSET UNITYSDK_OFFSET(0x1912B210)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E19E0AE201616380_OFFSET UNITYSDK_OFFSET(0x191254E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E1C97AC6E973EBAA_OFFSET UNITYSDK_OFFSET(0x1912CBE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E1F35C211CB65375_OFFSET UNITYSDK_OFFSET(0x191210E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E284F81434BCF8C3_OFFSET UNITYSDK_OFFSET(0x191275A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E29C1DF3E7B6CE34_OFFSET UNITYSDK_OFFSET(0x19122C30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E331D66B721E403F_OFFSET UNITYSDK_OFFSET(0x19138980)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E33CA07E4FAA4284_OFFSET UNITYSDK_OFFSET(0x1912A950)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E374B2F9D3E1F74E_OFFSET UNITYSDK_OFFSET(0x19130AB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E39CF249B65BEAC7_OFFSET UNITYSDK_OFFSET(0x19134F20)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E4E378BC5950825C_OFFSET UNITYSDK_OFFSET(0x19122AB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E4EB79D9A12E04F9_OFFSET UNITYSDK_OFFSET(0x19131FE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E4F75275D4056188_OFFSET UNITYSDK_OFFSET(0x19126470)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E504A6E2104B8F65_OFFSET UNITYSDK_OFFSET(0x19120030)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E50808850A26DBBD_OFFSET UNITYSDK_OFFSET(0x19124F30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E52EC084839301E2_OFFSET UNITYSDK_OFFSET(0x19126580)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E52F045E9752D636_OFFSET UNITYSDK_OFFSET(0x19124430)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E53493A35EA2773F_OFFSET UNITYSDK_OFFSET(0x191207C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E587FA0C3BC1B7B6_OFFSET UNITYSDK_OFFSET(0x19135460)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E59C07E3B62C9818_OFFSET UNITYSDK_OFFSET(0x19126DA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E59D2D43D96EB81A_OFFSET UNITYSDK_OFFSET(0x191315E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E5AFCBF499BC4F72_OFFSET UNITYSDK_OFFSET(0x1912A3C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E5F8CC753ABAFFD9_OFFSET UNITYSDK_OFFSET(0x19122BE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E63769BA9E93D433_OFFSET UNITYSDK_OFFSET(0x19134FF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E6594F92F4AC63DA_OFFSET UNITYSDK_OFFSET(0x19122590)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E6AFB8509C288B08_OFFSET UNITYSDK_OFFSET(0x19130DB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E6F81E5F9C289294_OFFSET UNITYSDK_OFFSET(0x19123C10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E7821C362531FE11_OFFSET UNITYSDK_OFFSET(0x19133C70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E7A30516BFC0A1CD_OFFSET UNITYSDK_OFFSET(0x191252B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E800615ECB1BA35E_OFFSET UNITYSDK_OFFSET(0x191337F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E80A4C6CA2B81DDB_OFFSET UNITYSDK_OFFSET(0x1912B320)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E82E109EE0D85332_OFFSET UNITYSDK_OFFSET(0x19135F10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E8479B97CFE35CE5_OFFSET UNITYSDK_OFFSET(0x191348E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E866F59F087C00B3_OFFSET UNITYSDK_OFFSET(0x19122AA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E885E7550EB5207A_OFFSET UNITYSDK_OFFSET(0x191338E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E8F377C24C95608E_OFFSET UNITYSDK_OFFSET(0x19120970)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E9065AD68BD7D7C0_OFFSET UNITYSDK_OFFSET(0x19123D90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E964710103FDF904_OFFSET UNITYSDK_OFFSET(0x1912F040)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E96A51B133AFBFE0_OFFSET UNITYSDK_OFFSET(0x19129E10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E991263612C321AF_OFFSET UNITYSDK_OFFSET(0x1912F3E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_E9DC14F9621A59E4_OFFSET UNITYSDK_OFFSET(0x191291C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_EA1E9608873B75D8_OFFSET UNITYSDK_OFFSET(0x1912A0B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_EA613C65A66BCC03_OFFSET UNITYSDK_OFFSET(0x1912F770)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_EA98BBEAB075793E_OFFSET UNITYSDK_OFFSET(0x19138790)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_EAA8F0E3EB307030_OFFSET UNITYSDK_OFFSET(0x1912CFC0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_EAD7C0D20981177C_OFFSET UNITYSDK_OFFSET(0x19136B90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_EB21E3EC4C93DFBD_OFFSET UNITYSDK_OFFSET(0x19124210)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_EB9C8F9ED3CCACE7_OFFSET UNITYSDK_OFFSET(0x1912E440)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_EB9CCDF723B4CA57_OFFSET UNITYSDK_OFFSET(0x19122990)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_EBB98FBDDDDD5CB7_OFFSET UNITYSDK_OFFSET(0x19123100)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_EC4AF73D73835307_OFFSET UNITYSDK_OFFSET(0x191302A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_EE2AE789D1AEC731_OFFSET UNITYSDK_OFFSET(0x19120A40)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_EF5E6C6439BBAC19_OFFSET UNITYSDK_OFFSET(0x19124BB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_EFF7DFA5507A0236_OFFSET UNITYSDK_OFFSET(0x19122B70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F000834916529761_OFFSET UNITYSDK_OFFSET(0x19129E90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F0111A82581504D7_OFFSET UNITYSDK_OFFSET(0x19133100)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F0396A4228C44A73_OFFSET UNITYSDK_OFFSET(0x191347E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F07765B7BCF3CD0A_OFFSET UNITYSDK_OFFSET(0x19126A90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F09386DE332C149E_OFFSET UNITYSDK_OFFSET(0x19122CA0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F0A6AE2729DAAD4D_OFFSET UNITYSDK_OFFSET(0x191368E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F0D68D6622D7315E_OFFSET UNITYSDK_OFFSET(0x19133680)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F0EC09DF0E132AEE_OFFSET UNITYSDK_OFFSET(0x1912E240)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F13890949E88D1F0_OFFSET UNITYSDK_OFFSET(0x1912DCF0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F13E56DA12EC77EC_OFFSET UNITYSDK_OFFSET(0x191253C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F1483524DA1879F5_OFFSET UNITYSDK_OFFSET(0x1912BD90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F1BEEC778192E08E_OFFSET UNITYSDK_OFFSET(0x19133F10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F23C3B06AAABB469_OFFSET UNITYSDK_OFFSET(0x19138150)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F245077DFD768DE9_OFFSET UNITYSDK_OFFSET(0x19127B50)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F2523DB02C3430ED_OFFSET UNITYSDK_OFFSET(0x1912B100)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F29816FAA772FD11_OFFSET UNITYSDK_OFFSET(0x1912C2A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F2DEADD8E204B566_OFFSET UNITYSDK_OFFSET(0x1912F0C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F3352E2A01C4383A_OFFSET UNITYSDK_OFFSET(0x1911F880)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F3B37110DB4B53D2_OFFSET UNITYSDK_OFFSET(0x19133610)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F3D0C645FF75CB67_OFFSET UNITYSDK_OFFSET(0x191248B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F4FBC387EC486E30_OFFSET UNITYSDK_OFFSET(0x19138DE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F53FB712899CF431_OFFSET UNITYSDK_OFFSET(0x19126170)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F5A9A207FC8052D4_OFFSET UNITYSDK_OFFSET(0x19135F90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F5AD1D6CD9F51981_OFFSET UNITYSDK_OFFSET(0x19122C70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F66D18E68EE7182B_OFFSET UNITYSDK_OFFSET(0x1912A140)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F6A85C263449ACCE_OFFSET UNITYSDK_OFFSET(0x1912F5E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F6DFA4DA1176AEDF_OFFSET UNITYSDK_OFFSET(0x19134940)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F7272A96584EC90C_OFFSET UNITYSDK_OFFSET(0x19133280)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F80B713B7FA80917_OFFSET UNITYSDK_OFFSET(0x1912BE10)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F82011C816E25E80_OFFSET UNITYSDK_OFFSET(0x19134440)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F87975CFF75EC062_OFFSET UNITYSDK_OFFSET(0x1912CF70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F890D78AB73D5FC6_OFFSET UNITYSDK_OFFSET(0x191318E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F8D14252F72DA6DB_OFFSET UNITYSDK_OFFSET(0x19122E70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F8E2195107602B30_OFFSET UNITYSDK_OFFSET(0x1912E9C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F8E2ADF37105DA9A_OFFSET UNITYSDK_OFFSET(0x19131DE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F93483D56EC10F30_OFFSET UNITYSDK_OFFSET(0x191367A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F98BBDFB552FBF33_OFFSET UNITYSDK_OFFSET(0x19134FE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F9AB6F7FD3E51E47_OFFSET UNITYSDK_OFFSET(0x1912D340)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_F9E147F9190ABD51_OFFSET UNITYSDK_OFFSET(0x19133C30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA00819225E3FDF4_OFFSET UNITYSDK_OFFSET(0x19136350)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA06B9E1F3B2CF4C_OFFSET UNITYSDK_OFFSET(0x19131CE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA1786949C83A3DF_OFFSET UNITYSDK_OFFSET(0x19123030)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA2470FCAD1AE974_OFFSET UNITYSDK_OFFSET(0x1912F2D0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA3252A402A3E02F_OFFSET UNITYSDK_OFFSET(0x19122FE0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA4F114B43F5B80E_OFFSET UNITYSDK_OFFSET(0x19135860)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA54A119BF00355C_OFFSET UNITYSDK_OFFSET(0x191229F0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA80997F3C6B3A99_OFFSET UNITYSDK_OFFSET(0x191339C0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA9C5B477D5B12A4_OFFSET UNITYSDK_OFFSET(0x19134870)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FAAD06AEF4A76784_OFFSET UNITYSDK_OFFSET(0x1912E340)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FAB5E677D53896FC_OFFSET UNITYSDK_OFFSET(0x191259E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FC2CCCCC4E870288_OFFSET UNITYSDK_OFFSET(0x19134050)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FCFF1FB7DF9695C9_OFFSET UNITYSDK_OFFSET(0x19135B60)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FD05D5B454F327BA_OFFSET UNITYSDK_OFFSET(0x1912A750)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FD1ECB8003738FD1_OFFSET UNITYSDK_OFFSET(0x1911F8B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FD5E0372C97C6222_OFFSET UNITYSDK_OFFSET(0x19132C70)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FD6152C5DE8F0A42_OFFSET UNITYSDK_OFFSET(0x19135C90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FDAB811E25C76827_OFFSET UNITYSDK_OFFSET(0x191246B0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FDB4C2056A48E1D4_OFFSET UNITYSDK_OFFSET(0x19122BB0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FE24372A6265A3B6_OFFSET UNITYSDK_OFFSET(0x1912DF90)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FE50D68C42285EFE_OFFSET UNITYSDK_OFFSET(0x1911FF80)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FE98CF8022B63278_OFFSET UNITYSDK_OFFSET(0x191327E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FE9F70C8923BA6F9_OFFSET UNITYSDK_OFFSET(0x1912F800)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FED3ADB01529078B_OFFSET UNITYSDK_OFFSET(0x191328E0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FEFB09D281EBD862_OFFSET UNITYSDK_OFFSET(0x19130930)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FF188C08A8679F47_OFFSET UNITYSDK_OFFSET(0x19136C30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FF23B4683ED9F561_OFFSET UNITYSDK_OFFSET(0x19130C30)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FF6A4BB9EDAF8EBC_OFFSET UNITYSDK_OFFSET(0x191271A0)
#define CLASS_1_9EB2CB86795DEEF1_METHOD_1_FFBA5991C2165AAC_OFFSET UNITYSDK_OFFSET(0x19126D20)
#define CLASS_1_9EB2CB86795DEEF1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19138FE0)

inline static constexpr unsigned int Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex = 10169;

class Class_1_9EB2CB86795DEEF1 : public ::System::Object
{
public:
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::ByCompareItemPair*>** StaticGet_Field_1_0()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::ByCompareItemPair*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x34C0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::UInt16>** StaticGet_Field_1_1()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x34C8);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x34D0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::ValueEvaluatorConfig*>** StaticGet_Field_1_3()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::ValueEvaluatorConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x34D8);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FinishActionConfig*>** StaticGet_Field_1_4()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FinishActionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x34E0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FixPoint>** StaticGet_Field_1_5()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x34E8);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::PredicateConfig*>** StaticGet_Field_1_6()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::PredicateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x34F0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::MVector3>** StaticGet_Field_1_7()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::MVector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x34F8);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Int16>** StaticGet_Field_1_8()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Int16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3500);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::MissionItemConfig*>** StaticGet_Field_1_9()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::MissionItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3508);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::Vector3CurveFrame>** StaticGet_Field_1_10()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::Vector3CurveFrame>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3510);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::MColor>** StaticGet_Field_1_11()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::MColor>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3518);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AssistWayPointConditionPack*>** StaticGet_Field_1_12()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AssistWayPointConditionPack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3520);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StageVolumeComponentData*>** StaticGet_Field_1_13()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StageVolumeComponentData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3528);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::JsonEnum*>** StaticGet_Field_1_14()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::JsonEnum*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3530);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::IslandStateConfig*>** StaticGet_Field_1_15()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::IslandStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3538);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StageGrassOverrideConfig*>** StaticGet_Field_1_16()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StageGrassOverrideConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3540);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FetchAdvMonsterData*>** StaticGet_Field_1_17()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FetchAdvMonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3548);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::DynamicString*>** StaticGet_Field_1_18()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3550);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FetchAdvNPCData*>** StaticGet_Field_1_19()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FetchAdvNPCData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3558);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FetchAdvPropData*>** StaticGet_Field_1_20()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FetchAdvPropData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3560);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Int64>** StaticGet_Field_1_21()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3568);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StageIslandConfig*>** StaticGet_Field_1_22()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StageIslandConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3570);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StageIslandHLODConfig*>** StaticGet_Field_1_23()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StageIslandHLODConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3578);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Byte>** StaticGet_Field_1_24()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3580);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::Struct_2_331ACDD60B60D2E3>** StaticGet_Field_1_25()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::Struct_2_331ACDD60B60D2E3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3588);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::BlockNodeConfig*>** StaticGet_Field_1_26()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::BlockNodeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3590);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Double>** StaticGet_Field_1_27()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3598);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AssistWayPointCondition*>** StaticGet_Field_1_28()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AssistWayPointCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x35A0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Boolean>** StaticGet_Field_1_29()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x35A8);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StreamingBlockVolumeComponentData*>** StaticGet_Field_1_30()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StreamingBlockVolumeComponentData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x35B0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::PckPatchPlatform*>** StaticGet_Field_1_31()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::PckPatchPlatform*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x35B8);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::MissionWaypointDataPack*>** StaticGet_Field_1_32()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::MissionWaypointDataPack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x35C0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::IslandStateSavedValueCondition*>** StaticGet_Field_1_33()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::IslandStateSavedValueCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x35C8);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AssistWayPoint*>** StaticGet_Field_1_34()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AssistWayPoint*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x35D0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::MissionCustomValueRewardConfig*>** StaticGet_Field_1_35()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::MissionCustomValueRewardConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x35D8);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::Struct_2_0ACB88BD1D804FF7>** StaticGet_Field_1_36()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::Struct_2_0ACB88BD1D804FF7>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x35E0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::SubMissionRelationConfig*>** StaticGet_Field_1_37()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::SubMissionRelationConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x35E8);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::TargetEvaluator*>** StaticGet_Field_1_38()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::TargetEvaluator*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x35F0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AssistWayPointFastComplete*>** StaticGet_Field_1_39()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AssistWayPointFastComplete*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x35F8);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::SubStageMetaData*>** StaticGet_Field_1_40()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::SubStageMetaData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3600);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FloorCustomValueConfig*>** StaticGet_Field_1_41()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FloorCustomValueConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3608);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::EffectModifyData*>** StaticGet_Field_1_42()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::EffectModifyData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3610);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::TargetSeqOperation*>** StaticGet_Field_1_43()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::TargetSeqOperation*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3618);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AssistWayPointPack*>** StaticGet_Field_1_44()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AssistWayPointPack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3620);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::PropDestructItem*>** StaticGet_Field_1_45()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::PropDestructItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3628);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::MissionCustomValue*>** StaticGet_Field_1_46()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::MissionCustomValue*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3630);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::TriggerEffect*>** StaticGet_Field_1_47()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::TriggerEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3638);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::PckFileList*>** StaticGet_Field_1_48()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::PckFileList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3640);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::HoyoTag*>** StaticGet_Field_1_49()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::HoyoTag*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3648);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::FloatCurveFrame>** StaticGet_Field_1_50()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::FloatCurveFrame>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3650);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::SubMissionInfoConfig*>** StaticGet_Field_1_51()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::SubMissionInfoConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3658);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FixVec2>** StaticGet_Field_1_52()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::FixVec2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3660);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::Client::TextID>** StaticGet_Field_1_53()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3668);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::MissionCustomValueGroupConfig*>** StaticGet_Field_1_54()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::MissionCustomValueGroupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3670);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::DynamicFloat*>** StaticGet_Field_1_55()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::DynamicFloat*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3678);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::MVector2>** StaticGet_Field_1_56()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::MVector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3680);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::ValuePostProcessConfig*>** StaticGet_Field_1_57()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::ValuePostProcessConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3688);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Int32>** StaticGet_Field_1_58()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3690);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AssistWayPointLittleGameCondition*>** StaticGet_Field_1_59()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AssistWayPointLittleGameCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x3698);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::PropStateItem*>** StaticGet_Field_1_60()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::PropStateItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x36A0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StreamingSceneScaleData*>** StaticGet_Field_1_61()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StreamingSceneScaleData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x36A8);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StageVolumeConfig*>** StaticGet_Field_1_62()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::StageVolumeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x36B0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::EffectConfig*>** StaticGet_Field_1_63()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::EffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x36B8);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::GroupPropertyConfig*>** StaticGet_Field_1_64()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::GroupPropertyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x36C0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::UInt32>** StaticGet_Field_1_65()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x36C8);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Single>** StaticGet_Field_1_66()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x36D0);
	}
	static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::Vector4CurveFrame>** StaticGet_Field_1_67()
	{
		return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::Vector4CurveFrame>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EB2CB86795DEEF1_TypeDefinitionIndex)->GetStaticField(0x36D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_A04C200D1E714A22(::SimpleJSON::JSONNode* a1, ::System::SByte& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::SByte&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A04C200D1E714A22_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F3352E2A01C4383A(::SimpleJSON::JSONNode* a1, ::System::Byte& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F3352E2A01C4383A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD1ECB8003738FD1(::SimpleJSON::JSONNode* a1, ::System::Int16& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FD1ECB8003738FD1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C0F5CEE301445EC5(::SimpleJSON::JSONNode* a1, ::System::UInt16& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt16&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C0F5CEE301445EC5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0BCFB35AC5D3C094(::SimpleJSON::JSONNode* a1, ::System::Int64& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0BCFB35AC5D3C094_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B6FD100C464EB396(::SimpleJSON::JSONNode* a1, ::System::UInt64& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B6FD100C464EB396_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_52E055324D60B9F5(::SimpleJSON::JSONNode* a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_52E055324D60B9F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9790BD1B475E2CE(::SimpleJSON::JSONNode* a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B9790BD1B475E2CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_673FC7775A5BF1AF(::SimpleJSON::JSONNode* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_673FC7775A5BF1AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7A23EC28D7FD16D2(::SimpleJSON::JSONNode* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7A23EC28D7FD16D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9B9BA2C5852E5BE0(::SimpleJSON::JSONNode* a1, ::System::Double& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9B9BA2C5852E5BE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB1AC47CD927F79B(::SimpleJSON::JSONNode* a1, ::System::String*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_AB1AC47CD927F79B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6A364CEEF299CA0C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixVec2& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixVec2&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6A364CEEF299CA0C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A77B73CE6EB1A548(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixVec3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixVec3&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A77B73CE6EB1A548_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3F94AD3D01AA8E5C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IVec2& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IVec2&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3F94AD3D01AA8E5C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA14FCFD66B422A9(::SimpleJSON::JSONNode* a1, ::RPG::IVec3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::IVec3&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_AA14FCFD66B422A9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A2815517E087C7F2(::SimpleJSON::JSONNode* a1, ::RPG::MVector3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A2815517E087C7F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE50D68C42285EFE(::SimpleJSON::JSONNode* a1, ::RPG::MVector2& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FE50D68C42285EFE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E504A6E2104B8F65(::SimpleJSON::JSONNode* a1, ::Struct_2_0ACB88BD1D804FF7& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Struct_2_0ACB88BD1D804FF7&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E504A6E2104B8F65_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5E5F6897ACF65860(::SimpleJSON::JSONNode* a1, ::Struct_2_331ACDD60B60D2E3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Struct_2_331ACDD60B60D2E3&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5E5F6897ACF65860_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6E6762D2FE592E8(::SimpleJSON::JSONNode* a1, ::RPG::MColor& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MColor&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A6E6762D2FE592E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CB8DAD5C482558E8(::SimpleJSON::JSONNode* a1, ::RPG::MRect& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MRect&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CB8DAD5C482558E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E53493A35EA2773F(::SimpleJSON::JSONNode* a1, ::RPG::FloatCurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::FloatCurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E53493A35EA2773F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3EE3A103C638C4B1(::SimpleJSON::JSONNode* a1, ::RPG::Vector3CurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector3CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3EE3A103C638C4B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E8F377C24C95608E(::SimpleJSON::JSONNode* a1, ::RPG::Vector4CurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector4CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E8F377C24C95608E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EE2AE789D1AEC731(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicString*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_EE2AE789D1AEC731_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_92397710B9868795(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicBool*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_92397710B9868795_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E1F35C211CB65375(::SimpleJSON::JSONNode* a1, ::Class_1_1C30CE192ABE4C54*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_1_1C30CE192ABE4C54*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E1F35C211CB65375_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5340986F924D72A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5340986F924D72A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B8B3FE750153E10(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::JsonEnum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::JsonEnum*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1B8B3FE750153E10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_396D35D441E45045(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_396D35D441E45045_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5718463C54690C6D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FilePath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FilePath*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5718463C54690C6D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7658EFDE9102BF71(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SurfaceType& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SurfaceType&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7658EFDE9102BF71_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_245A8B7F14CA4855(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ThreadTaskType& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ThreadTaskType&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_245A8B7F14CA4855_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_02CB0385A8A7402F(::SimpleJSON::JSONNode* a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_02CB0385A8A7402F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_662BE8693D054C24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FormatString& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FormatString&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_662BE8693D054C24_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C4B7DF62BE9B570(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StringHash& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StringHash&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0C4B7DF62BE9B570_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_20B90ADDCD2627F2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameEvent*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameEvent*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_20B90ADDCD2627F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D7D9009A7917AC7A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FiveDimDynamicVar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FiveDimDynamicVar*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D7D9009A7917AC7A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BE4C6F65C0B2591E(::SimpleJSON::JSONNode* a1, ::System::SByte& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::SByte&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BE4C6F65C0B2591E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_043F6A732A160196(::SimpleJSON::JSONNode* a1, ::System::Byte& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_043F6A732A160196_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7A22549F4C62F6E5(::SimpleJSON::JSONNode* a1, ::System::Int16& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7A22549F4C62F6E5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D8D9463596BD4539(::SimpleJSON::JSONNode* a1, ::System::UInt16& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt16&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D8D9463596BD4539_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7FDDB3FCC47B484B(::SimpleJSON::JSONNode* a1, ::System::Int64& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7FDDB3FCC47B484B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6AEB242F7EB08981(::SimpleJSON::JSONNode* a1, ::System::UInt64& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6AEB242F7EB08981_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA6567291AE803E9(::SimpleJSON::JSONNode* a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BA6567291AE803E9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_99AA193F1E9E5A59(::SimpleJSON::JSONNode* a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_99AA193F1E9E5A59_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5C837AEB22914A03(::SimpleJSON::JSONNode* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5C837AEB22914A03_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_300E08BCF7901B0E(::SimpleJSON::JSONNode* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_300E08BCF7901B0E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E6EBEA4B7B1299C(::SimpleJSON::JSONNode* a1, ::System::Double& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6E6EBEA4B7B1299C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_37D5C66B0A5C6049(::SimpleJSON::JSONNode* a1, ::System::String*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_37D5C66B0A5C6049_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0EA83C0F2A9B254E(::SimpleJSON::JSONNode* a1, ::RPG::MVector3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0EA83C0F2A9B254E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_65EA9530AEEFB3CC(::SimpleJSON::JSONNode* a1, ::RPG::MVector2& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_65EA9530AEEFB3CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85C56F115AAC3000(::SimpleJSON::JSONNode* a1, ::Struct_2_0ACB88BD1D804FF7& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Struct_2_0ACB88BD1D804FF7&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_85C56F115AAC3000_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E6594F92F4AC63DA(::SimpleJSON::JSONNode* a1, ::Struct_2_331ACDD60B60D2E3& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Struct_2_331ACDD60B60D2E3&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E6594F92F4AC63DA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3BDD512DAF1676BB(::SimpleJSON::JSONNode* a1, ::RPG::FloatCurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::FloatCurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3BDD512DAF1676BB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C228CC169C069A8C(::SimpleJSON::JSONNode* a1, ::RPG::Vector3CurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector3CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C228CC169C069A8C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BC2EDD050B3543D1(::SimpleJSON::JSONNode* a1, ::RPG::Vector4CurveFrame& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector4CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BC2EDD050B3543D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F9167D7B37E5579(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicString*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7F9167D7B37E5579_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A3374554A8EB5E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicBool*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9A3374554A8EB5E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A3D6D3F00CF0694(::SimpleJSON::JSONNode* a1, ::Class_1_1C30CE192ABE4C54*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_1_1C30CE192ABE4C54*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9A3D6D3F00CF0694_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B2C66C0AF3542A3D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B2C66C0AF3542A3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5150AD26D75D36B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5150AD26D75D36B9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_554845972EA49FE4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FilePath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FilePath*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_554845972EA49FE4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6090DA95753B00A5(::SimpleJSON::JSONNode* a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6090DA95753B00A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1955E9206A6AB249(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FormatString& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FormatString&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1955E9206A6AB249_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_82F38CF83D1B9222(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StringHash& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StringHash&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_82F38CF83D1B9222_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BB3B5C52BE4BB917(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameEvent*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameEvent*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BB3B5C52BE4BB917_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB9CCDF723B4CA57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::JsonEnum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::JsonEnum*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_EB9CCDF723B4CA57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA54A119BF00355C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FiveDimDynamicVar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FiveDimDynamicVar*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA54A119BF00355C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F153022D175766E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckPatchPlatform*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckPatchPlatform*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F153022D175766E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_81EA04715C397398(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckFileList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckFileList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_81EA04715C397398_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D9F68BD30B069D8A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckPatchConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckPatchConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D9F68BD30B069D8A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9D631EDC86B1199B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicStringList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicStringList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9D631EDC86B1199B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_65534FC1F29D35ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtCollision2DShapeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtCollision2DShapeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_65534FC1F29D35ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8C26653201E78534(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtPointShapeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtPointShapeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8C26653201E78534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E866F59F087C00B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtCircleShapeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtCircleShapeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E866F59F087C00B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E4E378BC5950825C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtRectShapeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtRectShapeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E4E378BC5950825C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_59DC15CD3AE88666(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtArcShapeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtArcShapeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_59DC15CD3AE88666_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4B634E3F03498C88(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomValueConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomValueConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4B634E3F03498C88_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4E5A3A43FA0B1B4B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomFloatConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomFloatConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4E5A3A43FA0B1B4B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A49EDBC7812C3FBB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomBoolConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomBoolConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A49EDBC7812C3FBB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A222DBB85C0F3F2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomStringConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomStringConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8A222DBB85C0F3F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EFF7DFA5507A0236(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorTargetAgentConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorTargetAgentConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_EFF7DFA5507A0236_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8C4C9A7838D8F93F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupPropertyConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupPropertyConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8C4C9A7838D8F93F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FDB4C2056A48E1D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::HoyoTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::HoyoTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FDB4C2056A48E1D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4894B1674120753E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::HoyoTagContainer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::HoyoTagContainer*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4894B1674120753E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_178DEEA9F0FE9C05(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionItemConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionItemConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_178DEEA9F0FE9C05_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E5F8CC753ABAFFD9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E5F8CC753ABAFFD9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E6367CC29A92569(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueRewardConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueRewardConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2E6367CC29A92569_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5529425F9B459186(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueTuple*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueTuple*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5529425F9B459186_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5380C536DF6DC384(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueGroupConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueGroupConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5380C536DF6DC384_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_86A26A6D86D8E7B2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueGroupConfigPack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueGroupConfigPack*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_86A26A6D86D8E7B2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E29C1DF3E7B6CE34(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E29C1DF3E7B6CE34_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5693CC7851C09A3E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointDistanceCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointDistanceCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5693CC7851C09A3E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F5AD1D6CD9F51981(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropStateCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropStateCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F5AD1D6CD9F51981_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F09386DE332C149E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFCVCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFCVCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F09386DE332C149E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F434A0C0ACE8A81(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F434A0C0ACE8A81_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8E2251DA07BECCFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8E2251DA07BECCFE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64F964446033A637(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointTimelineStateCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointTimelineStateCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_64F964446033A637_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_050F0D8CA83D07BD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_050F0D8CA83D07BD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1510425851A84E80(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointConditionPack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointConditionPack*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1510425851A84E80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C54075E3A80F2D28(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointConditionMain*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointConditionMain*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C54075E3A80F2D28_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DCD0EDFC757D8480(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFastComplete*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFastComplete*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DCD0EDFC757D8480_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_038B82ACDF5D4A2A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPoint*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPoint*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_038B82ACDF5D4A2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1C557FB2898B1AE5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointLittleGameCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointLittleGameCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1C557FB2898B1AE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D923F32EB5F4A21C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPack*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D923F32EB5F4A21C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1722F185FC5F3B87(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::CheckFloorSavedValueConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::CheckFloorSavedValueConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1722F185FC5F3B87_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_21DD92D657A724CF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionWaypointDataPack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionWaypointDataPack*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_21DD92D657A724CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_72A4132128CD9DEF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FinishActionConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FinishActionConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_72A4132128CD9DEF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_51F1DB3F56DA5B87(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubMissionInfoConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubMissionInfoConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_51F1DB3F56DA5B87_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_039C84148CD98C70(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubMissionRelationConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubMissionRelationConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_039C84148CD98C70_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D21634B69F25BFDE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MainMissionInfoConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MainMissionInfoConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D21634B69F25BFDE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B073E037C434AABC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MainMissionPartialInfoConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MainMissionPartialInfoConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B073E037C434AABC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AEEDB1D39A556CC4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BlockNodeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BlockNodeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_AEEDB1D39A556CC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F8D14252F72DA6DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F8D14252F72DA6DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F1CF4239D5E1E54(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingGroupVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F1CF4239D5E1E54_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5B4A21808B3EC035(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingBlockVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingBlockVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5B4A21808B3EC035_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4FC3ADE024369918(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4FC3ADE024369918_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_716A8AB565621988(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingRatioVolumeData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingRatioVolumeData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_716A8AB565621988_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D5132D5368EDEF70(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingForceHLODVolumeData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingForceHLODVolumeData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D5132D5368EDEF70_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_87E725F3B85F5D40(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingLightVolumeData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingLightVolumeData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_87E725F3B85F5D40_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ABCF25C23CA18A7C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_ABCF25C23CA18A7C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DE6CC66119BC766D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageGrassOverrideConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageGrassOverrideConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DE6CC66119BC766D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA3252A402A3E02F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageIslandConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageIslandConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA3252A402A3E02F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6179AE9BAC061498(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageIslandHLODConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageIslandHLODConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6179AE9BAC061498_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79685B45C3BBF906(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_79685B45C3BBF906_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_56365CCF72A5195A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateConditionSet*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateConditionSet*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_56365CCF72A5195A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_02928B39B9B9BC84(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateSavedValueCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateSavedValueCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_02928B39B9B9BC84_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA1786949C83A3DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVersionData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVersionData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA1786949C83A3DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1DB2418A411E2330(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageBaseConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageBaseConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1DB2418A411E2330_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B8B411B019A35AAC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubStageData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubStageData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B8B411B019A35AAC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7048059C0DA33B1C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7048059C0DA33B1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B4C94B3A11258E55(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubStageMetaData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubStageMetaData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B4C94B3A11258E55_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_182D027A9B96A9FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneScaleData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneScaleData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_182D027A9B96A9FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_896618A933D567BD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_896618A933D567BD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EBB98FBDDDDD5CB7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::OfflineCullingConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::OfflineCullingConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_EBB98FBDDDDD5CB7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D(::SimpleJSON::JSONNode* a1, ::Class_4_6C451618FA553762*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C451618FA553762*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_1(::SimpleJSON::JSONNode* a1, ::Class_4_6C451618FA553762_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C451618FA553762_1*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_2(::SimpleJSON::JSONNode* a1, ::Class_4_6C451618FA553762_2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C451618FA553762_2*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_3A31B1679E500164*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_3A31B1679E500164*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_3(::SimpleJSON::JSONNode* a1, ::Class_4_6C451618FA553762_3*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C451618FA553762_3*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_4(::SimpleJSON::JSONNode* a1, ::Class_4_6C451618FA553762_4*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C451618FA553762_4*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_1(::SimpleJSON::JSONNode* a1, ::Class_4_59EBCD318C631192*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_59EBCD318C631192*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A06717622871DDC(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8A06717622871DDC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_459CD8E636E37249(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_459CD8E636E37249_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_28D2DD536D808902(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareLapCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_28D2DD536D808902_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2B15F09C7B357520(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2B15F09C7B357520_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A52587B8A8243915(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A52587B8A8243915_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D35AF3F290D52EAD(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D35AF3F290D52EAD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61BF394D4ACB1881(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_61BF394D4ACB1881_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4C035A21FA0D37FC(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesLevelUp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesLevelUp*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4C035A21FA0D37FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6CB4056184BEB819(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6CB4056184BEB819_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6A1D1B0788BB589(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A6A1D1B0788BB589_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_184A63D00468D7B1(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_184A63D00468D7B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3C78C874B0CE6B84(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInSpineAnim*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInSpineAnim*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3C78C874B0CE6B84_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0590F65DE2FCE598(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInMove*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInMove*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0590F65DE2FCE598_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5DB5507D9E145455(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInAnimZone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInAnimZone*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5DB5507D9E145455_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00060AD90B27E629(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_00060AD90B27E629_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E6F81E5F9C289294(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamOnlineFirst*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamOnlineFirst*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E6F81E5F9C289294_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_486D043FD71859FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamMovePhaseTalk*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamMovePhaseTalk*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_486D043FD71859FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C4BB22B957F00C7C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamActionPhaseTalk*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamActionPhaseTalk*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C4BB22B957F00C7C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E9065AD68BD7D7C0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalAction*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E9065AD68BD7D7C0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7BDD93835A513158(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalActionSwitch*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalActionSwitch*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7BDD93835A513158_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CCD5966F7007DCB3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CCD5966F7007DCB3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B89C7DD843AED29C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamAnchorContinous*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamAnchorContinous*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B89C7DD843AED29C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1169DFD3F8C43F04(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1169DFD3F8C43F04_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E15A2D0D26992B61(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerInVisionZone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerInVisionZone*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E15A2D0D26992B61_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D1B43F3789D57DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPerceiveValueReachMax*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3D1B43F3789D57DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6A8236C8C08CBC8D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerHide*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerHide*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6A8236C8C08CBC8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7AD276F2CF1E156A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByInCustomZone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByInCustomZone*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7AD276F2CF1E156A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB21E3EC4C93DFBD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInAttackRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInAttackRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_EB21E3EC4C93DFBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5FFD3A3F2B19F43E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAlertValueInRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAlertValueInRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5FFD3A3F2B19F43E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A2EAB64127414EA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveObstacle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveObstacle*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8A2EAB64127414EA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7B7EB4D6E5D3DD9A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNPCStatus*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNPCStatus*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7B7EB4D6E5D3DD9A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C661BB51A53A13CB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C661BB51A53A13CB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_04C6085F16329608(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCarryMazebuff*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCarryMazebuff*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_04C6085F16329608_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E52F045E9752D636(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAIVariableInt*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAIVariableInt*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E52F045E9752D636_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_57E05A80DBAB4AFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_57E05A80DBAB4AFD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A6A05E562D233B2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAlertLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAlertLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2A6A05E562D233B2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3471F89CF599B716(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByContainEntityTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByContainEntityTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3471F89CF599B716_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33DDE9D21AB46FFB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAIStatus*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAIStatus*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_33DDE9D21AB46FFB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FDAB811E25C76827(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableBool*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FDAB811E25C76827_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B0960E81C9BBE571(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B0960E81C9BBE571_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_873F92A00715E64B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_BySkillInCD*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_BySkillInCD*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_873F92A00715E64B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_625DEA9D3CC5F326(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_625DEA9D3CC5F326_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F3D0C645FF75CB67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistToGuardPosition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistToGuardPosition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F3D0C645FF75CB67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CCCDCB399DE10870(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAlertLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAlertLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CCCDCB399DE10870_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CCF6D5A6446E2EF2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasPatrolPath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasPatrolPath*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CCF6D5A6446E2EF2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9132426B0F79F995(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableBool*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9132426B0F79F995_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9DBA94878DE6128F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9DBA94878DE6128F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4FA1BA116FF21770(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableString*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4FA1BA116FF21770_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EF5E6C6439BBAC19(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_EF5E6C6439BBAC19_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B19FA035364497D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackAngle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackAngle*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B19FA035364497D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A52784F05E68E49E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAIHangUp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAIHangUp*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A52784F05E68E49E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4E696CD22BA5B8A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4E696CD22BA5B8A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A7939EAC42D640D3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A7939EAC42D640D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CA8C2F819098DAAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasBornSmartObject*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasBornSmartObject*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CA8C2F819098DAAE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CB779A694868211(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAbnormalState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAbnormalState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9CB779A694868211_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E50808850A26DBBD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E50808850A26DBBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CD82A4A1A9E208FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByContainAbnormalState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByContainAbnormalState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CD82A4A1A9E208FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2B79E0AA305CE3CB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAIStatus*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAIStatus*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2B79E0AA305CE3CB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D003AD597903531(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByOnHit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByOnHit*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7D003AD597903531_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3C3E34A7A0E4D843(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByFoundSmartObject*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByFoundSmartObject*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3C3E34A7A0E4D843_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC8D0318805080FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByForceExitCombat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByForceExitCombat*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_AC8D0318805080FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BF4700FE89A99971(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByEnterCombat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByEnterCombat*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BF4700FE89A99971_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E7A30516BFC0A1CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByExitCombat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByExitCombat*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E7A30516BFC0A1CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5A8C865EDB8BD833(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectForUI*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectForUI*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5A8C865EDB8BD833_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F13E56DA12EC77EC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRebuiltSummonUnit*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F13E56DA12EC77EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7DB873051A90E30E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySwitchMascotCanShootTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7DB873051A90E30E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_39CDDFA912B9849B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAdvCharacterLogicState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAdvCharacterLogicState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_39CDDFA912B9849B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_15021AFFE975D43A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropLockable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropLockable*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_15021AFFE975D43A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E19E0AE201616380(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E19E0AE201616380_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7C211C6422B8FA39(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetHitBoxActive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetHitBoxActive*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7C211C6422B8FA39_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7012EFF432BE8712(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7012EFF432BE8712_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_43E23BDDD5C83000(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_43E23BDDD5C83000_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8C7C939E8BF2D4B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInMotionState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInMotionState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8C7C939E8BF2D4B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8DE897A91EF0094C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMotionHitColliderWall*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8DE897A91EF0094C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8508450C153DF895(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8508450C153DF895_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2759A13DC9C2D40A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCheckMoveInput*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCheckMoveInput*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2759A13DC9C2D40A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC0D5604183B5F45(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInAnimZone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInAnimZone*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CC0D5604183B5F45_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_477028AC0311ED49(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareProjectileLifetime*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareProjectileLifetime*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_477028AC0311ED49_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FAB5E677D53896FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFearCharacterCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFearCharacterCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FAB5E677D53896FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C79499F9AD99E0A1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C79499F9AD99E0A1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8576A03A76CE751(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSummonUnitCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSummonUnitCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A8576A03A76CE751_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3553E743DC51C48C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDynamicValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDynamicValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3553E743DC51C48C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D189294F2EA7E7F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterDamageType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterDamageType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D189294F2EA7E7F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4F7A88A8E1EA750A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveAbilityTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveAbilityTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4F7A88A8E1EA750A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_045B01F1DD41A8CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAllowInstantKill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAllowInstantKill*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_045B01F1DD41A8CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_86E641EEA847AD5F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterSpeed*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterSpeed*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_86E641EEA847AD5F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5C35EF84C1B12BC5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPlayerMoveInput*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPlayerMoveInput*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5C35EF84C1B12BC5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_318B25549DD533EC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::EffectModifyData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::EffectModifyData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_318B25549DD533EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5925264D39FFA1E4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5925264D39FFA1E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D91FC67106E89B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::OverrideMonoEffectConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::OverrideMonoEffectConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3D91FC67106E89B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9269C39F3FDD0DFC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::EffectConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::EffectConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9269C39F3FDD0DFC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D9C43A6220BEFA52(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D9C43A6220BEFA52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B3A49284EEBE38F2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGameEntityNotCreated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGameEntityNotCreated*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B3A49284EEBE38F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85510344A93E1E50(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_85510344A93E1E50_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01B8845E08832E78(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSubMissionState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSubMissionState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_01B8845E08832E78_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2738F0D4D8390883(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMainMissionState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMainMissionState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2738F0D4D8390883_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_883E67E69B325643(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_883E67E69B325643_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9ADB6472A9AE825(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B9ADB6472A9AE825_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_746919CBC165CADA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_746919CBC165CADA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F4D8B096535B81A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveUniqueNameEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveUniqueNameEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F4D8B096535B81A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79F23AAAB9756533(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionCustomValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionCustomValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_79F23AAAB9756533_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F53FB712899CF431(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFSVwithGP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFSVwithGP*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F53FB712899CF431_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CAB8E1BF5765FA2D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGPwithGP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGPwithGP*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CAB8E1BF5765FA2D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DB0AAE35BAE3F66A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByShowChallengeSelectPage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByShowChallengeSelectPage*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DB0AAE35BAE3F66A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_76288FAF31264CB0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropShowInfoId*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropShowInfoId*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_76288FAF31264CB0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF66E8547654C5C8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMainMissionFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMainMissionFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CF66E8547654C5C8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_72E8150CBAF48F49(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMechanismBarPhase*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMechanismBarPhase*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_72E8150CBAF48F49_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E4F75275D4056188(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMuseumProjectorThemeNum*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E4F75275D4056188_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_603B91AFD8CAA2F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDimensionID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDimensionID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_603B91AFD8CAA2F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1C2E74BA35C34FA1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropPuzzleCreated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropPuzzleCreated*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1C2E74BA35C34FA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E52EC084839301E2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByRollShopResult*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByRollShopResult*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E52EC084839301E2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_485B911F518B7312(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnvProfilePath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnvProfilePath*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_485B911F518B7312_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA712E16120700D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnyNpcMonsterInRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_AA712E16120700D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3C7DFD4D3E57442D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInStoryMode*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInStoryMode*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3C7DFD4D3E57442D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_46E484EA07902335(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_46E484EA07902335_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_893583F802E514D5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkipNextTeleportEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkipNextTeleportEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_893583F802E514D5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A873C57E935874D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLeader*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLeader*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9A873C57E935874D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_83882E33ED7156E4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerAvatarID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerAvatarID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_83882E33ED7156E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A9B1DADDBBFC369(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsHero*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsHero*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9A9B1DADDBBFC369_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5801D6A4D4BEE3C4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityTimeScaleZero*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityTimeScaleZero*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5801D6A4D4BEE3C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_10746A86154753FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_10746A86154753FB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F07765B7BCF3CD0A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F07765B7BCF3CD0A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5BAFA488C2CE0A2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareEnhancedID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareEnhancedID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5BAFA488C2CE0A2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E141E5D8B4CA8B7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsInPhantomFrozen*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7E141E5D8B4CA8B7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1402C501ADB4F20C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestProgress*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestProgress*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1402C501ADB4F20C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_38C98DC19F06B970(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInDistrict*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInDistrict*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_38C98DC19F06B970_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_584CB9720D0D3747(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetVisible*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetVisible*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_584CB9720D0D3747_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FFBA5991C2165AAC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSoundEventInCD*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSoundEventInCD*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FFBA5991C2165AAC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E59C07E3B62C9818(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimelineEntityState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimelineEntityState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E59C07E3B62C9818_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9FB623C4932AFB84(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9FB623C4932AFB84_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6838E4E338A01EA4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6838E4E338A01EA4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D9242371071330C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D9242371071330C5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A540A9F1B45014AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A540A9F1B45014AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6F059005F6B0F8D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6F059005F6B0F8D8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B82471DA7F02DB21(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomString*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B82471DA7F02DB21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9E82FA49A82B7BB9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBool*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9E82FA49A82B7BB9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF6A4BB9EDAF8EBC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloatV2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloatV2*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FF6A4BB9EDAF8EBC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_90C081FF18789D61(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomStringV2*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_90C081FF18789D61_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CDEE6363C5225A19(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CDEE6363C5225A19_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2CC396FC92112733(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2CC396FC92112733_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D5938E80A98ACF83(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValueV2*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D5938E80A98ACF83_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_945C4ACD5F31DCE0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_945C4ACD5F31DCE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8AAB30FEDC06E959(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicString*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8AAB30FEDC06E959_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2613C42DD498E061(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePhoneMessageItem*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePhoneMessageItem*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2613C42DD498E061_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E284F81434BCF8C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityCreated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityCreated*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E284F81434BCF8C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A2C8FC6D5FC91ADF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A2C8FC6D5FC91ADF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DEF5E2323DB2011B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::QueryHoyoTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::QueryHoyoTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DEF5E2323DB2011B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5B25CA02355AA020(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareVersionFinalMainMission*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5B25CA02355AA020_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_02D7C242EF5CFFF7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStoryLineID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStoryLineID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_02D7C242EF5CFFF7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1BB6A972D093BC92(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1BB6A972D093BC92_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D204CA5A6A7A3C57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInVision*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInVision*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D204CA5A6A7A3C57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6F3F6E9A09C1D70E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAlertValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAlertValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6F3F6E9A09C1D70E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_82B131A7812078DC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAngle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAngle*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_82B131A7812078DC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5185578DA2D10D8A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareHPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareHPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5185578DA2D10D8A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3AA91DE07C8F5AAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareSPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareSPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3AA91DE07C8F5AAB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7834B004F19613AC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckGameMode*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckGameMode*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7834B004F19613AC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8084E17F0C4278BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsLocateAtArea*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsLocateAtArea*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8084E17F0C4278BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7AA1500C0DD48E68(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInPosition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInPosition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7AA1500C0DD48E68_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F245077DFD768DE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropInPosition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropInPosition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F245077DFD768DE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_000D135BF53E07C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInRotation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInRotation*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_000D135BF53E07C5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_454C922C7A70295D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveLockTargetInCamera*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveLockTargetInCamera*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_454C922C7A70295D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8939D442E87B678(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainAdventureModifier*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainAdventureModifier*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A8939D442E87B678_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_716A5A250687D38F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggerBattleAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_716A5A250687D38F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_24701D2FC51484D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsWeakTypeActive*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_24701D2FC51484D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BFA0A6F0E5AA38FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsNPCControlled*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsNPCControlled*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BFA0A6F0E5AA38FF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0846118172E783E5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNpcMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNpcMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0846118172E783E5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEDDE5E59E131318(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFuncUnlockCheck*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFuncUnlockCheck*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEDDE5E59E131318_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_56EE16FC8E974478(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_56EE16FC8E974478_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B1301AF50E8B06E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNumber*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNumber*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B1301AF50E8B06E3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_32E50DDC16EB3FD4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_32E50DDC16EB3FD4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_82732DF462C7B851(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimatorParam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimatorParam*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_82732DF462C7B851_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_13736C8700727D99(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasAssistAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasAssistAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_13736C8700727D99_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3AC0332A3E74A975(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsGenderType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsGenderType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3AC0332A3E74A975_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_656B1A9F83843E5F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCamera*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCamera*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_656B1A9F83843E5F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5F9502E227FC5CF8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCameraByPathID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCameraByPathID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5F9502E227FC5CF8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A77D1918695DB7D1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTextJoinValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTextJoinValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A77D1918695DB7D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8A2823953CD53DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsEntityInDialogue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A8A2823953CD53DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1060F59C14E6C929(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsBookAvailable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsBookAvailable*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1060F59C14E6C929_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C90460320E50CEE4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C90460320E50CEE4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CE5F87905C1D243F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsActivityInSchedule*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsActivityInSchedule*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CE5F87905C1D243F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3CFF12518D4BD915(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandGestureType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3CFF12518D4BD915_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7250E4D126DB68DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7250E4D126DB68DE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A2836F70137B5D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0A2836F70137B5D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BF41F41DE310DFEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BF41F41DE310DFEA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2F1A8C4B74FA43AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2F1A8C4B74FA43AA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CA6E48EB68ED53A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueHasMiracle*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9CA6E48EB68ED53A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC11C006FCDC6E5A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueShopHasStage*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CC11C006FCDC6E5A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DF28CF891955329(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemPair*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemPair*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2DF28CF891955329_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_66E41288138A193C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNum*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_66E41288138A193C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3F5168317BE77C34(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIfGroupIsOccupied*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIfGroupIsOccupied*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3F5168317BE77C34_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0EB1871124E2D81C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSeriesID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSeriesID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0EB1871124E2D81C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8CA1F389A194BF45(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFirstPerformance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFirstPerformance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8CA1F389A194BF45_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BF837C8F8426ED90(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BF837C8F8426ED90_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01347C146E95CF88(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupFetchLocalTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupFetchLocalTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_01347C146E95CF88_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B6E64034CD6508B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1B6E64034CD6508B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9B44F8E10D0103CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByString*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9B44F8E10D0103CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_114C6E89E805F120(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySharedSummonUnitInUse*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySharedSummonUnitInUse*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_114C6E89E805F120_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9276AE94E6430DDB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropStateItem*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropStateItem*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9276AE94E6430DDB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_56B20C0E0C30CE8A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropDestructItem*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropDestructItem*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_56B20C0E0C30CE8A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6528DDEA7129F677(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6528DDEA7129F677_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_326F1B89144CBE0C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntitiesExist*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntitiesExist*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_326F1B89144CBE0C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3DCC87604A12AEB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasUnGottenLevelReward*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasUnGottenLevelReward*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3DCC87604A12AEB6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_2(::SimpleJSON::JSONNode* a1, ::Class_4_BC87E1E104C4A2A7*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_BC87E1E104C4A2A7*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7BD033D13D142BCF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowInSlot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowInSlot*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7BD033D13D142BCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_237A39D55F058880(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowPermCodes*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_237A39D55F058880_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_3(::SimpleJSON::JSONNode* a1, ::Class_4_898D9FE991FDEB8A*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_898D9FE991FDEB8A*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_4(::SimpleJSON::JSONNode* a1, ::Class_4_C6B158EB9941F4E8*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C6B158EB9941F4E8*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_13C6574F3BC28147(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHipplenEnergy*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHipplenEnergy*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_13C6574F3BC28147_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A339E55B3B1A5E76(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameFetchProxyByID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameFetchProxyByID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A339E55B3B1A5E76_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E9DC14F9621A59E4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E9DC14F9621A59E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_34F8EF56B991941B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_34F8EF56B991941B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6C039E3203F12526(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6C039E3203F12526_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96CBCF7AD65DC189(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_96CBCF7AD65DC189_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_5(::SimpleJSON::JSONNode* a1, ::Class_4_1309A16363C9CF81*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_1309A16363C9CF81*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_6(::SimpleJSON::JSONNode* a1, ::Class_4_B845218F1B6B1C41*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_B845218F1B6B1C41*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3735BE4983965D52(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ChenLingFesPredicateItemCondition*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ChenLingFesPredicateItemCondition*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3735BE4983965D52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_7(::SimpleJSON::JSONNode* a1, ::Class_4_F9B012EBD64B96B0*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F9B012EBD64B96B0*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_5(::SimpleJSON::JSONNode* a1, ::Class_4_6C451618FA553762_5*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C451618FA553762_5*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C880E773164E4B2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsCustomerState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsCustomerState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C880E773164E4B2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CE2425DCB67042EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsTakeOutState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CE2425DCB67042EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_290D408CD374DBDE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsWaiterState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsWaiterState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_290D408CD374DBDE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7AA5FCB1DD1A4D30(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_ByRandom*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_ByRandom*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7AA5FCB1DD1A4D30_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_40266F153584400F(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_40266F153584400F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_444EE53A2252B138(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_444EE53A2252B138_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_38819DB9437382F6(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_38819DB9437382F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7C7B92F6C071F085(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7C7B92F6C071F085_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_278540F7FD8385B0(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_278540F7FD8385B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5677F19D302329C9(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5677F19D302329C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9E2FD357E461E17B(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9E2FD357E461E17B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4791D77420C4879A(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4791D77420C4879A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B0B33332B8E63AC5(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B0B33332B8E63AC5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CDA141C53A963B62(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CDA141C53A963B62_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_256F1E23C9DDAA7F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionBattleWin*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionBattleWin*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_256F1E23C9DDAA7F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0EA04FE2FC8E6DC3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0EA04FE2FC8E6DC3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E96A51B133AFBFE0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E96A51B133AFBFE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F000834916529761(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PhotoGraphTargetSize*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PhotoGraphTargetSize*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F000834916529761_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9FC2A74E026FDFCB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetContainerRatioInRect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetContainerRatioInRect*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9FC2A74E026FDFCB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1225AE6336411FC3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1225AE6336411FC3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_390EBE6DD7028446(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_390EBE6DD7028446_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_461EA6EB56C0C4CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_461EA6EB56C0C4CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9978FE3283B2E34E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetNpcExists*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetNpcExists*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9978FE3283B2E34E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EA1E9608873B75D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_EA1E9608873B75D8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_80BB0903449BA90C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTrainVisitorIsMeet*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTrainVisitorIsMeet*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_80BB0903449BA90C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F66D18E68EE7182B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByWaitCustomString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByWaitCustomString*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F66D18E68EE7182B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4E8786AE623E8062(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropStateNumber*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropStateNumber*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4E8786AE623E8062_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_540CBE29523EA9B8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRogueExploreWin*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRogueExploreWin*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_540CBE29523EA9B8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_394280C9472C08BD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_394280C9472C08BD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8271245A36D93CA4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8271245A36D93CA4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E5AFCBF499BC4F72(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckElfTodayManaged*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckElfTodayManaged*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E5AFCBF499BC4F72_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_23402E3C2771B0A3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_23402E3C2771B0A3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18A004C9AC821B63(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_18A004C9AC821B63_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BAA8B66BC4E0090A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsEliteMonster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsEliteMonster*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BAA8B66BC4E0090A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2FC8B21A5EFE6CBB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2FC8B21A5EFE6CBB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_765BBA13D26DAF65(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByContainBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_765BBA13D26DAF65_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_288E1D6E868F23C4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattlePostureType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattlePostureType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_288E1D6E868F23C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A4228E7AE7D1DF09(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattleSkillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattleSkillType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A4228E7AE7D1DF09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD05D5B454F327BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ConvinceByCompareHp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ConvinceByCompareHp*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FD05D5B454F327BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C9E03362D2006BF2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderPath*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderPath*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C9E03362D2006BF2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C92EDA721FA93FCB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyTrace*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyTrace*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C92EDA721FA93FCB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_91F4E4D8AD46EEBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_91F4E4D8AD46EEBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E33CA07E4FAA4284(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestGetReward*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestGetReward*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E33CA07E4FAA4284_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_267CC138EDD7174E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptStep*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptStep*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_267CC138EDD7174E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CCC955023ED2B505(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptEmo*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptEmo*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CCC955023ED2B505_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6DCDAE2A9EF5097B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6DCDAE2A9EF5097B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D339F6AB5737E80(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEnableStoryStreamingSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEnableStoryStreamingSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7D339F6AB5737E80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_609BAD2C61D229F2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformanceResult*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformanceResult*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_609BAD2C61D229F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_23F964E43B264DDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropAnimState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropAnimState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_23F964E43B264DDF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A5DFC69A6DA016D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A5DFC69A6DA016D8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_338DA0F457B7C6F7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_338DA0F457B7C6F7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0020DB5F783054E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0020DB5F783054E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B69719B7CF0878D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B69719B7CF0878D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BE5D8F7A975AAA37(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BE5D8F7A975AAA37_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C9BC37A7D3A37578(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropPredicateWithEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropPredicateWithEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C9BC37A7D3A37578_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7EB7BADC0CAA415E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMusicRhythmSongID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7EB7BADC0CAA415E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_6(::SimpleJSON::JSONNode* a1, ::Class_4_6C451618FA553762_6*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C451618FA553762_6*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1316910AFB834FD0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1316910AFB834FD0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A627980135A1E030(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournLastRoom*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournLastRoom*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A627980135A1E030_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5A4892DF99AC37D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5A4892DF99AC37D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F2523DB02C3430ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F2523DB02C3430ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_891B5E5B1924EB19(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_891B5E5B1924EB19_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1050366EA4FF506A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1050366EA4FF506A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E185DFDD5899D855(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E185DFDD5899D855_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_20E8DC7EA9F048B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntityExist*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntityExist*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_20E8DC7EA9F048B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CBC115592AC36B35(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsUIPageOpen*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsUIPageOpen*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CBC115592AC36B35_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E80A4C6CA2B81DDB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckFarmElementActive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckFarmElementActive*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E80A4C6CA2B81DDB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D06554D747749C85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropHPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropHPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D06554D747749C85_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_410E868806A47842(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScreenRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScreenRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_410E868806A47842_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_16D537A80B3F8320(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_16D537A80B3F8320_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5CE804F26F80AFFA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5CE804F26F80AFFA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_37217F338C1AFAD6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEntityAuthoritySide*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_37217F338C1AFAD6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1541EF1C2CDAC1ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvTriggerEffectList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvTriggerEffectList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1541EF1C2CDAC1ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8B4E8C3BA5881423(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRegionEraState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRegionEraState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8B4E8C3BA5881423_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2C1B34C7D6FFB3D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2C1B34C7D6FFB3D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9DF471D0A5892E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEraFlipperEntityShow*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B9DF471D0A5892E3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A0F446E6BA71734E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityOriginalEraConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityOriginalEraConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A0F446E6BA71734E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DCC86E7303C95E49(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPartialFlipDeviceState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPartialFlipDeviceState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DCC86E7303C95E49_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CDEBB55472016BE0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimStateLogicType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimStateLogicType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CDEBB55472016BE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4A6D4C35E1EC3C29(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveSkillPointEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveSkillPointEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4A6D4C35E1EC3C29_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B91A824466921D65(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFromBattleViewModeChange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFromBattleViewModeChange*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B91A824466921D65_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9E478EBCD7C1BDAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasBillboard*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasBillboard*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9E478EBCD7C1BDAE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_8(::SimpleJSON::JSONNode* a1, ::Class_4_472E12A36DB951F3*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_472E12A36DB951F3*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_9(::SimpleJSON::JSONNode* a1, ::Class_4_B845218F1B6B1C41_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_B845218F1B6B1C41_1*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_41C1F7F72A15A87F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_41C1F7F72A15A87F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9118942B1FFF6153(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9118942B1FFF6153_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_990A152C6A43127E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCharacterIsPreset*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_990A152C6A43127E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_239BEE13C24729F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_239BEE13C24729F8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E022FA9E78CB1653(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E022FA9E78CB1653_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F1483524DA1879F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasTrait*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasTrait*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F1483524DA1879F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F80B713B7FA80917(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasSameTrait*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasSameTrait*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F80B713B7FA80917_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2FFEEE113E10183B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGridFightProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGridFightProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2FFEEE113E10183B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E8AA5F25D2140C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnActionEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnActionEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7E8AA5F25D2140C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C5DF1CFB34442FA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveEnemyAlive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveEnemyAlive*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0C5DF1CFB34442FA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4816E8F1163A76FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4816E8F1163A76FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_12DE96EBF8B8A088(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_12DE96EBF8B8A088_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6C5143EEB1374135(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCustomValueBool*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCustomValueBool*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6C5143EEB1374135_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F89AB4BF2E65FA1(::SimpleJSON::JSONNode* a1, ::Class_4_7C38BD1AB441597F*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_7C38BD1AB441597F*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0CD4D267F6294FF7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0CD4D267F6294FF7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6FDE54FD64FFB3EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnhancedID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnhancedID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6FDE54FD64FFB3EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F29816FAA772FD11(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetTeam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetTeam*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F29816FAA772FD11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4F53AE2D5201BAA7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4F53AE2D5201BAA7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2D885FAFFAB37288(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSummonRelation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSummonRelation*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2D885FAFFAB37288_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_681D00E59DB04AE2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeak*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_681D00E59DB04AE2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_85BD267B4FB28859(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeakPreview*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeakPreview*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_85BD267B4FB28859_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_67A3B1DEB4D96F7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_67A3B1DEB4D96F7D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5A54384EF7D919CA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByStatusCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByStatusCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5A54384EF7D919CA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_224B7DA60F6CCAD1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAvatarBaseType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAvatarBaseType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_224B7DA60F6CCAD1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CE996224A2DC3A5B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInsertAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInsertAction*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CE996224A2DC3A5B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_7(::SimpleJSON::JSONNode* a1, ::Class_4_6C451618FA553762_7*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C451618FA553762_7*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9AEF24FEE40376D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAutoBattle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAutoBattle*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B9AEF24FEE40376D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DBA7902A7372A0F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterPhase*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterPhase*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DBA7902A7372A0F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A45D269802BD911(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertActionByTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertActionByTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9A45D269802BD911_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4FA6115A0E57B18A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainMonsterOnWave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainMonsterOnWave*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4FA6115A0E57B18A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5F6C4253873DABBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5F6C4253873DABBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_24C15582DB553925(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainOpInSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainOpInSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_24C15582DB553925_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D250800DA8C47E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6D250800DA8C47E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_80B6DC3B9781B800(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleHasCertainResult*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleHasCertainResult*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_80B6DC3B9781B800_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD6FAE8D54B3E1E4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstChallengeBattle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstChallengeBattle*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BD6FAE8D54B3E1E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4C7AFC34AD7E2F7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInElationTime*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInElationTime*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4C7AFC34AD7E2F7D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3640E9F4111284A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPausedElationTime*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPausedElationTime*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3640E9F4111284A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_53AB0F237CAB9586(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsRedStance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsRedStance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_53AB0F237CAB9586_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E1C97AC6E973EBAA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSpareTeamFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSpareTeamFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E1C97AC6E973EBAA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_65FF05EE291FCBE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCustomTeamFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCustomTeamFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_65FF05EE291FCBE3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D288FE505203321(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3D288FE505203321_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D1710678160EF7C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6D1710678160EF7C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_388D2620B0450B3D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsCharacterState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsCharacterState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_388D2620B0450B3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_10(::SimpleJSON::JSONNode* a1, ::Class_4_DA219FA494F35D19*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_DA219FA494F35D19*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_82B65F027918B258(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_82B65F027918B258_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F89AB4BF2E65FA1_1(::SimpleJSON::JSONNode* a1, ::Class_4_333AF9D5F338A2DD*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_333AF9D5F338A2DD*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F87975CFF75EC062(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectListForUI*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectListForUI*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F87975CFF75EC062_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EAA8F0E3EB307030(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicValueDefined*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicValueDefined*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_EAA8F0E3EB307030_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_345D6517B6810B78(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_345D6517B6810B78_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7D66C1E12B28494(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C7D66C1E12B28494_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D0FCA84B2AD86B9D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationWidth*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationWidth*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D0FCA84B2AD86B9D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B6FECEC3D627DBC2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainModifier*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainModifier*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B6FECEC3D627DBC2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_961932773C17BC13(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_961932773C17BC13_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C08C6D791264D2E4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChangeValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChangeValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C08C6D791264D2E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F9AB6F7FD3E51E47(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStringValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStringValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F9AB6F7FD3E51E47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5CFED1880E5E2BEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAliveEnemyNumber*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5CFED1880E5E2BEA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9630B20EC31B11C6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillUsageLimit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillUsageLimit*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9630B20EC31B11C6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4C6BD95E4D2DD46F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4C6BD95E4D2DD46F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B5582A02BEB3B63E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChanceClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChanceClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B5582A02BEB3B63E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA887B7B783F6F1C(::SimpleJSON::JSONNode* a1, ::Class_4_5CB8D642DC82A502*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_5CB8D642DC82A502*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A27542BA48CC33FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHP*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A27542BA48CC33FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_67930318568B271F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_67930318568B271F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B8077EC615B4E1FE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B8077EC615B4E1FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CDBFCB8B911A00E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialSPRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialSPRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CDBFCB8B911A00E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_155EA8D95FDB0A53(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_155EA8D95FDB0A53_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7A5FFA4820419D9E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7A5FFA4820419D9E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7AA0D20941220E39(::SimpleJSON::JSONNode* a1, ::Class_4_E0D26BEB1B9C290C*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E0D26BEB1B9C290C*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7AA0D20941220E39_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A60E31CDBCEF23C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterUniqueID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterUniqueID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A60E31CDBCEF23C5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A80DB987D087180(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterTemplateID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterTemplateID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0A80DB987D087180_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6801ACA8CD228C62(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBattleEventID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBattleEventID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6801ACA8CD228C62_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_349CF95126A7A24E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterNumber*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterNumber*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_349CF95126A7A24E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_476AE579C4E3947B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_476AE579C4E3947B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BDA9F0FC4ED6777D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BDA9F0FC4ED6777D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_275C9BF298EBABB0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillLevel*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillLevel*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_275C9BF298EBABB0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8342B943ABED8DEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillByName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillByName*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8342B943ABED8DEE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4B8B982DEC169FF5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillBySlot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillBySlot*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4B8B982DEC169FF5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C9BC72CE411EB017(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSplitDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSplitDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C9BC72CE411EB017_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DEF4AAE2E2952A03(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsProjectileHitTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsProjectileHitTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DEF4AAE2E2952A03_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_27B570AAB7F88477(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_27B570AAB7F88477_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3277D7E0D0FAA8E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetNatureID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetNatureID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3277D7E0D0FAA8E3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7CC5F56C31F14DFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7CC5F56C31F14DFD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C805892020B85C2B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetEntityType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetEntityType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C805892020B85C2B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8B103DE2E92CB9B8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8B103DE2E92CB9B8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F13890949E88D1F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsControlSkillDisable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsControlSkillDisable*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F13890949E88D1F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7AA0D20941220E39_1(::SimpleJSON::JSONNode* a1, ::Class_4_C2FF09D2685FF72B*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C2FF09D2685FF72B*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7AA0D20941220E39_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8093675DC3989416(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8093675DC3989416_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_17D7D2F4D8389415(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSelectSkillEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSelectSkillEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_17D7D2F4D8389415_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A05345A25A8B1393(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A05345A25A8B1393_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C449142B0039904D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C449142B0039904D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_40FE84E1F9C8412C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_40FE84E1F9C8412C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE24372A6265A3B6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllLightTeamDied*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllLightTeamDied*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FE24372A6265A3B6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_87D19756708C9427(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSecretWeak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSecretWeak*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_87D19756708C9427_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64BF7A84B3ADB329(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_64BF7A84B3ADB329_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_89674D68C2A2D429(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_89674D68C2A2D429_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B7E7F8DB48F35C4E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleEventEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleEventEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B7E7F8DB48F35C4E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_433B4EB9322AAFC5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLocationIndexType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLocationIndexType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_433B4EB9322AAFC5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD70D133E9200620(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMatchTeammateCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMatchTeammateCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BD70D133E9200620_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4B149E007B7787C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckBloodLinkDead*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckBloodLinkDead*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4B149E007B7787C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F0EC09DF0E132AEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckIsLimboRevivable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckIsLimboRevivable*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F0EC09DF0E132AEE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_93AD9CF67267CADE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetAbleToAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetAbleToAction*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_93AD9CF67267CADE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FAAD06AEF4A76784(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FAAD06AEF4A76784_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0438A98F1F910F57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0438A98F1F910F57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB9C8F9ED3CCACE7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAllWaveMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAllWaveMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_EB9C8F9ED3CCACE7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8506EA7F25D2E9E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayChanged*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayChanged*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8506EA7F25D2E9E9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BE7F71DD40BD959A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleReStart*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleReStart*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BE7F71DD40BD959A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_51ECDF36565BDCEF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_51ECDF36565BDCEF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A423BBE55819988F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackName*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A423BBE55819988F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7ED12F00306D98F2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7ED12F00306D98F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_8(::SimpleJSON::JSONNode* a1, ::Class_4_6C451618FA553762_8*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C451618FA553762_8*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_767D89BDE5643930(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_767D89BDE5643930_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DB75015A0C418B3D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DB75015A0C418B3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_28865CAFB703FEE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCustomEvent*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCustomEvent*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_28865CAFB703FEE3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_646B201E5DDC111C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierDeathSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierDeathSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_646B201E5DDC111C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F8E2195107602B30(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTopActionDelayTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTopActionDelayTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F8E2195107602B30_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C9274476816BC27A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C9274476816BC27A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B7B41409FA4C4468(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B7B41409FA4C4468_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_73D49C24F5BEFFF4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_73D49C24F5BEFFF4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C2D908A38FB5A9DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllowUseSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllowUseSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C2D908A38FB5A9DE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_205E69A45A3A0756(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDirectKillBattle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDirectKillBattle*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_205E69A45A3A0756_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F2735F625F7215F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBP*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F2735F625F7215F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4F3BE60817F166A0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasCharacterRevived*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasCharacterRevived*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4F3BE60817F166A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DD5FD5E079FFC80E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivated*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DD5FD5E079FFC80E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AEBC956C923E45C4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivatedFromLineup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivatedFromLineup*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_AEBC956C923E45C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C095D51C7497E99B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C095D51C7497E99B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_89278BB725124A54(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueMode*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueMode*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_89278BB725124A54_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_058F94A5CA6B9747(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInfiniteBattle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInfiniteBattle*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_058F94A5CA6B9747_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E964710103FDF904(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEntityActionState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEntityActionState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E964710103FDF904_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F2DEADD8E204B566(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveDyingEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveDyingEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F2DEADD8E204B566_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_205327766052338B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AttackDamageTypeConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AttackDamageTypeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_205327766052338B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3562E18974867089(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasActiveUnitOnScepter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasActiveUnitOnScepter*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3562E18974867089_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CD141103C7F90C08(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterFuncType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterFuncType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CD141103C7F90C08_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_832934BEEEB184A8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsScepter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsScepter*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_832934BEEEB184A8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA2470FCAD1AE974(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA2470FCAD1AE974_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18F2F0BBE12592D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySaveModelWhenDead*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySaveModelWhenDead*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_18F2F0BBE12592D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3DF14618825A01B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3DF14618825A01B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E991263612C321AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySimulateSpeedUp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySimulateSpeedUp*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E991263612C321AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E0ACF9C45279701B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDieAnimFinished*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDieAnimFinished*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E0ACF9C45279701B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F2C5148E76670EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTimelinePerform*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTimelinePerform*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F2C5148E76670EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1180DEB38A693A22(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1180DEB38A693A22_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F6A85C263449ACCE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPart*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPart*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F6A85C263449ACCE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D7F8B2245B6FED19(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D7F8B2245B6FED19_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_28EF945A458F7FBA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_28EF945A458F7FBA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4CFF75C2FF900616(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4CFF75C2FF900616_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EA613C65A66BCC03(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_EA613C65A66BCC03_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_54BD0C2090B3D8E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixTaskConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixTaskConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_54BD0C2090B3D8E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE9F70C8923BA6F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixBasePredicate*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixBasePredicate*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FE9F70C8923BA6F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CE9BB1B918055424(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateA*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateA*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CE9BB1B918055424_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B0D9913CB9FE4245(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateB*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateB*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B0D9913CB9FE4245_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_218C106E1D441D5A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateC*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_218C106E1D441D5A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0CADEBD76ACC6CA7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharacterIDGroup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharacterIDGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0CADEBD76ACC6CA7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_037AD04D4C04468E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialAvatarType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialAvatarType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_037AD04D4C04468E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B26FA1314D832E8D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertBattlePerform*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertBattlePerform*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B26FA1314D832E8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1FF75D603ED1E14C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainCustomString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainCustomString*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1FF75D603ED1E14C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_000475D7C5B51CB1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareWaveCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareWaveCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_000475D7C5B51CB1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_05BD9235D26A07C4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLevelLoseCheck*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLevelLoseCheck*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_05BD9235D26A07C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F67D79540EBE365(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdditionalConditions*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdditionalConditions*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F67D79540EBE365_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3A46AA52BFA648DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterDie*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterDie*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3A46AA52BFA648DA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7BCDF0DC08BD43AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterHurt*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterHurt*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7BCDF0DC08BD43AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B29085ED53055365(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterDie*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterDie*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B29085ED53055365_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6DF8962DB4E5015B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTrialCharacterDie*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTrialCharacterDie*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6DF8962DB4E5015B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_07E5F6F5119BB691(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTurnCountMatch*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTurnCountMatch*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_07E5F6F5119BB691_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2F3C34EE1A70A09D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckDarkTeamDestroy*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2F3C34EE1A70A09D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8FDB4C220D730E71(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeGroupType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeGroupType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8FDB4C220D730E71_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B65A0058C2A21AB4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFightFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFightFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B65A0058C2A21AB4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B722EFC961E42506(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetAliveState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetAliveState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B722EFC961E42506_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B43B2B23AC970A30(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayEffectType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayEffectType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B43B2B23AC970A30_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9BDAB6141F018CB1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9BDAB6141F018CB1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8E5C481138C14F2B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8E5C481138C14F2B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC4AF73D73835307(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_EC4AF73D73835307_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_49504C305D0B812B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnemy*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnemy*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_49504C305D0B812B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_154827FFD44F310A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_154827FFD44F310A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3C2EEA3E4ADFF2E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeammate*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeammate*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3C2EEA3E4ADFF2E0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8277AEA3348B140D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCasterAliveOrLimbo*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCasterAliveOrLimbo*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8277AEA3348B140D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_010B7C37228ADA1B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_010B7C37228ADA1B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3AE68E1A929B830A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareResistChance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareResistChance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3AE68E1A929B830A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B484513930E6F251(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageCritical*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageCritical*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B484513930E6F251_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB27B52D9278BF26(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsIndirectDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsIndirectDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_AB27B52D9278BF26_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0ADEB13A805E88F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsConvertDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsConvertDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0ADEB13A805E88F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8651F666701D3D5B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharmAction*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharmAction*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8651F666701D3D5B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D396A549806584D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageLuckCritical*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageLuckCritical*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D396A549806584D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_60DC66417899527C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_60DC66417899527C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2F779D9EC096AA24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHealCallBackStack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHealCallBackStack*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2F779D9EC096AA24_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FEFB09D281EBD862(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHitAllCallBackStack*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHitAllCallBackStack*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FEFB09D281EBD862_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8317016422AC8665(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRootHitCallback*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRootHitCallback*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8317016422AC8665_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_834E1C82A4817779(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_834E1C82A4817779_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E374B2F9D3E1F74E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E374B2F9D3E1F74E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5C39300DCB6759E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillTargetType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillTargetType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5C39300DCB6759E3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8853CDAC096C4B7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8853CDAC096C4B7D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF23B4683ED9F561(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillName*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FF23B4683ED9F561_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_762FD1E815FF7519(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentContainAbilityTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentContainAbilityTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_762FD1E815FF7519_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_660833D3ED446250(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillBPChangePreview*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_660833D3ED446250_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E6AFB8509C288B08(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E6AFB8509C288B08_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_356AC494B8119717(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackSkillEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackSkillEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_356AC494B8119717_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_17980F78F0EFA7C0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeak*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_17980F78F0EFA7C0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3417FD1B0DF8917D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3417FD1B0DF8917D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CDE7E533D9BF2D75(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CDE7E533D9BF2D75_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_643B418FB25B5ABF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterFly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterFly*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_643B418FB25B5ABF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_403CE5903544E178(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_403CE5903544E178_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_56865C8FFC634A41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBreakStanceDamageType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBreakStanceDamageType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_56865C8FFC634A41_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_21A00B020B8A2A0A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_21A00B020B8A2A0A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3BE4F4D92434300F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3BE4F4D92434300F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3DFE2EDEA89E4F8C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageFirstWave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageFirstWave*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3DFE2EDEA89E4F8C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C10B9A98BE3CA651(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeLeft*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeLeft*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C10B9A98BE3CA651_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_848112803BDF5EB3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_848112803BDF5EB3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5B36EC3C6A9B053F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5B36EC3C6A9B053F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8596EE2C576219A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetCustomUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8596EE2C576219A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B761AC2587B5C5FE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B761AC2587B5C5FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_030EB3E005CBADEC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_030EB3E005CBADEC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D2C25E99F24384EC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCountClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D2C25E99F24384EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_54703A1EC05334A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillActive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillActive*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_54703A1EC05334A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E59D2D43D96EB81A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalWin*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalWin*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E59D2D43D96EB81A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C2FFB81EDA9BDB3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityPending*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityPending*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0C2FFB81EDA9BDB3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AD30643EB68A8574(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_AD30643EB68A8574_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2AF27C97C34FC0F7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2AF27C97C34FC0F7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D39CE2AC9039265(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamString*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6D39CE2AC9039265_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_859A893D65B28ACA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsParamFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsParamFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_859A893D65B28ACA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F890D78AB73D5FC6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowStanceBreak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowStanceBreak*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F890D78AB73D5FC6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DE12704C0B0A8E9D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowRedStanceBreak*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowRedStanceBreak*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DE12704C0B0A8E9D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_926E8E0A264027E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_926E8E0A264027E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3F07556FA5CA504B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentTurnState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentTurnState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3F07556FA5CA504B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0F47F485DFD7163A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0F47F485DFD7163A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE6FE6D115EED02F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAbilityProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAbilityProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_AE6FE6D115EED02F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B572CF049F20ADDB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTurnBasedGameModeState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTurnBasedGameModeState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B572CF049F20ADDB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC8C304A5DDF0E6F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkillPointActivated*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkillPointActivated*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CC8C304A5DDF0E6F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA06B9E1F3B2CF4C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveInsertUltraWait*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveInsertUltraWait*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA06B9E1F3B2CF4C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_11392B24708FCC1C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPChangeTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPChangeTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_11392B24708FCC1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F8E2ADF37105DA9A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F8E2ADF37105DA9A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0AFB023BCEFBD1FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageCustomName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageCustomName*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0AFB023BCEFBD1FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BB55495DC7BDBCA0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBaseTypeCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBaseTypeCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BB55495DC7BDBCA0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_696031B356A8D18F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCountOfBaseType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCountOfBaseType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_696031B356A8D18F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E4EB79D9A12E04F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E4EB79D9A12E04F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D628D5452071835(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7D628D5452071835_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_65BBA9F8ED94F7AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockHP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockHP*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_65BBA9F8ED94F7AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB71BCBB5A32B64F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockStance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockStance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_AB71BCBB5A32B64F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5A807A4F4ADF7250(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerSDFTextEffect*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerSDFTextEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5A807A4F4ADF7250_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A567E380460033C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainResistBehaviorFlag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainResistBehaviorFlag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A567E380460033C5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C098A60C2B503603(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C098A60C2B503603_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_075D5319E752AF53(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterSomatoWidthType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterSomatoWidthType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_075D5319E752AF53_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3797D14E5803E38(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentModifierAlive*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentModifierAlive*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A3797D14E5803E38_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6209C75F8344BFCC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnableNegativeHP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnableNegativeHP*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6209C75F8344BFCC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_88BCAB2C23003C5C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_88BCAB2C23003C5C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_69022A3173672BF5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSomatoType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSomatoType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_69022A3173672BF5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9C8E03E97EDA0443(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PredicateConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9C8E03E97EDA0443_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_66DE808C4779A954(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_66DE808C4779A954_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E1706C270B63F56(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E1706C270B63F56_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BCE19F1D10D353E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetAlias*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetAlias*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BCE19F1D10D353E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A02C874533E6583D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHeroGender*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHeroGender*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A02C874533E6583D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE98CF8022B63278(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAny*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAny*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FE98CF8022B63278_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0F2DABF5A9526733(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnd*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnd*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0F2DABF5A9526733_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FED3ADB01529078B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNot*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FED3ADB01529078B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_65C6286C8EABEDBA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAny*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAny*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_65C6286C8EABEDBA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_80EC186F78F612BF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAll*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAll*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_80EC186F78F612BF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_373FC891F3DAE013(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCustomString*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCustomString*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_373FC891F3DAE013_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_543B8F68327623F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDynamicValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDynamicValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_543B8F68327623F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEAF7A37BDAEEC38(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEAF7A37BDAEEC38_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B8C733C2678A89D6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListIntersects*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListIntersects*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B8C733C2678A89D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_62837FC8234F3A13(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DebugLogInPredicates*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DebugLogInPredicates*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_62837FC8234F3A13_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD5E0372C97C6222(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetValid*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetValid*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FD5E0372C97C6222_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0F0B7820A6538D5E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleMissionTalkFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleMissionTalkFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0F0B7820A6538D5E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5A7567C237C44263(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentAudioLanguage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentAudioLanguage*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5A7567C237C44263_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B67FE6930F03A42(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1B67FE6930F03A42_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BCE3B25AF1A3FC51(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamLeader*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BCE3B25AF1A3FC51_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1ABC27D71779867D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamMembers*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1ABC27D71779867D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D65A2889D7F6143A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D65A2889D7F6143A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5050096A7006D40C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5050096A7006D40C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_86A2CA29291275A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_86A2CA29291275A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_04E9896874D6D9B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvMonsterData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvMonsterData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_04E9896874D6D9B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4B6163FC7A1BCBE5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonster*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4B6163FC7A1BCBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F0111A82581504D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvPropData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvPropData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F0111A82581504D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_721AAE13ED3F52F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvProp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvProp*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_721AAE13ED3F52F8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D7F51A0DCC9C6B3A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvNPCData*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvNPCData*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D7F51A0DCC9C6B3A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D7E65BB5DF30053(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNPC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNPC*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6D7E65BB5DF30053_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_074BB31B48C20D36(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPropEx*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPropEx*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_074BB31B48C20D36_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E0B42163C7F545A7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvNPCDataEx*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvNPCDataEx*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E0B42163C7F545A7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F7272A96584EC90C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNpcEx*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNpcEx*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F7272A96584EC90C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_10A9C91F322D679A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNormalPam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNormalPam*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_10A9C91F322D679A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C5C4C5D1CF916BF3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C5C4C5D1CF916BF3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A981BD1D2871E768(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A981BD1D2871E768_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_38A46E28FF170162(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchor*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchor*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_38A46E28FF170162_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_984B0FED82F60E6F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchorByName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchorByName*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_984B0FED82F60E6F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D12755E6796AF9C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D12755E6796AF9C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_42A99989A25795DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDialogueEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDialogueEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_42A99989A25795DE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F3B37110DB4B53D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastSearchEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastSearchEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F3B37110DB4B53D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F0D68D6622D7315E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F0D68D6622D7315E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_10BE2EF60DE62C12(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_10BE2EF60DE62C12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_11D8F9F2D2E8A045(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonsterEx*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_11D8F9F2D2E8A045_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E800615ECB1BA35E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E800615ECB1BA35E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA5B21744DBEE431(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonUnit*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonUnit*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BA5B21744DBEE431_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E885E7550EB5207A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E885E7550EB5207A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CB867586E035719A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPuzzleEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPuzzleEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CB867586E035719A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA80997F3C6B3A99(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetConcat*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetConcat*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA80997F3C6B3A99_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D4CA5EEC80E4BE09(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetCompute*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetCompute*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D4CA5EEC80E4BE09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6584E619F90D592A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSequence*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSequence*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6584E619F90D592A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BBB4D4673CB8087F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSelector*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSelector*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BBB4D4673CB8087F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_149127BE48FEFA41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilter*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_149127BE48FEFA41_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6B640E3D3EAB3D35(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetShuffle*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetShuffle*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6B640E3D3EAB3D35_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D6F6E22B0F6A4A5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetTake*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetTake*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6D6F6E22B0F6A4A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC6D7209A914B2A8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetIndex*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetIndex*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CC6D7209A914B2A8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F9E147F9190ABD51(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetRemoveUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetRemoveUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F9E147F9190ABD51_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E7821C362531FE11(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterAliveState*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterAliveState*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E7821C362531FE11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DBAA8A55402A4CB2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterTargetType*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterTargetType*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DBAA8A55402A4CB2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_030B953494FD202C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_030B953494FD202C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_561EF274814DDA66(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchModifierOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchModifierOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_561EF274814DDA66_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BCEC6816D98A1EDA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNone*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNone*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BCEC6816D98A1EDA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1FD313AAAC3EA8B7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1FD313AAAC3EA8B7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8CCAA3A0D0B2E72B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityGroup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8CCAA3A0D0B2E72B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F1BEEC778192E08E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F1BEEC778192E08E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B563B0EC32426EED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTeamEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTeamEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B563B0EC32426EED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2FA27ECBA05788F4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2FA27ECBA05788F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FC2CCCCC4E870288(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPassiveEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPassiveEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FC2CCCCC4E870288_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C5915DBC0530F3D0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C5915DBC0530F3D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A05F6F660D98812(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9A05F6F660D98812_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5E5B82F243AF3ADC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAITarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAITarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5E5B82F243AF3ADC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7A050EAA0D81E89A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7A050EAA0D81E89A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_769EAA6A74BF28D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityByIndex*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_769EAA6A74BF28D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3939400D92CD5E97(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3939400D92CD5E97_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3F4BF9EDFCE53DC2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitPos*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitPos*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3F4BF9EDFCE53DC2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8C9E75CCB8EB034E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTaskActionTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTaskActionTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8C9E75CCB8EB034E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C700C7E6E2C50AA7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPropFarmElement*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPropFarmElement*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C700C7E6E2C50AA7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4D99CCFDC84044D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLevelEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLevelEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4D99CCFDC84044D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F82011C816E25E80(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLineup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLineup*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F82011C816E25E80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E313824D0B27F39(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchInstigator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchInstigator*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2E313824D0B27F39_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2AE10272BA10F86C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2AE10272BA10F86C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BB861C33560E7675(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMainMonster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMainMonster*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BB861C33560E7675_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C59382F5629B177(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0C59382F5629B177_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_93BE3B01B3309225(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCreator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCreator*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_93BE3B01B3309225_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_47D924735506932E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreatedBattleEvent*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreatedBattleEvent*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_47D924735506932E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CDC72C78B261480E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUniqueNameEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CDC72C78B261480E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BAE7C44E17AF1F96(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPartner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPartner*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BAE7C44E17AF1F96_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7C6C9CD30C376383(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMazeBuffTargets*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7C6C9CD30C376383_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F0396A4228C44A73(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBloodLinkTargets*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F0396A4228C44A73_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0B71E5E66437F613(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0B71E5E66437F613_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA9C5B477D5B12A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA9C5B477D5B12A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E8479B97CFE35CE5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActionDelayExceed*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActionDelayExceed*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E8479B97CFE35CE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F6DFA4DA1176AEDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarAssistant*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarAssistant*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F6DFA4DA1176AEDF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_14E3FCD862E87C6E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeAllTargets*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeAllTargets*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_14E3FCD862E87C6E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DEEAFF2C2D58FE79(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DEEAFF2C2D58FE79_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_95A2911388AF9040(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonMonsters*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonMonsters*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_95A2911388AF9040_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_81D01857B6D60F57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTemplateEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTemplateEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_81D01857B6D60F57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D45CECD33879AACA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D45CECD33879AACA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D9F8DB14B33015B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapEnemyTeamEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapEnemyTeamEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D9F8DB14B33015B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_08197ABF01E7732B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMember*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMember*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_08197ABF01E7732B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A5F730F8F8E18F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2A5F730F8F8E18F8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_65EC2B46BC1EC63A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllOffTeamMember*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllOffTeamMember*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_65EC2B46BC1EC63A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_944E041F182C7A7B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillPointEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillPointEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_944E041F182C7A7B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5821F87443352FAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillActualAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillActualAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5821F87443352FAE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_68EF654DD5FE7EFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummoner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummoner*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_68EF654DD5FE7EFD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BF26B22D7F08DD47(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreator*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BF26B22D7F08DD47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8486ECA4DF30D3F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummonedMinions*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummonedMinions*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8486ECA4DF30D3F1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_55C571C648EF874D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_55C571C648EF874D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A11F6A18A7054275(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSnapshotEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSnapshotEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A11F6A18A7054275_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D15265A02E32CD4E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartToOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartToOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D15265A02E32CD4E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E39CF249B65BEAC7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E39CF249B65BEAC7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BF608B16759A8904(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BF608B16759A8904_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F98BBDFB552FBF33(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMonsterByID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMonsterByID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F98BBDFB552FBF33_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E63769BA9E93D433(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarByID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarByID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E63769BA9E93D433_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D947E283825FBD18(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D947E283825FBD18_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3AE93B4C8DFB506(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFarmElementEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFarmElementEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A3AE93B4C8DFB506_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8FD704EDE6F18C3F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActualOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActualOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8FD704EDE6F18C3F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_665706397F0464D5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAliveSourceEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_665706397F0464D5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9ACC00D5CBCD4AF8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTrailblazer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTrailblazer*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9ACC00D5CBCD4AF8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6439FB053ECB9CED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchByTauntAndAggro*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6439FB053ECB9CED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_687BC6D8A57BE6FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDynamicEntityParam*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDynamicEntityParam*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_687BC6D8A57BE6FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A53CCD77AC936D9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetQuery*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetQuery*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A53CCD77AC936D9B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C2C80676118A98B6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C2C80676118A98B6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7A8A97B06BF67157(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUnstageTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUnstageTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7A8A97B06BF67157_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A115B506FBE09D2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A115B506FBE09D2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B396EA8D81ACDF8C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextSkillCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextSkillCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B396EA8D81ACDF8C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E587FA0C3BC1B7B6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E587FA0C3BC1B7B6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7AB6117CDE418C85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7AB6117CDE418C85_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_44A837D169268849(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_44A837D169268849_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4EDCC855D6668973(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortSequence*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortSequence*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4EDCC855D6668973_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DFBE875A3DB312B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByValueEvaluator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByValueEvaluator*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DFBE875A3DB312B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_47CB8CA94423044A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPredicate*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPredicate*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_47CB8CA94423044A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A613F39D01FAA3CB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A613F39D01FAA3CB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_775A88D0E4EAAEB5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_775A88D0E4EAAEB5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AFD721DAD19E4FF3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByFormation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByFormation*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_AFD721DAD19E4FF3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D44CF768ACE644B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDeathOrder*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDeathOrder*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D44CF768ACE644B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7B74D4B35DAB76CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierStatusCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierStatusCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7B74D4B35DAB76CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA4F114B43F5B80E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortMonsterRank*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortMonsterRank*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA4F114B43F5B80E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A566342C80E78C54(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierValue*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierValue*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A566342C80E78C54_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9B9C6F0753EDA71A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByMultiModifierValueSum*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByMultiModifierValueSum*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9B9C6F0753EDA71A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9437A23225F95DE6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByActionOrder*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByActionOrder*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9437A23225F95DE6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A99F93A53185243(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByAITag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByAITag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2A99F93A53185243_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1EA76C67B15B23E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1EA76C67B15B23E9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DCD8E008A2A5436D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByWeaknessMatch*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByWeaknessMatch*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DCD8E008A2A5436D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_476018D4271CE0EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_476018D4271CE0EF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FCFF1FB7DF9695C9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightPower*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightPower*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FCFF1FB7DF9695C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_094CC006AA05BAFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPropertyRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPropertyRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_094CC006AA05BAFE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18DD318B16D96621(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByElationPriority*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByElationPriority*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_18DD318B16D96621_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD6152C5DE8F0A42(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnActionEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnActionEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FD6152C5DE8F0A42_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8FEADDFF1C7DDE71(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8FEADDFF1C7DDE71_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_82E0498B85AB62C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_82E0498B85AB62C5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_502877E39A8961DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_502877E39A8961DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0EB4FA5737703CFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastZombieEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastZombieEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0EB4FA5737703CFE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0D46849FA1E9409D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillCaster*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillCaster*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0D46849FA1E9409D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E82E109EE0D85332(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E82E109EE0D85332_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F5A9A207FC8052D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFightMVPEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFightMVPEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F5A9A207FC8052D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_352F886FE902490D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_352F886FE902490D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A36A2DB87585D3E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A36A2DB87585D3E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_632E8C38C81600FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidDefender*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidDefender*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_632E8C38C81600FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A5BD022DFAA5E230(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidProtector*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidProtector*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A5BD022DFAA5E230_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0717DAABBF491F36(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0717DAABBF491F36_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6F1F714B20F79F02(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6F1F714B20F79F02_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61BE79F520304C2D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSnapshotEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSnapshotEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_61BE79F520304C2D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_83426EB202F9380D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_83426EB202F9380D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA00819225E3FDF4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAdjoinEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAdjoinEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FA00819225E3FDF4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_74F9467299902123(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_74F9467299902123_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9F2EF05041F53CCA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageAttacker*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageAttacker*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9F2EF05041F53CCA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9042E5D64FC0E5EA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageDefender*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageDefender*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9042E5D64FC0E5EA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3BB49F956541C77F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAttackTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAttackTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3BB49F956541C77F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0617BB01CB769054(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageChunkTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0617BB01CB769054_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_62D3F9127AD76493(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_62D3F9127AD76493_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9FCF9608FF10A1C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartOwnerEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartOwnerEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9FCF9608FF10A1C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D478A2C3ECCFD1F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7D478A2C3ECCFD1F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0091EB311685F668(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillSubTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillSubTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0091EB311685F668_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DCCAD0D95AF7F778(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBetweenEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBetweenEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DCCAD0D95AF7F778_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64828F4C5691276A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAimAtTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAimAtTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_64828F4C5691276A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01A2D5804AD76405(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_01A2D5804AD76405_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_97B084E20D3A3E79(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAimTargetList*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_97B084E20D3A3E79_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F93483D56EC10F30(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F93483D56EC10F30_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_388E9603D9E4A565(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_388E9603D9E4A565_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2F2387F12113D6A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetReverse*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetReverse*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_2F2387F12113D6A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_89C3916FAACC2C53(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDummyEntity*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDummyEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_89C3916FAACC2C53_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0AF5FEC9238836B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValuePostProcessConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValuePostProcessConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0AF5FEC9238836B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F0A6AE2729DAAD4D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F0A6AE2729DAAD4D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C71D1B1E3D693023(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorVec3*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorVec3*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C71D1B1E3D693023_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_684188DEB7311E4F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Const*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Const*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_684188DEB7311E4F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_03295B42B870A0B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Value*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Value*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_03295B42B870A0B9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5A3FFA54DD350DA7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Group*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Group*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5A3FFA54DD350DA7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_12C840EF41BBCCC5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Predicate*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Predicate*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_12C840EF41BBCCC5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3143FE00062A56AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Random*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Random*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3143FE00062A56AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0E0E5497E37FB4FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_TargetCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_TargetCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0E0E5497E37FB4FB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9BED9ABE98A70F52(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_FactorGroup*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_FactorGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9BED9ABE98A70F52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_27B826C68EF087D3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Add*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Add*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_27B826C68EF087D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0E0F78CBEFF73940(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Sub*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Sub*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0E0F78CBEFF73940_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EAD7C0D20981177C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Mul*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Mul*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_EAD7C0D20981177C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF188C08A8679F47(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Div*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Div*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_FF188C08A8679F47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0106DD444772739F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Exp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Exp*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0106DD444772739F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_20B11304BD3012D0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Pow*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Pow*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_20B11304BD3012D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0856BE86AB8B1C5E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Abs*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Abs*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0856BE86AB8B1C5E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6970F6AB54966964(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Invert*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Invert*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_6970F6AB54966964_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_025D85F42749601B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Clamp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Clamp*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_025D85F42749601B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DD3C632788ECD484(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Max*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Max*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DD3C632788ECD484_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8E609660DAA94CDA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Min*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Min*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8E609660DAA94CDA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CB031A9CBA490CD6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_ConstMap*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_ConstMap*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_CB031A9CBA490CD6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3AEDD65FFA5B9EF2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_LinearMap*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_LinearMap*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3AEDD65FFA5B9EF2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A553363E7C1C00AE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Sigmoid*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Sigmoid*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A553363E7C1C00AE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_11(::SimpleJSON::JSONNode* a1, ::Class_4_F3347716CE7811F5*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F3347716CE7811F5*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA887B7B783F6F1C_1(::SimpleJSON::JSONNode* a1, ::Class_4_0A2C2B4DF8EF2285*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_0A2C2B4DF8EF2285*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_9(::SimpleJSON::JSONNode* a1, ::Class_4_6C451618FA553762_9*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C451618FA553762_9*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA887B7B783F6F1C_2(::SimpleJSON::JSONNode* a1, ::Class_4_E262A9056672EE4F*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E262A9056672EE4F*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_12(::SimpleJSON::JSONNode* a1, ::Class_4_232F1518392E1F66*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_232F1518392E1F66*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA887B7B783F6F1C_3(::SimpleJSON::JSONNode* a1, ::Class_4_6C65A57FFF554AAC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C65A57FFF554AAC*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA887B7B783F6F1C_4(::SimpleJSON::JSONNode* a1, ::Class_4_81F3F771E22D0900*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_81F3F771E22D0900*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA887B7B783F6F1C_5(::SimpleJSON::JSONNode* a1, ::Class_4_C1D584E9758BB4C6*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C1D584E9758BB4C6*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0FA7FDE8DDF819B7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCanMove*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCanMove*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0FA7FDE8DDF819B7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3BF1B745A528F6A0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsMoving*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsMoving*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3BF1B745A528F6A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_13(::SimpleJSON::JSONNode* a1, ::Class_4_B845218F1B6B1C41_2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_B845218F1B6B1C41_2*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_13_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_14(::SimpleJSON::JSONNode* a1, ::Class_4_E69DD69FF08AC92C*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E69DD69FF08AC92C*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_14_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_10(::SimpleJSON::JSONNode* a1, ::Class_4_6C451618FA553762_10*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C451618FA553762_10*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA887B7B783F6F1C_6(::SimpleJSON::JSONNode* a1, ::Class_4_E262A9056672EE4F_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E262A9056672EE4F_1*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_99A33FF1B6E9C7D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtLifeBindingConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtLifeBindingConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_99A33FF1B6E9C7D8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_15(::SimpleJSON::JSONNode* a1, ::Class_4_1DA131B5B4B4CFC5*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_1DA131B5B4B4CFC5*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_15_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_16(::SimpleJSON::JSONNode* a1, ::Class_4_898D9FE991FDEB8A_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_898D9FE991FDEB8A_1*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DB76ACB4179E9670(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DB76ACB4179E9670_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_17(::SimpleJSON::JSONNode* a1, ::Class_4_5F47BDCAFFA8140E*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_5F47BDCAFFA8140E*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_18(::SimpleJSON::JSONNode* a1, ::Class_4_455C7EBC1BF713C6*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_455C7EBC1BF713C6*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_18_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA887B7B783F6F1C_7(::SimpleJSON::JSONNode* a1, ::Class_4_2D6C5540BE1566A6*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_2D6C5540BE1566A6*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA887B7B783F6F1C_7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F89AB4BF2E65FA1_2(::SimpleJSON::JSONNode* a1, ::Class_4_508FA88832348AA4*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_508FA88832348AA4*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F89AB4BF2E65FA1_3(::SimpleJSON::JSONNode* a1, ::Class_4_97C5C900501AC698*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_97C5C900501AC698*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_19(::SimpleJSON::JSONNode* a1, ::Class_4_83E48A42EFE1B97C*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_83E48A42EFE1B97C*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_19_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_11(::SimpleJSON::JSONNode* a1, ::Class_4_6C451618FA553762_11*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C451618FA553762_11*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_20(::SimpleJSON::JSONNode* a1, ::Class_4_E96CE06DD2A46EC2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E96CE06DD2A46EC2*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_20_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_21(::SimpleJSON::JSONNode* a1, ::Class_4_890BC79DA352586D*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_890BC79DA352586D*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_22(::SimpleJSON::JSONNode* a1, ::Class_4_78A6531D3CAA198B*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_78A6531D3CAA198B*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_22_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9E85BB9A92923D_12(::SimpleJSON::JSONNode* a1, ::Class_4_6C451618FA553762_12*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C451618FA553762_12*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3E9E85BB9A92923D_12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_21912E78E9115077(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCompareProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCompareProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_21912E78E9115077_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AD845DBCDE9D175E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByComparePropertyRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByComparePropertyRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_AD845DBCDE9D175E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D4A96B83C3BC9575(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasTargetInAlertRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasTargetInAlertRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D4A96B83C3BC9575_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C62CD3D7EE2F5353(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInAlertRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInAlertRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C62CD3D7EE2F5353_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5D4CE01D206EE5F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInSkillRange*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInSkillRange*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5D4CE01D206EE5F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33AEF02803A8AA6D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsSkillUsing*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsSkillUsing*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_33AEF02803A8AA6D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4CA633219685EE1B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasSelectSkill*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasSelectSkill*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4CA633219685EE1B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A789FB7B342CA795(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBySkillCanUse*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBySkillCanUse*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A789FB7B342CA795_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5CF2DB0D2CEB6B3E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5CF2DB0D2CEB6B3E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DFDF08CDF11550CB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCurrentSkillName*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCurrentSkillName*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DFDF08CDF11550CB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F89AB4BF2E65FA1_4(::SimpleJSON::JSONNode* a1, ::Class_4_B1452AB91A4F872E*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_B1452AB91A4F872E*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F89AB4BF2E65FA1_5(::SimpleJSON::JSONNode* a1, ::Class_4_EC5C27B86F3A2D8A*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_EC5C27B86F3A2D8A*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F89AB4BF2E65FA1_6(::SimpleJSON::JSONNode* a1, ::Class_4_70CD0600B28C3054*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_70CD0600B28C3054*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_8F89AB4BF2E65FA1_6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_04C92C8614883312(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchGridAt*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchGridAt*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_04C92C8614883312_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F23C3B06AAABB469(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTargetInArea*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTargetInArea*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F23C3B06AAABB469_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D29D3CE0EEA79E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTrigger*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTrigger*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7D29D3CE0EEA79E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_07E1EE49C1A0F3F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_07E1EE49C1A0F3F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DDF2B767203354BD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DDF2B767203354BD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_468255E3864077C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_468255E3864077C5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D3871288F8CED0FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBattleTargetFetchGridByTag*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBattleTargetFetchGridByTag*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D3871288F8CED0FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F0F222EF76CBE2E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapTargetInTrigger*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1F0F222EF76CBE2E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ADE2E1A052092FD3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapLockTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapLockTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_ADE2E1A052092FD3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_515C826E974EBEBF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_515C826E974EBEBF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4DACBECCAF552C01(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillCastPos*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillCastPos*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4DACBECCAF552C01_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D52D4F15E4284E4D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillAbortSource*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D52D4F15E4284E4D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7FE395AAB4DB6858(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBelongGrid*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBelongGrid*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7FE395AAB4DB6858_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5CDD749E7B8DAFA5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapMoveTarget*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapMoveTarget*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_5CDD749E7B8DAFA5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D86F60D433682E2A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBornPoint*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBornPoint*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D86F60D433682E2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7688313BA1CDBAE0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridNearby*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridNearby*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7688313BA1CDBAE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_27F58F8F3A90FBB8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEmptyGridNearby*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEmptyGridNearby*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_27F58F8F3A90FBB8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_079821407A39BCB2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridOwner*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridOwner*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_079821407A39BCB2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_31B62F3F86A36E49(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEntityInGrid*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEntityInGrid*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_31B62F3F86A36E49_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_14396501191C2650(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_14396501191C2650_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B50410B9832A9437(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapPosWithOffset*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapPosWithOffset*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_B50410B9832A9437_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EA98BBEAB075793E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtGridDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtGridDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_EA98BBEAB075793E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0BCB198334300DE0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleGridOrder*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleGridOrder*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0BCB198334300DE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD0168E536AC807E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BD0168E536AC807E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D87CFBDB928E0C88(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_D87CFBDB928E0C88_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1326D0EA955DB60B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_1326D0EA955DB60B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3CEC76C4A293E9FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankByCharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankByCharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3CEC76C4A293E9FB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DA4A9E89A6988726(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtDistance*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtDistance*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DA4A9E89A6988726_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CC79302D80E15B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtDirConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtDirConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_9CC79302D80E15B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C9CA47DE4EBB61AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtAngleBetween*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtAngleBetween*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C9CA47DE4EBB61AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3A626A9DDE7A86D6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_3A626A9DDE7A86D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7425D496AD2527F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattlePropertyRatio*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattlePropertyRatio*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_C7425D496AD2527F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E331D66B721E403F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtModifierProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtModifierProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E331D66B721E403F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A7196DB1B7411B41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtSkillProperty*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtSkillProperty*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A7196DB1B7411B41_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7BFCD24B44049B89(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_CharacterID*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_CharacterID*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_7BFCD24B44049B89_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A54AB8AE6B13D332(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtTimeStamp*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtTimeStamp*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_A54AB8AE6B13D332_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4776DC29E16E7910(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareMP*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareMP*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_4776DC29E16E7910_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E0F2845D944BD076(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_E0F2845D944BD076_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEF80FB83E1A1534_23(::SimpleJSON::JSONNode* a1, ::Class_4_280EADA080C75A9D*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_280EADA080C75A9D*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BEF80FB83E1A1534_23_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_582890F2F6BCE54F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSkillTypeDisable*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSkillTypeDisable*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_582890F2F6BCE54F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_567EA6E13037C8CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTutorialFinish*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTutorialFinish*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_567EA6E13037C8CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0381868994C87CB9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_0381868994C87CB9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BF0D5BDC0EB95757(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsShowInActionBar*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsShowInActionBar*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_BF0D5BDC0EB95757_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F4FBC387EC486E30(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_F4FBC387EC486E30_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AF4AA26D9F12EDD3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_AF4AA26D9F12EDD3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DF79D0AF6937EF61(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_DF79D0AF6937EF61_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_89DBE2669696E2E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*&))((::PBYTE)hIl2Cpp + CLASS_1_9EB2CB86795DEEF1_METHOD_1_89DBE2669696E2E3_OFFSET))(a1, a2);
	}
};
