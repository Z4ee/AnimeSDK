#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardRhythmMoveInputHandler_JudgeResult_TypeDefinitionIndex = 69827;

	enum class ChessboardRhythmMoveInputHandler_JudgeResult : ::System::Int32
	{
		Perfect = 0,
		Miss = 2,
		Normal = 1,
	};
}
