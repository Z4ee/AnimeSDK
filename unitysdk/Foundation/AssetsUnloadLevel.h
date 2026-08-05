#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetsUnloadLevel_TypeDefinitionIndex = 7952;

	enum class AssetsUnloadLevel : ::System::Byte
	{
		All = 0x0,
		ExceptBoot = 0x1,
		None = 0x2,
	};
}
