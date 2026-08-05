#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EDungeonDropOption_TypeDefinitionIndex = 8913;

	enum class EDungeonDropOption : ::System::Byte
	{
		Random = 0x1,
		Weight = 0x2,
	};
}
