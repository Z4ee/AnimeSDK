#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnchorPointForwardAxis_TypeDefinitionIndex = 75758;

	enum class AnchorPointForwardAxis : ::System::Int32
	{
		PositiveAxisZ = 5,
		NegativeAxisX = 2,
		NegativeAxisY = 4,
		None = 0,
		PositiveAxisX = 1,
		PositiveAxisY = 3,
		NegativeAxisZ = 6,
	};
}
