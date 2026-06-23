#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphNodeConfig_NodeType_TypeDefinitionIndex = 80157;

	enum class PathGraphNodeConfig_NodeType : ::System::Int32
	{
		Spline = 1,
		Connector = 2,
		None = 0,
	};
}
