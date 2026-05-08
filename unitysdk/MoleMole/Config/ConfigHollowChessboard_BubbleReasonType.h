#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BubbleReasonType_TypeDefinitionIndex = 43461;

	enum class ConfigHollowChessboard_BubbleReasonType : ::System::Int32
	{
		None = 6,
		TimeRewindRise = 3,
		TimeRewind = 2,
		RepairExit = 5,
		RepairEnter = 4,
		Move = 0,
		Event = 1,
	};
}
