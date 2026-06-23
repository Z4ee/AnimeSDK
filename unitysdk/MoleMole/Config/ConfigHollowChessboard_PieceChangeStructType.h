#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PieceChangeStructType_TypeDefinitionIndex = 64440;

	enum class ConfigHollowChessboard_PieceChangeStructType : ::System::Int32
	{
		Ghost = 4,
		BubbleByMove = 1,
		TimeRewind = 5,
		BubbleByLight = 3,
		Default = 0,
		BubbleByEvent = 2,
	};
}
