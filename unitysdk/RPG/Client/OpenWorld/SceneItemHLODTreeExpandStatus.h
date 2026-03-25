#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SceneItemHLODTreeExpandStatus_TypeDefinitionIndex = 60515;

	enum class SceneItemHLODTreeExpandStatus : ::System::Int32
	{
		None = 0,
		Expand = 1,
		Shrink = 2,
		ExpandToShrink = 3,
		ShrinkToExpand = 4,
		Disable = 5,
	};
}
