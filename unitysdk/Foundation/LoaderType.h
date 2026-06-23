#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LoaderType_TypeDefinitionIndex = 7792;

	enum class LoaderType : ::System::Int32
	{
		Parallel = 1,
		Sequential = 0,
	};
}
