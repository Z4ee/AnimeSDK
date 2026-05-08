#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionIconMode_TypeDefinitionIndex = 10513;

	enum class EOptionIconMode : ::System::Int16
	{
		EnumCount = 4,
		Add = 1,
		Reduce = 3,
		Single = 0,
		Replace = 2,
	};
}
