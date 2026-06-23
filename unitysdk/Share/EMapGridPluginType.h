#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMapGridPluginType_TypeDefinitionIndex = 9694;

	enum class EMapGridPluginType : ::System::Int16
	{
		SetPathLayer = 3,
		MainPathBendControl = 1,
		RebuildStartEnd = 2,
		None = 0,
	};
}
