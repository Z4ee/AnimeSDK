#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int VerifyBy_TypeDefinitionIndex = 7845;

	enum class VerifyBy : ::System::Int32
	{
		Size = 0,
		CRC = 1,
	};
}
