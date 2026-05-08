#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphNodeConfig_NodeType_TypeDefinitionIndex = 52638;

	enum class PathGraphNodeConfig_NodeType : ::System::Int32
	{
		Connector = 2,
		Spline = 1,
		None = 0,
	};
}
