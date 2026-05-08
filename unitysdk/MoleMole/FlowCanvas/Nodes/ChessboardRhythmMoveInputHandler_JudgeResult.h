#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardRhythmMoveInputHandler_JudgeResult_TypeDefinitionIndex = 66339;

	enum class ChessboardRhythmMoveInputHandler_JudgeResult : ::System::Int32
	{
		Miss = 2,
		Normal = 1,
		Perfect = 0,
	};
}
