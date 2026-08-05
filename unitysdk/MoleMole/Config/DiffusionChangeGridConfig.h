#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DiffusionChangeGridConfig_TypeDefinitionIndex = 55709;

	struct alignas(4) DiffusionChangeGridConfig
	{
		::System::Single DiffusionDuration; // 0x10
	};
}
