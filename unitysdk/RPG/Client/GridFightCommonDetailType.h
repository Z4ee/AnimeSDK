#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightCommonDetailType_TypeDefinitionIndex = 61955;

	enum class GridFightCommonDetailType : ::System::Int32
	{
		None = 0,
		Role = 1,
		Equip = 2,
		Consumable = 3,
		EquipConfig = 4,
		ConsumableConfig = 5,
		NPC = 6,
		ForgeConfig = 7,
		NPCConfig = 8,
		ShopRole = 9,
		ShopCyrene = 10,
		ShopProjection = 11,
	};
}
