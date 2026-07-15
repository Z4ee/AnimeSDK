#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NumBarSubType_TypeDefinitionIndex = 23783;

	enum class NumBarSubType : ::System::Int32
	{
		NotShow = 0,
		Fraction = 1,
		PureNum = 2,
		Percent = 3,
	};
}
