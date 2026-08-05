#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TrafficLightType_TypeDefinitionIndex = 78396;

	enum class TrafficLightType : ::System::Int32
	{
		Red = 0,
		Green = 3,
		None = 5,
		Red_Breath = 1,
		Green_Breath = 2,
		Yellow = 4,
	};
}
