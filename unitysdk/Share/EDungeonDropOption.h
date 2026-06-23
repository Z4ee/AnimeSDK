#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EDungeonDropOption_TypeDefinitionIndex = 13220;

	enum class EDungeonDropOption : ::System::Byte
	{
		Weight = 0x2,
		Random = 0x1,
	};
}
