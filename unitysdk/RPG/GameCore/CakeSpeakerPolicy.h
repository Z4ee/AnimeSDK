#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeSpeakerPolicy_TypeDefinitionIndex = 12439;

	enum class CakeSpeakerPolicy : ::System::Int32
	{
		Singlelnstance = 0,
		RoundRobin = 1,
	};
}
