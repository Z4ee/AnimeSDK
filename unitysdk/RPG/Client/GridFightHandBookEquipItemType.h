#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandBookEquipItemType_TypeDefinitionIndex = 61971;

	enum class GridFightHandBookEquipItemType : ::System::Int32
	{
		Basic = 0,
		Craftable = 1,
		Radiant = 2,
		Emblem = 3,
		Special = 4,
		Consumable = 5,
	};
}
