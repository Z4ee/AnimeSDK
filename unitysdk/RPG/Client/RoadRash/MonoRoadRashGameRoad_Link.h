#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameRoad_Link_TypeDefinitionIndex = 75448;

	struct alignas(8) MonoRoadRashGameRoad_Link
	{
		::System::UInt32 LinkPointIndex; // 0x10
		::System::UInt32 LinkRoadPointIndex; // 0x14
		::RPG::Client::RoadRash::MonoRoadRashGameRoad* Road; // 0x18
	};
}
