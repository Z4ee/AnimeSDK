#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleMono_AnimStateLength_TypeDefinitionIndex = 55771;

	struct alignas(4) VehicleMono_AnimStateLength
	{
		::System::Int32 hash; // 0x10
		::System::Single length; // 0x14
	};
}
