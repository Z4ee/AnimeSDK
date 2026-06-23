#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BundleType_TypeDefinitionIndex = 8150;

	enum class BundleType : ::System::Byte
	{
		Block = 0x0,
		Bundle = 0x1,
	};
}
