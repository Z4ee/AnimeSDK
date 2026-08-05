#pragma once
#include "unitysdk/unitysdk.h"

namespace FlexBuffers
{
	inline static constexpr unsigned int FlexBuffer_Options_TypeDefinitionIndex = 6744;

	enum class FlexBuffer_Options : ::System::Byte
	{
		None = 0x0,
		ShareKeys = 0x1,
		ShareStrings = 0x2,
		ShareKeyVectors = 0x4,
	};
}
