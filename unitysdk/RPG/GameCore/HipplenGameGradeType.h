#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameGradeType_TypeDefinitionIndex = 10042;

	enum class HipplenGameGradeType : ::System::Int32
	{
		B = 0,
		A = 1,
		S = 2,
	};
}
