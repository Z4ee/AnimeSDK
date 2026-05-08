#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BundleType_TypeDefinitionIndex = 8065;

	enum class BundleType : ::System::Byte
	{
		Bundle = 0x1,
		Block = 0x0,
	};
}
