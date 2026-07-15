#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBuffRarityType_TypeDefinitionIndex = 11113;

	enum class FateBuffRarityType : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		Rare = 2,
		VeryRare = 3,
		SuperRare = 4,
	};
}
