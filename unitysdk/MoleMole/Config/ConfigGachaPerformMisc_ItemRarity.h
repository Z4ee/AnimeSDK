#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformMisc_ItemRarity_TypeDefinitionIndex = 63745;

	enum class ConfigGachaPerformMisc_ItemRarity : ::System::Int32
	{
		Unknown = -1,
		B = 2,
		A = 3,
		S = 4,
	};
}
