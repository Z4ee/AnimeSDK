#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ELookAtTargetSource_TypeDefinitionIndex = 54739;

	enum class ELookAtTargetSource : ::System::Int32
	{
		Unknown = 0,
		Trigger = 1,
		Municipal = 2,
		Dialog = 3,
		LevelGraph = 4,
		AI = 5,
		Max = 6,
	};
}
