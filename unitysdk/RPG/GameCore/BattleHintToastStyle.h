#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleHintToastStyle_TypeDefinitionIndex = 21568;

	enum class BattleHintToastStyle : ::System::Int32
	{
		Default = 0,
		Alert = 1,
	};
}
