#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_Quality_TypeDefinitionIndex = 38204;

	enum class Grounding_Quality : ::System::Int32
	{
		Balanced = 3,
		Best = 2,
		Simple = 1,
		Fastest = 0,
	};
}
