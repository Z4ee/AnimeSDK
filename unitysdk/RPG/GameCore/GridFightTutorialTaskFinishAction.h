#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTutorialTaskFinishAction_TypeDefinitionIndex = 13152;

	enum class GridFightTutorialTaskFinishAction : ::System::Int32
	{
		None = 0,
		AddBonus = 1,
		AddCoinTo = 2,
		TriggerSupply = 3,
	};
}
