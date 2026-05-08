#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_Quality_TypeDefinitionIndex = 36570;

	enum class Grounding_Quality : ::System::Int32
	{
		Fastest = 0,
		Simple = 1,
		Best = 2,
		Balanced = 3,
	};
}
