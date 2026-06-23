#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStarRandomPositionByAnchorTask_State_TypeDefinitionIndex = 44751;

	enum class LDStarRandomPositionByAnchorTask_State : ::System::Int32
	{
		Runing = 1,
		Stop = 0,
		Pause = 2,
	};
}
