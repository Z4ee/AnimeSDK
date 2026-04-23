#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"

class Class_1_2CAAA2FDF9170110;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarChangeTemplate; }
namespace RPG::GameCore { class BattleComboConfig; }
namespace RPG::GameCore { class BattleReportCustomValueList; }
namespace RPG::GameCore { class BattleStageConfigDataKeys; }
namespace RPG::GameCore { class CharacterIDGroupConfig; }
namespace RPG::GameCore { class DarkTeamFightFormationConfig; }
namespace RPG::GameCore { class DepartedConfig; }
namespace RPG::GameCore { class ElationModifierConstKeys; }
namespace RPG::GameCore { class GameCoreConstKeys; }
namespace RPG::GameCore { class HitTimeSlowConfig; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LevelPerformConfig; }
namespace RPG::GameCore { class LightTeamFightFormationConfig; }
namespace RPG::GameCore { class ModifierBehaviorFlagEventConfigList; }
namespace RPG::GameCore { class ModifierBehaviorFlagList; }
namespace RPG::GameCore { class ModifierBehaviorFlagListPair; }
namespace RPG::GameCore { class ModifierBehaviorVisual; }
namespace RPG::GameCore { class ModifierCustomEventConfig; }
namespace RPG::GameCore { class ModifierStatusTypeList; }
namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace RPG::GameCore { class RogueMagicConstDynamicValueKeys; }
namespace RPG::GameCore { class ShieldModifierConstKeys; }
namespace RPG::GameCore { class SkillDamageTypePreshowConfig; }
namespace RPG::GameCore { class SomatoWidthRangeConfig; }
namespace RPG::GameCore { class TeamMemberExpansionFightFormationConfig; }
namespace RPG::GameCore { class TeammateAttackFormationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GAMECORECONSTVALUE_CHECKMODIFIEREVENTCANRECALL_OFFSET UNITYSDK_OFFSET(0x18952CB0)
#define RPG_GAMECORE_GAMECORECONSTVALUE_FINDMODIFIERCUSTOMEVENTCONFIG_OFFSET UNITYSDK_OFFSET(0x18952210)
#define RPG_GAMECORE_GAMECORECONSTVALUE_FINDMODIFIERCUSTOMEVENTGROUP_OFFSET UNITYSDK_OFFSET(0x189523A0)
#define RPG_GAMECORE_GAMECORECONSTVALUE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18943AF0)
#define RPG_GAMECORE_GAMECORECONSTVALUE_GETPROPERTYADSORPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x18952E30)
#define RPG_GAMECORE_GAMECORECONSTVALUE_GET_REVERSEDMODIFIERSTATUSTYPEIMMUNEMAP_OFFSET UNITYSDK_OFFSET(0x189527A0)
#define RPG_GAMECORE_GAMECORECONSTVALUE_GET_REVERSEMODIFIERBEHAVIORFLAGIMMUNEMAP_OFFSET UNITYSDK_OFFSET(0x189523C0)
#define RPG_GAMECORE_GAMECORECONSTVALUE_ISINCHARACTERIDGROUP_OFFSET UNITYSDK_OFFSET(0x18953070)
#define RPG_GAMECORE_GAMECORECONSTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18951F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameCoreConstValue_TypeDefinitionIndex = 16208;

	class GameCoreConstValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single TargetHitPerformTime; // 0x10
		::System::Single ActionGapModifierPerformTime; // 0x14
		::RPG::GameCore::FixPoint DefaultStance; // 0x18
		::RPG::GameCore::FixPoint StanceLock; // 0x20
		::RPG::GameCore::FixPoint StanceLockMinValue; // 0x28
		::RPG::GameCore::FixPoint TurnAddBoostPoint; // 0x30
		::RPG::GameCore::FixPoint RoundAddBoostPoint; // 0x38
		::RPG::GameCore::FixPoint DamageTakenRatioMax; // 0x40
		::System::Int32 MaxMonsterLevel; // 0x48
		::RPG::GameCore::FixPoint DamageRandomMin; // 0x50
		::RPG::GameCore::FixPoint DamageRandomMax; // 0x58
		::RPG::GameCore::FixPoint DefenceAdd; // 0x60
		::RPG::GameCore::FixPoint DefenceMultipe; // 0x68
		::RPG::GameCore::FixPoint AllDamageReduceMax; // 0x70
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x78
		::System::UInt32 MainCharacterID; // 0x80
		::RPG::GameCore::FixPoint OverallResistanceMin; // 0x88
		::RPG::GameCore::FixPoint OverallResistanceMax; // 0x90
		::RPG::GameCore::FixPoint HighResistThreshold; // 0x98
		::RPG::GameCore::FixPoint MinimumStanceLevelEffect; // 0xA0
		::RPG::GameCore::FixPoint TeamBPFloatStart; // 0xA8
		::RPG::GameCore::FixPoint TeamBPFloatMax; // 0xB0
		::RPG::GameCore::FixPoint TeamBPFloatToIntegerRatio; // 0xB8
		::System::Int32 ElationPointMax; // 0xC0
		::RPG::GameCore::LightTeamFightFormationConfig* LightTeamFightFormation; // 0xC8
		::RPG::GameCore::DarkTeamFightFormationConfig* DarkTeamFightFormation; // 0xD0
		::RPG::GameCore::TeamMemberExpansionFightFormationConfig* ExpansionFightFormation; // 0xD8
		::System::String* SkillParameterColor; // 0xE0
		::RPG::GameCore::LevelPerformConfig* DefaultLevelPerformConfig; // 0xE8
		::System::Boolean BlockTeamBPInsert; // 0xF0
		::Class_1_2CAAA2FDF9170110* AllCharacterDynamicValues; // 0xF8
		::System::Single ModifierPhaseEndingPerformAdded; // 0x100
		::System::Single ModifierPhaseEndingPerformMax; // 0x104
		::System::Single ModifierPhasePerformTimeMin; // 0x108
		::System::Single ModifierPhasePerformTimeAdded; // 0x10C
		::System::Single ModifierPhasePerformTimeMax; // 0x110
		::System::Single DefaultCharacterEffectTransitionTime; // 0x114
		::RPG::GameCore::FixPoint LowHPFlagRatio; // 0x118
		::System::Boolean StanceTargetSkipRound; // 0x120
		::RPG::GameCore::FixPoint DamageToLowHPRatio; // 0x128
		::RPG::GameCore::GameCoreConstKeys* ConstKeys; // 0x130
		::RPG::GameCore::BattleStageConfigDataKeys* StageConfigDataKeys; // 0x138
		::RPG::GameCore::ShieldModifierConstKeys* ShieldConstKeys; // 0x140
		::RPG::GameCore::ElationModifierConstKeys* ElationConstKeys; // 0x148
		::System::String* BattleDefaultSceneName; // 0x150
		::Il2CppArray<::System::Single>* ResilienceHitAdditiveWeights; // 0x158
		::System::Single AvatarHitAdditiveWeightBase; // 0x160
		::System::Single MonsterHitAdditiveWeightBase; // 0x164
		::RPG::GameCore::FixPoint StanceWeakRatio; // 0x168
		::RPG::GameCore::FixPoint DefaultStanceResistance; // 0x170
		::System::Single AdventureLookAtTargetLockTime; // 0x178
		::RPG::GameCore::FixPoint SpeedToDelayDistance; // 0x180
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorVisual*>* ModifierBehaviorVisualList; // 0x188
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* SnapshotEntityInheritBlackList; // 0x190
		::Il2CppArray<::RPG::GameCore::SkillEffect>* DamagingSkillEffect; // 0x198
		::System::Single HitForce; // 0x1A0
		::System::Single HitForce_H; // 0x1A4
		::Il2CppArray<::RPG::GameCore::AttackType>* AttackTypeForbidCriticalList; // 0x1A8
		::Il2CppArray<::RPG::GameCore::AttackType>* AttackTypeForbidLuckCriticalList; // 0x1B0
		::System::Int32 MaxTurnCount; // 0x1B8
		::Il2CppArray<::RPG::GameCore::HitTimeSlowConfig*>* HitTimeSlowConfigs; // 0x1C0
		::Il2CppArray<::RPG::GameCore::ModifierCustomEventConfig*>* ModifierCustomEvents; // 0x1C8
		::System::Single BattleEncounterHintDelayTime; // 0x1D0
		::System::Single SkillReadyAnimDefaultTransitDuration; // 0x1D4
		::System::Single DieAnimTransitDuration; // 0x1D8
		::System::Single ViewModeSummonerToServantTransitTime; // 0x1DC
		::System::Single MovementUpstairHeight; // 0x1E0
		::System::Single MovementMaxSlope; // 0x1E4
		::System::Single MovementDownMinSlope; // 0x1E8
		::System::Single MovementDownstairDepth; // 0x1EC
		::System::Single NPCDialogFaceToPlayerAngle; // 0x1F0
		::System::Single AddBuffPerformTimeInterval; // 0x1F4
		::System::Single AddBuffPerformTimeMax; // 0x1F8
		::System::Single SkillTargetBeyondTargetIntensity; // 0x1FC
		::System::Single SkillTargetBeyondTargetFadeTime; // 0x200
		::System::Single BackRowExceptSkillTargetIntensity; // 0x204
		::System::Single BackRowExceptSkillTargetFadeTime; // 0x208
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ModifierBehaviorFlag, ::RPG::GameCore::ModifierBehaviorFlagList*>* ModifierBehaviorFlagImmuneMap; // 0x210
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ModifierBehaviorFlag, ::RPG::GameCore::ModifierStatusTypeList*>* ModifierStatusTypeImmuneMap; // 0x218
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlagListPair*>* ModifierBehaviorFlagAntiDebuffResistList; // 0x220
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* ModifierBehaviorFlagKeepOnDeathrattle; // 0x228
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ModifierBehaviorFlag, ::RPG::GameCore::ModifierBehaviorFlagEventConfigList*>* ModifierBehaviorFlagEventMap; // 0x230
		::System::Boolean UploadReplay; // 0x238
		::System::Boolean SaveReplay; // 0x239
		::System::String* StoryPlayerUniqueName; // 0x240
		::System::String* StoryPlayerBoyID; // 0x248
		::System::String* StoryPlayerGirlID; // 0x250
		::System::Single StoryEndOpenUIDelayTime; // 0x258
		::System::Single StoryStartCloseUIDelayTime; // 0x25C
		::RPG::GameCore::BattleComboConfig* ComboConstConfig; // 0x260
		::System::Single AdventureCommonBtnCD; // 0x268
		::Il2CppArray<::RPG::GameCore::StageType>* StageTypesNeedQuitVerify; // 0x270
		::System::Boolean PlayOccurAfterFrozen; // 0x278
		::System::Single OccurAnimNormalizeStart; // 0x27C
		::System::Single OccurAnimNormalizeTransition; // 0x280
		::System::Single BreakExtendAnimDelay; // 0x284
		::System::Single BreakExtendAnimDelayOnGround; // 0x288
		::System::Single BreakExtendAnimDelayHitMotion; // 0x28C
		::System::Int32 HitFrameMiniInterval; // 0x290
		::System::String* StageWavePerformStartStringKey; // 0x298
		::System::String* DefaultStageWavePerformStartString; // 0x2A0
		::System::String* AutoBattleUseSkillPerformForLightTeamStartString; // 0x2A8
		::System::String* AutoBattleUseSkillPerformForDarkTeamStartString; // 0x2B0
		::System::String* CinemachineVirtualCameraTemplatePath; // 0x2B8
		::Il2CppArray<::RPG::GameCore::TeammateAttackFormationConfig*>* TeammateAttackFormationConfigList; // 0x2C0
		::System::String* TwoTeammateAttackFormationName; // 0x2C8
		::System::Int32 OnLineReplayMaxCacheCount; // 0x2D0
		::Il2CppArray<::System::String*>* FormationAsset; // 0x2D8
		::Il2CppArray<::System::String*>* TimelineDataAsset; // 0x2E0
		::Il2CppArray<::System::String*>* ProjectileCurveAsset; // 0x2E8
		::System::UInt32 GameCoreDesignDataVersion; // 0x2F0
		::System::Single LeastSkillNormalPerformTime; // 0x2F4
		::System::Single LeastSkillBpPerformTime; // 0x2F8
		::System::Single LeastSkillUltraPerformTime; // 0x2FC
		::System::Single LeastSkillServantPerformTime; // 0x300
		::System::Single LeastSkillElationPerformTime; // 0x304
		::System::String* MainMonsterUniqueName; // 0x308
		::RPG::GameCore::FixPoint StanceBreakActionDelayChangeRatio; // 0x310
		::RPG::GameCore::FixPoint RedStanceBreakActionDelayChangeRatio; // 0x318
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::SkillDamageTypePreshowConfig*>* SkillDamageTypePreshowConfigs; // 0x320
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::FixPoint>* MonsterRankScore; // 0x328
		::Il2CppArray<::System::UInt32>* BossMultiInstWhiteList; // 0x330
		::System::Boolean EnableModifyDotDamageData; // 0x338
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* CustomSwitchMap; // 0x340
		::System::Single WaitFaceToTaskFinishLimitAngle; // 0x348
		::System::Int32 ModifierRecallLimit; // 0x34C
		::System::Int32 RangePropertyRecallLimit; // 0x350
		::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* ForbidRecallModifierEventList; // 0x358
		::Il2CppArray<::System::UInt32>* RewindMazeBuffList; // 0x360
		::Il2CppArray<::RPG::GameCore::SomatoWidthRangeConfig*>* SomatoWidthRange; // 0x368
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* ServantSyncPropertyList; // 0x370
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* BackendSyncExceptPropertyList; // 0x378
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* BEServantSyncExceptPropertyList; // 0x380
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageType, ::System::UInt32>* StagePuppetBeyondLimitMaxCount; // 0x388
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageType, ::RPG::GameCore::BattleReportCustomValueList*>* BattleReportCustomValueByStage; // 0x390
		::System::UInt32 StatisticSummonMonsterLimit; // 0x398
		::RPG::GameCore::RogueMagicConstDynamicValueKeys* RogueMagicConstDynamicValueKeys; // 0x3A0
		::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* ServantModifierEventWhiteList; // 0x3A8
		::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* MuteModifierGlobalListenWhiteList; // 0x3B0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::PropertyAdsorptionConfig*>* PropertyAdsorptions; // 0x3B8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DepartedConfig*>* DepartedConfigGroups; // 0x3C0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AvatarChangeTemplate*>* AvatarChangeTemplateGroups; // 0x3C8
		::System::Single AnimEventTimeSliceThreshold; // 0x3D0
		::System::Single AbortMoveSkipRootMotionThreshTime; // 0x3D4
		::System::String* EmptyAvatarPrefabPath; // 0x3D8
		::Il2CppArray<::RPG::GameCore::CharacterIDGroupConfig*>* CharacterIDGroups; // 0x3E0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ModifierBehaviorFlag, ::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>*>* _reverseModifierBehaviorFlagImmuneMap; // 0x3E8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnumStatusType, ::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>*>* _reversedModifierStatusTypeImmuneMap; // 0x3F0
		::Il2CppArray<::System::UInt32>* _ForbidRecallModifierEventMask; // 0x3F8
		::Il2CppArray<::RPG::GameCore::PropertyAdsorptionConfig*>* _PropertyAdsorptionThreshArray; // 0x400
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*>* _CharacterIDGroupMap; // 0x408

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONSTVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GameCoreConstValue*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameCoreConstValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONSTVALUE_FROMBINARY_OFFSET))(array, val);
		}

		::RPG::GameCore::ModifierCustomEventConfig* FindModifierCustomEventConfig(::RPG::GameCore::JsonEnum* ty)
		{
			return ((::RPG::GameCore::ModifierCustomEventConfig*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONSTVALUE_FINDMODIFIERCUSTOMEVENTCONFIG_OFFSET))(this, ty);
		}

		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* FindModifierCustomEventGroup(::RPG::GameCore::JsonEnum* ty)
		{
			return ((::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONSTVALUE_FINDMODIFIERCUSTOMEVENTGROUP_OFFSET))(this, ty);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ModifierBehaviorFlag, ::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>*>* get_ReverseModifierBehaviorFlagImmuneMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ModifierBehaviorFlag, ::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONSTVALUE_GET_REVERSEMODIFIERBEHAVIORFLAGIMMUNEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnumStatusType, ::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>*>* get_ReversedModifierStatusTypeImmuneMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnumStatusType, ::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONSTVALUE_GET_REVERSEDMODIFIERSTATUSTYPEIMMUNEMAP_OFFSET))(this);
		}

		::System::Boolean CheckModifierEventCanRecall(::RPG::GameCore::TurnBasedModifierEvent eEvent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONSTVALUE_CHECKMODIFIEREVENTCANRECALL_OFFSET))(this, eEvent);
		}

		::RPG::GameCore::PropertyAdsorptionConfig* GetPropertyAdsorptionConfig(::RPG::GameCore::AbilityProperty eProperty)
		{
			return ((::RPG::GameCore::PropertyAdsorptionConfig*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONSTVALUE_GETPROPERTYADSORPTIONCONFIG_OFFSET))(this, eProperty);
		}

		::System::Boolean IsInCharacterIDGroup(::System::String* sGroupName, ::System::UInt32 nCharacterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONSTVALUE_ISINCHARACTERIDGROUP_OFFSET))(this, sGroupName, nCharacterID);
		}
	};
}
