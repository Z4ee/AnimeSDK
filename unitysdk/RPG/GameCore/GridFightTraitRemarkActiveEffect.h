#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitRemarkActiveEffect_TypeDefinitionIndex = 13162;

	enum class GridFightTraitRemarkActiveEffect : ::System::Int32
	{
		None = 0,
		GreyToHighlight = 1,
		HideToGrey = 2,
		DefaultToHighlight = 3,
		GreyToDefault = 4,
		Default = 5,
		HideToHighlight = 6,
		GreyToHide = 7,
	};
}
