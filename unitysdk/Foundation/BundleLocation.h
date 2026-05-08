#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BundleLocation_TypeDefinitionIndex = 7869;

	enum class BundleLocation : ::System::Byte
	{
		NotExists = 0x2,
		InBuild = 0x1,
		Persistent = 0x0,
	};
}
