#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmCellData_ElfCellUpdateReason_TypeDefinitionIndex = 60886;

	enum class ElfFarmCellData_ElfCellUpdateReason : ::System::Int32
	{
		Unkonwn = 0,
		None = 1,
		Planted = 2,
		Harvest = 3,
		ExtraHarvest = 4,
	};
}
