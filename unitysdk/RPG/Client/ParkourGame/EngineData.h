#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int EngineData_TypeDefinitionIndex = 60788;

	struct alignas(4) EngineData
	{
		::System::Single Power; // 0x10
		::System::Single Force; // 0x14
		::System::Single ForceAccel; // 0x18
		::System::Single ForceDecel; // 0x1C
		::System::Single MaxForce; // 0x20
		::System::Single MinForce; // 0x24
	};
}
