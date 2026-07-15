#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarblePhaseType_TypeDefinitionIndex = 11465;

	enum class MarblePhaseType : ::System::Int32
	{
		None = 0,
		Group = 1,
		Knockout = 2,
		Championship = 3,
	};
}
