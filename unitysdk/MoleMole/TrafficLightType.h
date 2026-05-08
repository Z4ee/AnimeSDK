#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TrafficLightType_TypeDefinitionIndex = 42286;

	enum class TrafficLightType : ::System::Int32
	{
		Green_Breath = 2,
		None = 5,
		Green = 3,
		Red_Breath = 1,
		Yellow = 4,
		Red = 0,
	};
}
