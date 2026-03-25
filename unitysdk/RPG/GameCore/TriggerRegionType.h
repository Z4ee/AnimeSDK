#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRegionType_TypeDefinitionIndex = 10124;

	enum class TriggerRegionType : ::System::Int32
	{
		ColliderRegion = 1,
		GeometryRegion = 2,
	};
}
