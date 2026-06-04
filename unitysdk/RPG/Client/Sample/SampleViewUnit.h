#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Sample
{
	inline static constexpr unsigned int SampleViewUnit_TypeDefinitionIndex = 69121;

	enum class SampleViewUnit : ::System::Int32
	{
		Normal = 0,
		KB = 1,
		MB = 2,
	};
}
