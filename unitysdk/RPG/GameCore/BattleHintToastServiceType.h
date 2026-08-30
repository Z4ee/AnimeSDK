#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleHintToastServiceType_TypeDefinitionIndex = 24461;

	enum class BattleHintToastServiceType : ::System::Int32
	{
		DisplayOnce = 0,
		ShowInWaitAction = 1,
	};
}
