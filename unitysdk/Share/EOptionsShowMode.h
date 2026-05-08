#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionsShowMode_TypeDefinitionIndex = 11612;

	enum class EOptionsShowMode : ::System::Int16
	{
		Event = 1,
		Normal = 0,
		Item = 2,
		Challenge = 4,
		Card = 3,
	};
}
