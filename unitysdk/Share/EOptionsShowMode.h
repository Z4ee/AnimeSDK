#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionsShowMode_TypeDefinitionIndex = 11398;

	enum class EOptionsShowMode : ::System::Int16
	{
		Item = 2,
		Challenge = 4,
		Normal = 0,
		Event = 1,
		Card = 3,
	};
}
