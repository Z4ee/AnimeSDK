#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetsUnloadLevel_TypeDefinitionIndex = 8385;

	enum class AssetsUnloadLevel : ::System::Byte
	{
		ExceptBoot = 0x1,
		None = 0x2,
		All = 0x0,
	};
}
