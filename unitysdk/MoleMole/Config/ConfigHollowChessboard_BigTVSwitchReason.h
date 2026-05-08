#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVSwitchReason_TypeDefinitionIndex = 43431;

	enum class ConfigHollowChessboard_BigTVSwitchReason : ::System::Int32
	{
		BigToSmallAndSink = 4,
		SmallToBig = 2,
		SmallToBigAndRise = 3,
		None = 0,
		BigToSmall = 1,
	};
}
