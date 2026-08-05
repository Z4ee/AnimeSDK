#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionsMode_TypeDefinitionIndex = 18154;

	enum class EOptionsMode : ::System::Int16
	{
		Normal = 0,
		SelectByGroup = 1,
		RandomByNum = 2,
		EnumCount = 3,
	};
}
