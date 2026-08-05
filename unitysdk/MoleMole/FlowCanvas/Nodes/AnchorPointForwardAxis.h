#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnchorPointForwardAxis_TypeDefinitionIndex = 59175;

	enum class AnchorPointForwardAxis : ::System::Int32
	{
		NegativeAxisX = 2,
		PositiveAxisX = 1,
		None = 0,
		NegativeAxisY = 4,
		PositiveAxisZ = 5,
		NegativeAxisZ = 6,
		PositiveAxisY = 3,
	};
}
