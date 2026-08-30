#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TransformInterpolateMode_TypeDefinitionIndex = 76066;

	enum class TransformInterpolateMode : ::System::Int32
	{
		Lerp = 0,
		Cut = 1,
	};
}
