#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionIconMode_TypeDefinitionIndex = 16131;

	enum class EOptionIconMode : ::System::Int16
	{
		Add = 1,
		Single = 0,
		Replace = 2,
		EnumCount = 4,
		Reduce = 3,
	};
}
