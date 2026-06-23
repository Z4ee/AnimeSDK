#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCameraMoveNode_ChessboardCameraMoveType_TypeDefinitionIndex = 59762;

	enum class ConfigChessboardCameraMoveNode_ChessboardCameraMoveType : ::System::Int32
	{
		WorkLast = 2,
		WorkFirst = 1,
		DesignatedSpot = 3,
		StretchBackWards = 9,
		MoveToPlayer = 7,
		PredefinedAnim = 5,
		StretchToPresetBound = 10,
		RelativePosition = 8,
		MoveToStart = 0,
		Stretch = 4,
		MoveToCenter = 6,
	};
}
