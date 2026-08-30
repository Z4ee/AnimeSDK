#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleHintToastStyle_TypeDefinitionIndex = 24460;

	enum class BattleHintToastStyle : ::System::Int32
	{
		Default = 0,
		Alert = 1,
		PhaseChange = 2,
		Warning = 3,
		Status = 4,
	};
}
