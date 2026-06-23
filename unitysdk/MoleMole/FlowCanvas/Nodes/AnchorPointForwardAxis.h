#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnchorPointForwardAxis_TypeDefinitionIndex = 80787;

	enum class AnchorPointForwardAxis : ::System::Int32
	{
		NegativeAxisY = 4,
		NegativeAxisX = 2,
		None = 0,
		NegativeAxisZ = 6,
		PositiveAxisZ = 5,
		PositiveAxisY = 3,
		PositiveAxisX = 1,
	};
}
