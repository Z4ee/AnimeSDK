#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TreasureDungeonBaseGrid.h"

namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TreasureDungeonEnemyConfigRow; }

#define RPG_CLIENT_TREASUREDUNGEONMONSTERGRID_CANKILL_OFFSET UNITYSDK_OFFSET(0xCAEAF80)
#define RPG_CLIENT_TREASUREDUNGEONMONSTERGRID_GET_ENEMYROW_OFFSET UNITYSDK_OFFSET(0xCAEAFF0)
#define RPG_CLIENT_TREASUREDUNGEONMONSTERGRID_GET_ISELITE_OFFSET UNITYSDK_OFFSET(0xCAEB0C0)
#define RPG_CLIENT_TREASUREDUNGEONMONSTERGRID_GET_MONSTERSTAGEROW_OFFSET UNITYSDK_OFFSET(0xCAEB0E0)
#define RPG_CLIENT_TREASUREDUNGEONMONSTERGRID__CTOR_OFFSET UNITYSDK_OFFSET(0xCAEB160)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonMonsterGrid_TypeDefinitionIndex = 63813;

	class TreasureDungeonMonsterGrid : public ::RPG::Client::TreasureDungeonBaseGrid
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMONSTERGRID__CTOR_OFFSET))(this);
		}

		::System::Boolean CanKill(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMONSTERGRID_CANKILL_OFFSET))(this, a1);
		}

		::RPG::GameCore::TreasureDungeonEnemyConfigRow* get_EnemyRow()
		{
			return ((::RPG::GameCore::TreasureDungeonEnemyConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMONSTERGRID_GET_ENEMYROW_OFFSET))(this);
		}

		::System::Boolean get_IsElite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMONSTERGRID_GET_ISELITE_OFFSET))(this);
		}

		::RPG::GameCore::StageRow* get_MonsterStageRow()
		{
			return ((::RPG::GameCore::StageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMONSTERGRID_GET_MONSTERSTAGEROW_OFFSET))(this);
		}
	};
}
