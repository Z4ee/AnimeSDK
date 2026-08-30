#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int FadingConsequenceClass_TypeDefinitionIndex = 73842;

	enum class FadingConsequenceClass : ::System::Int32
	{
		Transition = 0,
		VisibleShow = 1,
		HideVisualOnly = 2,
		HideWithRelease = 3,
		HideToPreload = 4,
	};
}
