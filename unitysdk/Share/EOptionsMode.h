#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionsMode_TypeDefinitionIndex = 11730;

	enum class EOptionsMode : ::System::Int16
	{
		RandomByNum = 2,
		SelectByGroup = 1,
		Normal = 0,
		EnumCount = 3,
	};
}
