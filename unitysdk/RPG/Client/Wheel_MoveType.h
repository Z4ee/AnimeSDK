#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Wheel_MoveType_TypeDefinitionIndex = 67603;

	enum class Wheel_MoveType : ::System::Int32
	{
		UVOffset = 0,
		UVRotate = 1,
		TransRotate = 2,
	};
}
