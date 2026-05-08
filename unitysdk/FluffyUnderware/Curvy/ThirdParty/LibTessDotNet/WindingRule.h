#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int WindingRule_TypeDefinitionIndex = 25943;

	enum class WindingRule : ::System::Int32
	{
		EvenOdd = 0,
		NonZero = 1,
		Positive = 2,
		Negative = 3,
		AbsGeqTwo = 4,
	};
}
