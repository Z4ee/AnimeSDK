#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NavigateTargetMode_TypeDefinitionIndex = 23598;

	enum class NavigateTargetMode : ::System::Int32
	{
		NavigateToPosition = 0,
		NavigateToEntity = 1,
		AIKnowledge = 2,
		Anchor = 3,
	};
}
