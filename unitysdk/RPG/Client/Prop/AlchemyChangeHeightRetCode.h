#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AlchemyChangeHeightRetCode_TypeDefinitionIndex = 74245;

	enum class AlchemyChangeHeightRetCode : ::System::Int32
	{
		Success = 0,
		ErrorUnknown = 1,
		ErrorBadRatio = 2,
	};
}
