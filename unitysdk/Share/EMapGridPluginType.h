#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMapGridPluginType_TypeDefinitionIndex = 11204;

	enum class EMapGridPluginType : ::System::Int16
	{
		RebuildStartEnd = 2,
		MainPathBendControl = 1,
		SetPathLayer = 3,
		None = 0,
	};
}
