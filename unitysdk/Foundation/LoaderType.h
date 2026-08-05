#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LoaderType_TypeDefinitionIndex = 7903;

	enum class LoaderType : ::System::Int32
	{
		Sequential = 0,
		Parallel = 1,
	};
}
