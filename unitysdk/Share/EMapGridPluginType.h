#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMapGridPluginType_TypeDefinitionIndex = 14277;

	enum class EMapGridPluginType : ::System::Int16
	{
		SetPathLayer = 3,
		None = 0,
		RebuildStartEnd = 2,
		MainPathBendControl = 1,
	};
}
