#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionsShowMode_TypeDefinitionIndex = 9681;

	enum class EOptionsShowMode : ::System::Int16
	{
		Challenge = 4,
		Item = 2,
		Normal = 0,
		Card = 3,
		Event = 1,
	};
}
