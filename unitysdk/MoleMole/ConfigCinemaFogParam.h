#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCinemaFogParam_TypeDefinitionIndex = 80050;

	struct alignas(4) ConfigCinemaFogParam
	{
		::System::Int32 envIndex; // 0x10
	};
}
