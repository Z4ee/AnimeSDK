#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int AttributeOptionsFlags_TypeDefinitionIndex = 28956;

	enum class AttributeOptionsFlags : ::System::Int32
	{
		None = 0,
		Compact = 1,
		Clipboard = 128,
		Zero = 256,
		One = 512,
		Negate = 1024,
		Full = 1920,
		FullCompact = 1921,
	};
}
