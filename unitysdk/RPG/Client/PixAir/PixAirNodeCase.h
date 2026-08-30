#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirNodeCase_TypeDefinitionIndex = 78814;

	enum class PixAirNodeCase : ::System::Int32
	{
		None = 0,
		Battle = 12,
		NodeContents = 2,
		Shop = 9,
		Supply = 1,
		EnemyLoot = 14,
		Event = 3,
		UpgradeEquip = 1130,
		BattleSettlement = 1131,
		UpgradeEquipDialog = 1132,
		GameSettlement = 1133,
		Enchant = 1134,
	};
}
