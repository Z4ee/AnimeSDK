#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ERelicRecommendDataType_TypeDefinitionIndex = 63821;

	enum class ERelicRecommendDataType : ::System::Int32
	{
		BigData = 1,
		ConfigData = 2,
	};
}
