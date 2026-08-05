#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EGenderType_TypeDefinitionIndex = 9099;

	enum class EGenderType : ::System::Int16
	{
		Female = 2,
		Male = 1,
		Unisex = 0,
	};
}
