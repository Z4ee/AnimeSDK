#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::SequentialPanelContainer
{
	inline static constexpr unsigned int Direction_TypeDefinitionIndex = 61462;

	enum class Direction : ::System::Int32
	{
		LeftToRight = 0,
		RightToLeft = 1,
	};
}
