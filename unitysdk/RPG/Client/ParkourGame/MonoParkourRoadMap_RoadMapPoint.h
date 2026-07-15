#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoadMap_RoadMapPoint_TypeDefinitionIndex = 70768;

	struct alignas(8) MonoParkourRoadMap_RoadMapPoint
	{
		::System::String* RoadUniqueName; // 0x10
		::System::Single Distance; // 0x18
	};
}
