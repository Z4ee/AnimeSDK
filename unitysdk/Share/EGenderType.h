#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EGenderType_TypeDefinitionIndex = 16477;

	enum class EGenderType : ::System::Int16
	{
		Male = 1,
		Female = 2,
		Unisex = 0,
	};
}
