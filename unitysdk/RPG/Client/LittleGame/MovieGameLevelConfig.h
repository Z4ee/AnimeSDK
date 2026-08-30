#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class BackgroundLayerConfig; }
namespace RPG::Client::LittleGame { class FeverTimeConfig; }
namespace RPG::Client::LittleGame { class FlipConfig; }
namespace RPG::Client::LittleGame { class GameAccelerateConfig; }
namespace RPG::Client::LittleGame { class MovieEnemyConfig; }
namespace RPG::Client::LittleGame { class MoviePlayerConfig; }
namespace RPG::Client::LittleGame { class OperationConfig; }
namespace RPG::Client::LittleGame { class PerfectConfig; }
namespace RPG::Client::LittleGame { class PlacementGroupConfig; }
namespace RPG::Client::LittleGame { class PresetConfig; }
namespace RPG::Client::LittleGame { class PresetGroupConfig; }
namespace RPG::Client::LittleGame { class ShootingConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMELEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4996F0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameLevelConfig_TypeDefinitionIndex = 41042;

	class MovieGameLevelConfig : public ::System::Object
	{
	public:
		::System::Single MileStone; // 0x10
		::System::Int32 Difficulty; // 0x14
		::System::Single WarmUpMile; // 0x18
		::System::Int32 Life; // 0x1C
		::RPG::Client::LittleGame::MovieGameMode MovieGameMode; // 0x20
		::RPG::Client::LittleGame::GameAccelerateConfig* GameAccelerateConfig; // 0x28
		::RPG::Client::LittleGame::PerfectConfig* NiceOpConfig; // 0x30
		::RPG::Client::LittleGame::FeverTimeConfig* FeverTimeConfig; // 0x38
		::RPG::Client::LittleGame::ShootingConfig* ShootingConfig; // 0x40
		::RPG::Client::LittleGame::FlipConfig* FlipConfig; // 0x48
		::RPG::Client::LittleGame::OperationConfig* AwardAndTagetConfig; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::MovieEnemyConfig*>* EnemyConfigList; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PlacementGroupConfig*>* EnemyGroupConfigList; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PresetConfig*>* PresetConfigList; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PresetGroupConfig*>* PresetGroupConfigList; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* PresetRailList; // 0x78
		::System::Single GenEnemyOppositeRate; // 0x80
		::RPG::Client::LittleGame::MoviePlayerConfig* PlayerConfig; // 0x88
		::RPG::Client::LittleGame::MovieEnemyConfig* FinishLineConfig; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::BackgroundLayerConfig*>* BackgroundLayerConfigList; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMELEVELCONFIG__CTOR_OFFSET))(this);
		}
	};
}
