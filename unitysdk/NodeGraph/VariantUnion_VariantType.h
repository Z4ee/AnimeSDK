#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnion_VariantType_TypeDefinitionIndex = 64410;

	enum class VariantUnion_VariantType : ::System::Int32
	{
		Int64 = 3,
		Bool = 1,
		Object = 7,
		String = 6,
		Int32 = 2,
		Float = 4,
		Nullable = 0,
		Double = 5,
	};
}
