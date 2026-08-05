#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PieceChangeStructType_TypeDefinitionIndex = 59276;

	enum class ConfigHollowChessboard_PieceChangeStructType : ::System::Int32
	{
		Ghost = 4,
		BubbleByLight = 3,
		Default = 0,
		TimeRewind = 5,
		BubbleByEvent = 2,
		BubbleByMove = 1,
	};
}
