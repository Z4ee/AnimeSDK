#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphTag_TypeDefinitionIndex = 58198;

	enum class PhotoGraphTag : ::System::Int32
	{
		CityTrain = 0,
		Pedestrians = 1,
		Crowd = 2,
	};
}
