#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingTeamSelectorType_TypeDefinitionIndex = 15089;

	enum class ChenLingTeamSelectorType : ::System::Int32
	{
		RelativeAlly = 0,
		RelativeEnemy = 1,
		AbsoluteAlly = 2,
		AbsoluteEnemy = 3,
	};
}
