#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int TrackballAttribute_Mode_TypeDefinitionIndex = 29372;

	enum class TrackballAttribute_Mode : ::System::Int32
	{
		None = 0,
		Lift = 1,
		Gamma = 2,
		Gain = 3,
		RPGCustomize = 4,
	};
}
