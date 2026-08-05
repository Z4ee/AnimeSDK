#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCameraMoveNode_ChessboardCameraMoveType_TypeDefinitionIndex = 58670;

	enum class ConfigChessboardCameraMoveNode_ChessboardCameraMoveType : ::System::Int32
	{
		MoveToStart = 0,
		RelativePosition = 8,
		MoveToPlayer = 7,
		DesignatedSpot = 3,
		StretchBackWards = 9,
		Stretch = 4,
		PredefinedAnim = 5,
		MoveToCenter = 6,
		WorkFirst = 1,
		WorkLast = 2,
		StretchToPresetBound = 10,
	};
}
