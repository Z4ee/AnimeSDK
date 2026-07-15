#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int QteCatchGhostNotify_TypeDefinitionIndex = 23733;

	enum class QteCatchGhostNotify : ::System::Int32
	{
		OpenTreasureBox = 0,
		EscapeStart = 1,
		EscapeFinish = 2,
		FailFinish = 3,
		SuccessFinish = 4,
		AllFinish = 5,
	};
}
