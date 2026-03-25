#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int REGION_TypeDefinitionIndex = 7088;

	enum class REGION : ::System::Int32
	{
		DEFAULT = 0,
		SG = 1,
		US = 2,
		EU = 3,
	};
}
