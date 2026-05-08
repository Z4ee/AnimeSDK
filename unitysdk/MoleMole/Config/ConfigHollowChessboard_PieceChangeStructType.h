#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PieceChangeStructType_TypeDefinitionIndex = 43425;

	enum class ConfigHollowChessboard_PieceChangeStructType : ::System::Int32
	{
		Ghost = 4,
		TimeRewind = 5,
		BubbleByMove = 1,
		BubbleByLight = 3,
		BubbleByEvent = 2,
		Default = 0,
	};
}
