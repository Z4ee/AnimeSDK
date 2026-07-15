#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkLeaveType_TypeDefinitionIndex = 15215;

	enum class ChimeraWorkLeaveType : ::System::Int32
	{
		None = 0,
		Dither = 1,
		Break = 2,
		Recover = 3,
		WalkOut = 4,
		OpenBox = 5,
	};
}
