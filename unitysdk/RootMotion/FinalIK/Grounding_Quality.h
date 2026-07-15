#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_Quality_TypeDefinitionIndex = 42686;

	enum class Grounding_Quality : ::System::Int32
	{
		Fastest = 0,
		Best = 2,
	};
}
