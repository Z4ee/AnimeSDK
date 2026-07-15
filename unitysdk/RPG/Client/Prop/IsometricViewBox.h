#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int IsometricViewBox_TypeDefinitionIndex = 74687;

	enum class IsometricViewBox : ::System::Int32
	{
		None = 0,
		Side1Trigger = 1,
		Side2Trigger = 2,
		Side1To = 3,
		Side2To = 4,
		Side1Except = 5,
		Side2Except = 6,
		Side1From = 7,
		Side2From = 8,
	};
}
