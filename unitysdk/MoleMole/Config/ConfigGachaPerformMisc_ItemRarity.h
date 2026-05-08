#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformMisc_ItemRarity_TypeDefinitionIndex = 43327;

	enum class ConfigGachaPerformMisc_ItemRarity : ::System::Int32
	{
		S = 4,
		B = 2,
		Unknown = -1,
		A = 3,
	};
}
