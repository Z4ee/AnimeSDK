#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EmissionMode_TypeDefinitionIndex = 70668;

	enum class EmissionMode : ::System::Int32
	{
		Default = 0,
		FourLight = 1,
	};
}
