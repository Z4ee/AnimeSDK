#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StimulusTargetType_TypeDefinitionIndex = 23655;

	enum class StimulusTargetType : ::System::Int32
	{
		None = 0,
		DetectTrotter = 1,
	};
}
