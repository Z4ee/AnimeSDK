#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int RoadRashSpeedData_TypeDefinitionIndex = 80345;

	struct alignas(4) RoadRashSpeedData
	{
		::System::Single Speed; // 0x10
		::System::Single MaxSpeed; // 0x14
	};
}
