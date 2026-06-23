#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BundleLocationIndex_TypeDefinitionIndex = 7769;

	enum class BundleLocationIndex : ::System::Byte
	{
		PersistentBlock = 0x1,
		None = 0x0,
		InBuildBlock = 0x2,
		InBuildBundle = 0x4,
		PersistentBundle = 0x3,
	};
}
