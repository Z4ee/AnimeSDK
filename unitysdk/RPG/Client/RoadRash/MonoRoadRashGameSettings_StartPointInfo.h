#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameSettings_StartPointInfo_TypeDefinitionIndex = 75460;

	struct alignas(8) MonoRoadRashGameSettings_StartPointInfo
	{
		::RPG::Client::RoadRash::MonoRoadRashGameRoad* Road; // 0x10
		::System::Single Distance; // 0x18
		::System::Single Offset; // 0x1C
	};
}
