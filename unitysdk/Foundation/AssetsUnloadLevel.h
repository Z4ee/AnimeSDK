#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetsUnloadLevel_TypeDefinitionIndex = 8195;

	enum class AssetsUnloadLevel : ::System::Byte
	{
		None = 0x2,
		All = 0x0,
		ExceptBoot = 0x1,
	};
}
