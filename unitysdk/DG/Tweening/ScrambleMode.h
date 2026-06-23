#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening
{
	inline static constexpr unsigned int ScrambleMode_TypeDefinitionIndex = 27846;

	enum class ScrambleMode : ::System::Int32
	{
		None = 0,
		All = 1,
		Uppercase = 2,
		Lowercase = 3,
		Numerals = 4,
		Custom = 5,
	};
}
