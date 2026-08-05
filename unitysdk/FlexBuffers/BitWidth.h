#pragma once
#include "unitysdk/unitysdk.h"

namespace FlexBuffers
{
	inline static constexpr unsigned int BitWidth_TypeDefinitionIndex = 6740;

	enum class BitWidth : ::System::Byte
	{
		Width8 = 0x0,
		Width16 = 0x1,
		Width32 = 0x2,
		Width64 = 0x3,
	};
}
