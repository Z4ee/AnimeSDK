#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TrafficLightType_TypeDefinitionIndex = 49881;

	enum class TrafficLightType : ::System::Int32
	{
		Red = 0,
		None = 5,
		Yellow = 4,
		Green = 3,
		Green_Breath = 2,
		Red_Breath = 1,
	};
}
