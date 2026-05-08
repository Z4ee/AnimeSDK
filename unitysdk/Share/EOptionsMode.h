#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionsMode_TypeDefinitionIndex = 11572;

	enum class EOptionsMode : ::System::Int16
	{
		Normal = 0,
		EnumCount = 3,
		SelectByGroup = 1,
		RandomByNum = 2,
	};
}
