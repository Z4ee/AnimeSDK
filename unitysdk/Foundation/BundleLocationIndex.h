#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BundleLocationIndex_TypeDefinitionIndex = 7870;

	enum class BundleLocationIndex : ::System::Byte
	{
		None = 0x0,
		InBuildBundle = 0x4,
		PersistentBundle = 0x3,
		InBuildBlock = 0x2,
		PersistentBlock = 0x1,
	};
}
