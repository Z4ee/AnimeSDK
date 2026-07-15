#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelTeamSelectorType_TypeDefinitionIndex = 15283;

	enum class ChimeraDuelTeamSelectorType : ::System::Int32
	{
		None = 0,
		AbsoluteAlly = 1,
		AbsoluteEnemy = 2,
		RelativeAlly = 3,
		RelativeEnemy = 4,
		EventSource = 5,
	};
}
