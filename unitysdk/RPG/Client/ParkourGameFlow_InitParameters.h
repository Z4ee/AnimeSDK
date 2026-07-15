#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameFlow_InitParameters_TypeDefinitionIndex = 59094;

	struct alignas(4) ParkourGameFlow_InitParameters
	{
		::System::UInt32 StartLevelID; // 0x10
		::System::UInt32 LevelGroupID; // 0x14
	};
}
