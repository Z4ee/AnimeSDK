#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCameraMoveNode_ChessboardCameraMoveType_TypeDefinitionIndex = 63473;

	enum class ConfigChessboardCameraMoveNode_ChessboardCameraMoveType : ::System::Int32
	{
		StretchToPresetBound = 10,
		MoveToCenter = 6,
		DesignatedSpot = 3,
		MoveToPlayer = 7,
		Stretch = 4,
		PredefinedAnim = 5,
		RelativePosition = 8,
		WorkFirst = 1,
		StretchBackWards = 9,
		WorkLast = 2,
		MoveToStart = 0,
	};
}
