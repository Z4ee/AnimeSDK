#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventNodeMode_TypeDefinitionIndex = 11185;

	enum class EEventNodeMode : ::System::Int16
	{
		ClientRequest = 2,
		OnlyClient = 0,
		EnumCount = 3,
		OnlyServer = 1,
	};
}
