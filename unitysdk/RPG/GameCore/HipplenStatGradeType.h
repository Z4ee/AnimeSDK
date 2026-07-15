#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenStatGradeType_TypeDefinitionIndex = 10041;

	enum class HipplenStatGradeType : ::System::Int32
	{
		F = 0,
		E = 1,
		D = 2,
		C = 3,
		B = 4,
		A = 5,
		S = 6,
		SS = 7,
		SSS = 8,
	};
}
