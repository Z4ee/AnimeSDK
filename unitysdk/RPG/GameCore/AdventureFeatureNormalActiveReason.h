#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureFeatureNormalActiveReason_TypeDefinitionIndex = 54483;

	enum class AdventureFeatureNormalActiveReason : ::System::Int32
	{
		Normal = 0,
		MuteLevelChange = 1,
	};
}
