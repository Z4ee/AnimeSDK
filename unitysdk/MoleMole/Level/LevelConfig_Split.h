#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33.h"
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
#include "unitysdk/MoleMole/Level/LevelConfig_RankingItemConfig.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/MoleMole/NapSplitSerialized_BranchScriptableObject.h"
#include "unitysdk/MoleMole/VoidFrontSubGameType.h"

namespace MoleMole { class NapSplitSerialized_MainScriptableObject; }
namespace MoleMole { class SimpleGameplayTagTable; }
namespace MoleMole::Level { class BangbooFindObjConfig; }
namespace MoleMole::Level { class LevelConfig_FocusUIIconSetting; }
namespace MoleMole::Level { class LevelConfig_GlobalAIUpgradePair; }
namespace MoleMole::Level { class LevelConfig_SceneMoveGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_ONCONVERTTOSPLIT_OFFSET UNITYSDK_OFFSET(0x136BAF80)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_ONMERGESPLIT_OFFSET UNITYSDK_OFFSET(0x136BB220)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_ONRUNTIMEPREPARE_OFFSET UNITYSDK_OFFSET(0x136BA5A0)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT__CTOR_OFFSET UNITYSDK_OFFSET(0x136C03D0)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT___BASE_ONCONVERTTOSPLIT_OFFSET UNITYSDK_OFFSET(0x136C0DB0)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT___BASE_ONMERGESPLIT_OFFSET UNITYSDK_OFFSET(0x136C0DC0)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT___BASE_ONRUNTIMEPREPARE_OFFSET UNITYSDK_OFFSET(0x136C0E50)

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_Split_TypeDefinitionIndex = 48677;

	class LevelConfig_Split : public ::MoleMole::NapSplitSerialized_BranchScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_DayTimeRange>* DayTimePeriodConfig; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TerrainMatType, ::System::String*>* TerrainMatStates; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TerrainMatType, ::System::String*>* TerrainMatCoverStates; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_SceneMoveGroup*>* sceneMoveGroup; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_RankingItemConfig>* resultRankingItemConfig; // 0x78
		::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Int32>* LongFightMissionResultTypeReflect; // 0x80
		::System::Collections::Generic::List_1<::Enum_3_75A5C8C4100A8E33>* ApplyRatingQuestTypes; // 0x88
		::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Int32>* LongFightMissionResultWithFinish; // 0x90
		::System::Collections::Generic::List_1<::System::Int32>* SupportAreaCullingBattleEventIDs; // 0x98
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* NotSupportAreaCullingEntityTags; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Level::LevelConfig_GlobalAIUpgradePair*>* GlobalAIUpgradeConfigs; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_FocusUIIconSetting*>* FocusUIIcons; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelChatConfig>* inLevelChatConfig; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelMultiChatConfig>* inLevelMultiChatConfigs; // 0xC0
		::System::Collections::Generic::List_1<::MoleMole::SimpleGameplayTagTable*>* ContainerEventNameTables; // 0xC8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>* HadalCountDownIconKey; // 0xD0
		::System::Collections::Generic::Dictionary_2<::MoleMole::VoidFrontSubGameType, ::System::String*>* VoidFrontFCMap; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::OverrideScenePerformDelayConfig>* scenePerformOverrides; // 0xE0
		::System::Collections::Generic::List_1<::System::String*>* avatar_AntiFreeze_SpPrefix; // 0xE8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::MoleMole::Level::BangbooPlayTypeConfig>* BangbooPlayTypeConfigs; // 0xF0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::Foundation::AssetPath>* BranchSkillButtonIconPath; // 0xF8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooAbilityType, ::MoleMole::Level::BangbooAbilityConfig>* BangbooAbilityNames; // 0x100
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayTypeTemplate, ::MoleMole::Level::BangbooAbilityTemplateConfig>* BangbooAbilityTemplateConfig; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::BangbooFindObjConfig*>* BangbooFindObjMatConfigNew; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT__CTOR_OFFSET))(this);
		}

		::System::Void OnRuntimePrepare(::MoleMole::NapSplitSerialized_MainScriptableObject* m)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NapSplitSerialized_MainScriptableObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_ONRUNTIMEPREPARE_OFFSET))(this, m);
		}

		::System::Void OnConvertToSplit(::MoleMole::NapSplitSerialized_MainScriptableObject* m)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NapSplitSerialized_MainScriptableObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_ONCONVERTTOSPLIT_OFFSET))(this, m);
		}

		::System::Void OnMergeSplit(::MoleMole::NapSplitSerialized_MainScriptableObject* m)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NapSplitSerialized_MainScriptableObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_ONMERGESPLIT_OFFSET))(this, m);
		}

		::System::Void __base_OnConvertToSplit(::MoleMole::NapSplitSerialized_MainScriptableObject* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NapSplitSerialized_MainScriptableObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT___BASE_ONCONVERTTOSPLIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnMergeSplit(::MoleMole::NapSplitSerialized_MainScriptableObject* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NapSplitSerialized_MainScriptableObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT___BASE_ONMERGESPLIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnRuntimePrepare(::MoleMole::NapSplitSerialized_MainScriptableObject* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NapSplitSerialized_MainScriptableObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT___BASE_ONRUNTIMEPREPARE_OFFSET))(this, P0);
		}
	};
}
