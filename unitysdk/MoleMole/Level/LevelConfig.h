#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7594C8C40FFC1AE0.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/InLevelChatConfig.h"
#include "unitysdk/MoleMole/InLevelMultiChatConfig.h"
#include "unitysdk/MoleMole/Level/BangbooAbilityConfig.h"
#include "unitysdk/MoleMole/Level/BangbooAbilityTemplateConfig.h"
#include "unitysdk/MoleMole/Level/BangbooAbilityType.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"
#include "unitysdk/MoleMole/Level/BangbooPlayTypeConfig.h"
#include "unitysdk/MoleMole/Level/BangbooPlayTypeTemplate.h"
#include "unitysdk/MoleMole/Level/LevelConfig_DayTimeRange.h"
#include "unitysdk/MoleMole/Level/LevelConfig_LevelPrefabConfig.h"
#include "unitysdk/MoleMole/Level/LevelConfig_RankingItemConfig.h"
#include "unitysdk/MoleMole/Level/LevelZeroMonsterWaveLimit.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/MoleMole/NapSplitSerialized_MainScriptableObject.h"
#include "unitysdk/MoleMole/VoidFrontSubGameType.h"

namespace MoleMole { class SimpleGameplayTagSpace; }
namespace MoleMole { class SimpleGameplayTagTable; }
namespace MoleMole { class TeamGroupDataItem; }
namespace MoleMole::Level { class BangbooFindObjConfig; }
namespace MoleMole::Level { class LevelConfig_FocusUIIconSetting; }
namespace MoleMole::Level { class LevelConfig_GlobalAIUpgradePair; }
namespace MoleMole::Level { class LevelConfig_GlobalAIUpgradeParam; }
namespace MoleMole::Level { class LevelConfig_SceneMoveGroup; }
namespace MoleMole::Monster { class MonsterCampCollisionMatrix; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_LEVEL_LEVELCONFIG_GETLEVELABYSSGLOBALAICONFIG_OFFSET UNITYSDK_OFFSET(0x1582ADF0)
#define MOLEMOLE_LEVEL_LEVELCONFIG_TRYGETFOCUSICONPATH_OFFSET UNITYSDK_OFFSET(0x1582AF00)
#define MOLEMOLE_LEVEL_LEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1582B010)

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_TypeDefinitionIndex = 47017;

	class LevelConfig : public ::MoleMole::NapSplitSerialized_MainScriptableObject
	{
	public:
		// static const ::System::String* LevelZeroTitle; // 0x0
		// static const ::System::String* LevelZeroCheckConfigTitle; // 0x0
		// static const ::System::String* DEFAULT_DEFINE_LEVEL_WIN_TEXTID; // 0x0
		// static const ::System::String* GROUP_ScenePerform_PassTime; // 0x0
		// static const ::System::String* GROUP_ScenePerform_Delay; // 0x0
		// static const ::System::String* GROUP_PartnerAvatar; // 0x0
		// static const ::System::String* GROUP_SceneArea; // 0x0
		// static const ::System::String* GROUP_BattleRegion; // 0x0
		// static const ::System::String* GROUP_PureBatleGroup; // 0x0
		// static const ::System::String* GROUP_FCConfig; // 0x0
		// static const ::System::String* GROUP_HenshinBuddyConfig; // 0x0
		::System::Single RewardTip_Duration; // 0x68
		::System::Int32 RewardTip_MaxCount; // 0x6C
		::MoleMole::TeamGroupDataItem* teamGroup; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_DayTimeRange>* DayTimePeriodConfig; // 0x78
		::System::Single listenerOffsetRatio; // 0x80
		::System::Single listenerOffsetRatio_ScrollingCameraMode; // 0x84
		::System::Single listenerOffset_ScrollingCameraMode; // 0x88
		::System::Boolean muteAudio; // 0x8C
		::System::String* TerrainMatGroup; // 0x90
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TerrainMatType, ::System::String*>* TerrainMatStates; // 0x98
		::System::String* TerrainMatCoverGroup; // 0xA0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TerrainMatType, ::System::String*>* TerrainMatCoverStates; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_SceneMoveGroup*>* sceneMoveGroup; // 0xB0
		::System::String* levelZeroDefaultMainFC; // 0xB8
		::System::String* levelZeroDevDefaultMainFC; // 0xC0
		::System::String* levelZeroDefaultLoopStageName; // 0xC8
		::System::Single levelZeroExceptionPointAwayRadius; // 0xD0
		::System::Int32 levelZeroDefaultWrapBattleID; // 0xD4
		::MoleMole::Level::LevelZeroMonsterWaveLimit MonsterWaveLimit; // 0xD8
		::MoleMole::Level::LevelConfig_LevelPrefabConfig levelZeroVolume; // 0xE8
		::MoleMole::Monster::MonsterCampCollisionMatrix* MonsterCampConfig; // 0xF8
		::System::String* Default_Set_Level_Win_TextID; // 0x100
		::System::Int32 MaxArchiveRankingCount; // 0x108
		::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_RankingItemConfig>* resultRankingItemConfig; // 0x110
		::System::String* LongFight_Win_TextID; // 0x118
		::System::String* LongFight_Lose_TextID; // 0x120
		::System::String* LongFight_Show_Page_WIN_Title; // 0x128
		::System::String* LongFight_Show_Page_LOSE_Title; // 0x130
		::System::Int32 LevelQuestMaxCount; // 0x138
		::System::Single LongFight_Fadeout_BlackDuration; // 0x13C
		::UnityEngine::AnimationCurve* LongFight_Fadeout_Curve; // 0x140
		::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Int32>* LongFightMissionResultTypeReflect; // 0x148
		::System::Collections::Generic::List_1<::Enum_3_7594C8C40FFC1AE0>* ApplyRatingQuestTypes; // 0x150
		::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Int32>* LongFightMissionResultWithFinish; // 0x158
		::System::Boolean use_checkarea_culling; // 0x160
		::System::Boolean use_checkarea_effect_culling; // 0x161
		::System::Boolean use_checkarea_sceneobject_culling; // 0x162
		::System::Collections::Generic::List_1<::System::Int32>* SupportAreaCullingBattleEventIDs; // 0x168
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* NotSupportAreaCullingEntityTags; // 0x170
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Level::LevelConfig_GlobalAIUpgradePair*>* GlobalAIUpgradeConfigs; // 0x178
		::System::Single namePanelYAxisVisibleTolerance; // 0x180
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_FocusUIIconSetting*>* FocusUIIcons; // 0x188
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelChatConfig>* inLevelChatConfig; // 0x190
		::MoleMole::InLevelChatConfig defaultInLevelChatConfig; // 0x198
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelMultiChatConfig>* inLevelMultiChatConfigs; // 0x1A8
		::MoleMole::InLevelMultiChatConfig defaultInLevelMultiChatConfig; // 0x1B0
		::System::Int32 AliveMonsterCountCriterion; // 0x1BC
		::System::Single BeHit_CD_In_Challenge; // 0x1C0
		::System::Single ChallengeKillType_Gap_Time; // 0x1C4
		::MoleMole::SimpleGameplayTagSpace* eventNameConfig; // 0x1C8
		::System::Collections::Generic::List_1<::MoleMole::SimpleGameplayTagTable*>* ContainerEventNameTables; // 0x1D0
		::System::String* hadalMainFCPath; // 0x1D8
		::System::String* aliveTypeHadalMainFcPath; // 0x1E0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>* HadalCountDownIconKey; // 0x1E8
		::System::Single hadalProtectTime; // 0x1F0
		::System::Collections::Generic::Dictionary_2<::MoleMole::VoidFrontSubGameType, ::System::String*>* VoidFrontFCMap; // 0x1F8
		::System::String* HardCoreBossMainFC; // 0x200
		::System::Boolean isStartPassTimeAfterScenePerform; // 0x208
		::System::Single startPassTimeAfterScenePerformDelay; // 0x20C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::OverrideScenePerformDelayConfig>* scenePerformOverrides; // 0x210
		::System::Int32 maxPartnerCount; // 0x218
		::System::Boolean avatar_AntiFreeze_Open; // 0x21C
		::System::Boolean monster_AntiFreeze_Open; // 0x21D
		::System::Single avatar_AntiFreeze_Duration; // 0x220
		::System::Single avatar_AntiFreeze_TransferCurtain; // 0x224
		::System::Collections::Generic::List_1<::System::String*>* avatar_AntiFreeze_SpPrefix; // 0x228
		::System::Single BattleRegionAvatarSafeDistance; // 0x230
		::System::Single BattleRegionAvatarTeleportWaitTime; // 0x234
		::System::Single BattleRegionNonAvatarTeleportWaitTime; // 0x238
		::System::Single BattleRegionOneWayDoorEffectAppearDistance; // 0x23C
		::System::Single BattleRegionOneWayDoorEffectSwitchDistance; // 0x240
		::System::Single BattleRegionOneWayDoorEffectChangeInterval; // 0x244
		::System::String* pureBattleQuestMainFc; // 0x248
		::System::Single FlowCanvasTaskMaxDelayTime; // 0x250
		::System::String* AbyssS2_RouteMap_MainFc; // 0x258
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::MoleMole::Level::BangbooPlayTypeConfig>* BangbooPlayTypeConfigs; // 0x260
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::Foundation::AssetPath>* BranchSkillButtonIconPath; // 0x268
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooAbilityType, ::MoleMole::Level::BangbooAbilityConfig>* BangbooAbilityNames; // 0x270
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayTypeTemplate, ::MoleMole::Level::BangbooAbilityTemplateConfig>* BangbooAbilityTemplateConfig; // 0x278
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::BangbooFindObjConfig*>* BangbooFindObjMatConfigNew; // 0x280

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean GetLevelAbyssGlobalAIConfig(::System::Int32 queryKey, ::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_GlobalAIUpgradeParam*>*& attackCdConfigs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_GlobalAIUpgradeParam*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_GETLEVELABYSSGLOBALAICONFIG_OFFSET))(this, queryKey, attackCdConfigs);
		}

		::System::Boolean TryGetFocusIconPath(::System::String* key, ::MoleMole::Level::LevelConfig_FocusUIIconSetting*& iconPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Level::LevelConfig_FocusUIIconSetting*&))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_TRYGETFOCUSICONPATH_OFFSET))(this, key, iconPath);
		}
	};
}
