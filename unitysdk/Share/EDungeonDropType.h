#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EDungeonDropType_TypeDefinitionIndex = 12120;

	enum class EDungeonDropType : ::System::Byte
	{
		Repeat = 0x2,
		Reduce = 0x1,
	};
}
