#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BubbleReasonType_TypeDefinitionIndex = 64398;

	enum class ConfigHollowChessboard_BubbleReasonType : ::System::Int32
	{
		TimeRewind = 2,
		None = 6,
		TimeRewindRise = 3,
		RepairExit = 5,
		Move = 0,
		RepairEnter = 4,
		Event = 1,
	};
}
