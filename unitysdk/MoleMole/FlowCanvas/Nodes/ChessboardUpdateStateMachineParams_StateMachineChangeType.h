#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardUpdateStateMachineParams_StateMachineChangeType_TypeDefinitionIndex = 62087;

	enum class ChessboardUpdateStateMachineParams_StateMachineChangeType : ::System::Int32
	{
		Immediate = 0,
		Delay = 2,
		Bubble = 1,
	};
}
