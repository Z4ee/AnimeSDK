#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnion_VariantType_TypeDefinitionIndex = 47575;

	enum class VariantUnion_VariantType : ::System::Int32
	{
		Int32 = 2,
		Int64 = 3,
		Float = 4,
		Bool = 1,
		Object = 7,
		String = 6,
		Nullable = 0,
		Double = 5,
	};
}
