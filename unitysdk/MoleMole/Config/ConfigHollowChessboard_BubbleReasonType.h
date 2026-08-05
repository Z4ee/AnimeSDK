#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BubbleReasonType_TypeDefinitionIndex = 59231;

	enum class ConfigHollowChessboard_BubbleReasonType : ::System::Int32
	{
		Move = 0,
		Event = 1,
		TimeRewind = 2,
		RepairEnter = 4,
		TimeRewindRise = 3,
		None = 6,
		RepairExit = 5,
	};
}
