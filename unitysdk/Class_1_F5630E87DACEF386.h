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
#include "unitysdk/Struct_2_269BA11E54128632.h"
#include "unitysdk/Struct_2_269BA11E54128632_1.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"
#include "unitysdk/Struct_2_7C99830C88C15F6F.h"
#include "unitysdk/Struct_2_FFF22050766881A4.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class Class_1_0B20F1FA28B84337;
class Class_1_0B6050F6F316691E;
class Class_1_0F724F8EDC601A3C;
class Class_1_2CAAA2FDF9170110;
class Class_1_2EC0EF10CE4B8713;
class Class_1_2F8808448A4005C9;
class Class_1_3745C69C00F04B7D;
class Class_1_3745C69C00F04B7D_1;
class Class_1_3745C69C00F04B7D_2;
class Class_1_3745C69C00F04B7D_3;
class Class_1_3745C69C00F04B7D_4;
class Class_1_3745C69C00F04B7D_5;
class Class_1_3A3D56D4D49D35CE;
class Class_1_3FC4072EF8218789;
class Class_1_43DD8124539DA898;
class Class_1_43DD8124539DA898_1;
class Class_1_4B1D406725A7144B;
class Class_1_4B6B1EA474B8E7B0;
class Class_1_4F30521532511E50;
class Class_1_5D31C4140DCE7D34;
class Class_1_637CF5391C15E01B;
class Class_1_6D3107F5009DB1BB;
class Class_1_6D3107F5009DB1BB_1;
class Class_1_6D3107F5009DB1BB_2;
class Class_1_73507DF29F8561CD;
class Class_1_73B429E1E9F270F4;
class Class_1_7A22A3DBEEDD1F80;
class Class_1_7A8FB7EDAFC5C8F4;
class Class_1_927AEEA01B635CB6;
class Class_1_927AEEA01B635CB6_2;
class Class_1_942D40AEEDD1812F;
class Class_1_980894BED8163CEE;
class Class_1_A4D134A7DAD941E3;
class Class_1_A88C3AAF0DD46F4C;
class Class_1_A88C3AAF0DD46F4C_10;
class Class_1_A88C3AAF0DD46F4C_11;
class Class_1_A88C3AAF0DD46F4C_12;
class Class_1_A88C3AAF0DD46F4C_13;
class Class_1_A88C3AAF0DD46F4C_1;
class Class_1_A88C3AAF0DD46F4C_2;
class Class_1_A88C3AAF0DD46F4C_3;
class Class_1_A88C3AAF0DD46F4C_4;
class Class_1_A88C3AAF0DD46F4C_5;
class Class_1_A88C3AAF0DD46F4C_6;
class Class_1_A88C3AAF0DD46F4C_7;
class Class_1_A88C3AAF0DD46F4C_8;
class Class_1_A88C3AAF0DD46F4C_9;
class Class_1_ABE8D38DFA4EFF6A;
class Class_1_ADE34076259CCCF7_2;
class Class_1_B1429A4347DAE014;
class Class_1_B34BC0DFAA62C487;
class Class_1_BC601FCB47AEB5E5;
class Class_1_D6A07C122FCF6261;
class Class_1_DA5E269DBF62B292;
class Class_1_DFF86A25F881990E;
class Class_1_E71924F20B00CC55;
class Class_1_E71924F20B00CC55_1;
class Class_1_E8C259E730C95D15;
class Class_1_EDD10E908F1C4623;
class Class_1_FCA657D695DD9485;
class Class_2_049053A9DCD26B56;
class Class_2_1E074B0D9996EDF5;
class Class_2_2F326B57B6445F8D;
class Class_2_36E4CA071B73A265;
class Class_2_68C34B5C1C40C2FF;
class Class_2_82AD06FA18CD21C2;
class Class_2_9D9E51CBF6547B9C;
class Class_2_C73AB3362B307540;
class Class_2_EF79B40F86BE9C39;
class Class_2_FFBC8C99F6B84D8F;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class LockTargetConfigList; }
namespace RPG::Client { class LockTargetParam; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class AIDefaultSelectorConfig; }
namespace RPG::GameCore { class AIPathwayInfo; }
namespace RPG::GameCore { class AISelector; }
namespace RPG::GameCore { class AISkillDependencyConfig; }
namespace RPG::GameCore { class AISlaveConfig; }
namespace RPG::GameCore { class AISwitchCaseDecision; }
namespace RPG::GameCore { class AITransitionTableRow; }
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class AbilityPropertyRangeGroup; }
namespace RPG::GameCore { class AbilityPropertyValue; }
namespace RPG::GameCore { class ActionBarEffectConfig; }
namespace RPG::GameCore { class ActionBarEffectTextConfig; }
namespace RPG::GameCore { class ActionSwitchCaseItemConfig; }
namespace RPG::GameCore { class AdvEffectConfig; }
namespace RPG::GameCore { class AdvSetSkillSlotDataItem; }
namespace RPG::GameCore { class AdventureAbilityConfig; }
namespace RPG::GameCore { class AdventureAnimationMoveRange; }
namespace RPG::GameCore { class AdventureBehaviorConfig; }
namespace RPG::GameCore { class AdventureCommonEffectsPreloadConfig; }
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace RPG::GameCore { class AdventureSkillConfig; }
namespace RPG::GameCore { class AlleyBuffGridItemData; }
namespace RPG::GameCore { class AlleyConditionExtendParam; }
namespace RPG::GameCore { class AlleyDockGridItemData; }
namespace RPG::GameCore { class AlleyShopGridItemData; }
namespace RPG::GameCore { class AlleyTutorialGridItemData; }
namespace RPG::GameCore { class AlleyWalkableGridItemData; }
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class AnimGroupEventEntry; }
namespace RPG::GameCore { class AnimWeighted; }
namespace RPG::GameCore { class AnimZoneBaseConfig; }
namespace RPG::GameCore { class AnimationMoveRange; }
namespace RPG::GameCore { class AnimationTimeEvent; }
namespace RPG::GameCore { class AnimationZone; }
namespace RPG::GameCore { class AnimatorClipZoneDescConfig; }
namespace RPG::GameCore { class AnimatorStateCustomZoneBinding; }
namespace RPG::GameCore { class AnimatorStateGroupZoneDescConfig; }
namespace RPG::GameCore { class AnimatorStateZoneDescConfig; }
namespace RPG::GameCore { class AnimatorStateZoneRangeConfig; }
namespace RPG::GameCore { class AssistWayPoint; }
namespace RPG::GameCore { class AssistWayPointCondition; }
namespace RPG::GameCore { class AssistWayPointConditionPack; }
namespace RPG::GameCore { class AssistWayPointFastComplete; }
namespace RPG::GameCore { class AssistWayPointLittleGameCondition; }
namespace RPG::GameCore { class AssistWayPointPack; }
namespace RPG::GameCore { class AttachPointEffectAdaptionConfig; }
namespace RPG::GameCore { class AttachmentVisibilityNode; }
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class AvatarAssetPreloadConfig; }
namespace RPG::GameCore { class AvatarChangeTemplate; }
namespace RPG::GameCore { class AvatarColliderCameraConfig; }
namespace RPG::GameCore { class AvatarEffectsPreloadItem; }
namespace RPG::GameCore { class AvatarLineupKeyLevelConfig; }
namespace RPG::GameCore { class AvatarOutfitDecorationConfig; }
namespace RPG::GameCore { class AvatarOutfitPartConfig; }
namespace RPG::GameCore { class AvatarPathChangeToTargetConfig; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class BackgroundTalkInfo; }
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace RPG::GameCore { class BaseChenLingBattleResource; }
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class BaseChimeraDuelNode; }
namespace RPG::GameCore { class BaseChimeraDuelSaveEntitySelectionConfig; }
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class BaseRogueMagicUltraUnitSpecialFactor; }
namespace RPG::GameCore { class BattleBGMStateConfig; }
namespace RPG::GameCore { class BattleBulletCommentItem; }
namespace RPG::GameCore { class BattleEntityPromotionWhiteBoxData; }
namespace RPG::GameCore { class BattleEntitySkillLevelWhiteBoxData; }
namespace RPG::GameCore { class BattleEntitySkillWhiteBoxData; }
namespace RPG::GameCore { class BattleEventEffectsPreloadList; }
namespace RPG::GameCore { class BattleExtraPropertyAdditionPair; }
namespace RPG::GameCore { class BattleLineupAvatarConfig; }
namespace RPG::GameCore { class BattleLineupEquipmentConfig; }
namespace RPG::GameCore { class BattleLineupSkillTreePoint; }
namespace RPG::GameCore { class BattlePauseEnvironmentData; }
namespace RPG::GameCore { class BattlePerformActorInit; }
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class BattlePerformCreateActor; }
namespace RPG::GameCore { class BattleReportCustomValue; }
namespace RPG::GameCore { class BattleReportCustomValueList; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class BoolVariableConfig; }
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class BuildEffectPreloadItem; }
namespace RPG::GameCore { class ByCompareItemPair; }
namespace RPG::GameCore { class CPUGPUInfo; }
namespace RPG::GameCore { class CRPVirtualCameraConfig; }
namespace RPG::GameCore { class CRPVirtualCameraConfigList; }
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }
namespace RPG::GameCore { class CakeRaceBuffConfig; }
namespace RPG::GameCore { class CakeRaceCatAIConfig; }
namespace RPG::GameCore { class CakeRaceCellConfig; }
namespace RPG::GameCore { class CakeRaceEventHandler; }
namespace RPG::GameCore { class CakeRaceHitConfig; }
namespace RPG::GameCore { class CakeRaceMoveConfig; }
namespace RPG::GameCore { class CakeRaceOwlbertAnim; }
namespace RPG::GameCore { class CakeRacePickupItemConfig; }
namespace RPG::GameCore { class CakeRacePropertyModifier; }
namespace RPG::GameCore { class CakeRaceRegionCellConfig; }
namespace RPG::GameCore { class CakeRaceSectionConfig; }
namespace RPG::GameCore { class CakeRaceTrapCellConfig; }
namespace RPG::GameCore { class CakeRaceTrapCellParamConfig; }
namespace RPG::GameCore { class CameraShakeTemplateSingleConfig; }
namespace RPG::GameCore { class CaptureNPCToCharacter; }
namespace RPG::GameCore { class CaseContainerBase; }
namespace RPG::GameCore { class CellConfig; }
namespace RPG::GameCore { class ChangeCharacterSkillRowDataItem; }
namespace RPG::GameCore { class CharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class CharacterAtlasFaceEyeShapeGroup; }
namespace RPG::GameCore { class CharacterAtlasFaceSet; }
namespace RPG::GameCore { class CharacterCameraConfig; }
namespace RPG::GameCore { class CharacterEmoConfig; }
namespace RPG::GameCore { class CharacterEyeBloomConfig; }
namespace RPG::GameCore { class CharacterEyeCtrlConfig; }
namespace RPG::GameCore { class CharacterFaceExpressionConfig; }
namespace RPG::GameCore { class CharacterIDGroupConfig; }
namespace RPG::GameCore { class CharacterLodMaterialProperty; }
namespace RPG::GameCore { class CharacterLodMaterialPropertyList; }
namespace RPG::GameCore { class CharacterOutfitPart; }
namespace RPG::GameCore { class CharacterOutfitPartBoneRef; }
namespace RPG::GameCore { class CharacterOutfitPendant; }
namespace RPG::GameCore { class CharacterPhaseConfig; }
namespace RPG::GameCore { class CharacterPrefabLodInfo; }
namespace RPG::GameCore { class CharacterReplaceMaterialOriginProperty; }
namespace RPG::GameCore { class CharacterReplaceMaterialRender; }
namespace RPG::GameCore { class CharacterReplaceMaterialRenderList; }
namespace RPG::GameCore { class CharacterReplaceMaterialVariant; }
namespace RPG::GameCore { class CharacterSkinResMapItem; }
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }
namespace RPG::GameCore { class ChenLingBattleBezierPointConfig; }
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace RPG::GameCore { class ChenLingBattlePresetArmyConfig; }
namespace RPG::GameCore { class ChenLingBattlePresetEnhancementConfig; }
namespace RPG::GameCore { class ChenLingGridOffset; }
namespace RPG::GameCore { class ChimeraAbilityBase; }
namespace RPG::GameCore { class ChimeraAbilityModifier; }
namespace RPG::GameCore { class ChimeraAbilityModifierParam; }
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace RPG::GameCore { class ChimeraBattleWaitEvent; }
namespace RPG::GameCore { class ChimeraDuelBuffConfig; }
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace RPG::GameCore { class ChimeraDuelEntityComparerBase; }
namespace RPG::GameCore { class ChimeraDuelEntityValueGetterBase; }
namespace RPG::GameCore { class ChimeraDuelExcelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelModifier; }
namespace RPG::GameCore { class ChimeraDuelNodeSequence; }
namespace RPG::GameCore { class ChimeraDuelPredicateBase; }
namespace RPG::GameCore { class ChimeraDuelStatusConfig; }
namespace RPG::GameCore { class ChimeraEvaluationCondition; }
namespace RPG::GameCore { class ChimeraPhaseCondition; }
namespace RPG::GameCore { class ChimeraTalk; }
namespace RPG::GameCore { class ChimeraTalkCondition; }
namespace RPG::GameCore { class ChimeraTalkContent; }
namespace RPG::GameCore { class ChimeraTalkContentWithWeight; }
namespace RPG::GameCore { class ChimeraWorkPhase; }
namespace RPG::GameCore { class ChronicleConnectionConfig; }
namespace RPG::GameCore { class ChronicleCustomShowCondition; }
namespace RPG::GameCore { class ChronicleCustomUnlockConditionConfig; }
namespace RPG::GameCore { class ChronicleLogicConnectionNodeConfig; }
namespace RPG::GameCore { class ChronicleNodeConfig; }
namespace RPG::GameCore { class CinemachineVirtualCameraTemplateConfig; }
namespace RPG::GameCore { class ClearNpcDistanceTrigger; }
namespace RPG::GameCore { class ClockParkStoryCharacter; }
namespace RPG::GameCore { class ColliderConfig; }
namespace RPG::GameCore { class CommonSkill; }
namespace RPG::GameCore { class CommonSkillPool; }
namespace RPG::GameCore { class ComplexSkillAIFactor; }
namespace RPG::GameCore { class ComplexSkillAIFactorGroup; }
namespace RPG::GameCore { class ComplexSkillAIFactorGroupWeight; }
namespace RPG::GameCore { class ComplexSkillAIFactorGroupWeightEx; }
namespace RPG::GameCore { class ComplexSkillAILinearItem; }
namespace RPG::GameCore { class ComponentConfig; }
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ConfigBakeLayoutInfo; }
namespace RPG::GameCore { class ConfigCityTrain; }
namespace RPG::GameCore { class ConicalVisionConfig; }
namespace RPG::GameCore { class ConsiderationAxisConfig; }
namespace RPG::GameCore { class ContainerStateToSeedStateConfig; }
namespace RPG::GameCore { class CountToModifierMapRangeItem; }
namespace RPG::GameCore { class CreateCharacter; }
namespace RPG::GameCore { class CreateNPC; }
namespace RPG::GameCore { class CurveShakeConfig; }
namespace RPG::GameCore { class CustomCameraBattleTransitionShotConfig; }
namespace RPG::GameCore { class CustomMazeBattleTransitionConfig; }
namespace RPG::GameCore { class CustomTeamFormationConfig; }
namespace RPG::GameCore { class CutSceneSFXItem; }
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class DebateSpecialItem; }
namespace RPG::GameCore { class DebateTestimonySetting; }
namespace RPG::GameCore { class DepartedConfig; }
namespace RPG::GameCore { class DestroyNPC; }
namespace RPG::GameCore { class DevTalkInfo; }
namespace RPG::GameCore { class DeviceInfo; }
namespace RPG::GameCore { class DeviceModelInfo; }
namespace RPG::GameCore { class DeviceRelatedAvatarAssetPreloadConfig; }
namespace RPG::GameCore { class DeviceRelatedBool; }
namespace RPG::GameCore { class DeviceRelatedFrameTimeBudgetConfig; }
namespace RPG::GameCore { class DeviceRelatedGameObjectPoolConfig; }
namespace RPG::GameCore { class DeviceRelatedMonsterAssetPreloadConfig; }
namespace RPG::GameCore { class DialogueEventInfo; }
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace RPG::GameCore { class DiceCombatModifierConfig; }
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }
namespace RPG::GameCore { class DiceCombatPredicateConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorRollConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformance; }
namespace RPG::GameCore { class DimensionIncrementsConfig; }
namespace RPG::GameCore { class DisplayItemConfig; }
namespace RPG::GameCore { class DistanceToScoreWeight; }
namespace RPG::GameCore { class DistanceToScoreWeightMapping; }
namespace RPG::GameCore { class DistrictAreaSoundTransform; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class DriftComponentData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace RPG::GameCore { class DynamicLoadBattleAreaConfig; }
namespace RPG::GameCore { class DynamicLoadBlockData; }
namespace RPG::GameCore { class DynamicLoadBlockDataList; }
namespace RPG::GameCore { class DynamicLoadBlockDatas; }
namespace RPG::GameCore { class DynamicParam; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore { class DynamicValueRangeCallback; }
namespace RPG::GameCore { class DynamicValueRangeGroup; }
namespace RPG::GameCore { class EditorReplaceMaterialScheme; }
namespace RPG::GameCore { class EffectAdaptCharaScaleDataItem; }
namespace RPG::GameCore { class EffectAdaptionConfig; }
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class EffectInstanceConfig; }
namespace RPG::GameCore { class EffectModifyData; }
namespace RPG::GameCore { class EffectMutexConfigData; }
namespace RPG::GameCore { class EffectPathList; }
namespace RPG::GameCore { class EffectSurfaceOverride; }
namespace RPG::GameCore { class EffectSurfaceTypeConfig; }
namespace RPG::GameCore { class EffectTriggerRange; }
namespace RPG::GameCore { class ElationConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class ElfBehaviorStateItem; }
namespace RPG::GameCore { class ElfBuff; }
namespace RPG::GameCore { class ElfEntranceAnchorConfig; }
namespace RPG::GameCore { class ElfEntranceNPCConfig; }
namespace RPG::GameCore { class ElfFeverSkillLevelConfig; }
namespace RPG::GameCore { class ElfFoodEventConfig; }
namespace RPG::GameCore { class ElfHeadWaiterTalkConfigItem; }
namespace RPG::GameCore { class ElfLeaderSkillLevelConfig; }
namespace RPG::GameCore { class ElfPhaseItem; }
namespace RPG::GameCore { class ElfPropertyModifier; }
namespace RPG::GameCore { class ElfSelectEventTalk; }
namespace RPG::GameCore { class ElfSpecialEventEffect; }
namespace RPG::GameCore { class ElfSpecialEventSelectItem; }
namespace RPG::GameCore { class ElfSuperEventTypeConfig; }
namespace RPG::GameCore { class ElfWaveConfig; }
namespace RPG::GameCore { class ElfWaveCustomerConfig; }
namespace RPG::GameCore { class ElfWaveOrder; }
namespace RPG::GameCore { class EmojiIconInfo; }
namespace RPG::GameCore { class EntityColliderCameraConfig; }
namespace RPG::GameCore { class EntityColliderHeightCameraConfig; }
namespace RPG::GameCore { class EntityLodModelConfig; }
namespace RPG::GameCore { class EntityMoveTrack; }
namespace RPG::GameCore { class EntityRuntimeReplaceArtPrefab; }
namespace RPG::GameCore { class EntityVisiableInfo; }
namespace RPG::GameCore { class EnvironmentDataInfo; }
namespace RPG::GameCore { class EraFlipGroupConfig; }
namespace RPG::GameCore { class EraFlipSet; }
namespace RPG::GameCore { class EraFlipperBattleAreaOverrideConfig; }
namespace RPG::GameCore { class EraRegion; }
namespace RPG::GameCore { class EventLookUpConfig; }
namespace RPG::GameCore { class FSVOverridItem; }
namespace RPG::GameCore { class FetchAdvMonsterData; }
namespace RPG::GameCore { class FetchAdvNPCData; }
namespace RPG::GameCore { class FetchAdvPropData; }
namespace RPG::GameCore { class FieldEffectAdaptionConfig; }
namespace RPG::GameCore { class FieldEffectHighPriorityList; }
namespace RPG::GameCore { class FilePath; }
namespace RPG::GameCore { class FilterSystemConflictTypes; }
namespace RPG::GameCore { class FinishActionConfig; }
namespace RPG::GameCore { class FiveDimActionBubbleTalkInfo; }
namespace RPG::GameCore { class FiveDimActionRandomBubbleTalkInfoGroup; }
namespace RPG::GameCore { class FiveDimAnimatorListenConfig; }
namespace RPG::GameCore { class FiveDimAvatarConfig; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FiveDimBaseEventCondition; }
namespace RPG::GameCore { class FiveDimBubbleTalkInfo; }
namespace RPG::GameCore { class FiveDimChildPresetItemConfig; }
namespace RPG::GameCore { class FiveDimDanmuTrack; }
namespace RPG::GameCore { class FiveDimDanmuTrackGroup; }
namespace RPG::GameCore { class FiveDimDefaultCameraConfig; }
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class FiveDimEffectPreloadConfig; }
namespace RPG::GameCore { class FiveDimEmotionConfig; }
namespace RPG::GameCore { class FiveDimEntityVar; }
namespace RPG::GameCore { class FiveDimEventReceiverItem; }
namespace RPG::GameCore { class FiveDimEvilSmileStateConfig; }
namespace RPG::GameCore { class FiveDimEvilSmileStateEventConfig; }
namespace RPG::GameCore { class FiveDimEvilSmileStateOverrideConfig; }
namespace RPG::GameCore { class FiveDimExtraLevelGraphConfig; }
namespace RPG::GameCore { class FiveDimFlappyPipeBlockConfig; }
namespace RPG::GameCore { class FiveDimGrenadierProjectileConfig; }
namespace RPG::GameCore { class FiveDimLevelVarCondition; }
namespace RPG::GameCore { class FiveDimMapFaceConfig; }
namespace RPG::GameCore { class FiveDimMapSurfaceConfig; }
namespace RPG::GameCore { class FiveDimMiniGameCollectCoinTemplate; }
namespace RPG::GameCore { class FiveDimMiniGameCollectCoinWave; }
namespace RPG::GameCore { class FiveDimMoveBakedConfig; }
namespace RPG::GameCore { class FiveDimMusicCueInfo; }
namespace RPG::GameCore { class FiveDimMusicEventInfo; }
namespace RPG::GameCore { class FiveDimMusicInfo; }
namespace RPG::GameCore { class FiveDimPreloadInfo; }
namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimPropSpawnerItem; }
namespace RPG::GameCore { class FiveDimRTPCConfig; }
namespace RPG::GameCore { class FiveDimRandomBubbleTalkInfoGroup; }
namespace RPG::GameCore { class FiveDimRenderingItemStateMappingConfig; }
namespace RPG::GameCore { class FiveDimSectionConfig; }
namespace RPG::GameCore { class FiveDimSimpleProjectileRandomVelItem; }
namespace RPG::GameCore { class FiveDimSingleFogOfWarConfig; }
namespace RPG::GameCore { class FiveDimSingleTriggerEventEmitterConfig; }
namespace RPG::GameCore { class FiveDimSplineMovePoint; }
namespace RPG::GameCore { class FiveDimSubMissionCondition; }
namespace RPG::GameCore { class FiveDimSurfaceBakedInfo; }
namespace RPG::GameCore { class FiveDimSurfacePoint; }
namespace RPG::GameCore { class FiveDimTrainEnergyGear; }
namespace RPG::GameCore { class FiveDimTrainEnergySpeedMapItem; }
namespace RPG::GameCore { class FiveDimViewBakedInfo; }
namespace RPG::GameCore { class FloatCurveKeyframe; }
namespace RPG::GameCore { class FloatVariableConfig; }
namespace RPG::GameCore { class FloatingSpiritBlock; }
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace RPG::GameCore { class FloorSavedValueConfig; }
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace RPG::GameCore { class FollowByPlayerCustomRoutePoint; }
namespace RPG::GameCore { class FollowSlotConfig; }
namespace RPG::GameCore { class FormationData; }
namespace RPG::GameCore { class FormationMoveMemberInfo; }
namespace RPG::GameCore { class FormationPatternConfig; }
namespace RPG::GameCore { class FormationSlotConfig; }
namespace RPG::GameCore { class FormationTargetDistanceConfig; }
namespace RPG::GameCore { class FormationZOffsetList; }
namespace RPG::GameCore { class FormationZOffsetParams; }
namespace RPG::GameCore { class FoundationPropStateConfig; }
namespace RPG::GameCore { class FourRotateVoxelAnimalConfig; }
namespace RPG::GameCore { class FourRotateVoxelEntityStateActionConfig; }
namespace RPG::GameCore { class FourRotateVoxelFloorMapInfoConfig; }
namespace RPG::GameCore { class FourRotateVoxelGameModeConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelEnvConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelTargetProgressConfig; }
namespace RPG::GameCore { class FourRotateVoxelMapInfoConfig; }
namespace RPG::GameCore { class FrameTimeBudgetInfo; }
namespace RPG::GameCore { class FreeStyleAnimClipGroupZoneInfo; }
namespace RPG::GameCore { class FreeStyleAnimClipZoneInfo; }
namespace RPG::GameCore { class FreeStyleAnimEventConfig; }
namespace RPG::GameCore { class FreeStyleAnimEventEntry; }
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }
namespace RPG::GameCore { class FreeStyleCharacterExtendLayerConfig; }
namespace RPG::GameCore { class FreeStyleCharacterIDMapping; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace RPG::GameCore { class FreeStyleState; }
namespace RPG::GameCore { class FreeStyleStateTemplate; }
namespace RPG::GameCore { class FreeStyleTriggerGraphInfo; }
namespace RPG::GameCore { class FreeStyleTriggerSimpleNodeInfo; }
namespace RPG::GameCore { class FreeStyleTriggerTransitionInfo; }
namespace RPG::GameCore { class GameEntryMenu; }
namespace RPG::GameCore { class GameEntryStage; }
namespace RPG::GameCore { class GameLevelDiceCombatNPCConfig; }
namespace RPG::GameCore { class GameLevelHeartDialDialogueConfig; }
namespace RPG::GameCore { class GameLevelHeartDialNPCConfig; }
namespace RPG::GameCore { class GameObjectPoolConfigTemplate; }
namespace RPG::GameCore { class GameObjectPoolGroupConfig; }
namespace RPG::GameCore { class GameObjectPoolGroupSetting; }
namespace RPG::GameCore { class GameObjectPoolSetting; }
namespace RPG::GameCore { class GoodsClass; }
namespace RPG::GameCore { class GraphicDeviceInfo; }
namespace RPG::GameCore { class GraphicsSettingRequirements; }
namespace RPG::GameCore { class GrassData; }
namespace RPG::GameCore { class GravityBallCondition; }
namespace RPG::GameCore { class GridFightBattleTemplate; }
namespace RPG::GameCore { class GridFightWaveInfo; }
namespace RPG::GameCore { class GridFightWaveMonsterEntry; }
namespace RPG::GameCore { class GridFightWaveMonsterInfo; }
namespace RPG::GameCore { class GroupEntityCreateConfig; }
namespace RPG::GameCore { class GroupEntityDestroyConfig; }
namespace RPG::GameCore { class GroupEntityInfo; }
namespace RPG::GameCore { class GroupLookUpConfig; }
namespace RPG::GameCore { class GroupMemberEntityAnimatorParamConfig; }
namespace RPG::GameCore { class GroupPropertyConfig; }
namespace RPG::GameCore { class GroupPropertyOverrideItem; }
namespace RPG::GameCore { class GroupState; }
namespace RPG::GameCore { class GroupToMemberEntityDataConfig; }
namespace RPG::GameCore { class GroupValueLookUpConfig; }
namespace RPG::GameCore { class HipplenChimeraWaveConfig; }
namespace RPG::GameCore { class HipplenHintWeightConfig; }
namespace RPG::GameCore { class HipplenIncidentOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentRandomSettlementConfig; }
namespace RPG::GameCore { class HipplenIncidentStepConfig; }
namespace RPG::GameCore { class HipplenMiniGameGoodsConfig; }
namespace RPG::GameCore { class HipplenMiniGameGradeConfig; }
namespace RPG::GameCore { class HipplenMiniGameLoadCharacter; }
namespace RPG::GameCore { class HipplenMovingGoodsEventConfig; }
namespace RPG::GameCore { class HipplenPickingGoodsNPCConfig; }
namespace RPG::GameCore { class HipplenRequireGoodsConfig; }
namespace RPG::GameCore { class HitTimeSlowConfig; }
namespace RPG::GameCore { class HoYoGroupStreamingBlackListItem; }
namespace RPG::GameCore { class HoYoGroupStreamingTemplateItem; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class HoyoTagNodeInfo; }
namespace RPG::GameCore { class IntersectionPhaseSerialization; }
namespace RPG::GameCore { class IslandStateConfig; }
namespace RPG::GameCore { class IslandStateSavedValueCondition; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class JsonEnumConfig; }
namespace RPG::GameCore { class JsonOfflineCullingCellSerializeData; }
namespace RPG::GameCore { class JsonOfflineCullingCellSubData; }
namespace RPG::GameCore { class LevelAdvEffectOverrideInfo; }
namespace RPG::GameCore { class LevelAnchorInfo; }
namespace RPG::GameCore { class LevelAudienceInfo; }
namespace RPG::GameCore { class LevelAudienceMemberCurveInfo; }
namespace RPG::GameCore { class LevelAudienceMemberRendererInfo; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace RPG::GameCore { class LevelCirclePointInfo; }
namespace RPG::GameCore { class LevelCrowdBakedInfo; }
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace RPG::GameCore { class LevelCrowdMemberBakedInfo; }
namespace RPG::GameCore { class LevelCrowdMemberInfo; }
namespace RPG::GameCore { class LevelCurveInfo; }
namespace RPG::GameCore { class LevelCurvePointInfo; }
namespace RPG::GameCore { class LevelDialogPackInfo; }
namespace RPG::GameCore { class LevelDimensionBakedInfo; }
namespace RPG::GameCore { class LevelDimensionCrossMapBriefInfo; }
namespace RPG::GameCore { class LevelDimensionFilterExpression; }
namespace RPG::GameCore { class LevelDimensionInfo; }
namespace RPG::GameCore { class LevelDistrictInfo; }
namespace RPG::GameCore { class LevelEntityBakedInfo; }
namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class LevelEntityReferenceInfo; }
namespace RPG::GameCore { class LevelFloorBakedSubmapInfo; }
namespace RPG::GameCore { class LevelFloorBakedSubmapSummaryInfo; }
namespace RPG::GameCore { class LevelGroupAtmosphereLoadCondition; }
namespace RPG::GameCore { class LevelGroupBakedInfo; }
namespace RPG::GameCore { class LevelGroupCrossMapBriefInfo; }
namespace RPG::GameCore { class LevelGroupInstanceInfo; }
namespace RPG::GameCore { class LevelGroupMainMissionIssuePatch; }
namespace RPG::GameCore { class LevelGroupMissionCondition; }
namespace RPG::GameCore { class LevelGroupRandomInitControl; }
namespace RPG::GameCore { class LevelGroupSavedValueCondition; }
namespace RPG::GameCore { class LevelInitSequeceConfig; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LevelMinimapLayerSpriteConfig; }
namespace RPG::GameCore { class LevelMinimapLayerSpriteConfigCollection; }
namespace RPG::GameCore { class LevelMinimapPassage; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCBakedInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelNPCNearbyConfig; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace RPG::GameCore { class LevelNavNodeInfo; }
namespace RPG::GameCore { class LevelNavNodeInnerConnectInfo; }
namespace RPG::GameCore { class LevelNavNodeInnerNodeInfo; }
namespace RPG::GameCore { class LevelNavNodeInnerTransitInfo; }
namespace RPG::GameCore { class LevelNavNodeTransitInfo; }
namespace RPG::GameCore { class LevelNavmapArea; }
namespace RPG::GameCore { class LevelNavmapSubmapConfig; }
namespace RPG::GameCore { class LevelPathwayInfo; }
namespace RPG::GameCore { class LevelPathwayLinkInfo; }
namespace RPG::GameCore { class LevelPedestrianFlowInfo; }
namespace RPG::GameCore { class LevelPedestrianInfo; }
namespace RPG::GameCore { class LevelPedestrianLineUpPointInfo; }
namespace RPG::GameCore { class LevelPedestrianLineUpSourceInfo; }
namespace RPG::GameCore { class LevelPedestrianMemberInfo; }
namespace RPG::GameCore { class LevelPedestrianNodeInfo; }
namespace RPG::GameCore { class LevelPedestrianV2BakedInfo; }
namespace RPG::GameCore { class LevelPedestrianV2EmitInfo; }
namespace RPG::GameCore { class LevelPedestrianV2Info; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionAreaInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingTribeDropPointInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionConnectAreaInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionRoadPathInfo; }
namespace RPG::GameCore { class LevelPedestrianV2MemberInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryConnectInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryPairInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadInvisibleSegmentInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadPointInfo; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace RPG::GameCore { class LevelPropStateConfig; }
namespace RPG::GameCore { class LevelPropStateIcon; }
namespace RPG::GameCore { class LevelRegionConnectivity; }
namespace RPG::GameCore { class LevelRegionInfo; }
namespace RPG::GameCore { class LevelRegionStateCondition; }
namespace RPG::GameCore { class LevelRegionStateConfig; }
namespace RPG::GameCore { class LevelRotatableRegionBakedInfo; }
namespace RPG::GameCore { class LevelRotatableRegionPoseBakedInfo; }
namespace RPG::GameCore { class LevelSmartObjectCommonPointInfo; }
namespace RPG::GameCore { class LevelSmartObjectInfo; }
namespace RPG::GameCore { class LevelSmartObjectPointInfo; }
namespace RPG::GameCore { class LevelSmartObjectSlotInfo; }
namespace RPG::GameCore { class LevelStartSequeceConfig; }
namespace RPG::GameCore { class LevelSubmapEntityBakedInfo; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class LevelValidNavmapSubmapConfig; }
namespace RPG::GameCore { class LevelWaypointInfo; }
namespace RPG::GameCore { class LineupAvatarDynamicParamItem; }
namespace RPG::GameCore { class LineupGridFightAvatarData; }
namespace RPG::GameCore { class LineupGridFightTraitParam; }
namespace RPG::GameCore { class LineupMazeBuffData; }
namespace RPG::GameCore { class LittleGameAttachPointInfo; }
namespace RPG::GameCore { class LittleGameComponentConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameEntityPreset; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class LittleGameLevelVarBinding; }
namespace RPG::GameCore { class LittleGameLevelVariable; }
namespace RPG::GameCore { class LittleGameNavConnectInfo; }
namespace RPG::GameCore { class LittleGameSmartObjectSlotData; }
namespace RPG::GameCore { class LittleGameWayPointGraphEdge; }
namespace RPG::GameCore { class LocationData; }
namespace RPG::GameCore { class LocationExtraConfig; }
namespace RPG::GameCore { class LodDetail; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class LogSamplerParamDefine; }
namespace RPG::GameCore { class LogSamplerTypeDefine; }
namespace RPG::GameCore { class LogicAnimEventEntry; }
namespace RPG::GameCore { class LoopMoveObject; }
namespace RPG::GameCore { class LoopRewindSnapSection; }
namespace RPG::GameCore { class MDVPositionVariant; }
namespace RPG::GameCore { class MDVRegionVariant; }
namespace RPG::GameCore { class MainMissionSortedItem; }
namespace RPG::GameCore { class ManikinCustomConfig; }
namespace RPG::GameCore { class MapRotationAirlockConfig; }
namespace RPG::GameCore { class MapRotationChargerConfig; }
namespace RPG::GameCore { class MapRotationChargerIconConfig; }
namespace RPG::GameCore { class MapRotationEntityEffect; }
namespace RPG::GameCore { class MapRotationGroupConfig; }
namespace RPG::GameCore { class MapRotationMonsterEffectConfig; }
namespace RPG::GameCore { class MapRotationPerformanceID; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }
namespace RPG::GameCore { class MapRotationVolumeEffectTransitPoint; }
namespace RPG::GameCore { class MapRotationVolumeIconConfig; }
namespace RPG::GameCore { class MapRotationVolumeSlotConfigBase; }
namespace RPG::GameCore { class MarbleBuffConfig; }
namespace RPG::GameCore { class MarbleEffect; }
namespace RPG::GameCore { class MarbleEffectConfig; }
namespace RPG::GameCore { class MarbleLaunchAIConfig; }
namespace RPG::GameCore { class MarbleMainsubKillSealScore; }
namespace RPG::GameCore { class MarblePredicateConfig; }
namespace RPG::GameCore { class MarbleSkillConfig; }
namespace RPG::GameCore { class MarbleTaskConfig; }
namespace RPG::GameCore { class MarkRecommendDiceItem; }
namespace RPG::GameCore { class MaterialPropertyAdaptionConfig; }
namespace RPG::GameCore { class MazeBuff; }
namespace RPG::GameCore { class MazeBuffParamKey; }
namespace RPG::GameCore { class MemberToMemberEntityDataConfig; }
namespace RPG::GameCore { class MiActionConfigBase; }
namespace RPG::GameCore { class MiConditionConfigBase; }
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace RPG::GameCore { class MiddleDistantViewPrefabInfo; }
namespace RPG::GameCore { class MiddleMissionPackConfig; }
namespace RPG::GameCore { class MiddleSinglePackMissionConfig; }
namespace RPG::GameCore { class MiniEmoEffectNodeVisible; }
namespace RPG::GameCore { class MiniGameCollectCoin_CurveConfig; }
namespace RPG::GameCore { class MiniGameFlappyBirdBlockConfig; }
namespace RPG::GameCore { class MiniGameFlappyBirdWaveConfig; }
namespace RPG::GameCore { class MiniGameHundredFloorBlockConfig; }
namespace RPG::GameCore { class MiniGameHundredFloorWaveConfig; }
namespace RPG::GameCore { class MissionCondition; }
namespace RPG::GameCore { class MissionCustomValue; }
namespace RPG::GameCore { class MissionCustomValueGroupConfig; }
namespace RPG::GameCore { class MissionCustomValueRewardConfig; }
namespace RPG::GameCore { class MissionIDPair; }
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class MissionResConfig; }
namespace RPG::GameCore { class MissionTalkStyle; }
namespace RPG::GameCore { class MissionWaypointDataPack; }
namespace RPG::GameCore { class ModifierBehaviorFlagEventConfig; }
namespace RPG::GameCore { class ModifierBehaviorFlagEventConfigList; }
namespace RPG::GameCore { class ModifierBehaviorFlagList; }
namespace RPG::GameCore { class ModifierBehaviorFlagListPair; }
namespace RPG::GameCore { class ModifierBehaviorVisual; }
namespace RPG::GameCore { class ModifierBindEffectConfig; }
namespace RPG::GameCore { class ModifierCustomEventConfig; }
namespace RPG::GameCore { class ModifierDestroyTextInfo; }
namespace RPG::GameCore { class ModifierHint; }
namespace RPG::GameCore { class ModifierStatusTypeList; }
namespace RPG::GameCore { class ModifierValueBindData; }
namespace RPG::GameCore { class MonoEffectLodDetail; }
namespace RPG::GameCore { class MonopolyMapCell; }
namespace RPG::GameCore { class MonopolyMapCellUnit; }
namespace RPG::GameCore { class MonopolyMapConfig; }
namespace RPG::GameCore { class MonsterAssetPreloadConfig; }
namespace RPG::GameCore { class MonsterEffectsPreloadItem; }
namespace RPG::GameCore { class MonsterLodInfo; }
namespace RPG::GameCore { class MonsterResistEntry; }
namespace RPG::GameCore { class MonsterWaveParamConfig; }
namespace RPG::GameCore { class MunicipalChatActionBase; }
namespace RPG::GameCore { class MunicipalChatCrowdInfo; }
namespace RPG::GameCore { class MunicipalChatNPCInfo; }
namespace RPG::GameCore { class MunicipalChatNodeInfo; }
namespace RPG::GameCore { class MunicipalChatNodeTransitionInfo; }
namespace RPG::GameCore { class MusicRhythmTalkInfo; }
namespace RPG::GameCore { class NPCAppearancePreset; }
namespace RPG::GameCore { class NPCTriggerSound; }
namespace RPG::GameCore { class NavMeshLinkInfo; }
namespace RPG::GameCore { class NewProjectileDataList; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace RPG::GameCore { class NoteComboConfig; }
namespace RPG::GameCore { class NoteConfig; }
namespace RPG::GameCore { class NoteGroupConfig; }
namespace RPG::GameCore { class NoteNotifyConfig; }
namespace RPG::GameCore { class NpcEntityInfo; }
namespace RPG::GameCore { class NpcPossessionEffectConfig; }
namespace RPG::GameCore { class NpcWalkStyleWeightInfo; }
namespace RPG::GameCore { class OfflineCullingIndex; }
namespace RPG::GameCore { class OfflineCullingLod; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class OrbitMoveRange; }
namespace RPG::GameCore { class OrigamiTraceTalk; }
namespace RPG::GameCore { class OverrideCameraModuleConfig; }
namespace RPG::GameCore { class PamLevelInfo; }
namespace RPG::GameCore { class ParallelAbility; }
namespace RPG::GameCore { class ParallelConfigForTaskListTemplate; }
namespace RPG::GameCore { class PassageConfig; }
namespace RPG::GameCore { class PassiveUnitEffectTypeMatchFactorConfig; }
namespace RPG::GameCore { class PckFileList; }
namespace RPG::GameCore { class PckPatchPlatform; }
namespace RPG::GameCore { class PenaconyEndmostSimpleTalkData; }
namespace RPG::GameCore { class PerceiveValueTriggerConfig; }
namespace RPG::GameCore { class PerformTaskSeq; }
namespace RPG::GameCore { class PerformanceBgEffectFrameConfig; }
namespace RPG::GameCore { class PerformanceBgImagePanelConfig; }
namespace RPG::GameCore { class PerformanceCaptureNPC; }
namespace RPG::GameCore { class PerformanceIDPair; }
namespace RPG::GameCore { class PerformanceOverrideCharacterOutfit; }
namespace RPG::GameCore { class PerformancePropVisiableInfo; }
namespace RPG::GameCore { class PerformanceResultCase; }
namespace RPG::GameCore { class PerformanceRollingSubtitlesContent; }
namespace RPG::GameCore { class PerformanceRollingSubtitlesPage; }
namespace RPG::GameCore { class PerformanceSkipLevelStateOverrideItem; }
namespace RPG::GameCore { class PerformanceSortedItem; }
namespace RPG::GameCore { class PerformanceSplitObjectAnimMap; }
namespace RPG::GameCore { class PhaseSkillInfoMappingList; }
namespace RPG::GameCore { class PhaseValueActionPairSerialization; }
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class PhotoGraphBodySizeHeightConfig; }
namespace RPG::GameCore { class PhotoGraphFindNpc; }
namespace RPG::GameCore { class PhotoGraphFreeStyleDataConfig; }
namespace RPG::GameCore { class PhotoGraphLogoConfig; }
namespace RPG::GameCore { class PhotoGraphResultContainer; }
namespace RPG::GameCore { class PhotoGraphResultPredicate; }
namespace RPG::GameCore { class PhotoGraphRoamingConfig; }
namespace RPG::GameCore { class PhotoGraphSetSingleTargetUniqueName; }
namespace RPG::GameCore { class PhotoGraphSettingDataConfig; }
namespace RPG::GameCore { class PhotoGraphTipRangeConfig; }
namespace RPG::GameCore { class PhotographToastTemplate; }
namespace RPG::GameCore { class PingPongDropItemInfo; }
namespace RPG::GameCore { class PingPongEnemyGroupConfig; }
namespace RPG::GameCore { class PingPongEnemyGroupEventBase; }
namespace RPG::GameCore { class PingPongEnemyShootConfig; }
namespace RPG::GameCore { class PingPongEnemyShootOverrideConfig; }
namespace RPG::GameCore { class PingPongEnemyStackConfig; }
namespace RPG::GameCore { class PingPongEnemyUnitConfig; }
namespace RPG::GameCore { class PingPongGridIndex; }
namespace RPG::GameCore { class PingPongProjectileGroup; }
namespace RPG::GameCore { class PingPongProjectileInfo; }
namespace RPG::GameCore { class PingPongSPSkillInfo; }
namespace RPG::GameCore { class PlanetFesAnimComposite; }
namespace RPG::GameCore { class PlanetFesAvatarEmojiEffectInfo; }
namespace RPG::GameCore { class PointGeneratorConfig; }
namespace RPG::GameCore { class PolymerChildObj; }
namespace RPG::GameCore { class PolymerObj; }
namespace RPG::GameCore { class PolymerObjData; }
namespace RPG::GameCore { class PostureTypeTasksConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class PredicateTaskListWithFail; }
namespace RPG::GameCore { class PreloadItem; }
namespace RPG::GameCore { class PreloadItemList; }
namespace RPG::GameCore { class PreloadItemScoreConfig; }
namespace RPG::GameCore { class PreloadItemScoreRecordChildTask; }
namespace RPG::GameCore { class PreloadItemSilence; }
namespace RPG::GameCore { class PriorityConfig; }
namespace RPG::GameCore { class ProgressBonus; }
namespace RPG::GameCore { class ProjectileBezierControlPoint; }
namespace RPG::GameCore { class ProjectileDataList; }
namespace RPG::GameCore { class ProjectileOnHitList; }
namespace RPG::GameCore { class ProjectileTemplateData; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class PropDayOfWeekActionParamObject; }
namespace RPG::GameCore { class PropDestructItem; }
namespace RPG::GameCore { class PropDynamicResConfigItem; }
namespace RPG::GameCore { class PropOverrideAnimLayerConfig; }
namespace RPG::GameCore { class PropSetFollowRotateGameObject; }
namespace RPG::GameCore { class PropSoundConfigOverrideConfig; }
namespace RPG::GameCore { class PropSpecialVisionConfig; }
namespace RPG::GameCore { class PropStateConfig; }
namespace RPG::GameCore { class PropStateIcon; }
namespace RPG::GameCore { class PropStateItem; }
namespace RPG::GameCore { class PropStateMatchConfig; }
namespace RPG::GameCore { class PropStateOverrideItem; }
namespace RPG::GameCore { class PropTagComponent; }
namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace RPG::GameCore { class PropertyFormationValue; }
namespace RPG::GameCore { class PuzzleAnimatorParam; }
namespace RPG::GameCore { class QAAdventurePlayerRow; }
namespace RPG::GameCore { class RandomSelectorCase; }
namespace RPG::GameCore { class ReactionItemConfig; }
namespace RPG::GameCore { class ReactionTaskConfig; }
namespace RPG::GameCore { class RecordOperation; }
namespace RPG::GameCore { class RedDotGroupConfig; }
namespace RPG::GameCore { class RelicRecommendProperty; }
namespace RPG::GameCore { class RenderResolution; }
namespace RPG::GameCore { class RenderTestItemJson; }
namespace RPG::GameCore { class ResidentEffectConfigItem; }
namespace RPG::GameCore { class ResidentPossessionConfigItem; }
namespace RPG::GameCore { class ResidentPossessionInfo; }
namespace RPG::GameCore { class ResistanceItem; }
namespace RPG::GameCore { class ResolutionAdaptionConfig; }
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroup; }
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroupTemplate; }
namespace RPG::GameCore { class RogueAdvRoomCandyCrashPropInfo; }
namespace RPG::GameCore { class RogueBlockCreateGroup; }
namespace RPG::GameCore { class RogueChestGridItem; }
namespace RPG::GameCore { class RogueChestModifierEvent; }
namespace RPG::GameCore { class RogueDLCBlockWeight; }
namespace RPG::GameCore { class RogueDLCMarkType; }
namespace RPG::GameCore { class RogueDialogueEventOptionConfig; }
namespace RPG::GameCore { class RogueDialogueEventOptionDynamicConfig; }
namespace RPG::GameCore { class RogueNPCDialogueConfig; }
namespace RPG::GameCore { class RogueOptionTalkInfo; }
namespace RPG::GameCore { class RogueTalkInfo; }
namespace RPG::GameCore { class RotatableRegion; }
namespace RPG::GameCore { class RotatableRegionPose; }
namespace RPG::GameCore { class RtAbilityConfig; }
namespace RPG::GameCore { class RtAbilityPropertyRangeGroup; }
namespace RPG::GameCore { class RtBattleBackgroundUnitInfo; }
namespace RPG::GameCore { class RtBattleCharacterCameraConfig; }
namespace RPG::GameCore { class RtBattleStageBornPointInfo; }
namespace RPG::GameCore { class RtBattleStageCellConfig; }
namespace RPG::GameCore { class RtBattleStageUnitInfo; }
namespace RPG::GameCore { class RtBattleUnitRow; }
namespace RPG::GameCore { class RtBattleWaveMonsterInfo; }
namespace RPG::GameCore { class RtBehaviorFlagList; }
namespace RPG::GameCore { class RtBehaviorFlagListPair; }
namespace RPG::GameCore { class RtBehaviorFlagStateAction; }
namespace RPG::GameCore { class RtCharacterFlagVisual; }
namespace RPG::GameCore { class RtCusomtEventConfig; }
namespace RPG::GameCore { class RtDamageTextConfigGroup; }
namespace RPG::GameCore { class RtDefenceBatchMonsterInfo; }
namespace RPG::GameCore { class RtDefenceSpawnMonsterInfo; }
namespace RPG::GameCore { class RtDefenceStageBornPointInfo; }
namespace RPG::GameCore { class RtDefenceStageRow; }
namespace RPG::GameCore { class RtDefenceStageUnitInfo; }
namespace RPG::GameCore { class RtDefenceUnitRow; }
namespace RPG::GameCore { class RtDefenceWaveMonsterInfo; }
namespace RPG::GameCore { class RtDynamicValueRangeGroup; }
namespace RPG::GameCore { class RtLevelDimensionInfo; }
namespace RPG::GameCore { class RtLevelGroupInstanceCommonInfo; }
namespace RPG::GameCore { class RtLevelGroupInstanceInfo; }
namespace RPG::GameCore { class RtModifierCallbackConfig; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class RtModifierPropertyOverrideData; }
namespace RPG::GameCore { class RtProjectileDataList; }
namespace RPG::GameCore { class RtProjectileOnHitList; }
namespace RPG::GameCore { class RtSkillConfig; }
namespace RPG::GameCore { class RtSkillPropertyConfig; }
namespace RPG::GameCore { class RtSubModifierData; }
namespace RPG::GameCore { class RtTargetFormationPosConfig; }
namespace RPG::GameCore { class RuanMadeCakeFeatureConfig; }
namespace RPG::GameCore { class RuntimeStageCaptureAliasData; }
namespace RPG::GameCore { class SOTaskConfig; }
namespace RPG::GameCore { class STTaskConfig; }
namespace RPG::GameCore { class SavedValueDimensionConfig; }
namespace RPG::GameCore { class ScreenTransferBaseAction; }
namespace RPG::GameCore { class ScreenTransferSingleTextInfo; }
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class SerialBellsNoteConfig; }
namespace RPG::GameCore { class ServerPrefsData; }
namespace RPG::GameCore { class SetComponentAssetAnimParameterConfig; }
namespace RPG::GameCore { class SetComponentAssetAnimStateConfig; }
namespace RPG::GameCore { class SetDynamicValueByCopyingBatchItem; }
namespace RPG::GameCore { class ShaderPropertyOverrideMonoSerialization; }
namespace RPG::GameCore { class ShaderPropertySerialization; }
namespace RPG::GameCore { class ShaderPropertySetItem; }
namespace RPG::GameCore { class ShaderTestPreloadItem; }
namespace RPG::GameCore { class SharedEntityEvent; }
namespace RPG::GameCore { class SharedSerializationDataIdxList; }
namespace RPG::GameCore { class SharedValue; }
namespace RPG::GameCore { class ShopGoodsMap; }
namespace RPG::GameCore { class SimpleFreeStyleConfig; }
namespace RPG::GameCore { class SimpleTalkBackground; }
namespace RPG::GameCore { class SimpleTalkInfo; }
namespace RPG::GameCore { class SimpleTalkStyle; }
namespace RPG::GameCore { class SimpleTalkTargetBehavior; }
namespace RPG::GameCore { class SimulateAvatarLineupConfig; }
namespace RPG::GameCore { class SingleAnimBehaviourEvent; }
namespace RPG::GameCore { class SingleAnimEntry; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace RPG::GameCore { class SingleHitBoxConfig; }
namespace RPG::GameCore { class SingleMazeBuffToastConfig; }
namespace RPG::GameCore { class SingleMonsterInfo; }
namespace RPG::GameCore { class SingleTimeRewindEntityAnimClipEventConfig; }
namespace RPG::GameCore { class SingleTimeRewindEntityAnimStateEventConfig; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SkillConditionPreshowConfig; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillCustomReadyConfig; }
namespace RPG::GameCore { class SkillDamageTypePreshowConfig; }
namespace RPG::GameCore { class SkillDataPropertyModifyItem; }
namespace RPG::GameCore { class SkillExtensionComplexSkillAIConfig; }
namespace RPG::GameCore { class SkillMaxHitConfig; }
namespace RPG::GameCore { class SkillMaxHitConfigList; }
namespace RPG::GameCore { class SkillParamMapping; }
namespace RPG::GameCore { class SkillTransitAnimConfig; }
namespace RPG::GameCore { class SkillTreePointPreset; }
namespace RPG::GameCore { class SmellPathEdge; }
namespace RPG::GameCore { class SomatoCommonCameraConfig; }
namespace RPG::GameCore { class SomatoWidthRangeConfig; }
namespace RPG::GameCore { class SpecialNPCEffectConfig; }
namespace RPG::GameCore { class SpritePresetNameList; }
namespace RPG::GameCore { class SpritePresetRecord; }
namespace RPG::GameCore { class StageBattleEventConfig; }
namespace RPG::GameCore { class StageCaptureAliasData; }
namespace RPG::GameCore { class StageGrassOverrideConfig; }
namespace RPG::GameCore { class StageHarmonyPlayerPosSignalMonoSerialization; }
namespace RPG::GameCore { class StageHarmonySignalDemodulatorMonoSerialization; }
namespace RPG::GameCore { class StageHarmonySignalDynamicDialogMonoSerialization; }
namespace RPG::GameCore { class StageHarmonySignalDynamicPatternMonoSerialization; }
namespace RPG::GameCore { class StageHarmonyTrafficLightMonoSerialization; }
namespace RPG::GameCore { class StageIslandConfig; }
namespace RPG::GameCore { class StageIslandHLODConfig; }
namespace RPG::GameCore { class StageItemAlias; }
namespace RPG::GameCore { class StageLightData; }
namespace RPG::GameCore { class StageMonsterRewardItem; }
namespace RPG::GameCore { class StageMonsterWave; }
namespace RPG::GameCore { class StagePVSOfflineLightInfo; }
namespace RPG::GameCore { class StagePVSOfflineSamplerInfo; }
namespace RPG::GameCore { class StagePVSOfflineSamplerResult; }
namespace RPG::GameCore { class StagePVSOfflineSceneItemInfo; }
namespace RPG::GameCore { class StagePVSOfflineVolumeInfo; }
namespace RPG::GameCore { class StagePVSOfflineVolumeResult; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace RPG::GameCore { class StageRegionAffect; }
namespace RPG::GameCore { class StageRegionConfig; }
namespace RPG::GameCore { class StageRegionConnection; }
namespace RPG::GameCore { class StageRegionState; }
namespace RPG::GameCore { class StageSceneItemSerializationData; }
namespace RPG::GameCore { class StageSceneItemSharedSerializationData; }
namespace RPG::GameCore { class StageTypePrefabs; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace RPG::GameCore { class StageVolumeConfig; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace RPG::GameCore { class StageVolumeConfigV2WithTAData; }
namespace RPG::GameCore { class StateTreeStateBaseConfig; }
namespace RPG::GameCore { class StateTreeTransitionConfig; }
namespace RPG::GameCore { class StimulusItemConfig; }
namespace RPG::GameCore { class StreamingBlockVolumeComponentData; }
namespace RPG::GameCore { class StreamingItemHLODNode; }
namespace RPG::GameCore { class SubLevelGraphDynamicFloatOverride; }
namespace RPG::GameCore { class SubLevelGraphDynamicStringOverride; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace RPG::GameCore { class SubMissionRelationConfig; }
namespace RPG::GameCore { class SubMissionSortedItem; }
namespace RPG::GameCore { class SubModifierData; }
namespace RPG::GameCore { class SubStageMetaData; }
namespace RPG::GameCore { class SummonEntityPreloadConfig; }
namespace RPG::GameCore { class SummonMonsterConfig; }
namespace RPG::GameCore { class SummonMonsterData; }
namespace RPG::GameCore { class SummonUnitGameplayConfig; }
namespace RPG::GameCore { class SummonUnitGroupConfig; }
namespace RPG::GameCore { class SummonUnitInteractionDestroyRule; }
namespace RPG::GameCore { class SwitchCaseTaskList; }
namespace RPG::GameCore { class SwitchCaseTaskListByAttackDamageType; }
namespace RPG::GameCore { class SwordTrainingBranchInfo; }
namespace RPG::GameCore { class SwordTrainingStatusConfig; }
namespace RPG::GameCore { class SyncAnimWithBgmChapterConfig; }
namespace RPG::GameCore { class SyncAnimWithBgmPhaseConfig; }
namespace RPG::GameCore { class TAMonoTickLodTemplate; }
namespace RPG::GameCore { class TRFStageConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetFormationConfig; }
namespace RPG::GameCore { class TargetFormationPosConfig; }
namespace RPG::GameCore { class TargetSeqOperation; }
namespace RPG::GameCore { class TarotBookConditionParam; }
namespace RPG::GameCore { class TarotBookTalkInfo; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace RPG::GameCore { class TeamFormationTemplateSingleConfig; }
namespace RPG::GameCore { class TeammateAttackFormationConfig; }
namespace RPG::GameCore { class TextDynamicParamBase; }
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace RPG::GameCore { class TimeRewindAttachEff; }
namespace RPG::GameCore { class TimeRewindAudioConfig; }
namespace RPG::GameCore { class TimeRewindCameraShakeConfig; }
namespace RPG::GameCore { class TimeRewindChildConfig; }
namespace RPG::GameCore { class TimeRewindEffConfig; }
namespace RPG::GameCore { class TimeRewindEntityAnimOverride; }
namespace RPG::GameCore { class TimeRewindEntityEventConfig; }
namespace RPG::GameCore { class TimeRewindOverlayMaterials; }
namespace RPG::GameCore { class TimeRewindParentPropStateConfig; }
namespace RPG::GameCore { class TimeRewindRecreateWorldTaskTrigger; }
namespace RPG::GameCore { class TimelineEntityConfig; }
namespace RPG::GameCore { class TimelineEntityStateChangeCallback; }
namespace RPG::GameCore { class TimelineIntermediaStateConfig; }
namespace RPG::GameCore { class TrackNameList; }
namespace RPG::GameCore { class TrackNpcVisionConfig; }
namespace RPG::GameCore { class TrackNpcZoneConfig; }
namespace RPG::GameCore { class TrackPhotoEvent; }
namespace RPG::GameCore { class TrainCollectionMissionPerformancePair; }
namespace RPG::GameCore { class TrainPartyActionConfigBase; }
namespace RPG::GameCore { class TrainPartyBuildBlock; }
namespace RPG::GameCore { class TrainPartyBuildItemSlot; }
namespace RPG::GameCore { class TrainPartyBuildItemSlotExt; }
namespace RPG::GameCore { class TrainPartyBuildStaticItem; }
namespace RPG::GameCore { class TrainPartyDialogueEventOptionConfig; }
namespace RPG::GameCore { class TrainPartyPerformance; }
namespace RPG::GameCore { class TrainPartyPerformanceCharacter; }
namespace RPG::GameCore { class TrainPartyPerformanceFreeStyleAction; }
namespace RPG::GameCore { class TrainPartySimpleTalkData; }
namespace RPG::GameCore { class TrainPartyStat; }
namespace RPG::GameCore { class TriggerEffect; }
namespace RPG::GameCore { class TriggerEventConfig; }
namespace RPG::GameCore { class TriggerValidGuestSingleTargetConfig; }
namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace RPG::GameCore { class TurnBasedModifierCallbackConfig; }
namespace RPG::GameCore { class TurnBasedModifierCallbackPriority; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace RPG::GameCore { class TurnInsertAbilityCondition; }
namespace RPG::GameCore { class TutorialGuideHintAdaptConfig; }
namespace RPG::GameCore { class TutorialGuideTalkListAdaptConfig; }
namespace RPG::GameCore { class TutorialGuideTextAdaptConfig; }
namespace RPG::GameCore { class TutorialTriggerParam; }
namespace RPG::GameCore { class UIImageNode; }
namespace RPG::GameCore { class UIOperation; }
namespace RPG::GameCore { class UIOperationConfig; }
namespace RPG::GameCore { class UIPanelGroup; }
namespace RPG::GameCore { class UITextNode; }
namespace RPG::GameCore { class UnitCustomTriggerConfig; }
namespace RPG::GameCore { class UsableConditionConfig; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace RPG::GameCore { class ValuePostProcessConfig; }
namespace RPG::GameCore { class VideoCaption; }
namespace RPG::GameCore { class VideoSequenceItem; }
namespace RPG::GameCore { class VisionBaseConfig; }
namespace RPG::GameCore { class VisionSetConfig; }
namespace RPG::GameCore { class WaitBatchItem; }
namespace RPG::GameCore { class WaterReflectionFoamShaderParam; }
namespace RPG::GameCore { class WaypointConfig; }
namespace RPG::GameCore { class WaypointMaterial; }
namespace RPG::GameCore { class WolfBroCartoonGunConfig; }
namespace RPG::GameCore { class WormCompassItemXY; }
namespace RPG::GameCore { template <typename T> class NativeContainer_1; }
namespace RPG::GameCore::Booklet { class ChapterConfig; }
namespace RPG::GameCore::Booklet { class ElementConfig; }
namespace RPG::GameCore::Booklet { class SectionSynopsis; }
namespace RPG::GameCore::Booklet { class SpreadConfig; }
namespace RPG::GameCore::Booklet { class StepConfig; }
namespace RPG::GameCore::Match3 { class BirdItemPackWeightConfig; }
namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }
namespace RPG::GameCore::Match3 { class BirdStyleWeightConfig; }
namespace RPG::GameCore::Match3 { class BombCreateConfig; }
namespace RPG::GameCore::Match3 { class Match3ActionBase; }
namespace RPG::GameCore::Match3 { class Match3ChessBoardGridInfo; }
namespace RPG::GameCore::Match3 { class Match3ConditionBase; }
namespace RPG::GameCore::Match3 { class Match3EnvActionConfig; }
namespace RPG::GameCore::Match3 { class Match3GridTagApplyConfig; }
namespace RPG::GameCore::Match3 { class Match3PieceTagApplyConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AILevelConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPriorityRetainConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPriorityRetainMap; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPropPriorityConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIScoreAspectConfig; }
namespace RPG::GameCore::Match3 { class MatchThreePropConfig; }
namespace RPG::GameCore::Match3 { class PieceConfig; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;
template <typename T> class Class_1_F5630E87DACEF386_DelegateToBinary_1;

#define CLASS_1_F5630E87DACEF386_METHOD_1_00A8D8986F76E097_1_OFFSET UNITYSDK_OFFSET(0x18539C20)
#define CLASS_1_F5630E87DACEF386_METHOD_1_00A8D8986F76E097_OFFSET UNITYSDK_OFFSET(0x185389E0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_0679C308E21EBDE8_OFFSET UNITYSDK_OFFSET(0x1853ADB0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_074B9EE061E87C08_1_OFFSET UNITYSDK_OFFSET(0x1853BEF0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_074B9EE061E87C08_OFFSET UNITYSDK_OFFSET(0x18539E70)
#define CLASS_1_F5630E87DACEF386_METHOD_1_0A895BBDD0B7B87B_OFFSET UNITYSDK_OFFSET(0x1853B090)
#define CLASS_1_F5630E87DACEF386_METHOD_1_0A9865F33F0BBFDA_OFFSET UNITYSDK_OFFSET(0x185398E0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_0BB1B9580AC8FF67_OFFSET UNITYSDK_OFFSET(0x18539490)
#define CLASS_1_F5630E87DACEF386_METHOD_1_0C0C5329B4A6C798_OFFSET UNITYSDK_OFFSET(0x18522030)
#define CLASS_1_F5630E87DACEF386_METHOD_1_0C606DE2A6A6081E_OFFSET UNITYSDK_OFFSET(0x18539FD0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_0DD5A223C12DF330_1_OFFSET UNITYSDK_OFFSET(0x18539650)
#define CLASS_1_F5630E87DACEF386_METHOD_1_0DD5A223C12DF330_OFFSET UNITYSDK_OFFSET(0x18537340)
#define CLASS_1_F5630E87DACEF386_METHOD_1_1038E834C2A78F08_1_OFFSET UNITYSDK_OFFSET(0x1853C910)
#define CLASS_1_F5630E87DACEF386_METHOD_1_1038E834C2A78F08_OFFSET UNITYSDK_OFFSET(0x1853BC30)
#define CLASS_1_F5630E87DACEF386_METHOD_1_11A88DA43963246A_OFFSET UNITYSDK_OFFSET(0x18539740)
#define CLASS_1_F5630E87DACEF386_METHOD_1_16107294F6A8C164_OFFSET UNITYSDK_OFFSET(0x18537280)
#define CLASS_1_F5630E87DACEF386_METHOD_1_175A1968761D81B4_1_OFFSET UNITYSDK_OFFSET(0x1853A3B0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_175A1968761D81B4_2_OFFSET UNITYSDK_OFFSET(0x1853BF90)
#define CLASS_1_F5630E87DACEF386_METHOD_1_175A1968761D81B4_OFFSET UNITYSDK_OFFSET(0x18539F90)
#define CLASS_1_F5630E87DACEF386_METHOD_1_1939951DE58F9785_OFFSET UNITYSDK_OFFSET(0x18537460)
#define CLASS_1_F5630E87DACEF386_METHOD_1_1B2D8F562B87E0BE_1_OFFSET UNITYSDK_OFFSET(0x1853C840)
#define CLASS_1_F5630E87DACEF386_METHOD_1_1B2D8F562B87E0BE_OFFSET UNITYSDK_OFFSET(0x1853B2F0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_1D1F89ED3835AC7C_OFFSET UNITYSDK_OFFSET(0x18539D10)
#define CLASS_1_F5630E87DACEF386_METHOD_1_23440DD746FE4CC9_OFFSET UNITYSDK_OFFSET(0x1853AED0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_23A081C6DE548AE0_OFFSET UNITYSDK_OFFSET(0x185395B0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_287152F79CAFED8E_OFFSET UNITYSDK_OFFSET(0x18538500)
#define CLASS_1_F5630E87DACEF386_METHOD_1_2A285C5B8C23E517_OFFSET UNITYSDK_OFFSET(0x18538690)
#define CLASS_1_F5630E87DACEF386_METHOD_1_2B62DB7A09D54093_OFFSET UNITYSDK_OFFSET(0x18539920)
#define CLASS_1_F5630E87DACEF386_METHOD_1_2C6078E92F095799_OFFSET UNITYSDK_OFFSET(0x185393B0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_3036AA89F506B400_OFFSET UNITYSDK_OFFSET(0x1853C220)
#define CLASS_1_F5630E87DACEF386_METHOD_1_322D459EA0730EE8_1_OFFSET UNITYSDK_OFFSET(0x1853C450)
#define CLASS_1_F5630E87DACEF386_METHOD_1_322D459EA0730EE8_OFFSET UNITYSDK_OFFSET(0x1853AFF0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_32EB1AEEBC854143_OFFSET UNITYSDK_OFFSET(0x1853BD90)
#define CLASS_1_F5630E87DACEF386_METHOD_1_37CBDEFEB7CF1F7D_OFFSET UNITYSDK_OFFSET(0x18539AF0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_397810E6905F96D6_OFFSET UNITYSDK_OFFSET(0x185385D0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_3AF7C9876E850E70_1_OFFSET UNITYSDK_OFFSET(0x18537430)
#define CLASS_1_F5630E87DACEF386_METHOD_1_3AF7C9876E850E70_OFFSET UNITYSDK_OFFSET(0x18537400)
#define CLASS_1_F5630E87DACEF386_METHOD_1_3E196854F60DEA9B_OFFSET UNITYSDK_OFFSET(0x18538200)
#define CLASS_1_F5630E87DACEF386_METHOD_1_3EBF46CBBBE484A8_OFFSET UNITYSDK_OFFSET(0x1853A920)
#define CLASS_1_F5630E87DACEF386_METHOD_1_4010B2A98E3EE30A_OFFSET UNITYSDK_OFFSET(0x18538980)
#define CLASS_1_F5630E87DACEF386_METHOD_1_419194862ACD99E8_OFFSET UNITYSDK_OFFSET(0x1853A0B0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_426C2D39C84BF3B8_1_OFFSET UNITYSDK_OFFSET(0x18539E20)
#define CLASS_1_F5630E87DACEF386_METHOD_1_426C2D39C84BF3B8_OFFSET UNITYSDK_OFFSET(0x18536F00)
#define CLASS_1_F5630E87DACEF386_METHOD_1_4294E3367E878AF3_OFFSET UNITYSDK_OFFSET(0x18539860)
#define CLASS_1_F5630E87DACEF386_METHOD_1_458319D7F233F09F_OFFSET UNITYSDK_OFFSET(0x185377C0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_491758B78432CBE5_OFFSET UNITYSDK_OFFSET(0x1853A070)
#define CLASS_1_F5630E87DACEF386_METHOD_1_4A996C75A3AFFD7E_OFFSET UNITYSDK_OFFSET(0x18536E80)
#define CLASS_1_F5630E87DACEF386_METHOD_1_4CCBD136715F6AA9_OFFSET UNITYSDK_OFFSET(0x18522350)
#define CLASS_1_F5630E87DACEF386_METHOD_1_4FA36BCF7ECB5C36_OFFSET UNITYSDK_OFFSET(0x1853B1E0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_50401A961108B8DE_1_OFFSET UNITYSDK_OFFSET(0x1853C400)
#define CLASS_1_F5630E87DACEF386_METHOD_1_50401A961108B8DE_OFFSET UNITYSDK_OFFSET(0x1853C370)
#define CLASS_1_F5630E87DACEF386_METHOD_1_507BA9D793C62C00_OFFSET UNITYSDK_OFFSET(0x1853AC90)
#define CLASS_1_F5630E87DACEF386_METHOD_1_5217AE7208CA4FD7_OFFSET UNITYSDK_OFFSET(0x1853C1B0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_54B57754AC0F94FD_1_OFFSET UNITYSDK_OFFSET(0x18539D70)
#define CLASS_1_F5630E87DACEF386_METHOD_1_54B57754AC0F94FD_2_OFFSET UNITYSDK_OFFSET(0x1853BD30)
#define CLASS_1_F5630E87DACEF386_METHOD_1_54B57754AC0F94FD_OFFSET UNITYSDK_OFFSET(0x18539D20)
#define CLASS_1_F5630E87DACEF386_METHOD_1_54BBE9EEB49B45C7_OFFSET UNITYSDK_OFFSET(0x18539820)
#define CLASS_1_F5630E87DACEF386_METHOD_1_54D13D5FB54C222B_OFFSET UNITYSDK_OFFSET(0x18538920)
#define CLASS_1_F5630E87DACEF386_METHOD_1_5920A8D18F9EB785_1_OFFSET UNITYSDK_OFFSET(0x1853C7D0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_5920A8D18F9EB785_OFFSET UNITYSDK_OFFSET(0x1853B290)
#define CLASS_1_F5630E87DACEF386_METHOD_1_5D807706F8213195_1_OFFSET UNITYSDK_OFFSET(0x18539310)
#define CLASS_1_F5630E87DACEF386_METHOD_1_5D807706F8213195_OFFSET UNITYSDK_OFFSET(0x18536F50)
#define CLASS_1_F5630E87DACEF386_METHOD_1_5DAA7FCAFBF8ACF6_OFFSET UNITYSDK_OFFSET(0x1853B350)
#define CLASS_1_F5630E87DACEF386_METHOD_1_5E8461B486377505_OFFSET UNITYSDK_OFFSET(0x1853B210)
#define CLASS_1_F5630E87DACEF386_METHOD_1_5F4F1C46DCA4D4E1_OFFSET UNITYSDK_OFFSET(0x1853C8B0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_63157982A01B30DD_OFFSET UNITYSDK_OFFSET(0x18537730)
#define CLASS_1_F5630E87DACEF386_METHOD_1_6492D62A26FE164F_OFFSET UNITYSDK_OFFSET(0x1853C140)
#define CLASS_1_F5630E87DACEF386_METHOD_1_651B3622EE310374_OFFSET UNITYSDK_OFFSET(0x18538820)
#define CLASS_1_F5630E87DACEF386_METHOD_1_6829C9CDD2D71216_OFFSET UNITYSDK_OFFSET(0x18539EB0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_68D4A7421DAD224D_OFFSET UNITYSDK_OFFSET(0x1853A030)
#define CLASS_1_F5630E87DACEF386_METHOD_1_6A3C5A00B4D15517_OFFSET UNITYSDK_OFFSET(0x1853A650)
#define CLASS_1_F5630E87DACEF386_METHOD_1_6ACA611E3DDEC88C_1_OFFSET UNITYSDK_OFFSET(0x18539DD0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_6ACA611E3DDEC88C_OFFSET UNITYSDK_OFFSET(0x18536EB0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_6AFDC50424099C5A_OFFSET UNITYSDK_OFFSET(0x1853A300)
#define CLASS_1_F5630E87DACEF386_METHOD_1_720AD4E3389CC116_OFFSET UNITYSDK_OFFSET(0x18537B40)
#define CLASS_1_F5630E87DACEF386_METHOD_1_72A166B509B16764_OFFSET UNITYSDK_OFFSET(0x18539960)
#define CLASS_1_F5630E87DACEF386_METHOD_1_73188727E6136F43_OFFSET UNITYSDK_OFFSET(0x18536FA0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_74746E8EC55BD0E3_OFFSET UNITYSDK_OFFSET(0x1853C6A0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_74A2F6CCF66AC30C_1_OFFSET UNITYSDK_OFFSET(0x1853A370)
#define CLASS_1_F5630E87DACEF386_METHOD_1_74A2F6CCF66AC30C_2_OFFSET UNITYSDK_OFFSET(0x1853BFF0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_74A2F6CCF66AC30C_OFFSET UNITYSDK_OFFSET(0x1853A330)
#define CLASS_1_F5630E87DACEF386_METHOD_1_79255D4AC0A769A9_OFFSET UNITYSDK_OFFSET(0x1853C5E0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_7B6151DBDC83154F_1_OFFSET UNITYSDK_OFFSET(0x18539BA0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_7B6151DBDC83154F_OFFSET UNITYSDK_OFFSET(0x185388B0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_7C191BE995D05982_OFFSET UNITYSDK_OFFSET(0x18538380)
#define CLASS_1_F5630E87DACEF386_METHOD_1_7C5CDA82375F44C4_OFFSET UNITYSDK_OFFSET(0x1853BF50)
#define CLASS_1_F5630E87DACEF386_METHOD_1_7E15DECE836C9190_1_OFFSET UNITYSDK_OFFSET(0x1853C030)
#define CLASS_1_F5630E87DACEF386_METHOD_1_7E15DECE836C9190_OFFSET UNITYSDK_OFFSET(0x18539FE0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_7E20E938E8C802DC_OFFSET UNITYSDK_OFFSET(0x18537200)
#define CLASS_1_F5630E87DACEF386_METHOD_1_7E2DACC73F31E3E1_OFFSET UNITYSDK_OFFSET(0x1853C260)
#define CLASS_1_F5630E87DACEF386_METHOD_1_7F2FAB47861053F2_OFFSET UNITYSDK_OFFSET(0x1853A530)
#define CLASS_1_F5630E87DACEF386_METHOD_1_806AC81C7DAC6A48_OFFSET UNITYSDK_OFFSET(0x185397E0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_84F4485F07D525DD_1_OFFSET UNITYSDK_OFFSET(0x185399C0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_84F4485F07D525DD_OFFSET UNITYSDK_OFFSET(0x18537580)
#define CLASS_1_F5630E87DACEF386_METHOD_1_86B72BDE3011F780_OFFSET UNITYSDK_OFFSET(0x185398A0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_89E64A651518DE28_OFFSET UNITYSDK_OFFSET(0x1853BCA0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_8CA290AEE7BF374D_1_OFFSET UNITYSDK_OFFSET(0x185393F0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_8CA290AEE7BF374D_OFFSET UNITYSDK_OFFSET(0x18537190)
#define CLASS_1_F5630E87DACEF386_METHOD_1_903454011730DA3F_1_OFFSET UNITYSDK_OFFSET(0x1853BE80)
#define CLASS_1_F5630E87DACEF386_METHOD_1_903454011730DA3F_OFFSET UNITYSDK_OFFSET(0x18539290)
#define CLASS_1_F5630E87DACEF386_METHOD_1_921EE347D45AB768_1_OFFSET UNITYSDK_OFFSET(0x1853BCE0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_921EE347D45AB768_OFFSET UNITYSDK_OFFSET(0x18539CD0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_97461EFE5E9D755B_OFFSET UNITYSDK_OFFSET(0x1852C640)
#define CLASS_1_F5630E87DACEF386_METHOD_1_98C8FBF8FE95A4DF_OFFSET UNITYSDK_OFFSET(0x1853B7F0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_9D330B6D59CEE0F5_1_OFFSET UNITYSDK_OFFSET(0x18521FE0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_9D330B6D59CEE0F5_OFFSET UNITYSDK_OFFSET(0x18537300)
#define CLASS_1_F5630E87DACEF386_METHOD_1_9DA3A48C507424DB_OFFSET UNITYSDK_OFFSET(0x18530DF0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_9F5AB28511130D77_OFFSET UNITYSDK_OFFSET(0x1853BBC0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_9FB9B2EB3C59FD3D_1_OFFSET UNITYSDK_OFFSET(0x18539A30)
#define CLASS_1_F5630E87DACEF386_METHOD_1_9FB9B2EB3C59FD3D_OFFSET UNITYSDK_OFFSET(0x18538780)
#define CLASS_1_F5630E87DACEF386_METHOD_1_A0726820766CD54D_OFFSET UNITYSDK_OFFSET(0x185391C0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_A0D066C7CAF528F1_1_OFFSET UNITYSDK_OFFSET(0x1852D480)
#define CLASS_1_F5630E87DACEF386_METHOD_1_A0D066C7CAF528F1_OFFSET UNITYSDK_OFFSET(0x1852C600)
#define CLASS_1_F5630E87DACEF386_METHOD_1_A20AA09C4B114AF3_OFFSET UNITYSDK_OFFSET(0x1853BB50)
#define CLASS_1_F5630E87DACEF386_METHOD_1_A54732E01FBF9FC8_OFFSET UNITYSDK_OFFSET(0x185397A0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_A9EFF7BBA01058D0_1_OFFSET UNITYSDK_OFFSET(0x1853C2C0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_A9EFF7BBA01058D0_OFFSET UNITYSDK_OFFSET(0x1853A880)
#define CLASS_1_F5630E87DACEF386_METHOD_1_AC5FCB87084E2363_OFFSET UNITYSDK_OFFSET(0x18539610)
#define CLASS_1_F5630E87DACEF386_METHOD_1_B48D00FD27B5D017_OFFSET UNITYSDK_OFFSET(0x1853C0D0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_B615A77C4F78B455_OFFSET UNITYSDK_OFFSET(0x18538740)
#define CLASS_1_F5630E87DACEF386_METHOD_1_B65DC39C7A0D8503_OFFSET UNITYSDK_OFFSET(0x18539450)
#define CLASS_1_F5630E87DACEF386_METHOD_1_B6F7B984305F8A78_OFFSET UNITYSDK_OFFSET(0x1853C500)
#define CLASS_1_F5630E87DACEF386_METHOD_1_B77E7AFAE82A2300_OFFSET UNITYSDK_OFFSET(0x18538A40)
#define CLASS_1_F5630E87DACEF386_METHOD_1_BDA40EBB8A9A5BA6_OFFSET UNITYSDK_OFFSET(0x18539180)
#define CLASS_1_F5630E87DACEF386_METHOD_1_BF804BF26618F3DA_OFFSET UNITYSDK_OFFSET(0x18539140)
#define CLASS_1_F5630E87DACEF386_METHOD_1_C12EF26C6F23FC74_OFFSET UNITYSDK_OFFSET(0x18539C90)
#define CLASS_1_F5630E87DACEF386_METHOD_1_C585DAA2BA969F42_1_OFFSET UNITYSDK_OFFSET(0x185396B0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_C585DAA2BA969F42_OFFSET UNITYSDK_OFFSET(0x18537390)
#define CLASS_1_F5630E87DACEF386_METHOD_1_C706306F6A5A08B6_OFFSET UNITYSDK_OFFSET(0x1853B240)
#define CLASS_1_F5630E87DACEF386_METHOD_1_C8A29E8722F21B99_OFFSET UNITYSDK_OFFSET(0x185371E0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_C8AD4A525ABC6D41_OFFSET UNITYSDK_OFFSET(0x18539370)
#define CLASS_1_F5630E87DACEF386_METHOD_1_C8BD8E31EEC78862_OFFSET UNITYSDK_OFFSET(0x1853B130)
#define CLASS_1_F5630E87DACEF386_METHOD_1_CFDD8E53133E5CB8_OFFSET UNITYSDK_OFFSET(0x1853B390)
#define CLASS_1_F5630E87DACEF386_METHOD_1_CFE35D91017D5E60_1_OFFSET UNITYSDK_OFFSET(0x1853C6F0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_CFE35D91017D5E60_OFFSET UNITYSDK_OFFSET(0x1853A4D0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_D01C3422BCA09820_1_OFFSET UNITYSDK_OFFSET(0x185378C0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_D01C3422BCA09820_OFFSET UNITYSDK_OFFSET(0x185375E0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_D05D8C80F94547FC_OFFSET UNITYSDK_OFFSET(0x1853A0F0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_D4BCA782C233DD85_OFFSET UNITYSDK_OFFSET(0x1853B9B0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_D65DA04BB5B3D582_OFFSET UNITYSDK_OFFSET(0x1853C760)
#define CLASS_1_F5630E87DACEF386_METHOD_1_E1860304B475F20F_OFFSET UNITYSDK_OFFSET(0x1853A410)
#define CLASS_1_F5630E87DACEF386_METHOD_1_E27BB3041D00746D_OFFSET UNITYSDK_OFFSET(0x185374A0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_E9B4EAB21A6CB7C8_OFFSET UNITYSDK_OFFSET(0x1853A790)
#define CLASS_1_F5630E87DACEF386_METHOD_1_EB4DDA4D7A6D07D3_OFFSET UNITYSDK_OFFSET(0x18538080)
#define CLASS_1_F5630E87DACEF386_METHOD_1_EBD636DC56E09E62_OFFSET UNITYSDK_OFFSET(0x18537A10)
#define CLASS_1_F5630E87DACEF386_METHOD_1_F0C0A7444A1D9F60_OFFSET UNITYSDK_OFFSET(0x18537C10)
#define CLASS_1_F5630E87DACEF386_METHOD_1_F28B32DA69DE2072_OFFSET UNITYSDK_OFFSET(0x1853B5D0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_F35C1CDADD03A7C3_1_OFFSET UNITYSDK_OFFSET(0x1853BE10)
#define CLASS_1_F5630E87DACEF386_METHOD_1_F35C1CDADD03A7C3_OFFSET UNITYSDK_OFFSET(0x18539210)
#define CLASS_1_F5630E87DACEF386_METHOD_1_F362D4FD3A681C7F_OFFSET UNITYSDK_OFFSET(0x18539520)
#define CLASS_1_F5630E87DACEF386_METHOD_1_FA33D55298AA22AB_OFFSET UNITYSDK_OFFSET(0x1853A6D0)
#define CLASS_1_F5630E87DACEF386_METHOD_1_FA88676F5B43277A_OFFSET UNITYSDK_OFFSET(0x1853A290)
#define CLASS_1_F5630E87DACEF386_METHOD_1_FD4F4FF8391E6BDA_OFFSET UNITYSDK_OFFSET(0x1853C090)
#define CLASS_1_F5630E87DACEF386__CCTOR_OFFSET UNITYSDK_OFFSET(0x1853C990)
#define CLASS_1_F5630E87DACEF386__FROMBINARY_DYNAMICVALUELOOKUP_G___GETREADINFO_1131_0_OFFSET UNITYSDK_OFFSET(0x18539020)

inline static constexpr unsigned int Class_1_F5630E87DACEF386_TypeDefinitionIndex = 14642;

class Class_1_F5630E87DACEF386 : public ::System::Object
{
public:
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BuildEffectPreloadItem*>** StaticGet_Field_1_92()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BuildEffectPreloadItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x1FC0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LoopMoveObject*>** StaticGet_Field_1_577()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LoopMoveObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x1FC8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MusicRhythmTalkInfo*>** StaticGet_Field_1_662()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MusicRhythmTalkInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x1FD0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianLineUpPointInfo*>** StaticGet_Field_1_517()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianLineUpPointInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x1FD8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianNodeInfo*>** StaticGet_Field_1_520()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianNodeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x1FE0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FetchAdvMonsterData*>** StaticGet_Field_1_290()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FetchAdvMonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x1FE8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ProjectileOnHitList*>** StaticGet_Field_1_755()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ProjectileOnHitList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x1FF0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongEnemyShootOverrideConfig*>** StaticGet_Field_1_728()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongEnemyShootOverrideConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x1FF8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubStageMetaData*>** StaticGet_Field_1_978()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubStageMetaData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2000);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SummonUnitGameplayConfig*>** StaticGet_Field_1_985()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SummonUnitGameplayConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2008);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindEffConfig*>** StaticGet_Field_1_1015()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindEffConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2010);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AssistWayPointPack*>** StaticGet_Field_1_48()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AssistWayPointPack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2018);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PolymerObj*>** StaticGet_Field_1_741()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PolymerObj*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2020);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo*>** StaticGet_Field_1_530()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2028);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ProjectileBezierControlPoint*>** StaticGet_Field_1_753()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ProjectileBezierControlPoint*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2030);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CaseContainerBase*>** StaticGet_Field_1_114()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CaseContainerBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2038);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphTipRangeConfig*>** StaticGet_Field_1_722()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphTipRangeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2040);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongDropItemInfo*>** StaticGet_Field_1_724()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongDropItemInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2048);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HoyoTagNodeInfo*>** StaticGet_Field_1_445()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HoyoTagNodeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2050);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorVisual*>** StaticGet_Field_1_637()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorVisual*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2058);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig*>** StaticGet_Field_1_208()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2060);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SummonUnitGroupConfig*>** StaticGet_Field_1_986()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SummonUnitGroupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2068);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SomatoCommonCameraConfig*>** StaticGet_Field_1_922()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SomatoCommonCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2070);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterAtlasFaceEmotion*>** StaticGet_Field_1_117()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterAtlasFaceEmotion*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2078);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubMissionRelationConfig*>** StaticGet_Field_1_975()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubMissionRelationConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2080);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavmapArea*>** StaticGet_Field_1_500()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavmapArea*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2088);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceTrapCellConfig*>** StaticGet_Field_1_108()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceTrapCellConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2090);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationTargetDistanceConfig*>** StaticGet_Field_1_363()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationTargetDistanceConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2098);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimDynamicVar*>** StaticGet_Field_1_308()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimDynamicVar*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x20A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartySimpleTalkData*>** StaticGet_Field_1_1035()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartySimpleTalkData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x20A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupEntityInfo*>** StaticGet_Field_1_416()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupEntityInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x20B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>** StaticGet_Field_1_223()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x20B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NormDistanceLodTemplate*>** StaticGet_Field_1_668()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NormDistanceLodTemplate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x20C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SOTaskConfig*>** StaticGet_Field_1_924()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SOTaskConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x20C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNPCPossessionInfo*>** StaticGet_Field_1_512()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNPCPossessionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x20D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Int16>** StaticGet_Field_1_892()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Int16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x20D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupEntityDestroyConfig*>** StaticGet_Field_1_415()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupEntityDestroyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x20E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageRegionConfig*>** StaticGet_Field_1_951()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageRegionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x20E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelAnimalConfig*>** StaticGet_Field_1_367()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelAnimalConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x20F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillExtensionComplexSkillAIConfig*>** StaticGet_Field_1_914()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillExtensionComplexSkillAIConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x20F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChangeCharacterSkillRowDataItem*>** StaticGet_Field_1_116()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChangeCharacterSkillRowDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2100);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SetComponentAssetAnimParameterConfig*>** StaticGet_Field_1_881()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SetComponentAssetAnimParameterConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2108);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*>** StaticGet_Field_1_525()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2110);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Booklet::StepConfig*>** StaticGet_Field_1_817()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Booklet::StepConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2118);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChronicleLogicConnectionNodeConfig*>** StaticGet_Field_1_169()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChronicleLogicConnectionNodeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2120);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SpritePresetRecord*>** StaticGet_Field_1_927()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SpritePresetRecord*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2128);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ProjectileTemplateData*>** StaticGet_Field_1_756()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ProjectileTemplateData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2130);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Struct_2_331ACDD60B60D2E3>** StaticGet_Field_1_665()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Struct_2_331ACDD60B60D2E3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2138);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelStartSequeceConfig*>** StaticGet_Field_1_549()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelStartSequeceConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2140);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TargetFormationConfig*>** StaticGet_Field_1_997()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TargetFormationConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2148);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropertyFormationValue*>** StaticGet_Field_1_762()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropertyFormationValue*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2150);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ColliderConfig*>** StaticGet_Field_1_175()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ColliderConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2158);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtModifierConfig*>** StaticGet_Field_1_863()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtModifierConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2160);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LineupAvatarDynamicParamItem*>** StaticGet_Field_1_554()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LineupAvatarDynamicParamItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2168);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSimpleProjectileRandomVelItem*>** StaticGet_Field_1_336()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSimpleProjectileRandomVelItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2170);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AIDefaultSelectorConfig*>** StaticGet_Field_1_15()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AIDefaultSelectorConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2178);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupRandomInitControl*>** StaticGet_Field_1_491()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupRandomInitControl*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2180);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMusicCueInfo*>** StaticGet_Field_1_326()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMusicCueInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2188);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceSortedItem*>** StaticGet_Field_1_707()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceSortedItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2190);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*>** StaticGet_Field_1_720()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2198);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_C73AB3362B307540*>** StaticGet_Field_1_965()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_C73AB3362B307540*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x21A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LogicAnimEventEntry*>** StaticGet_Field_1_573()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LogicAnimEventEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x21A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCurveInfo*>** StaticGet_Field_1_472()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCurveInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x21B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ResistanceItem*>** StaticGet_Field_1_788()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ResistanceItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x21B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelDimensionBakedInfo*>** StaticGet_Field_1_475()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelDimensionBakedInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x21C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_942D40AEEDD1812F*>** StaticGet_Field_1_287()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_942D40AEEDD1812F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x21C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleWaveMonsterInfo*>** StaticGet_Field_1_844()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleWaveMonsterInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x21D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureAbilityConfig*>** StaticGet_Field_1_7()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureAbilityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x21D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ValuePostProcessConfig*>** StaticGet_Field_1_1063()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ValuePostProcessConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x21E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TaskListTemplate*>** StaticGet_Field_1_1003()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TaskListTemplate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x21E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBehaviorFlagList*>** StaticGet_Field_1_845()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBehaviorFlagList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x21F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraTalk*>** StaticGet_Field_1_161()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraTalk*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x21F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_9*>** StaticGet_Field_1_425()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2200);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SimpleTalkTargetBehavior*>** StaticGet_Field_1_897()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SimpleTalkTargetBehavior*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2208);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RedDotGroupConfig*>** StaticGet_Field_1_779()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RedDotGroupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2210);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPropStateIcon*>** StaticGet_Field_1_538()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPropStateIcon*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2218);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LineupGridFightTraitParam*>** StaticGet_Field_1_556()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LineupGridFightTraitParam*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2220);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelAdvEffectOverrideInfo*>** StaticGet_Field_1_461()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelAdvEffectOverrideInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2228);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleState*>** StaticGet_Field_1_383()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleState*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2230);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CustomMazeBattleTransitionConfig*>** StaticGet_Field_1_198()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CustomMazeBattleTransitionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2238);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraTalkCondition*>** StaticGet_Field_1_162()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraTalkCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2240);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AssistWayPointLittleGameCondition*>** StaticGet_Field_1_47()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AssistWayPointLittleGameCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2248);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupPropertyOverrideItem*>** StaticGet_Field_1_420()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupPropertyOverrideItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2250);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Boolean>** StaticGet_Field_1_89()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2258);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NPCAppearancePreset*>** StaticGet_Field_1_673()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NPCAppearancePreset*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2260);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MazeBuffParamKey*>** StaticGet_Field_1_604()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MazeBuffParamKey*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2268);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A4D134A7DAD941E3*>** StaticGet_Field_1_781()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A4D134A7DAD941E3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2270);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CreateNPC*>** StaticGet_Field_1_193()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CreateNPC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2278);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMapSurfaceConfig*>** StaticGet_Field_1_322()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMapSurfaceConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2280);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupState*>** StaticGet_Field_1_421()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupState*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2288);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupPropertyConfig*>** StaticGet_Field_1_419()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupPropertyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2290);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureBehaviorConfig*>** StaticGet_Field_1_9()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureBehaviorConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2298);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelAudienceMemberCurveInfo*>** StaticGet_Field_1_464()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelAudienceMemberCurveInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x22A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3FC4072EF8218789*>** StaticGet_Field_1_940()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3FC4072EF8218789*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x22A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimWeighted*>** StaticGet_Field_1_41()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimWeighted*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x22B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CaptureNPCToCharacter*>** StaticGet_Field_1_113()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CaptureNPCToCharacter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x22B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SyncAnimWithBgmPhaseConfig*>** StaticGet_Field_1_994()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SyncAnimWithBgmPhaseConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x22C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageHarmonySignalDynamicPatternMonoSerialization*>** StaticGet_Field_1_934()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageHarmonySignalDynamicPatternMonoSerialization*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x22C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropStateItem*>** StaticGet_Field_1_769()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropStateItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x22D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UsableConditionConfig*>** StaticGet_Field_1_1060()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UsableConditionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x22D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RotatableRegion*>** StaticGet_Field_1_809()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RotatableRegion*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x22E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MunicipalChatNPCInfo*>** StaticGet_Field_1_661()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MunicipalChatNPCInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x22E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatPresetTurnConfig*>** StaticGet_Field_1_221()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatPresetTurnConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x22F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfPhaseItem*>** StaticGet_Field_1_263()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfPhaseItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x22F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SummonMonsterConfig*>** StaticGet_Field_1_980()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SummonMonsterConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2300);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceActionBase*>** StaticGet_Field_1_95()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceActionBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2308);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FixPoint>** StaticGet_Field_1_346()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2310);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AISelector*>** StaticGet_Field_1_17()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AISelector*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2318);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FoundationPropStateConfig*>** StaticGet_Field_1_366()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FoundationPropStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2320);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::BirdStyleWeightConfig*>** StaticGet_Field_1_820()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::BirdStyleWeightConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2328);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarPropertyValue*>** StaticGet_Field_1_60()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarPropertyValue*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2330);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CRPVirtualCameraConfig*>** StaticGet_Field_1_194()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CRPVirtualCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2338);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEffectPreloadConfig*>** StaticGet_Field_1_310()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEffectPreloadConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2340);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraEvaluationCondition*>** StaticGet_Field_1_159()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraEvaluationCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2348);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleLineupEquipmentConfig*>** StaticGet_Field_1_80()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleLineupEquipmentConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2350);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TRFStageConfig*>** StaticGet_Field_1_1037()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TRFStageConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2358);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceSectionConfig*>** StaticGet_Field_1_107()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceSectionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2360);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceBgImagePanelConfig*>** StaticGet_Field_1_697()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceBgImagePanelConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2368);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CustomCameraBattleTransitionShotConfig*>** StaticGet_Field_1_197()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CustomCameraBattleTransitionShotConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2370);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelEntityValueGetterBase*>** StaticGet_Field_1_153()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelEntityValueGetterBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2378);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ScreenTransferSingleTextInfo*>** StaticGet_Field_1_876()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ScreenTransferSingleTextInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2380);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightWaveMonsterInfo*>** StaticGet_Field_1_413()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightWaveMonsterInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2388);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AssistWayPointCondition*>** StaticGet_Field_1_44()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AssistWayPointCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2390);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::JsonEnumConfig*>** StaticGet_Field_1_458()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::JsonEnumConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2398);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceBatchMonsterInfo*>** StaticGet_Field_1_851()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceBatchMonsterInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x23A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ShaderPropertyOverrideMonoSerialization*>** StaticGet_Field_1_884()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ShaderPropertyOverrideMonoSerialization*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x23A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePVSOfflineVolumeResult*>** StaticGet_Field_1_949()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePVSOfflineVolumeResult*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x23B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_ADE34076259CCCF7_2*>** StaticGet_Field_1_605()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_ADE34076259CCCF7_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x23B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeTransitInfo*>** StaticGet_Field_1_508()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeTransitInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x23C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupValueLookUpConfig*>** StaticGet_Field_1_423()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupValueLookUpConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x23C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LoopRewindSnapSection*>** StaticGet_Field_1_578()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LoopRewindSnapSection*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x23D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceRelatedBool*>** StaticGet_Field_1_209()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceRelatedBool*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x23D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationChargerConfig*>** StaticGet_Field_1_582()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationChargerConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x23E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TutorialGuideHintAdaptConfig*>** StaticGet_Field_1_1047()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TutorialGuideHintAdaptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x23E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionResConfig*>** StaticGet_Field_1_629()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionResConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x23F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AIDecisionUnitConfig*>** StaticGet_Field_1_14()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AIDecisionUnitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x23F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageIslandConfig*>** StaticGet_Field_1_936()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageIslandConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2400);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PamLevelInfo*>** StaticGet_Field_1_686()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PamLevelInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2408);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2BakedInfo*>** StaticGet_Field_1_521()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2BakedInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2410);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtLevelDimensionInfo*>** StaticGet_Field_1_859()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtLevelDimensionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2418);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiniGameHundredFloorWaveConfig*>** StaticGet_Field_1_621()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiniGameHundredFloorWaveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2420);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterCameraConfig*>** StaticGet_Field_1_120()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2428);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelRegionStateCondition*>** StaticGet_Field_1_541()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelRegionStateCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2430);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdvEffectConfig*>** StaticGet_Field_1_6()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdvEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2438);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelRegionConnectivity*>** StaticGet_Field_1_539()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelRegionConnectivity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2440);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiParameterConfigBase*>** StaticGet_Field_1_622()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiParameterConfigBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2448);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionCustomValue*>** StaticGet_Field_1_624()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionCustomValue*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2450);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_6*>** StaticGet_Field_1_782()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2458);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_7*>** StaticGet_Field_1_650()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2460);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleAnimBehaviourEvent*>** StaticGet_Field_1_899()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleAnimBehaviourEvent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2468);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RelicRecommendProperty*>** StaticGet_Field_1_780()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RelicRecommendProperty*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2470);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceBgEffectFrameConfig*>** StaticGet_Field_1_696()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceBgEffectFrameConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2478);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*>** StaticGet_Field_1_386()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2480);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionTalkStyle*>** StaticGet_Field_1_630()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionTalkStyle*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2488);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatTaskConfig*>** StaticGet_Field_1_222()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatTaskConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2490);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelEntityBakedInfo*>** StaticGet_Field_1_480()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelEntityBakedInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2498);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageLightData*>** StaticGet_Field_1_939()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageLightData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x24A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueChestGridItem*>** StaticGet_Field_1_794()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueChestGridItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x24A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyBuildBlock*>** StaticGet_Field_1_1027()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyBuildBlock*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x24B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NoteConfig*>** StaticGet_Field_1_670()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NoteConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x24B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelGameModeConfig*>** StaticGet_Field_1_370()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelGameModeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x24C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RandomSelectorCase*>** StaticGet_Field_1_775()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RandomSelectorCase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x24C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierValueBindData*>** StaticGet_Field_1_643()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierValueBindData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x24D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatInsertAbilityConfig*>** StaticGet_Field_1_216()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatInsertAbilityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x24D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformTaskSeq*>** StaticGet_Field_1_709()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformTaskSeq*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x24E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierStatusTypeList*>** StaticGet_Field_1_642()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierStatusTypeList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x24E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimDanmuTrackGroup*>** StaticGet_Field_1_306()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimDanmuTrackGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x24F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor*>** StaticGet_Field_1_71()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x24F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SummonUnitInteractionDestroyRule*>** StaticGet_Field_1_987()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SummonUnitInteractionDestroyRule*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2500);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TextDynamicParamBase*>** StaticGet_Field_1_1006()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TextDynamicParamBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2508);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarAssetPreloadConfig*>** StaticGet_Field_1_52()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarAssetPreloadConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2510);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_2EC0EF10CE4B8713*>** StaticGet_Field_1_19()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_2EC0EF10CE4B8713*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2518);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraTalkContentWithWeight*>** StaticGet_Field_1_164()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraTalkContentWithWeight*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2520);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*>** StaticGet_Field_1_218()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2528);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEvilSmileStateConfig*>** StaticGet_Field_1_314()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEvilSmileStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2530);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationPatternConfig*>** StaticGet_Field_1_361()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationPatternConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2538);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierCallbackPriority*>** StaticGet_Field_1_1043()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierCallbackPriority*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2540);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TargetSeqOperation*>** StaticGet_Field_1_999()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TargetSeqOperation*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2548);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SharedEntityEvent*>** StaticGet_Field_1_888()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SharedEntityEvent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2550);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ReactionTaskConfig*>** StaticGet_Field_1_777()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ReactionTaskConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2558);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_DFF86A25F881990E*>** StaticGet_Field_1_654()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_DFF86A25F881990E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2560);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::BirdItemPackWeightConfig*>** StaticGet_Field_1_818()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::BirdItemPackWeightConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2568);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelFloorMapInfoConfig*>** StaticGet_Field_1_369()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelFloorMapInfoConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2570);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BlockNodeConfig*>** StaticGet_Field_1_88()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BlockNodeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2578);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueDialogueEventOptionConfig*>** StaticGet_Field_1_796()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueDialogueEventOptionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2580);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::Match3PieceTagApplyConfig*>** StaticGet_Field_1_827()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::Match3PieceTagApplyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2588);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfFeverSkillLevelConfig*>** StaticGet_Field_1_259()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfFeverSkillLevelConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2590);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtProjectileDataList*>** StaticGet_Field_1_865()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtProjectileDataList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2598);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindChildConfig*>** StaticGet_Field_1_1014()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindChildConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x25A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiniGameFlappyBirdWaveConfig*>** StaticGet_Field_1_619()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiniGameFlappyBirdWaveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x25A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlagList*>** StaticGet_Field_1_635()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlagList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x25B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageTypePrefabs*>** StaticGet_Field_1_957()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageTypePrefabs*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x25B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LodTemplate*>** StaticGet_Field_1_572()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LodTemplate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x25C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttachmentVisibilityNode*>** StaticGet_Field_1_49()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttachmentVisibilityNode*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x25C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSurfacePoint*>** StaticGet_Field_1_342()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSurfacePoint*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x25D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2IntersectionInfo*>** StaticGet_Field_1_527()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2IntersectionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x25D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2IntersectionConnectAreaInfo*>** StaticGet_Field_1_526()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2IntersectionConnectAreaInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x25E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StreamingItemHLODNode*>** StaticGet_Field_1_968()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StreamingItemHLODNode*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x25E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropDayOfWeekActionParamObject*>** StaticGet_Field_1_758()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropDayOfWeekActionParamObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x25F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelSubmapEntityBakedInfo*>** StaticGet_Field_1_550()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelSubmapEntityBakedInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x25F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PreloadItem*>** StaticGet_Field_1_746()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PreloadItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2600);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueBlockCreateGroup*>** StaticGet_Field_1_793()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueBlockCreateGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2608);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MunicipalChatNodeInfo*>** StaticGet_Field_1_659()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MunicipalChatNodeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2610);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCrowdInfo*>** StaticGet_Field_1_469()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCrowdInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2618);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NoteNotifyConfig*>** StaticGet_Field_1_672()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NoteNotifyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2620);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimatorStateZoneRangeConfig*>** StaticGet_Field_1_38()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimatorStateZoneRangeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2628);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3A3D56D4D49D35CE*>** StaticGet_Field_1_110()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3A3D56D4D49D35CE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2630);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleEntitySkillWhiteBoxData*>** StaticGet_Field_1_76()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleEntitySkillWhiteBoxData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2638);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrackNameList*>** StaticGet_Field_1_1021()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrackNameList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2640);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttachPointEffectAdaptionConfig*>** StaticGet_Field_1_50()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AttachPointEffectAdaptionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2648);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AlleyDockGridItemData*>** StaticGet_Field_1_27()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AlleyDockGridItemData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2650);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelMonsterInfo*>** StaticGet_Field_1_499()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelMonsterInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2658);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropStateIcon*>** StaticGet_Field_1_768()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropStateIcon*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2660);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_0B20F1FA28B84337*>** StaticGet_Field_1_354()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_0B20F1FA28B84337*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2668);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterEmoConfig*>** StaticGet_Field_1_121()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterEmoConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2670);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarOutfitDecorationConfig*>** StaticGet_Field_1_57()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarOutfitDecorationConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2678);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VCameraConfig*>** StaticGet_Field_1_1064()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2680);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimViewBakedInfo*>** StaticGet_Field_1_345()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimViewBakedInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2688);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimGroupEventEntry*>** StaticGet_Field_1_40()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimGroupEventEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2690);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelNodeSequence*>** StaticGet_Field_1_156()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelNodeSequence*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2698);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameObjectPoolSetting*>** StaticGet_Field_1_398()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameObjectPoolSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x26A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StateTreeStateBaseConfig*>** StaticGet_Field_1_962()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StateTreeStateBaseConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x26A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FloorSavedValueConfig*>** StaticGet_Field_1_355()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FloorSavedValueConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x26B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelTriggerInfo*>** StaticGet_Field_1_551()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelTriggerInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x26B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceStageBornPointInfo*>** StaticGet_Field_1_853()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceStageBornPointInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x26C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCirclePointInfo*>** StaticGet_Field_1_467()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCirclePointInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x26C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceStageUnitInfo*>** StaticGet_Field_1_855()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceStageUnitInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x26D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SimpleTalkStyle*>** StaticGet_Field_1_896()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SimpleTalkStyle*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x26D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillDamageTypePreshowConfig*>** StaticGet_Field_1_912()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillDamageTypePreshowConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x26E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtModifierCallbackConfig*>** StaticGet_Field_1_862()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtModifierCallbackConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x26E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_8*>** StaticGet_Field_1_389()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x26F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AlleyConditionExtendParam*>** StaticGet_Field_1_25()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AlleyConditionExtendParam*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x26F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_DA5E269DBF62B292*>** StaticGet_Field_1_447()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_DA5E269DBF62B292*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2700);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DestroyNPC*>** StaticGet_Field_1_205()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DestroyNPC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2708);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_B1429A4347DAE014*>** StaticGet_Field_1_431()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_B1429A4347DAE014*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2710);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EnvironmentDataInfo*>** StaticGet_Field_1_280()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EnvironmentDataInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2718);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameObjectPoolGroupConfig*>** StaticGet_Field_1_396()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameObjectPoolGroupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2720);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueDLCBlockWeight*>** StaticGet_Field_1_799()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueDLCBlockWeight*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2728);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SpritePresetNameList*>** StaticGet_Field_1_926()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SpritePresetNameList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2730);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EraRegion*>** StaticGet_Field_1_284()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EraRegion*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2738);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelRegionStateConfig*>** StaticGet_Field_1_542()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelRegionStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2740);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMiniGameCollectCoinWave*>** StaticGet_Field_1_324()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMiniGameCollectCoinWave*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2748);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_927AEEA01B635CB6_2*>** StaticGet_Field_1_685()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_927AEEA01B635CB6_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2750);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::MatchThreePropConfig*>** StaticGet_Field_1_833()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::MatchThreePropConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2758);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterLodMaterialPropertyList*>** StaticGet_Field_1_127()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterLodMaterialPropertyList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2760);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PassiveUnitEffectTypeMatchFactorConfig*>** StaticGet_Field_1_691()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PassiveUnitEffectTypeMatchFactorConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2768);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChronicleCustomShowCondition*>** StaticGet_Field_1_167()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChronicleCustomShowCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2770);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SomatoWidthRangeConfig*>** StaticGet_Field_1_923()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SomatoWidthRangeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2778);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattlePauseEnvironmentData*>** StaticGet_Field_1_82()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattlePauseEnvironmentData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2780);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelExcelValueGetter*>** StaticGet_Field_1_154()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelExcelValueGetter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2788);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ClearNpcDistanceTrigger*>** StaticGet_Field_1_172()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ClearNpcDistanceTrigger*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2790);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraAbilityModifier*>** StaticGet_Field_1_146()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraAbilityModifier*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2798);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChronicleConnectionConfig*>** StaticGet_Field_1_166()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChronicleConnectionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x27A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Int32>** StaticGet_Field_1_450()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x27A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianInfo*>** StaticGet_Field_1_516()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x27B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindCameraShakeConfig*>** StaticGet_Field_1_1013()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindCameraShakeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x27B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NavMeshLinkInfo*>** StaticGet_Field_1_666()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NavMeshLinkInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x27C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillTreePointPreset*>** StaticGet_Field_1_920()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillTreePointPreset*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x27C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2RoadInfo*>** StaticGet_Field_1_533()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2RoadInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x27D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PolymerChildObj*>** StaticGet_Field_1_740()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PolymerChildObj*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x27D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropStateConfig*>** StaticGet_Field_1_767()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x27E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageMonsterRewardItem*>** StaticGet_Field_1_941()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageMonsterRewardItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x27E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EraFlipGroupConfig*>** StaticGet_Field_1_281()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EraFlipGroupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x27F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageHarmonySignalDemodulatorMonoSerialization*>** StaticGet_Field_1_932()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageHarmonySignalDemodulatorMonoSerialization*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x27F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BubbleTalkInfo*>** StaticGet_Field_1_91()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BubbleTalkInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2800);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropDestructItem*>** StaticGet_Field_1_759()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropDestructItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2808);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonoEffectLodDetail*>** StaticGet_Field_1_644()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonoEffectLodDetail*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2810);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TargetEvaluator*>** StaticGet_Field_1_996()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TargetEvaluator*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2818);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GravityBallCondition*>** StaticGet_Field_1_404()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GravityBallCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2820);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleUnitRow*>** StaticGet_Field_1_843()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleUnitRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2828);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageVolumeConfigV2*>** StaticGet_Field_1_960()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageVolumeConfigV2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2830);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::LockTargetParam*>** StaticGet_Field_1_812()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::LockTargetParam*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2838);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::STTaskConfig*>** StaticGet_Field_1_971()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::STTaskConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2840);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::BombCreateConfig*>** StaticGet_Field_1_821()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::BombCreateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2848);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimFlappyPipeBlockConfig*>** StaticGet_Field_1_318()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimFlappyPipeBlockConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2850);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageMonsterWave*>** StaticGet_Field_1_942()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageMonsterWave*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2858);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtAbilityConfig*>** StaticGet_Field_1_835()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtAbilityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2860);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Int64>** StaticGet_Field_1_576()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2868);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicLoadBlockDataList*>** StaticGet_Field_1_236()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicLoadBlockDataList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2870);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDynamicValueRangeGroup*>** StaticGet_Field_1_858()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDynamicValueRangeGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2878);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfFoodEventConfig*>** StaticGet_Field_1_260()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfFoodEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2880);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectConfig*>** StaticGet_Field_1_245()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2888);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_FFBC8C99F6B84D8F*>** StaticGet_Field_1_964()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_FFBC8C99F6B84D8F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2890);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropStateOverrideItem*>** StaticGet_Field_1_771()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropStateOverrideItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2898);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceBasePredicateConfig*>** StaticGet_Field_1_96()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceBasePredicateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x28A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelValidNavmapSubmapConfig*>** StaticGet_Field_1_552()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelValidNavmapSubmapConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x28A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DistanceToScoreWeightMapping*>** StaticGet_Field_1_227()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DistanceToScoreWeightMapping*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x28B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhaseValueActionPairSerialization*>** StaticGet_Field_1_711()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhaseValueActionPairSerialization*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x28B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindEntityAnimOverride*>** StaticGet_Field_1_1016()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindEntityAnimOverride*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x28C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TeamFormationTemplateSingleConfig*>** StaticGet_Field_1_1004()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TeamFormationTemplateSingleConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x28C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ActionBarEffectTextConfig*>** StaticGet_Field_1_3()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ActionBarEffectTextConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x28D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraAbilityModifierParam*>** StaticGet_Field_1_147()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraAbilityModifierParam*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x28D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelBattleAreaInfo*>** StaticGet_Field_1_466()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelBattleAreaInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x28E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleStateTemplate*>** StaticGet_Field_1_384()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleStateTemplate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x28E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SyncAnimWithBgmChapterConfig*>** StaticGet_Field_1_993()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SyncAnimWithBgmChapterConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x28F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NewProjectileDataList*>** StaticGet_Field_1_667()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NewProjectileDataList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x28F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ContainerStateToSeedStateConfig*>** StaticGet_Field_1_189()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ContainerStateToSeedStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2900);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainCollectionMissionPerformancePair*>** StaticGet_Field_1_1025()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainCollectionMissionPerformancePair*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2908);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>** StaticGet_Field_1_67()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2910);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfWaveCustomerConfig*>** StaticGet_Field_1_271()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfWaveCustomerConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2918);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrackPhotoEvent*>** StaticGet_Field_1_1024()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrackPhotoEvent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2920);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicString*>** StaticGet_Field_1_239()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2928);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>** StaticGet_Field_1_357()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2930);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleHitBoxConfig*>** StaticGet_Field_1_902()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleHitBoxConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2938);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityVisiableInfo*>** StaticGet_Field_1_279()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityVisiableInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2940);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SwordTrainingStatusConfig*>** StaticGet_Field_1_992()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SwordTrainingStatusConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2948);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ManikinCustomConfig*>** StaticGet_Field_1_580()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ManikinCustomConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2950);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FloatCurveKeyframe*>** StaticGet_Field_1_350()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FloatCurveKeyframe*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2958);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleCharacterIDMapping*>** StaticGet_Field_1_381()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleCharacterIDMapping*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2960);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongSPSkillInfo*>** StaticGet_Field_1_734()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongSPSkillInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2968);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleBGMStateConfig*>** StaticGet_Field_1_72()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleBGMStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2970);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDamageTextConfigGroup*>** StaticGet_Field_1_850()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDamageTextConfigGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2978);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageVolumeConfig*>** StaticGet_Field_1_959()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageVolumeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2980);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimPropBakedMoveConfig*>** StaticGet_Field_1_330()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimPropBakedMoveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2988);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerceiveValueTriggerConfig*>** StaticGet_Field_1_695()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerceiveValueTriggerConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2990);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityColliderHeightCameraConfig*>** StaticGet_Field_1_275()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityColliderHeightCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2998);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RotatableRegionPose*>** StaticGet_Field_1_810()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RotatableRegionPose*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x29A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AudioStateConfig*>** StaticGet_Field_1_51()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AudioStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x29A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RuanMadeCakeFeatureConfig*>** StaticGet_Field_1_872()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RuanMadeCakeFeatureConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x29B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_10*>** StaticGet_Field_1_990()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x29B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OrigamiTraceTalk*>** StaticGet_Field_1_683()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OrigamiTraceTalk*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x29C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueDLCMarkType*>** StaticGet_Field_1_800()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueDLCMarkType*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x29C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CommonSkillPool*>** StaticGet_Field_1_177()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CommonSkillPool*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x29D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelSmartObjectCommonPointInfo*>** StaticGet_Field_1_545()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelSmartObjectCommonPointInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x29D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightBattleTemplate*>** StaticGet_Field_1_405()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightBattleTemplate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x29E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceHitConfig*>** StaticGet_Field_1_101()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceHitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x29E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterReplaceMaterialRender*>** StaticGet_Field_1_135()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterReplaceMaterialRender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x29F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::PieceConfig*>** StaticGet_Field_1_834()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::PieceConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x29F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Booklet::SpreadConfig*>** StaticGet_Field_1_816()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Booklet::SpreadConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A00);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MDVRegionVariant*>** StaticGet_Field_1_609()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MDVRegionVariant*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A08);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelAnchorInfo*>** StaticGet_Field_1_462()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelAnchorInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A10);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::JsonEnum*>** StaticGet_Field_1_457()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::JsonEnum*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A18);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfEntranceNPCConfig*>** StaticGet_Field_1_258()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfEntranceNPCConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A20);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationMoveMemberInfo*>** StaticGet_Field_1_360()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationMoveMemberInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A28);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSubMissionCondition*>** StaticGet_Field_1_340()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSubMissionCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A30);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePVSOfflineSamplerInfo*>** StaticGet_Field_1_945()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePVSOfflineSamplerInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A38);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleAnimEventConfig*>** StaticGet_Field_1_377()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleAnimEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A40);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindOverlayMaterials*>** StaticGet_Field_1_1018()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindOverlayMaterials*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A48);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BackgroundTalkInfo*>** StaticGet_Field_1_61()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BackgroundTalkInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A50);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::UInt16>** StaticGet_Field_1_1061()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A58);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DevTalkInfo*>** StaticGet_Field_1_213()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DevTalkInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A60);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DebateSpecialItem*>** StaticGet_Field_1_202()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DebateSpecialItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A68);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ItemConfig*>** StaticGet_Field_1_456()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A70);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AITransitionTableRow*>** StaticGet_Field_1_22()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AITransitionTableRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A78);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueTalkInfo*>** StaticGet_Field_1_806()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueTalkInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A80);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate*>** StaticGet_Field_1_791()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A88);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_E8C259E730C95D15*>** StaticGet_Field_1_915()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_E8C259E730C95D15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A90);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleEntityPromotionWhiteBoxData*>** StaticGet_Field_1_74()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleEntityPromotionWhiteBoxData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2A98);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimationZone*>** StaticGet_Field_1_33()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimationZone*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2AA0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AssistWayPoint*>** StaticGet_Field_1_43()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AssistWayPoint*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2AA8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameObjectPoolConfigTemplate*>** StaticGet_Field_1_395()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameObjectPoolConfigTemplate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2AB0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>** StaticGet_Field_1_69()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2AB8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimationMoveRange*>** StaticGet_Field_1_31()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimationMoveRange*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2AC0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::Match3EnvActionConfig*>** StaticGet_Field_1_825()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::Match3EnvActionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2AC8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_1E074B0D9996EDF5*>** StaticGet_Field_1_983()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_1E074B0D9996EDF5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2AD0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageHarmonyPlayerPosSignalMonoSerialization*>** StaticGet_Field_1_931()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageHarmonyPlayerPosSignalMonoSerialization*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2AD8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindAudioConfig*>** StaticGet_Field_1_1012()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindAudioConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2AE0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfPropertyModifier*>** StaticGet_Field_1_264()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfPropertyModifier*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2AE8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupToMemberEntityDataConfig*>** StaticGet_Field_1_422()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupToMemberEntityDataConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2AF0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NPCTriggerSound*>** StaticGet_Field_1_676()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NPCTriggerSound*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2AF8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NpcEntityInfo*>** StaticGet_Field_1_674()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NpcEntityInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B00);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChenLingBattleResource*>** StaticGet_Field_1_64()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChenLingBattleResource*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B08);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelLevelTargetProgressConfig*>** StaticGet_Field_1_372()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelLevelTargetProgressConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B10);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiConditionConfigBase*>** StaticGet_Field_1_612()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiConditionConfigBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B18);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelSmartObjectSlotInfo*>** StaticGet_Field_1_548()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelSmartObjectSlotInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B20);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PuzzleAnimatorParam*>** StaticGet_Field_1_773()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PuzzleAnimatorParam*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B28);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfLeaderSkillLevelConfig*>** StaticGet_Field_1_262()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfLeaderSkillLevelConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B30);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageCaptureAliasData*>** StaticGet_Field_1_929()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageCaptureAliasData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B38);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SmellPathEdge*>** StaticGet_Field_1_921()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SmellPathEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B40);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameEntityPreset*>** StaticGet_Field_1_561()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameEntityPreset*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B48);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtCusomtEventConfig*>** StaticGet_Field_1_849()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtCusomtEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B50);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>** StaticGet_Field_1_379()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B58);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_6D3107F5009DB1BB_1*>** StaticGet_Field_1_807()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_6D3107F5009DB1BB_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B60);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimationTimeEvent*>** StaticGet_Field_1_32()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimationTimeEvent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B68);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2IntersectionRoadPathInfo*>** StaticGet_Field_1_528()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2IntersectionRoadPathInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B70);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelRotatableRegionBakedInfo*>** StaticGet_Field_1_543()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelRotatableRegionBakedInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B78);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlagListPair*>** StaticGet_Field_1_636()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlagListPair*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B80);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraBattleWaitEvent*>** StaticGet_Field_1_149()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraBattleWaitEvent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B88);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_EDD10E908F1C4623*>** StaticGet_Field_1_649()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_EDD10E908F1C4623*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B90);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyPerformanceCharacter*>** StaticGet_Field_1_1033()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyPerformanceCharacter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2B98);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimBaseEventCondition*>** StaticGet_Field_1_302()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimBaseEventCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2BA0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEventReceiverItem*>** StaticGet_Field_1_313()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEventReceiverItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2BA8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PassageConfig*>** StaticGet_Field_1_690()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PassageConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2BB0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleReportCustomValueList*>** StaticGet_Field_1_87()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleReportCustomValueList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2BB8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_0F724F8EDC601A3C*>** StaticGet_Field_1_568()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_0F724F8EDC601A3C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2BC0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationVolumeEffectTransitPoint*>** StaticGet_Field_1_589()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationVolumeEffectTransitPoint*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2BC8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiniGameCollectCoin_CurveConfig*>** StaticGet_Field_1_617()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiniGameCollectCoin_CurveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2BD0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HoyoTag*>** StaticGet_Field_1_444()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HoyoTag*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2BD8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelRotatableRegionPoseBakedInfo*>** StaticGet_Field_1_544()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelRotatableRegionPoseBakedInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2BE0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UITextNode*>** StaticGet_Field_1_1057()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UITextNode*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2BE8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianMemberInfo*>** StaticGet_Field_1_519()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianMemberInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2BF0);
	}
	static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Object*, ::System::String*>** StaticGet_Field_1_1077()
	{
		return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2BF8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PolymerObjData*>** StaticGet_Field_1_742()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PolymerObjData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C00);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PenaconyEndmostSimpleTalkData*>** StaticGet_Field_1_694()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PenaconyEndmostSimpleTalkData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C08);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceRegionCellConfig*>** StaticGet_Field_1_106()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceRegionCellConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C10);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AIPathwayInfo*>** StaticGet_Field_1_16()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AIPathwayInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C18);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupMainMissionIssuePatch*>** StaticGet_Field_1_489()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupMainMissionIssuePatch*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C20);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_BC601FCB47AEB5E5*>** StaticGet_Field_1_424()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_BC601FCB47AEB5E5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C28);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhaseSkillInfoMappingList*>** StaticGet_Field_1_710()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhaseSkillInfoMappingList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C30);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ConditionParam*>** StaticGet_Field_1_184()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ConditionParam*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C38);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenMiniGameGradeConfig*>** StaticGet_Field_1_435()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenMiniGameGradeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C40);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Booklet::SectionSynopsis*>** StaticGet_Field_1_815()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Booklet::SectionSynopsis*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C48);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtTargetFormationPosConfig*>** StaticGet_Field_1_871()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtTargetFormationPosConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C50);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimelineEntityConfig*>** StaticGet_Field_1_1008()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimelineEntityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C58);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCrowdMemberInfo*>** StaticGet_Field_1_471()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCrowdMemberInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C60);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_5D31C4140DCE7D34*>** StaticGet_Field_1_911()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_5D31C4140DCE7D34*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C68);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceMoveConfig*>** StaticGet_Field_1_102()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceMoveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C70);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FloatVariableConfig*>** StaticGet_Field_1_352()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FloatVariableConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C78);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TriggerEffect*>** StaticGet_Field_1_1038()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TriggerEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C80);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelMinimapLayerSpriteConfigCollection*>** StaticGet_Field_1_496()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelMinimapLayerSpriteConfigCollection*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C88);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterAtlasFaceSet*>** StaticGet_Field_1_119()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterAtlasFaceSet*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C90);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupBakedInfo*>** StaticGet_Field_1_486()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupBakedInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2C98);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DamageBehaviorTemplate*>** StaticGet_Field_1_201()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DamageBehaviorTemplate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2CA0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelLittleGameInfo*>** StaticGet_Field_1_494()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelLittleGameInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2CA8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongEnemyGroupEventBase*>** StaticGet_Field_1_726()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongEnemyGroupEventBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2CB0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RenderResolution*>** StaticGet_Field_1_783()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RenderResolution*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2CB8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::WaypointMaterial*>** StaticGet_Field_1_1074()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::WaypointMaterial*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2CC0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_3*>** StaticGet_Field_1_288()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2CC8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_4F30521532511E50*>** StaticGet_Field_1_26()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_4F30521532511E50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2CD0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionCondition*>** StaticGet_Field_1_623()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2CD8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StimulusItemConfig*>** StaticGet_Field_1_966()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StimulusItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2CE0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropertyAdsorptionConfig*>** StaticGet_Field_1_761()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropertyAdsorptionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2CE8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3745C69C00F04B7D_2*>** StaticGet_Field_1_111()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3745C69C00F04B7D_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2CF0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SimpleTalkInfo*>** StaticGet_Field_1_895()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SimpleTalkInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2CF8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RenderTestItemJson*>** StaticGet_Field_1_784()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RenderTestItemJson*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D00);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtSkillPropertyConfig*>** StaticGet_Field_1_868()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtSkillPropertyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D08);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimBaseEventAction*>** StaticGet_Field_1_301()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimBaseEventAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D10);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueOptionTalkInfo*>** StaticGet_Field_1_805()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueOptionTalkInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D18);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_2F8808448A4005C9*>** StaticGet_Field_1_446()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_2F8808448A4005C9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D20);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongEnemyStackConfig*>** StaticGet_Field_1_729()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongEnemyStackConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D28);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenRequireGoodsConfig*>** StaticGet_Field_1_439()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenRequireGoodsConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D30);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationAirlockConfig*>** StaticGet_Field_1_581()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationAirlockConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D38);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CRPVirtualCameraConfigList*>** StaticGet_Field_1_195()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CRPVirtualCameraConfigList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D40);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig*>** StaticGet_Field_1_905()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D48);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_73B429E1E9F270F4*>** StaticGet_Field_1_289()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_73B429E1E9F270F4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D50);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PredicateTaskListWithFail*>** StaticGet_Field_1_745()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PredicateTaskListWithFail*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D58);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_73507DF29F8561CD*>** StaticGet_Field_1_802()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_73507DF29F8561CD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D60);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMusicEventInfo*>** StaticGet_Field_1_327()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMusicEventInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D68);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeInnerTransitInfo*>** StaticGet_Field_1_507()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeInnerTransitInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D70);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::String*>** StaticGet_Field_1_969()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D78);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig*>** StaticGet_Field_1_906()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D80);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChenLingBattleValueGetter*>** StaticGet_Field_1_66()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChenLingBattleValueGetter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D88);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_4B6B1EA474B8E7B0*>** StaticGet_Field_1_440()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_4B6B1EA474B8E7B0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D90);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::Match3ActionBase*>** StaticGet_Field_1_822()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::Match3ActionBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2D98);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtCharacterFlagVisual*>** StaticGet_Field_1_848()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtCharacterFlagVisual*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2DA0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSurfaceBakedInfo*>** StaticGet_Field_1_341()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSurfaceBakedInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2DA8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleEntitySkillLevelWhiteBoxData*>** StaticGet_Field_1_75()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleEntitySkillLevelWhiteBoxData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2DB0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MDVPositionVariant*>** StaticGet_Field_1_608()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MDVPositionVariant*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2DB8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceCatAIConfig*>** StaticGet_Field_1_98()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceCatAIConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2DC0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelPredicateBase*>** StaticGet_Field_1_157()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelPredicateBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2DC8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterSkinResMapItem*>** StaticGet_Field_1_138()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterSkinResMapItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2DD0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FrameTimeBudgetInfo*>** StaticGet_Field_1_374()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FrameTimeBudgetInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2DD8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMoveBakedConfig*>** StaticGet_Field_1_325()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMoveBakedConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2DE0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CurveShakeConfig*>** StaticGet_Field_1_196()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CurveShakeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2DE8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RuntimeStageCaptureAliasData*>** StaticGet_Field_1_873()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RuntimeStageCaptureAliasData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2DF0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElationConfig*>** StaticGet_Field_1_253()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElationConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2DF8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AIVariable*>** StaticGet_Field_1_23()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AIVariable*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E00);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureModifierConfig*>** StaticGet_Field_1_11()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureModifierConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E08);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectSurfaceTypeConfig*>** StaticGet_Field_1_251()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectSurfaceTypeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E10);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelDistrictInfo*>** StaticGet_Field_1_479()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelDistrictInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E18);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CutSceneSFXItem*>** StaticGet_Field_1_200()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CutSceneSFXItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E20);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EraFlipperBattleAreaOverrideConfig*>** StaticGet_Field_1_282()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EraFlipperBattleAreaOverrideConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E28);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicLoadBlockData*>** StaticGet_Field_1_235()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicLoadBlockData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E30);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotographToastTemplate*>** StaticGet_Field_1_723()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotographToastTemplate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E38);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeInnerNodeInfo*>** StaticGet_Field_1_506()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeInnerNodeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E40);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameLevelVariable*>** StaticGet_Field_1_564()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameLevelVariable*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E48);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChenLingBattleBezierPointConfig*>** StaticGet_Field_1_140()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChenLingBattleBezierPointConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E50);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelEntityComparerBase*>** StaticGet_Field_1_152()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelEntityComparerBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E58);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3745C69C00F04B7D_4*>** StaticGet_Field_1_408()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3745C69C00F04B7D_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E60);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraTalkContent*>** StaticGet_Field_1_163()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraTalkContent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E68);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleBulletCommentItem*>** StaticGet_Field_1_73()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleBulletCommentItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E70);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameEntryStage*>** StaticGet_Field_1_391()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameEntryStage*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E78);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlagEventConfigList*>** StaticGet_Field_1_634()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlagEventConfigList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E80);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectTriggerRange*>** StaticGet_Field_1_252()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectTriggerRange*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E88);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PostureTypeTasksConfig*>** StaticGet_Field_1_743()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PostureTypeTasksConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E90);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectModifyData*>** StaticGet_Field_1_247()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectModifyData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2E98);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEmotionConfig*>** StaticGet_Field_1_311()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEmotionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2EA0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_12*>** StaticGet_Field_1_801()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2EA8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBindEffectConfig*>** StaticGet_Field_1_638()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBindEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2EB0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelEntityReferenceInfo*>** StaticGet_Field_1_482()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelEntityReferenceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2EB8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DepartedConfig*>** StaticGet_Field_1_204()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DepartedConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2EC0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianFlowInfo*>** StaticGet_Field_1_515()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianFlowInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2EC8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarOutfitPartConfig*>** StaticGet_Field_1_58()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarOutfitPartConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2ED0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NpcWalkStyleWeightInfo*>** StaticGet_Field_1_677()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NpcWalkStyleWeightInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2ED8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceSkipLevelStateOverrideItem*>** StaticGet_Field_1_706()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceSkipLevelStateOverrideItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2EE0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameEntityConfig*>** StaticGet_Field_1_560()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameEntityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2EE8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameLevelVarBinding*>** StaticGet_Field_1_563()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameLevelVarBinding*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2EF0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FieldEffectHighPriorityList*>** StaticGet_Field_1_294()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FieldEffectHighPriorityList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2EF8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameComponentConfig*>** StaticGet_Field_1_559()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameComponentConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F00);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UIImageNode*>** StaticGet_Field_1_1051()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UIImageNode*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F08);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropSetFollowRotateGameObject*>** StaticGet_Field_1_764()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropSetFollowRotateGameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F10);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelStatusConfig*>** StaticGet_Field_1_158()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelStatusConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F18);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphFreeStyleDataConfig*>** StaticGet_Field_1_715()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphFreeStyleDataConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F20);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBehaviorFlagStateAction*>** StaticGet_Field_1_847()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBehaviorFlagStateAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F28);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SwitchCaseTaskList*>** StaticGet_Field_1_988()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SwitchCaseTaskList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F30);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LogSamplerParamDefine*>** StaticGet_Field_1_574()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LogSamplerParamDefine*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F38);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyPerformanceFreeStyleAction*>** StaticGet_Field_1_1034()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyPerformanceFreeStyleAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F40);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillAbilityConfig*>** StaticGet_Field_1_907()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillAbilityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F48);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EditorReplaceMaterialScheme*>** StaticGet_Field_1_242()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EditorReplaceMaterialScheme*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F50);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterResistEntry*>** StaticGet_Field_1_655()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterResistEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F58);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AlleyWalkableGridItemData*>** StaticGet_Field_1_30()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AlleyWalkableGridItemData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F60);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightWaveMonsterEntry*>** StaticGet_Field_1_412()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightWaveMonsterEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F68);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterEyeCtrlConfig*>** StaticGet_Field_1_123()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterEyeCtrlConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F70);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterIDGroupConfig*>** StaticGet_Field_1_125()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterIDGroupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F78);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FilterSystemConflictTypes*>** StaticGet_Field_1_295()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FilterSystemConflictTypes*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F80);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ResidentPossessionInfo*>** StaticGet_Field_1_787()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ResidentPossessionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F88);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::JsonOfflineCullingCellSerializeData*>** StaticGet_Field_1_459()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::JsonOfflineCullingCellSerializeData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F90);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarColliderCameraConfig*>** StaticGet_Field_1_54()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarColliderCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2F98);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongEnemyShootConfig*>** StaticGet_Field_1_727()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongEnemyShootConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2FA0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectAdaptionConfig*>** StaticGet_Field_1_244()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectAdaptionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2FA8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillTransitAnimConfig*>** StaticGet_Field_1_919()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillTransitAnimConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2FB0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageItemAlias*>** StaticGet_Field_1_938()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageItemAlias*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2FB8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenMiniGameLoadCharacter*>** StaticGet_Field_1_436()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenMiniGameLoadCharacter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2FC0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleMainsubKillSealScore*>** StaticGet_Field_1_596()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleMainsubKillSealScore*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2FC8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_ABE8D38DFA4EFF6A*>** StaticGet_Field_1_601()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_ABE8D38DFA4EFF6A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2FD0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ShaderPropertySerialization*>** StaticGet_Field_1_885()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ShaderPropertySerialization*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2FD8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameObjectPoolGroupSetting*>** StaticGet_Field_1_397()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameObjectPoolGroupSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2FE0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicJsonConfig*>** StaticGet_Field_1_233()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicJsonConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2FE8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChenLingBattleEffectTier*>** StaticGet_Field_1_141()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChenLingBattleEffectTier*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2FF0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityRuntimeReplaceArtPrefab*>** StaticGet_Field_1_278()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityRuntimeReplaceArtPrefab*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x2FF8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MemberToMemberEntityDataConfig*>** StaticGet_Field_1_610()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MemberToMemberEntityDataConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3000);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyBuildStaticItem*>** StaticGet_Field_1_1030()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyBuildStaticItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3008);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelEffectConfig*>** StaticGet_Field_1_151()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3010);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCurvePointInfo*>** StaticGet_Field_1_473()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCurvePointInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3018);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleTriggerGraphInfo*>** StaticGet_Field_1_385()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleTriggerGraphInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3020);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FixVec2>** StaticGet_Field_1_347()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FixVec2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3028);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Byte>** StaticGet_Field_1_94()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3030);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindAttachEff*>** StaticGet_Field_1_1011()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindAttachEff*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3038);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleCharacterExtendLayerConfig*>** StaticGet_Field_1_380()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleCharacterExtendLayerConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3040);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationZOffsetParams*>** StaticGet_Field_1_365()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationZOffsetParams*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3048);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PlanetFesAnimComposite*>** StaticGet_Field_1_735()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PlanetFesAnimComposite*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3050);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelEntityStateActionConfig*>** StaticGet_Field_1_368()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelEntityStateActionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3058);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenHintWeightConfig*>** StaticGet_Field_1_429()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenHintWeightConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3060);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtSkillConfig*>** StaticGet_Field_1_867()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtSkillConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3068);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::FloatCurveFrame>** StaticGet_Field_1_349()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::FloatCurveFrame>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3070);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ActionBarEffectConfig*>** StaticGet_Field_1_2()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ActionBarEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3078);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ScreenTransferBaseAction*>** StaticGet_Field_1_875()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ScreenTransferBaseAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3080);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ByCompareItemPair*>** StaticGet_Field_1_93()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ByCompareItemPair*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3088);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DistrictAreaSoundTransform*>** StaticGet_Field_1_228()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DistrictAreaSoundTransform*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3090);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceStageRow*>** StaticGet_Field_1_854()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceStageRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3098);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenIncidentOptionConfig*>** StaticGet_Field_1_430()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenIncidentOptionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x30A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelEntityRef*>** StaticGet_Field_1_481()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelEntityRef*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x30A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::MColor>** StaticGet_Field_1_607()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::MColor>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x30B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterLodInfo*>** StaticGet_Field_1_653()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterLodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x30B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleSkillConfig*>** StaticGet_Field_1_598()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleSkillConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x30C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AssistWayPointFastComplete*>** StaticGet_Field_1_46()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AssistWayPointFastComplete*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x30C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DriftComponentData*>** StaticGet_Field_1_231()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DriftComponentData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x30D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarkRecommendDiceItem*>** StaticGet_Field_1_600()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarkRecommendDiceItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x30D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceTrapCellParamConfig*>** StaticGet_Field_1_109()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceTrapCellParamConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x30E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfSuperEventTypeConfig*>** StaticGet_Field_1_269()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfSuperEventTypeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x30E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleExtraPropertyAdditionPair*>** StaticGet_Field_1_78()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleExtraPropertyAdditionPair*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x30F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupAtmosphereLoadCondition*>** StaticGet_Field_1_485()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupAtmosphereLoadCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x30F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2RoadInvisibleSegmentInfo*>** StaticGet_Field_1_534()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2RoadInvisibleSegmentInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3100);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChenLingGridOffset*>** StaticGet_Field_1_144()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChenLingGridOffset*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3108);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationMonsterEffectConfig*>** StaticGet_Field_1_586()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationMonsterEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3110);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleLineupAvatarConfig*>** StaticGet_Field_1_79()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleLineupAvatarConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3118);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleMazeBuffToastConfig*>** StaticGet_Field_1_903()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleMazeBuffToastConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3120);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphResultPredicate*>** StaticGet_Field_1_718()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphResultPredicate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3128);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterOutfitPendant*>** StaticGet_Field_1_130()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterOutfitPendant*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3130);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicLoadBattleAreaConfig*>** StaticGet_Field_1_234()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicLoadBattleAreaConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3138);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueAdvRoomCandyCrashPropInfo*>** StaticGet_Field_1_792()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueAdvRoomCandyCrashPropInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3140);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSplineMovePoint*>** StaticGet_Field_1_339()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSplineMovePoint*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3148);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_D6A07C122FCF6261*>** StaticGet_Field_1_956()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_D6A07C122FCF6261*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3150);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageBattleEventConfig*>** StaticGet_Field_1_928()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageBattleEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3158);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraAbilityBase*>** StaticGet_Field_1_145()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraAbilityBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3160);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageRegionConnection*>** StaticGet_Field_1_952()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageRegionConnection*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3168);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceOwlbertAnim*>** StaticGet_Field_1_103()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceOwlbertAnim*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3170);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TutorialGuideTextAdaptConfig*>** StaticGet_Field_1_1049()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TutorialGuideTextAdaptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3178);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChronicleNodeConfig*>** StaticGet_Field_1_170()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChronicleNodeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3180);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ShopGoodsMap*>** StaticGet_Field_1_891()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ShopGoodsMap*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3188);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ResolutionAdaptionConfig*>** StaticGet_Field_1_789()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ResolutionAdaptionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3190);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ValueEvaluatorConfig*>** StaticGet_Field_1_1062()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ValueEvaluatorConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3198);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceResultCase*>** StaticGet_Field_1_702()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceResultCase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x31A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationData*>** StaticGet_Field_1_359()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x31A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LogSamplerTypeDefine*>** StaticGet_Field_1_575()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LogSamplerTypeDefine*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x31B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_6D3107F5009DB1BB*>** StaticGet_Field_1_409()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_6D3107F5009DB1BB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x31B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3745C69C00F04B7D*>** StaticGet_Field_1_689()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3745C69C00F04B7D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x31C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierHint*>** StaticGet_Field_1_641()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierHint*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x31C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMiniGameCollectCoinTemplate*>** StaticGet_Field_1_323()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMiniGameCollectCoinTemplate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x31D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AlleyTutorialGridItemData*>** StaticGet_Field_1_29()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AlleyTutorialGridItemData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x31D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EraFlipSet*>** StaticGet_Field_1_283()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EraFlipSet*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x31E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimelineEntityStateChangeCallback*>** StaticGet_Field_1_1009()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimelineEntityStateChangeCallback*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x31E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ServerPrefsData*>** StaticGet_Field_1_880()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ServerPrefsData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x31F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_6D3107F5009DB1BB_2*>** StaticGet_Field_1_808()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_6D3107F5009DB1BB_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x31F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimDanmuTrack*>** StaticGet_Field_1_305()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimDanmuTrack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3200);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformancePropVisiableInfo*>** StaticGet_Field_1_701()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformancePropVisiableInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3208);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::WaterReflectionFoamShaderParam*>** StaticGet_Field_1_1072()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::WaterReflectionFoamShaderParam*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3210);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphAimContainerConfig*>** StaticGet_Field_1_712()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphAimContainerConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3218);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterAtlasFaceEyeShapeGroup*>** StaticGet_Field_1_118()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterAtlasFaceEyeShapeGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3220);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VisionBaseConfig*>** StaticGet_Field_1_1069()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VisionBaseConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3228);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterReplaceMaterialVariant*>** StaticGet_Field_1_137()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterReplaceMaterialVariant*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3230);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2RoadEntryPairInfo*>** StaticGet_Field_1_532()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2RoadEntryPairInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3238);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelFloorBakedSubmapSummaryInfo*>** StaticGet_Field_1_484()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelFloorBakedSubmapSummaryInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3240);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphFindNpc*>** StaticGet_Field_1_714()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphFindNpc*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3248);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleBackgroundUnitInfo*>** StaticGet_Field_1_838()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleBackgroundUnitInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3250);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelAudienceInfo*>** StaticGet_Field_1_463()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelAudienceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3258);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::IntersectionPhaseSerialization*>** StaticGet_Field_1_451()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::IntersectionPhaseSerialization*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3260);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenChimeraWaveConfig*>** StaticGet_Field_1_426()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenChimeraWaveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3268);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimDefaultCameraConfig*>** StaticGet_Field_1_307()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimDefaultCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3270);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GraphicDeviceInfo*>** StaticGet_Field_1_401()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GraphicDeviceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3278);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindEntityEventConfig*>** StaticGet_Field_1_1017()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindEntityEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3280);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SimpleTalkBackground*>** StaticGet_Field_1_894()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SimpleTalkBackground*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3288);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraWorkPhase*>** StaticGet_Field_1_165()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraWorkPhase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3290);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongGridIndex*>** StaticGet_Field_1_731()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongGridIndex*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3298);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNPCInfo*>** StaticGet_Field_1_510()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNPCInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x32A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNPCNearbyConfig*>** StaticGet_Field_1_511()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNPCNearbyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x32A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChimeraDuelValueGetter*>** StaticGet_Field_1_70()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChimeraDuelValueGetter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x32B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationVolumeSlotConfigBase*>** StaticGet_Field_1_591()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationVolumeSlotConfigBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x32B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SerialBellsNoteConfig*>** StaticGet_Field_1_879()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SerialBellsNoteConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x32C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierCallbackConfig*>** StaticGet_Field_1_1042()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierCallbackConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x32C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiActionConfigBase*>** StaticGet_Field_1_611()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiActionConfigBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x32D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimGroupEventConfig*>** StaticGet_Field_1_39()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimGroupEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x32D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceRollingSubtitlesContent*>** StaticGet_Field_1_703()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceRollingSubtitlesContent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x32E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropButtonConfig*>** StaticGet_Field_1_757()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropButtonConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x32E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UIOperationConfig*>** StaticGet_Field_1_1055()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UIOperationConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x32F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelMapInfoConfig*>** StaticGet_Field_1_373()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelMapInfoConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x32F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TriggerEventConfig*>** StaticGet_Field_1_1039()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TriggerEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3300);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BoolVariableConfig*>** StaticGet_Field_1_90()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BoolVariableConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3308);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ConfigCityTrain*>** StaticGet_Field_1_186()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ConfigCityTrain*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3310);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChenLingBattlePresetEnhancementConfig*>** StaticGet_Field_1_143()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChenLingBattlePresetEnhancementConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3318);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FetchAdvPropData*>** StaticGet_Field_1_292()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FetchAdvPropData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3320);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtLevelGroupInstanceInfo*>** StaticGet_Field_1_861()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtLevelGroupInstanceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3328);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ProgressBonus*>** StaticGet_Field_1_752()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ProgressBonus*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3330);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainMap*>** StaticGet_Field_1_830()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainMap*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3338);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenMovingGoodsEventConfig*>** StaticGet_Field_1_437()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenMovingGoodsEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3340);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SwitchCaseTaskListByAttackDamageType*>** StaticGet_Field_1_989()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SwitchCaseTaskListByAttackDamageType*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3348);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatPresetTurnActorRollConfig*>** StaticGet_Field_1_220()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatPresetTurnActorRollConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3350);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPropStateConfig*>** StaticGet_Field_1_537()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPropStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3358);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2RoadPointInfo*>** StaticGet_Field_1_535()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2RoadPointInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3360);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OrbitMoveRange*>** StaticGet_Field_1_682()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OrbitMoveRange*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3368);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimGrenadierProjectileConfig*>** StaticGet_Field_1_319()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimGrenadierProjectileConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3370);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AISwitchCaseDecision*>** StaticGet_Field_1_21()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AISwitchCaseDecision*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3378);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSectionConfig*>** StaticGet_Field_1_335()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSectionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3380);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ProjectileDataList*>** StaticGet_Field_1_754()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ProjectileDataList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3388);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureCommonEffectsPreloadConfig*>** StaticGet_Field_1_10()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureCommonEffectsPreloadConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3390);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectMutexConfigData*>** StaticGet_Field_1_248()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectMutexConfigData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3398);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Struct_2_0ACB88BD1D804FF7>** StaticGet_Field_1_632()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Struct_2_0ACB88BD1D804FF7>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x33A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::Match3ConditionBase*>** StaticGet_Field_1_824()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::Match3ConditionBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x33A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongProjectileGroup*>** StaticGet_Field_1_732()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongProjectileGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x33B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OptionTriggerInfo*>** StaticGet_Field_1_681()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OptionTriggerInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x33B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiddleSinglePackMissionConfig*>** StaticGet_Field_1_615()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiddleSinglePackMissionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x33C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRacePickupItemConfig*>** StaticGet_Field_1_104()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRacePickupItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x33C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtSubModifierData*>** StaticGet_Field_1_869()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtSubModifierData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x33D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FieldEffectAdaptionConfig*>** StaticGet_Field_1_293()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FieldEffectAdaptionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x33D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimActionBubbleTalkInfo*>** StaticGet_Field_1_297()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimActionBubbleTalkInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x33E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GrassData*>** StaticGet_Field_1_403()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GrassData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x33E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonopolyMapCellUnit*>** StaticGet_Field_1_646()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonopolyMapCellUnit*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x33F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ComplexSkillAIFactorGroup*>** StaticGet_Field_1_179()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ComplexSkillAIFactorGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x33F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattlePerformActorInit*>** StaticGet_Field_1_83()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattlePerformActorInit*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3400);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ShaderPropertySetItem*>** StaticGet_Field_1_886()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ShaderPropertySetItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3408);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PriorityConfig*>** StaticGet_Field_1_751()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PriorityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3410);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindParentPropStateConfig*>** StaticGet_Field_1_1019()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindParentPropStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3418);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityColliderCameraConfig*>** StaticGet_Field_1_274()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityColliderCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3420);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtModifierPropertyOverrideData*>** StaticGet_Field_1_864()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtModifierPropertyOverrideData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3428);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TarotBookConditionParam*>** StaticGet_Field_1_1000()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TarotBookConditionParam*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3430);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphBodySizeHeightConfig*>** StaticGet_Field_1_713()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphBodySizeHeightConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3438);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PckFileList*>** StaticGet_Field_1_692()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PckFileList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3440);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig*>** StaticGet_Field_1_829()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3448);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimBubbleTalkInfo*>** StaticGet_Field_1_303()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimBubbleTalkInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3450);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterEffectsPreloadItem*>** StaticGet_Field_1_652()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterEffectsPreloadItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3458);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyStat*>** StaticGet_Field_1_1036()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyStat*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3460);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::QAAdventurePlayerRow*>** StaticGet_Field_1_774()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::QAAdventurePlayerRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3468);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphRoamingConfig*>** StaticGet_Field_1_719()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphRoamingConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3470);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimExtraLevelGraphConfig*>** StaticGet_Field_1_317()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimExtraLevelGraphConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3478);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CameraShakeTemplateSingleConfig*>** StaticGet_Field_1_112()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CameraShakeTemplateSingleConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3480);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LocationExtraConfig*>** StaticGet_Field_1_570()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LocationExtraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3488);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimatorStateCustomZoneBinding*>** StaticGet_Field_1_35()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimatorStateCustomZoneBinding*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3490);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElementResistanceConfig*>** StaticGet_Field_1_254()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElementResistanceConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3498);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::IslandStateSavedValueCondition*>** StaticGet_Field_1_454()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::IslandStateSavedValueCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x34A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyActionConfigBase*>** StaticGet_Field_1_1026()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyActionConfigBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x34A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedAbilityConfig*>** StaticGet_Field_1_1041()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedAbilityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x34B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtProjectileOnHitList*>** StaticGet_Field_1_866()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtProjectileOnHitList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x34B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupMissionCondition*>** StaticGet_Field_1_490()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupMissionCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x34C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceRollingSubtitlesPage*>** StaticGet_Field_1_704()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceRollingSubtitlesPage*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x34C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MazeBuff*>** StaticGet_Field_1_603()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MazeBuff*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x34D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimTrainEnergyGear*>** StaticGet_Field_1_343()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimTrainEnergyGear*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x34D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPathwayInfo*>** StaticGet_Field_1_513()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPathwayInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x34E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AbilityPropertyValue*>** StaticGet_Field_1_1()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AbilityPropertyValue*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x34E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePVSOfflineVolumeInfo*>** StaticGet_Field_1_948()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePVSOfflineVolumeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x34F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelBuffConfig*>** StaticGet_Field_1_150()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelBuffConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x34F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ShaderTestPreloadItem*>** StaticGet_Field_1_887()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ShaderTestPreloadItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3500);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SimpleFreeStyleConfig*>** StaticGet_Field_1_893()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SimpleFreeStyleConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3508);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropStateMatchConfig*>** StaticGet_Field_1_770()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropStateMatchConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3510);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_5*>** StaticGet_Field_1_448()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3518);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_927AEEA01B635CB6*>** StaticGet_Field_1_455()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_927AEEA01B635CB6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3520);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CommonSkill*>** StaticGet_Field_1_176()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CommonSkill*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3528);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_4*>** StaticGet_Field_1_286()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3530);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelSmartObjectInfo*>** StaticGet_Field_1_546()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelSmartObjectInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3538);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfSelectEventTalk*>** StaticGet_Field_1_265()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfSelectEventTalk*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3540);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubMissionSortedItem*>** StaticGet_Field_1_976()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubMissionSortedItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3548);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameSmartObjectSlotData*>** StaticGet_Field_1_566()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameSmartObjectSlotData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3550);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenIncidentRandomSettlementConfig*>** StaticGet_Field_1_432()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenIncidentRandomSettlementConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3558);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LineupGridFightAvatarData*>** StaticGet_Field_1_555()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LineupGridFightAvatarData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3560);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPathwayLinkInfo*>** StaticGet_Field_1_514()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPathwayLinkInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3568);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_2F326B57B6445F8D*>** StaticGet_Field_1_131()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_2F326B57B6445F8D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3570);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueDialogueEventOptionDynamicConfig*>** StaticGet_Field_1_797()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueDialogueEventOptionDynamicConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3578);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageSceneItemSharedSerializationData*>** StaticGet_Field_1_955()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageSceneItemSharedSerializationData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3580);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MainMissionSortedItem*>** StaticGet_Field_1_579()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MainMissionSortedItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3588);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierConfig*>** StaticGet_Field_1_1044()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3590);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfBehaviorStateItem*>** StaticGet_Field_1_255()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfBehaviorStateItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3598);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageGrassOverrideConfig*>** StaticGet_Field_1_930()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageGrassOverrideConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x35A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionCustomValueRewardConfig*>** StaticGet_Field_1_626()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionCustomValueRewardConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x35A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongProjectileInfo*>** StaticGet_Field_1_733()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongProjectileInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x35B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPropInfo*>** StaticGet_Field_1_536()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPropInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x35B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::Match3GridTagApplyConfig*>** StaticGet_Field_1_826()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::Match3GridTagApplyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x35C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupCrossMapBriefInfo*>** StaticGet_Field_1_487()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupCrossMapBriefInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x35C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AssistWayPointConditionPack*>** StaticGet_Field_1_45()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AssistWayPointConditionPack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x35D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectInstanceConfig*>** StaticGet_Field_1_246()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectInstanceConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x35D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureAnimationMoveRange*>** StaticGet_Field_1_8()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureAnimationMoveRange*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x35E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectPathList*>** StaticGet_Field_1_249()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectPathList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x35E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiddleDistantViewPrefabInfo*>** StaticGet_Field_1_613()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiddleDistantViewPrefabInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x35F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePVSOfflineLightInfo*>** StaticGet_Field_1_944()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePVSOfflineLightInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x35F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3745C69C00F04B7D_5*>** StaticGet_Field_1_406()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3745C69C00F04B7D_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3600);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfSpecialEventEffect*>** StaticGet_Field_1_266()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfSpecialEventEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3608);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PreloadItemScoreConfig*>** StaticGet_Field_1_748()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PreloadItemScoreConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3610);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LodDetail*>** StaticGet_Field_1_571()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LodDetail*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3618);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_43DD8124539DA898_1*>** StaticGet_Field_1_410()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_43DD8124539DA898_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3620);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBehaviorFlagListPair*>** StaticGet_Field_1_846()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBehaviorFlagListPair*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3628);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3745C69C00F04B7D_3*>** StaticGet_Field_1_399()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3745C69C00F04B7D_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3630);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NpcPossessionEffectConfig*>** StaticGet_Field_1_675()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NpcPossessionEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3638);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianLineUpSourceInfo*>** StaticGet_Field_1_518()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianLineUpSourceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3640);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillDataPropertyModifyItem*>** StaticGet_Field_1_913()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillDataPropertyModifyItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3648);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtLevelGroupInstanceCommonInfo*>** StaticGet_Field_1_860()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtLevelGroupInstanceCommonInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3650);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelInitSequeceConfig*>** StaticGet_Field_1_493()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelInitSequeceConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3658);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceEventHandler*>** StaticGet_Field_1_100()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceEventHandler*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3660);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatModifierConfig*>** StaticGet_Field_1_217()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatModifierConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3668);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiniEmoEffectNodeVisible*>** StaticGet_Field_1_616()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiniEmoEffectNodeVisible*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3670);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GraphicsSettingRequirements*>** StaticGet_Field_1_402()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GraphicsSettingRequirements*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3678);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimChildPresetItemConfig*>** StaticGet_Field_1_304()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimChildPresetItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3680);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageIslandHLODConfig*>** StaticGet_Field_1_937()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageIslandHLODConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3688);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelWaypointInfo*>** StaticGet_Field_1_553()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelWaypointInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3690);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMapFaceConfig*>** StaticGet_Field_1_321()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMapFaceConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3698);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TaskConfig*>** StaticGet_Field_1_1002()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TaskConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x36A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RecordOperation*>** StaticGet_Field_1_778()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RecordOperation*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x36A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_7A8FB7EDAFC5C8F4*>** StaticGet_Field_1_705()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_7A8FB7EDAFC5C8F4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x36B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ComponentConfig*>** StaticGet_Field_1_183()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ComponentConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x36B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2MemberInfo*>** StaticGet_Field_1_529()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2MemberInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x36C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OfflineCullingLod*>** StaticGet_Field_1_679()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OfflineCullingLod*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x36C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DialogueEventInfo*>** StaticGet_Field_1_214()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DialogueEventInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x36D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TutorialGuideTalkListAdaptConfig*>** StaticGet_Field_1_1048()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TutorialGuideTalkListAdaptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x36D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ThreadTaskConfig*>** StaticGet_Field_1_1007()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ThreadTaskConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x36E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarPathChangeToTargetConfig*>** StaticGet_Field_1_59()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarPathChangeToTargetConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x36E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindRecreateWorldTaskTrigger*>** StaticGet_Field_1_1020()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimeRewindRecreateWorldTaskTrigger*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x36F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelRegionInfo*>** StaticGet_Field_1_540()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelRegionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x36F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationVolumeConfig*>** StaticGet_Field_1_588()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationVolumeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3700);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeInfo*>** StaticGet_Field_1_504()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3708);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MunicipalChatActionBase*>** StaticGet_Field_1_657()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MunicipalChatActionBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3710);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarEffectsPreloadItem*>** StaticGet_Field_1_55()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarEffectsPreloadItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3718);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TargetFormationPosConfig*>** StaticGet_Field_1_998()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TargetFormationPosConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3720);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEvilSmileStateOverrideConfig*>** StaticGet_Field_1_316()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEvilSmileStateOverrideConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3728);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicFloat*>** StaticGet_Field_1_232()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicFloat*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3730);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DistrictAudioRTPCConfig*>** StaticGet_Field_1_229()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DistrictAudioRTPCConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3738);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AISlaveConfig*>** StaticGet_Field_1_20()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AISlaveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3740);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMusicInfo*>** StaticGet_Field_1_328()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimMusicInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3748);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyBuildItemSlotExt*>** StaticGet_Field_1_1029()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyBuildItemSlotExt*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3750);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropOverrideAnimLayerConfig*>** StaticGet_Field_1_763()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropOverrideAnimLayerConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3758);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageSceneItemSerializationData*>** StaticGet_Field_1_954()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageSceneItemSerializationData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3760);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimLevelVarCondition*>** StaticGet_Field_1_320()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimLevelVarCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3768);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TarotBookTalkInfo*>** StaticGet_Field_1_1001()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TarotBookTalkInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3770);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterLodMaterialProperty*>** StaticGet_Field_1_126()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterLodMaterialProperty*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3778);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationPerformanceID*>** StaticGet_Field_1_587()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationPerformanceID*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3780);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropSpecialVisionConfig*>** StaticGet_Field_1_766()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropSpecialVisionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3788);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtAbilityPropertyRangeGroup*>** StaticGet_Field_1_836()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtAbilityPropertyRangeGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3790);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectSurfaceOverride*>** StaticGet_Field_1_250()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectSurfaceOverride*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3798);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageVolumeConfigV2WithTAData*>** StaticGet_Field_1_961()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageVolumeConfigV2WithTAData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x37A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FollowSlotConfig*>** StaticGet_Field_1_358()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FollowSlotConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x37A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::TextID>** StaticGet_Field_1_173()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x37B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SimulateAvatarLineupConfig*>** StaticGet_Field_1_898()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SimulateAvatarLineupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x37B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterWaveParamConfig*>** StaticGet_Field_1_656()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterWaveParamConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x37C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_82AD06FA18CD21C2*>** StaticGet_Field_1_837()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_82AD06FA18CD21C2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x37C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CPUGPUInfo*>** StaticGet_Field_1_191()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CPUGPUInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x37D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HoYoGroupStreamingBlackListItem*>** StaticGet_Field_1_442()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HoYoGroupStreamingBlackListItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x37D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::UInt32>** StaticGet_Field_1_1052()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x37E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarblePredicateConfig*>** StaticGet_Field_1_597()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarblePredicateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x37E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubLevelGraphDynamicStringOverride*>** StaticGet_Field_1_973()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubLevelGraphDynamicStringOverride*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x37F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleEventEffectsPreloadList*>** StaticGet_Field_1_77()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleEventEffectsPreloadList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x37F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UIOperation*>** StaticGet_Field_1_1054()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UIOperation*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3800);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEffectItem*>** StaticGet_Field_1_309()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEffectItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3808);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubModifierData*>** StaticGet_Field_1_977()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubModifierData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3810);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LocationData*>** StaticGet_Field_1_569()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LocationData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3818);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ActionSwitchCaseItemConfig*>** StaticGet_Field_1_4()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ActionSwitchCaseItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3820);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelMinimapSection*>** StaticGet_Field_1_498()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelMinimapSection*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3828);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VideoCaption*>** StaticGet_Field_1_1067()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VideoCaption*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3830);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PreloadItemSilence*>** StaticGet_Field_1_750()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PreloadItemSilence*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3838);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleAnimEventEntry*>** StaticGet_Field_1_378()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleAnimEventEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3840);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicLoadBlockDatas*>** StaticGet_Field_1_237()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicLoadBlockDatas*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3848);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleCharacterCameraConfig*>** StaticGet_Field_1_839()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleCharacterCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3850);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_637CF5391C15E01B*>** StaticGet_Field_1_427()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_637CF5391C15E01B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3858);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleStageBornPointInfo*>** StaticGet_Field_1_840()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleStageBornPointInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3860);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::MVector3>** StaticGet_Field_1_664()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::MVector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3868);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionIDPair*>** StaticGet_Field_1_627()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionIDPair*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3870);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_049053A9DCD26B56*>** StaticGet_Field_1_984()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_049053A9DCD26B56*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3878);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AlleyBuffGridItemData*>** StaticGet_Field_1_24()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AlleyBuffGridItemData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3880);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueChestModifierEvent*>** StaticGet_Field_1_795()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueChestModifierEvent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3888);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimelineIntermediaStateConfig*>** StaticGet_Field_1_1010()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TimelineIntermediaStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3890);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraPhaseCondition*>** StaticGet_Field_1_160()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraPhaseCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3898);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>** StaticGet_Field_1_62()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x38A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2EmitInfo*>** StaticGet_Field_1_522()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2EmitInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x38A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::WaitBatchItem*>** StaticGet_Field_1_1071()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::WaitBatchItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x38B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueAdvRoomCandyCrashGroup*>** StaticGet_Field_1_790()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueAdvRoomCandyCrashGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x38B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HoYoGroupStreamingTemplateItem*>** StaticGet_Field_1_443()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HoYoGroupStreamingTemplateItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x38C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenIncidentStepConfig*>** StaticGet_Field_1_433()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenIncidentStepConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x38C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillParamMapping*>** StaticGet_Field_1_918()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillParamMapping*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x38D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OverrideCameraModuleConfig*>** StaticGet_Field_1_684()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OverrideCameraModuleConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x38D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeInnerConnectInfo*>** StaticGet_Field_1_505()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeInnerConnectInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x38E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CustomTeamFormationConfig*>** StaticGet_Field_1_199()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CustomTeamFormationConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x38E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarChangeTemplate*>** StaticGet_Field_1_53()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarChangeTemplate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x38F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::MatchThree1v1AILevelConfig*>** StaticGet_Field_1_828()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::MatchThree1v1AILevelConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x38F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceOverrideCharacterOutfit*>** StaticGet_Field_1_700()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceOverrideCharacterOutfit*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3900);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SwordTrainingBranchInfo*>** StaticGet_Field_1_991()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SwordTrainingBranchInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3908);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePrefabInfo*>** StaticGet_Field_1_943()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePrefabInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3910);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleAnimEntry*>** StaticGet_Field_1_900()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleAnimEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3918);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattlePerformCaptureActor*>** StaticGet_Field_1_84()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattlePerformCaptureActor*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3920);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrackNpcZoneConfig*>** StaticGet_Field_1_1023()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrackNpcZoneConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3928);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameNavConnectInfo*>** StaticGet_Field_1_565()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameNavConnectInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3930);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo*>** StaticGet_Field_1_375()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3938);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UnitCustomTriggerConfig*>** StaticGet_Field_1_1058()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UnitCustomTriggerConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3940);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Vector3CurveFrame>** StaticGet_Field_1_1065()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Vector3CurveFrame>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3948);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleLaunchAIConfig*>** StaticGet_Field_1_595()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleLaunchAIConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3950);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarLineupKeyLevelConfig*>** StaticGet_Field_1_56()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarLineupKeyLevelConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3958);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TAMonoTickLodTemplate*>** StaticGet_Field_1_995()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TAMonoTickLodTemplate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3960);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimPropSpawnerItem*>** StaticGet_Field_1_331()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimPropSpawnerItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3968);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ComplexSkillAILinearItem*>** StaticGet_Field_1_182()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ComplexSkillAILinearItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3970);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ConicalVisionConfig*>** StaticGet_Field_1_187()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ConicalVisionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3978);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCrowdMemberBakedInfo*>** StaticGet_Field_1_470()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCrowdMemberBakedInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3980);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MaterialPropertyAdaptionConfig*>** StaticGet_Field_1_602()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MaterialPropertyAdaptionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3988);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig*>** StaticGet_Field_1_212()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3990);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ReactionItemConfig*>** StaticGet_Field_1_776()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ReactionItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3998);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_FCA657D695DD9485*>** StaticGet_Field_1_449()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_FCA657D695DD9485*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x39A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleTaskConfig*>** StaticGet_Field_1_599()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleTaskConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x39A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ComplexSkillAIFactorGroupWeight*>** StaticGet_Field_1_180()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ComplexSkillAIFactorGroupWeight*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x39B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Vector4CurveFrame>** StaticGet_Field_1_1066()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Vector4CurveFrame>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x39B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_0B6050F6F316691E*>** StaticGet_Field_1_970()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_0B6050F6F316691E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x39C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChenLingBattlePresetArmyConfig*>** StaticGet_Field_1_142()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChenLingBattlePresetArmyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x39C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupLookUpConfig*>** StaticGet_Field_1_417()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupLookUpConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x39D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyBuildItemSlot*>** StaticGet_Field_1_1028()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyBuildItemSlot*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x39D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C*>** StaticGet_Field_1_1053()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x39E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*>** StaticGet_Field_1_171()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x39E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleAnimClipZoneInfo*>** StaticGet_Field_1_376()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleAnimClipZoneInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x39F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UIPanelGroup*>** StaticGet_Field_1_1056()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::UIPanelGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x39F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfWaveOrder*>** StaticGet_Field_1_272()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfWaveOrder*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A00);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceWaveMonsterInfo*>** StaticGet_Field_1_857()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceWaveMonsterInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A08);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlagEventConfig*>** StaticGet_Field_1_633()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlagEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A10);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SummonEntityPreloadConfig*>** StaticGet_Field_1_979()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SummonEntityPreloadConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A18);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatPredicateConfig*>** StaticGet_Field_1_219()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatPredicateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A20);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig*>** StaticGet_Field_1_832()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A28);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterEyeBloomConfig*>** StaticGet_Field_1_122()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterEyeBloomConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A30);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_4B1D406725A7144B*>** StaticGet_Field_1_428()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_4B1D406725A7144B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A38);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelSmartObjectPointInfo*>** StaticGet_Field_1_547()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelSmartObjectPointInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A40);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleTriggerTransitionInfo*>** StaticGet_Field_1_387()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleTriggerTransitionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A48);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicValueRangeCallback*>** StaticGet_Field_1_240()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicValueRangeCallback*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A50);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelMinimapLayerSpriteConfig*>** StaticGet_Field_1_495()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelMinimapLayerSpriteConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A58);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CreateCharacter*>** StaticGet_Field_1_192()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CreateCharacter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A60);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionWaypointDataPack*>** StaticGet_Field_1_631()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionWaypointDataPack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A68);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightWaveInfo*>** StaticGet_Field_1_411()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightWaveInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A70);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubLevelGraphDynamicFloatOverride*>** StaticGet_Field_1_972()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubLevelGraphDynamicFloatOverride*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A78);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelModifier*>** StaticGet_Field_1_155()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraDuelModifier*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A80);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiniGameFlappyBirdBlockConfig*>** StaticGet_Field_1_618()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiniGameFlappyBirdBlockConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A88);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_EF79B40F86BE9C39*>** StaticGet_Field_1_452()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_EF79B40F86BE9C39*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A90);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyPerformance*>** StaticGet_Field_1_1032()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyPerformance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3A98);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FSVOverridItem*>** StaticGet_Field_1_388()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FSVOverridItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3AA0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenPickingGoodsNPCConfig*>** StaticGet_Field_1_438()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenPickingGoodsNPCConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3AA8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig*>** StaticGet_Field_1_210()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3AB0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceBuffConfig*>** StaticGet_Field_1_97()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceBuffConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3AB8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillConditionPreshowConfig*>** StaticGet_Field_1_908()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillConditionPreshowConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3AC0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillCustomReadyConfig*>** StaticGet_Field_1_910()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillCustomReadyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3AC8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionItemConfig*>** StaticGet_Field_1_628()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3AD0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_36E4CA071B73A265*>** StaticGet_Field_1_870()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_36E4CA071B73A265*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3AD8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*>** StaticGet_Field_1_531()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3AE0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_9D9E51CBF6547B9C*>** StaticGet_Field_1_982()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_9D9E51CBF6547B9C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3AE8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimZoneBaseConfig*>** StaticGet_Field_1_42()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimZoneBaseConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3AF0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChenLingBattleEffect*>** StaticGet_Field_1_63()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChenLingBattleEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3AF8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>** StaticGet_Field_1_819()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B00);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PointGeneratorConfig*>** StaticGet_Field_1_739()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PointGeneratorConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B08);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleReportCustomValue*>** StaticGet_Field_1_86()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleReportCustomValue*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B10);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ConsiderationAxisConfig*>** StaticGet_Field_1_188()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ConsiderationAxisConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B18);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AISkillDependencyConfig*>** StaticGet_Field_1_18()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AISkillDependencyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B20);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ConfigBakeLayoutInfo*>** StaticGet_Field_1_185()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ConfigBakeLayoutInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B28);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig*>** StaticGet_Field_1_831()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B30);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FinishActionConfig*>** StaticGet_Field_1_296()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FinishActionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B38);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TeammateAttackFormationConfig*>** StaticGet_Field_1_1005()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TeammateAttackFormationConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B40);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimAvatarConfig*>** StaticGet_Field_1_300()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimAvatarConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B48);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleMotionInfoConfig*>** StaticGet_Field_1_382()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FreeStyleMotionInfoConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B50);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationZOffsetList*>** StaticGet_Field_1_364()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationZOffsetList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B58);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FloorCustomValueConfig*>** StaticGet_Field_1_353()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FloorCustomValueConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B60);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterAssetPreloadConfig*>** StaticGet_Field_1_648()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonsterAssetPreloadConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B68);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Double>** StaticGet_Field_1_230()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B70);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::LockTargetConfigList*>** StaticGet_Field_1_811()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::LockTargetConfigList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B78);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelFloorBakedSubmapInfo*>** StaticGet_Field_1_483()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelFloorBakedSubmapInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B80);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationEntityEffect*>** StaticGet_Field_1_584()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationEntityEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B88);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PreloadItemScoreRecordChildTask*>** StaticGet_Field_1_749()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PreloadItemScoreRecordChildTask*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B90);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageRegionState*>** StaticGet_Field_1_953()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageRegionState*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3B98);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphLogoConfig*>** StaticGet_Field_1_716()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphLogoConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3BA0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueNPCDialogueConfig*>** StaticGet_Field_1_804()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueNPCDialogueConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3BA8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimRenderingItemStateMappingConfig*>** StaticGet_Field_1_333()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimRenderingItemStateMappingConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3BB0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillMaxHitConfig*>** StaticGet_Field_1_916()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillMaxHitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3BB8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceModelInfo*>** StaticGet_Field_1_207()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceModelInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3BC0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectAdaptCharaScaleDataItem*>** StaticGet_Field_1_243()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EffectAdaptCharaScaleDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3BC8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GoodsClass*>** StaticGet_Field_1_400()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GoodsClass*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3BD0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StateTreeTransitionConfig*>** StaticGet_Field_1_963()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StateTreeTransitionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3BD8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupEntityCreateConfig*>** StaticGet_Field_1_414()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupEntityCreateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3BE0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationGroupConfig*>** StaticGet_Field_1_585()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationGroupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3BE8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::WaypointConfig*>** StaticGet_Field_1_1073()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::WaypointConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3BF0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceCellConfig*>** StaticGet_Field_1_99()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceCellConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3BF8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::WormCompassItemXY*>** StaticGet_Field_1_1076()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::WormCompassItemXY*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C00);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameLevelHeartDialDialogueConfig*>** StaticGet_Field_1_393()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameLevelHeartDialDialogueConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C08);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameWayPointGraphEdge*>** StaticGet_Field_1_567()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameWayPointGraphEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C10);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonopolyMapCell*>** StaticGet_Field_1_645()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonopolyMapCell*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C18);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePVSOfflineSamplerResult*>** StaticGet_Field_1_946()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePVSOfflineSamplerResult*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C20);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SelectMissionItemConfig*>** StaticGet_Field_1_877()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SelectMissionItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C28);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimPreloadInfo*>** StaticGet_Field_1_329()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimPreloadInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C30);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterOutfitPart*>** StaticGet_Field_1_128()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterOutfitPart*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C38);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphResultContainer*>** StaticGet_Field_1_717()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphResultContainer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C40);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureSkillConfig*>** StaticGet_Field_1_12()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureSkillConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C48);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PreloadItemList*>** StaticGet_Field_1_747()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PreloadItemList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C50);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AlleyShopGridItemData*>** StaticGet_Field_1_28()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AlleyShopGridItemData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C58);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_68C34B5C1C40C2FF*>** StaticGet_Field_1_1046()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_2_68C34B5C1C40C2FF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C60);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiniGameHundredFloorBlockConfig*>** StaticGet_Field_1_620()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiniGameHundredFloorBlockConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C68);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierCustomEventConfig*>** StaticGet_Field_1_639()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierCustomEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C70);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleEffectConfig*>** StaticGet_Field_1_594()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C78);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationChargerIconConfig*>** StaticGet_Field_1_583()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationChargerIconConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C80);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ResidentPossessionConfigItem*>** StaticGet_Field_1_786()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ResidentPossessionConfigItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C88);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterPhaseConfig*>** StaticGet_Field_1_132()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterPhaseConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C90);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEntityVar*>** StaticGet_Field_1_312()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEntityVar*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3C98);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeConditionInfos*>** StaticGet_Field_1_503()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeConditionInfos*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3CA0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_B34BC0DFAA62C487*>** StaticGet_Field_1_651()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_B34BC0DFAA62C487*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3CA8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ComplexSkillAIFactorGroupWeightEx*>** StaticGet_Field_1_181()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ComplexSkillAIFactorGroupWeightEx*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3CB0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OfflineCullingIndex*>** StaticGet_Field_1_678()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OfflineCullingIndex*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3CB8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageHarmonySignalDynamicDialogMonoSerialization*>** StaticGet_Field_1_933()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageHarmonySignalDynamicDialogMonoSerialization*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3CC0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SequenceConfig*>** StaticGet_Field_1_878()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SequenceConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3CC8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelDialogPackInfo*>** StaticGet_Field_1_474()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelDialogPackInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3CD0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEvilSmileStateEventConfig*>** StaticGet_Field_1_315()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimEvilSmileStateEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3CD8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdvSetSkillSlotDataItem*>** StaticGet_Field_1_13()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdvSetSkillSlotDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3CE0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PlanetFesAvatarEmojiEffectInfo*>** StaticGet_Field_1_736()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PlanetFesAvatarEmojiEffectInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3CE8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SetDynamicValueByCopyingBatchItem*>** StaticGet_Field_1_883()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SetDynamicValueByCopyingBatchItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3CF0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeConditionInfo*>** StaticGet_Field_1_502()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavNodeConditionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3CF8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ResidentEffectConfigItem*>** StaticGet_Field_1_785()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ResidentEffectConfigItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D00);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ComplexSkillAIFactor*>** StaticGet_Field_1_178()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ComplexSkillAIFactor*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D08);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatDiceSelectorConfig*>** StaticGet_Field_1_215()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatDiceSelectorConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D10);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::WolfBroCartoonGunConfig*>** StaticGet_Field_1_1075()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::WolfBroCartoonGunConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D18);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_43DD8124539DA898*>** StaticGet_Field_1_407()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_43DD8124539DA898*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D20);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HitTimeSlowConfig*>** StaticGet_Field_1_441()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HitTimeSlowConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D28);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillConfig*>** StaticGet_Field_1_909()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D30);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelMinimapPassage*>** StaticGet_Field_1_497()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelMinimapPassage*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D38);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::MVector2>** StaticGet_Field_1_663()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::MVector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D40);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PredicateConfig*>** StaticGet_Field_1_744()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PredicateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D48);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceIDPair*>** StaticGet_Field_1_699()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceIDPair*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D50);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyDialogueEventOptionConfig*>** StaticGet_Field_1_1031()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyDialogueEventOptionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D58);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MunicipalChatNodeTransitionInfo*>** StaticGet_Field_1_660()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MunicipalChatNodeTransitionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D60);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropTagComponent*>** StaticGet_Field_1_772()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropTagComponent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D68);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnInsertAbilityCondition*>** StaticGet_Field_1_1045()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnInsertAbilityCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D70);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphSettingDataConfig*>** StaticGet_Field_1_721()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphSettingDataConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D78);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ClockParkStoryCharacter*>** StaticGet_Field_1_174()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ClockParkStoryCharacter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D80);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillMaxHitConfigList*>** StaticGet_Field_1_917()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillMaxHitConfigList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D88);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattlePerformCreateActor*>** StaticGet_Field_1_85()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattlePerformCreateActor*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D90);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSingleFogOfWarConfig*>** StaticGet_Field_1_337()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSingleFogOfWarConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3D98);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_1*>** StaticGet_Field_1_5()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3DA0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CellConfig*>** StaticGet_Field_1_115()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CellConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3DA8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameLevelHeartDialNPCConfig*>** StaticGet_Field_1_394()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameLevelHeartDialNPCConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3DB0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChimeraDuelNode*>** StaticGet_Field_1_68()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChimeraDuelNode*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3DB8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraBattleTargetEvaluator*>** StaticGet_Field_1_148()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChimeraBattleTargetEvaluator*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3DC0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupSavedValueCondition*>** StaticGet_Field_1_492()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupSavedValueCondition*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3DC8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceRelatedGameObjectPoolConfig*>** StaticGet_Field_1_211()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceRelatedGameObjectPoolConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3DD0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimAnimatorListenConfig*>** StaticGet_Field_1_299()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimAnimatorListenConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3DD8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleLineupSkillTreePoint*>** StaticGet_Field_1_81()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleLineupSkillTreePoint*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3DE0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfBuff*>** StaticGet_Field_1_256()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfBuff*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3DE8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_2*>** StaticGet_Field_1_268()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3DF0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>** StaticGet_Field_1_168()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3DF8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelLevelEnvConfig*>** StaticGet_Field_1_371()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FourRotateVoxelLevelEnvConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E00);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::JsonOfflineCullingCellSubData*>** StaticGet_Field_1_460()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::JsonOfflineCullingCellSubData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E08);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DistanceToScoreWeight*>** StaticGet_Field_1_226()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DistanceToScoreWeight*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E10);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleBuffConfig*>** StaticGet_Field_1_592()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleBuffConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E18);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupInstanceInfo*>** StaticGet_Field_1_488()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelGroupInstanceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E20);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TutorialTriggerParam*>** StaticGet_Field_1_1050()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TutorialTriggerParam*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E28);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_13*>** StaticGet_Field_1_803()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E30);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*>** StaticGet_Field_1_524()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E38);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FloatingSpiritBlock*>** StaticGet_Field_1_351()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FloatingSpiritBlock*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E40);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EmojiIconInfo*>** StaticGet_Field_1_273()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EmojiIconInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E48);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ParallelConfigForTaskListTemplate*>** StaticGet_Field_1_688()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ParallelConfigForTaskListTemplate*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E50);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ParallelAbility*>** StaticGet_Field_1_687()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ParallelAbility*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E58);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterPrefabLodInfo*>** StaticGet_Field_1_133()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterPrefabLodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E60);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NoteGroupConfig*>** StaticGet_Field_1_671()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NoteGroupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E68);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceCaptureNPC*>** StaticGet_Field_1_698()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceCaptureNPC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E70);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Booklet::ChapterConfig*>** StaticGet_Field_1_813()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Booklet::ChapterConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E78);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FloorSavedValueOverride*>** StaticGet_Field_1_356()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FloorSavedValueOverride*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E80);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrackNpcVisionConfig*>** StaticGet_Field_1_1022()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrackNpcVisionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E88);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfEntranceAnchorConfig*>** StaticGet_Field_1_257()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfEntranceAnchorConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E90);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SavedValueDimensionConfig*>** StaticGet_Field_1_874()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SavedValueDimensionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3E98);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicValueRangeGroup*>** StaticGet_Field_1_241()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicValueRangeGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3EA0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SharedValue*>** StaticGet_Field_1_890()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SharedValue*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3EA8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionCustomValueGroupConfig*>** StaticGet_Field_1_625()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionCustomValueGroupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3EB0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceUnitRow*>** StaticGet_Field_1_856()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceUnitRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3EB8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiddleMissionPackConfig*>** StaticGet_Field_1_614()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MiddleMissionPackConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3EC0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityMoveTrack*>** StaticGet_Field_1_277()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityMoveTrack*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3EC8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig*>** StaticGet_Field_1_338()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3ED0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfSpecialEventSelectItem*>** StaticGet_Field_1_267()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfSpecialEventSelectItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3ED8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CountToModifierMapRangeItem*>** StaticGet_Field_1_190()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CountToModifierMapRangeItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3EE0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceSpawnMonsterInfo*>** StaticGet_Field_1_852()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtDefenceSpawnMonsterInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3EE8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FetchAdvNPCData*>** StaticGet_Field_1_291()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FetchAdvNPCData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3EF0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DisplayItemConfig*>** StaticGet_Field_1_225()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DisplayItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3EF8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SummonMonsterData*>** StaticGet_Field_1_981()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SummonMonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F00);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PckPatchPlatform*>** StaticGet_Field_1_693()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PckPatchPlatform*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F08);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleAnimEventConfig*>** StaticGet_Field_1_901()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleAnimEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F10);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>** StaticGet_Field_1_37()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F18);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterFaceExpressionConfig*>** StaticGet_Field_1_124()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterFaceExpressionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F20);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LineupMazeBuffData*>** StaticGet_Field_1_557()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LineupMazeBuffData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F28);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Single>** StaticGet_Field_1_348()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F30);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropDynamicResConfigItem*>** StaticGet_Field_1_760()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropDynamicResConfigItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F38);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::Match3ChessBoardGridInfo*>** StaticGet_Field_1_823()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::Match3ChessBoardGridInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F40);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCrowdBakedInfo*>** StaticGet_Field_1_468()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelCrowdBakedInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F48);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StreamingBlockVolumeComponentData*>** StaticGet_Field_1_967()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StreamingBlockVolumeComponentData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F50);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_980894BED8163CEE*>** StaticGet_Field_1_1059()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_980894BED8163CEE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F58);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleEffect*>** StaticGet_Field_1_593()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F60);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelDimensionInfo*>** StaticGet_Field_1_478()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelDimensionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F68);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelAudienceMemberRendererInfo*>** StaticGet_Field_1_465()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelAudienceMemberRendererInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F70);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageVolumeComponentData*>** StaticGet_Field_1_958()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageVolumeComponentData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F78);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameEntryMenu*>** StaticGet_Field_1_390()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameEntryMenu*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F80);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_E71924F20B00CC55*>** StaticGet_Field_1_738()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_E71924F20B00CC55*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F88);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EventLookUpConfig*>** StaticGet_Field_1_285()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EventLookUpConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F90);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DimensionIncrementsConfig*>** StaticGet_Field_1_224()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DimensionIncrementsConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3F98);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2Info*>** StaticGet_Field_1_523()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelPedestrianV2Info*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3FA0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceInfo*>** StaticGet_Field_1_206()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DeviceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3FA8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChenLingBattleTargetEvaluator*>** StaticGet_Field_1_65()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BaseChenLingBattleTargetEvaluator*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3FB0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_E71924F20B00CC55_1*>** StaticGet_Field_1_798()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_E71924F20B00CC55_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3FB8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameLevelDiceCombatNPCConfig*>** StaticGet_Field_1_392()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameLevelDiceCombatNPCConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3FC0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageRegionAffect*>** StaticGet_Field_1_950()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageRegionAffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3FC8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierDestroyTextInfo*>** StaticGet_Field_1_640()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierDestroyTextInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3FD0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavmapSubmapConfig*>** StaticGet_Field_1_501()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNavmapSubmapConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3FD8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleMonsterInfo*>** StaticGet_Field_1_904()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SingleMonsterInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3FE0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AbilityPropertyRangeGroup*>** StaticGet_Field_1_0()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AbilityPropertyRangeGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3FE8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SharedSerializationDataIdxList*>** StaticGet_Field_1_889()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SharedSerializationDataIdxList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3FF0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimRTPCConfig*>** StaticGet_Field_1_334()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimRTPCConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x3FF8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3745C69C00F04B7D_1*>** StaticGet_Field_1_737()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_3745C69C00F04B7D_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4000);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SpecialNPCEffectConfig*>** StaticGet_Field_1_925()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SpecialNPCEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4008);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterReplaceMaterialOriginProperty*>** StaticGet_Field_1_134()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterReplaceMaterialOriginProperty*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4010);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VideoSequenceItem*>** StaticGet_Field_1_1068()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VideoSequenceItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4018);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SetComponentAssetAnimStateConfig*>** StaticGet_Field_1_882()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SetComponentAssetAnimStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4020);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropSoundConfigOverrideConfig*>** StaticGet_Field_1_765()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropSoundConfigOverrideConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4028);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VisionSetConfig*>** StaticGet_Field_1_1070()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::VisionSetConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4030);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameEvent*>** StaticGet_Field_1_562()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameEvent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4038);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRacePropertyModifier*>** StaticGet_Field_1_105()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRacePropertyModifier*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4040);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimActionRandomBubbleTalkInfoGroup*>** StaticGet_Field_1_298()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimActionRandomBubbleTalkInfoGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4048);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimatorStateGroupZoneDescConfig*>** StaticGet_Field_1_36()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimatorStateGroupZoneDescConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4050);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationSlotConfig*>** StaticGet_Field_1_362()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FormationSlotConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4058);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OptionTalkInfo*>** StaticGet_Field_1_680()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::OptionTalkInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4060);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleStageUnitInfo*>** StaticGet_Field_1_842()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleStageUnitInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4068);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNPCBakedInfo*>** StaticGet_Field_1_509()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelNPCBakedInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4070);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Booklet::ElementConfig*>** StaticGet_Field_1_814()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Booklet::ElementConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4078);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NoteComboConfig*>** StaticGet_Field_1_669()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::NoteComboConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4080);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenMiniGameGoodsConfig*>** StaticGet_Field_1_434()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HipplenMiniGameGoodsConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4088);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubMissionInfoConfig*>** StaticGet_Field_1_974()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SubMissionInfoConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4090);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterOutfitPartBoneRef*>** StaticGet_Field_1_129()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterOutfitPartBoneRef*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4098);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityLodModelConfig*>** StaticGet_Field_1_276()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityLodModelConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x40A0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameAttachPointInfo*>** StaticGet_Field_1_558()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LittleGameAttachPointInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x40A8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TriggerValidGuestSingleTargetConfig*>** StaticGet_Field_1_1040()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TriggerValidGuestSingleTargetConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x40B0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongEnemyUnitConfig*>** StaticGet_Field_1_730()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongEnemyUnitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x40B8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePVSOfflineSceneItemInfo*>** StaticGet_Field_1_947()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StagePVSOfflineSceneItemInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x40C0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimRandomBubbleTalkInfoGroup*>** StaticGet_Field_1_332()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimRandomBubbleTalkInfoGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x40C8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonopolyMapConfig*>** StaticGet_Field_1_647()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonopolyMapConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x40D0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DebateTestimonySetting*>** StaticGet_Field_1_203()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DebateTestimonySetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x40D8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupMemberEntityAnimatorParamConfig*>** StaticGet_Field_1_418()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GroupMemberEntityAnimatorParamConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x40E0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>** StaticGet_Field_1_139()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x40E8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MunicipalChatCrowdInfo*>** StaticGet_Field_1_658()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MunicipalChatCrowdInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x40F0);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationVolumeIconConfig*>** StaticGet_Field_1_590()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapRotationVolumeIconConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x40F8);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfHeadWaiterTalkConfigItem*>** StaticGet_Field_1_261()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfHeadWaiterTalkConfigItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4100);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimatorClipZoneDescConfig*>** StaticGet_Field_1_34()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AnimatorClipZoneDescConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4108);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceSplitObjectAnimMap*>** StaticGet_Field_1_708()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PerformanceSplitObjectAnimMap*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4110);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelDimensionFilterExpression*>** StaticGet_Field_1_477()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelDimensionFilterExpression*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4118);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicParam*>** StaticGet_Field_1_238()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicParam*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4120);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongEnemyGroupConfig*>** StaticGet_Field_1_725()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PingPongEnemyGroupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4128);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelDimensionCrossMapBriefInfo*>** StaticGet_Field_1_476()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelDimensionCrossMapBriefInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4130);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimTrainEnergySpeedMapItem*>** StaticGet_Field_1_344()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FiveDimTrainEnergySpeedMapItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4138);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_11*>** StaticGet_Field_1_606()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::Class_1_A88C3AAF0DD46F4C_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4140);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::IslandStateConfig*>** StaticGet_Field_1_453()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::IslandStateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4148);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageHarmonyTrafficLightMonoSerialization*>** StaticGet_Field_1_935()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageHarmonyTrafficLightMonoSerialization*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4150);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterReplaceMaterialRenderList*>** StaticGet_Field_1_136()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterReplaceMaterialRenderList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4158);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleStageCellConfig*>** StaticGet_Field_1_841()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleStageCellConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4160);
	}
	static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfWaveConfig*>** StaticGet_Field_1_270()
	{
		return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ElfWaveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5630E87DACEF386_TypeDefinitionIndex)->GetStaticField(0x4168);
	}
	// static const ::System::Int32 Field_1_1078 = 0x5A9375BB; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_4A996C75A3AFFD7E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_4A996C75A3AFFD7E_OFFSET))(a1);
	}

	static ::System::Void Method_1_6ACA611E3DDEC88C(::Class_1_7A22A3DBEEDD1F80* a1, ::System::SByte& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::SByte&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_6ACA611E3DDEC88C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_426C2D39C84BF3B8(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Byte& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_426C2D39C84BF3B8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5D807706F8213195(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int16& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_5D807706F8213195_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_73188727E6136F43(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt16& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt16&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_73188727E6136F43_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A0D066C7CAF528F1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_A0D066C7CAF528F1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9DA3A48C507424DB(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_9DA3A48C507424DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8CA290AEE7BF374D(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int64& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_8CA290AEE7BF374D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C8A29E8722F21B99(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt64& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_C8A29E8722F21B99_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E20E938E8C802DC(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_7E20E938E8C802DC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_16107294F6A8C164(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Double& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_16107294F6A8C164_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4CCBD136715F6AA9(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_4CCBD136715F6AA9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C0C5329B4A6C798(::Class_1_7A22A3DBEEDD1F80* a1, ::System::String*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_0C0C5329B4A6C798_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9D330B6D59CEE0F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_269BA11E54128632& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_269BA11E54128632&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_9D330B6D59CEE0F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0DD5A223C12DF330(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_269BA11E54128632_1& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_269BA11E54128632_1&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_0DD5A223C12DF330_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C585DAA2BA969F42(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_FFF22050766881A4& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_FFF22050766881A4&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_C585DAA2BA969F42_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_3AF7C9876E850E70(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::UInt32(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_3AF7C9876E850E70_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_3AF7C9876E850E70_1(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::UInt32(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_3AF7C9876E850E70_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_1939951DE58F9785(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicValue*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicValue*&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_1939951DE58F9785_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E27BB3041D00746D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FixVec2& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FixVec2&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_E27BB3041D00746D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D01C3422BCA09820(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FixVec3& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FixVec3&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_D01C3422BCA09820_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_63157982A01B30DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IVec2& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IVec2&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_63157982A01B30DD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_458319D7F233F09F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::IVec3& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::IVec3&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_458319D7F233F09F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D01C3422BCA09820_1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FixVec3& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FixVec3&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_D01C3422BCA09820_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EBD636DC56E09E62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::MVector3& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_EBD636DC56E09E62_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_720AD4E3389CC116(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::MVector2& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_720AD4E3389CC116_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F0C0A7444A1D9F60(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_0ACB88BD1D804FF7& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_0ACB88BD1D804FF7&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_F0C0A7444A1D9F60_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB4DDA4D7A6D07D3(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_331ACDD60B60D2E3& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_331ACDD60B60D2E3&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_EB4DDA4D7A6D07D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E196854F60DEA9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::MColor& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::MColor&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_3E196854F60DEA9B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7C191BE995D05982(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::MRect& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::MRect&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_7C191BE995D05982_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_287152F79CAFED8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::FloatCurveFrame& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::FloatCurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_287152F79CAFED8E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_397810E6905F96D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Vector3CurveFrame& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Vector3CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_397810E6905F96D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A285C5B8C23E517(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Vector4CurveFrame& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Vector4CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_2A285C5B8C23E517_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_97461EFE5E9D755B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicFloat*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_97461EFE5E9D755B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B615A77C4F78B455(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JsonEnum*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JsonEnum*&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_B615A77C4F78B455_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_84F4485F07D525DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_84F4485F07D525DD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9FB9B2EB3C59FD3D(::Class_1_7A22A3DBEEDD1F80* a1, ::System::DateTime& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::DateTime&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_9FB9B2EB3C59FD3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_651B3622EE310374(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FilePath*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FilePath*&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_651B3622EE310374_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7B6151DBDC83154F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_7B6151DBDC83154F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_54D13D5FB54C222B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormatString& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormatString&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_54D13D5FB54C222B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4010B2A98E3EE30A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_4010B2A98E3EE30A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00A8D8986F76E097(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StringHash& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StringHash&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_00A8D8986F76E097_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B77E7AFAE82A2300(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_2CAAA2FDF9170110*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_2CAAA2FDF9170110*&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_B77E7AFAE82A2300_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BF804BF26618F3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SurfaceType& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SurfaceType&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_BF804BF26618F3DA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BDA40EBB8A9A5BA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ThreadTaskType& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ThreadTaskType&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_BDA40EBB8A9A5BA6_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_A0726820766CD54D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Int32(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_A0726820766CD54D_OFFSET))(a1);
	}

	static ::System::Void Method_1_F35C1CDADD03A7C3(::Class_1_7A22A3DBEEDD1F80* a1, ::System::SByte& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::SByte&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_F35C1CDADD03A7C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_903454011730DA3F(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Byte& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_903454011730DA3F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5D807706F8213195_1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int16& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_5D807706F8213195_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C8AD4A525ABC6D41(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt16& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt16&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_C8AD4A525ABC6D41_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A0D066C7CAF528F1_1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_A0D066C7CAF528F1_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2C6078E92F095799(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_2C6078E92F095799_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8CA290AEE7BF374D_1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int64& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_8CA290AEE7BF374D_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B65DC39C7A0D8503(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt64& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_B65DC39C7A0D8503_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0BB1B9580AC8FF67(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_0BB1B9580AC8FF67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F362D4FD3A681C7F(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Double& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_F362D4FD3A681C7F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_23A081C6DE548AE0(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_23A081C6DE548AE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC5FCB87084E2363(::Class_1_7A22A3DBEEDD1F80* a1, ::System::String*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_AC5FCB87084E2363_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9D330B6D59CEE0F5_1(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_269BA11E54128632& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_269BA11E54128632&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_9D330B6D59CEE0F5_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0DD5A223C12DF330_1(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_269BA11E54128632_1& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_269BA11E54128632_1&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_0DD5A223C12DF330_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C585DAA2BA969F42_1(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_FFF22050766881A4& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_FFF22050766881A4&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_C585DAA2BA969F42_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_11A88DA43963246A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicValue*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicValue*&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_11A88DA43963246A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A54732E01FBF9FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::MVector3& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_A54732E01FBF9FC8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_806AC81C7DAC6A48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::MVector2& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_806AC81C7DAC6A48_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_54BBE9EEB49B45C7(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_0ACB88BD1D804FF7& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_0ACB88BD1D804FF7&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_54BBE9EEB49B45C7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4294E3367E878AF3(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_331ACDD60B60D2E3& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_331ACDD60B60D2E3&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_4294E3367E878AF3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_86B72BDE3011F780(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::FloatCurveFrame& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::FloatCurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_86B72BDE3011F780_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A9865F33F0BBFDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Vector3CurveFrame& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Vector3CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_0A9865F33F0BBFDA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2B62DB7A09D54093(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Vector4CurveFrame& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Vector4CurveFrame&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_2B62DB7A09D54093_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_72A166B509B16764(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicFloat*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicFloat*&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_72A166B509B16764_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_84F4485F07D525DD_1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_84F4485F07D525DD_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9FB9B2EB3C59FD3D_1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::DateTime& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::DateTime&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_9FB9B2EB3C59FD3D_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_37CBDEFEB7CF1F7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FilePath*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FilePath*&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_37CBDEFEB7CF1F7D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7B6151DBDC83154F_1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_7B6151DBDC83154F_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00A8D8986F76E097_1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StringHash& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StringHash&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_00A8D8986F76E097_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C12EF26C6F23FC74(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_2CAAA2FDF9170110*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_2CAAA2FDF9170110*&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_C12EF26C6F23FC74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_921EE347D45AB768(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_269BA11E54128632 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_269BA11E54128632))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_921EE347D45AB768_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_54B57754AC0F94FD(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_269BA11E54128632_1 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_269BA11E54128632_1))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_54B57754AC0F94FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_54B57754AC0F94FD_1(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_FFF22050766881A4 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_FFF22050766881A4))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_54B57754AC0F94FD_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6ACA611E3DDEC88C_1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::SByte a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::SByte))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_6ACA611E3DDEC88C_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_426C2D39C84BF3B8_1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_426C2D39C84BF3B8_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_074B9EE061E87C08(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int16 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_074B9EE061E87C08_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6829C9CDD2D71216(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_6829C9CDD2D71216_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_175A1968761D81B4(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_175A1968761D81B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C606DE2A6A6081E(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_0C606DE2A6A6081E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E15DECE836C9190(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_7E15DECE836C9190_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D1F89ED3835AC7C(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_1D1F89ED3835AC7C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_68D4A7421DAD224D(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_68D4A7421DAD224D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_491758B78432CBE5(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_491758B78432CBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_419194862ACD99E8(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_419194862ACD99E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D05D8C80F94547FC(::Class_1_7A22A3DBEEDD1F80* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_D05D8C80F94547FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA88676F5B43277A(::Class_1_7A22A3DBEEDD1F80* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_FA88676F5B43277A_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_6AFDC50424099C5A(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_6AFDC50424099C5A_OFFSET))(a1);
	}

	static ::System::Void Method_1_74A2F6CCF66AC30C(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_74A2F6CCF66AC30C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_74A2F6CCF66AC30C_1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_74A2F6CCF66AC30C_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_175A1968761D81B4_1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_175A1968761D81B4_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E1860304B475F20F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FixVec2 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_E1860304B475F20F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F2FAB47861053F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FixVec3 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_7F2FAB47861053F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6A3C5A00B4D15517(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IVec2 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_6A3C5A00B4D15517_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA33D55298AA22AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::IVec3 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::IVec3))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_FA33D55298AA22AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E9B4EAB21A6CB7C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::MVector3 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_E9B4EAB21A6CB7C8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A9EFF7BBA01058D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::MVector2 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_A9EFF7BBA01058D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3EBF46CBBBE484A8(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_0ACB88BD1D804FF7 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_0ACB88BD1D804FF7))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_3EBF46CBBBE484A8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_507BA9D793C62C00(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_331ACDD60B60D2E3 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_331ACDD60B60D2E3))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_507BA9D793C62C00_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0679C308E21EBDE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::MColor a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::MColor))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_0679C308E21EBDE8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_23440DD746FE4CC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::MRect a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::MRect))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_23440DD746FE4CC9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_322D459EA0730EE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::FloatCurveFrame a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::FloatCurveFrame))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_322D459EA0730EE8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A895BBDD0B7B87B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Vector3CurveFrame a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Vector3CurveFrame))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_0A895BBDD0B7B87B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C8BD8E31EEC78862(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Vector4CurveFrame a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Vector4CurveFrame))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_C8BD8E31EEC78862_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4FA36BCF7ECB5C36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JsonEnum* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_4FA36BCF7ECB5C36_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5E8461B486377505(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicFloat* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_5E8461B486377505_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CFE35D91017D5E60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_CFE35D91017D5E60_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C706306F6A5A08B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FilePath* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FilePath*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_C706306F6A5A08B6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5920A8D18F9EB785(::Class_1_7A22A3DBEEDD1F80* a1, ::System::DateTime a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_5920A8D18F9EB785_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B2D8F562B87E0BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StringHash a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_1B2D8F562B87E0BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5DAA7FCAFBF8ACF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicValue* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_5DAA7FCAFBF8ACF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CFDD8E53133E5CB8(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Byte& a5)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_CFDD8E53133E5CB8_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_F28B32DA69DE2072(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt64& a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Byte& a5)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt64&, ::System::Int32&, ::System::Int32&, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_F28B32DA69DE2072_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_98C8FBF8FE95A4DF(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Byte a5)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_98C8FBF8FE95A4DF_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_D4BCA782C233DD85(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt64 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Byte a5)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt64, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_D4BCA782C233DD85_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_A20AA09C4B114AF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SurfaceType a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_A20AA09C4B114AF3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9F5AB28511130D77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ThreadTaskType a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ThreadTaskType))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_9F5AB28511130D77_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1038E834C2A78F08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::TextID a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_1038E834C2A78F08_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_89E64A651518DE28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormatString a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_89E64A651518DE28_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_921EE347D45AB768_1(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_269BA11E54128632 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_269BA11E54128632))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_921EE347D45AB768_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_54B57754AC0F94FD_2(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_269BA11E54128632_1 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_269BA11E54128632_1))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_54B57754AC0F94FD_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_32EB1AEEBC854143(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_FFF22050766881A4 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_FFF22050766881A4))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_32EB1AEEBC854143_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F35C1CDADD03A7C3_1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::SByte a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::SByte))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_F35C1CDADD03A7C3_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_903454011730DA3F_1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_903454011730DA3F_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_074B9EE061E87C08_1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int16 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_074B9EE061E87C08_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7C5CDA82375F44C4(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_7C5CDA82375F44C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_175A1968761D81B4_2(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_175A1968761D81B4_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_74A2F6CCF66AC30C_2(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_74A2F6CCF66AC30C_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E15DECE836C9190_1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_7E15DECE836C9190_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD4F4FF8391E6BDA(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_FD4F4FF8391E6BDA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B48D00FD27B5D017(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_B48D00FD27B5D017_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6492D62A26FE164F(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_6492D62A26FE164F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5217AE7208CA4FD7(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_5217AE7208CA4FD7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3036AA89F506B400(::Class_1_7A22A3DBEEDD1F80* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_3036AA89F506B400_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E2DACC73F31E3E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::MVector3 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_7E2DACC73F31E3E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A9EFF7BBA01058D0_1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::MVector2 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_A9EFF7BBA01058D0_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_50401A961108B8DE(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_0ACB88BD1D804FF7 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_0ACB88BD1D804FF7))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_50401A961108B8DE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_50401A961108B8DE_1(::Class_1_7A22A3DBEEDD1F80* a1, ::Struct_2_331ACDD60B60D2E3 a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Struct_2_331ACDD60B60D2E3))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_50401A961108B8DE_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_322D459EA0730EE8_1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::FloatCurveFrame a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::FloatCurveFrame))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_322D459EA0730EE8_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B6F7B984305F8A78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Vector3CurveFrame a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Vector3CurveFrame))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_B6F7B984305F8A78_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79255D4AC0A769A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Vector4CurveFrame a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Vector4CurveFrame))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_79255D4AC0A769A9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_74746E8EC55BD0E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicFloat* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_74746E8EC55BD0E3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CFE35D91017D5E60_1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_CFE35D91017D5E60_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D65DA04BB5B3D582(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FilePath* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FilePath*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_D65DA04BB5B3D582_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5920A8D18F9EB785_1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::DateTime a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_5920A8D18F9EB785_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B2D8F562B87E0BE_1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StringHash a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_1B2D8F562B87E0BE_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5F4F1C46DCA4D4E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicValue* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_5F4F1C46DCA4D4E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1038E834C2A78F08_1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::TextID a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386_METHOD_1_1038E834C2A78F08_1_OFFSET))(a1, a2);
	}

	static ::Struct_2_7C99830C88C15F6F _FromBinary_DynamicValueLookup_g___GetReadInfo_1131_0(::Class_1_7A22A3DBEEDD1F80* byteArr)
	{
		return ((::Struct_2_7C99830C88C15F6F(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F5630E87DACEF386__FROMBINARY_DYNAMICVALUELOOKUP_G___GETREADINFO_1131_0_OFFSET))(byteArr);
	}
};
