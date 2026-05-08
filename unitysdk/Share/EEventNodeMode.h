#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventNodeMode_TypeDefinitionIndex = 16054;

	enum class EEventNodeMode : ::System::Int16
	{
		OnlyServer = 1,
		OnlyClient = 0,
		EnumCount = 3,
		ClientRequest = 2,
	};
}
