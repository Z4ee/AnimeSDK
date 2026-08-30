#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::RoadRash { class MonoRoadRashGameCar; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameSettings_CarInfo_TypeDefinitionIndex = 75459;

	struct alignas(8) MonoRoadRashGameSettings_CarInfo
	{
		::RPG::Client::RoadRash::MonoRoadRashGameCar* Car; // 0x10
	};
}
