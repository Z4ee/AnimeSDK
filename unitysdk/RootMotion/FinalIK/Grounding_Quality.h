#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_Quality_TypeDefinitionIndex = 38813;

	enum class Grounding_Quality : ::System::Int32
	{
		Simple = 1,
		Balanced = 3,
		Best = 2,
		Fastest = 0,
	};
}
