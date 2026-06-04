#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StretchMode_TypeDefinitionIndex = 66013;

	enum class StretchMode : ::System::Int32
	{
		X = 0,
		Y = 1,
		Z = 2,
	};
}
