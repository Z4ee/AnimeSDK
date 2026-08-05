#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleSensorOutline_TypeDefinitionIndex = 44974;

	struct alignas(4) VehicleSensorOutline
	{
		::System::Single width; // 0x10
		::System::Single length; // 0x14
	};
}
