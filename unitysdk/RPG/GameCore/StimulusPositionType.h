#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StimulusPositionType_TypeDefinitionIndex = 23174;

	enum class StimulusPositionType : ::System::Int32
	{
		Owner = 0,
		Target = 1,
	};
}
