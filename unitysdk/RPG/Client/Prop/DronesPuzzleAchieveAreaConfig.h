#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DronesPuzzleAreaConfig.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesPuzzleAchieveAreaConfig_TypeDefinitionIndex = 78100;

	struct alignas(8) DronesPuzzleAchieveAreaConfig
	{
		::System::UInt32 questID; // 0x10
		::RPG::Client::Prop::DronesPuzzleAreaConfig areaConfig; // 0x18
	};
}
