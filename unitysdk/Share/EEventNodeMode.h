#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventNodeMode_TypeDefinitionIndex = 9598;

	enum class EEventNodeMode : ::System::Int16
	{
		OnlyServer = 1,
		ClientRequest = 2,
		EnumCount = 3,
		OnlyClient = 0,
	};
}
