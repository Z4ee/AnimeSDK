#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int NapStringInternStrategy_TypeDefinitionIndex = 8214;

	enum class NapStringInternStrategy : ::System::Int32
	{
		Simple = 1,
		Disable = 0,
		LRU = 2,
	};
}
