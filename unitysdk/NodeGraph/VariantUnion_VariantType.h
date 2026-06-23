#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnion_VariantType_TypeDefinitionIndex = 87541;

	enum class VariantUnion_VariantType : ::System::Int32
	{
		String = 6,
		Int32 = 2,
		Float = 4,
		Bool = 1,
		Int64 = 3,
		Nullable = 0,
		Object = 7,
		Double = 5,
	};
}
