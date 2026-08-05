#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BundleLocation_TypeDefinitionIndex = 8409;

	enum class BundleLocation : ::System::Byte
	{
		Persistent = 0x0,
		NotExists = 0x2,
		InBuild = 0x1,
	};
}
