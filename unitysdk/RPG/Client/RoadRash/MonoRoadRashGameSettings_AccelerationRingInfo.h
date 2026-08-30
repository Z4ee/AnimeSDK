#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameSettings_AccelerationRingInfo_TypeDefinitionIndex = 75457;

	struct alignas(8) MonoRoadRashGameSettings_AccelerationRingInfo
	{
		::RPG::Client::RoadRash::MonoRoadRashGameRoad* Road; // 0x10
		::System::Single Distance; // 0x18
	};
}
