#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardRhythmMoveInputHandler_JudgeResult_TypeDefinitionIndex = 80434;

	enum class ChessboardRhythmMoveInputHandler_JudgeResult : ::System::Int32
	{
		Normal = 1,
		Miss = 2,
		Perfect = 0,
	};
}
