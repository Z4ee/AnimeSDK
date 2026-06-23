#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionIconMode_TypeDefinitionIndex = 14419;

	enum class EOptionIconMode : ::System::Int16
	{
		EnumCount = 4,
		Reduce = 3,
		Replace = 2,
		Add = 1,
		Single = 0,
	};
}
