#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubeGroup_TypeDefinitionIndex = 64284;

	enum class RubikCubeGroup : ::System::Int32
	{
		A1 = 0,
		A2 = 1,
		A3 = 2,
		B1 = 3,
		B2 = 4,
		B3 = 5,
		C1 = 6,
		C2 = 7,
		C3 = 8,
		None = 9,
	};
}
