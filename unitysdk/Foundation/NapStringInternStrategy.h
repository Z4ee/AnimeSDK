#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int NapStringInternStrategy_TypeDefinitionIndex = 7940;

	enum class NapStringInternStrategy : ::System::Int32
	{
		LRU = 2,
		Simple = 1,
		Disable = 0,
	};
}
