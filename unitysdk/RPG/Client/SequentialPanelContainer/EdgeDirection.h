#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::SequentialPanelContainer
{
	inline static constexpr unsigned int EdgeDirection_TypeDefinitionIndex = 61466;

	enum class EdgeDirection : ::System::Int32
	{
		Top = 0,
		Bottom = 1,
		Left = 2,
		Right = 3,
		TopLeft = 4,
		TopRight = 5,
		BottomLeft = 6,
		BottomRight = 7,
	};
}
