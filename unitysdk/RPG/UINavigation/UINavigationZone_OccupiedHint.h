#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationZone_OccupiedHint_TypeDefinitionIndex = 52042;

	enum class UINavigationZone_OccupiedHint : ::System::Int32
	{
		None = 0,
		Submit = 1,
		Cancel = 2,
	};
}
