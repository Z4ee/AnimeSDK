#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVSwitchReason_TypeDefinitionIndex = 59222;

	enum class ConfigHollowChessboard_BigTVSwitchReason : ::System::Int32
	{
		BigToSmallAndSink = 4,
		None = 0,
		SmallToBig = 2,
		BigToSmall = 1,
		SmallToBigAndRise = 3,
	};
}
