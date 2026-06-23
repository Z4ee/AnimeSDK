#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int VerifyBy_TypeDefinitionIndex = 7789;

	enum class VerifyBy : ::System::Int32
	{
		CRC = 1,
		Size = 0,
	};
}
