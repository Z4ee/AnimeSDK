#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SceneItemHLODStreamingLayer_1_HLODTransitionKind_TypeDefinitionIndex = 73716;

	enum class SceneItemHLODStreamingLayer_1_HLODTransitionKind : ::System::Int32
	{
		ShrinkToExpand = 0,
		ExpandToShrink = 1,
	};
}
