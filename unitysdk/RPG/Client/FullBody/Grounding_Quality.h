#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounding_Quality_TypeDefinitionIndex = 68345;

	enum class Grounding_Quality : ::System::Int32
	{
		Fastest = 0,
		Simple = 1,
		Best = 2,
		Custom = 3,
	};
}
