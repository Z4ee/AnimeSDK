#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaccoonStateType_TypeDefinitionIndex = 11026;

	enum class RaccoonStateType : ::System::Int32
	{
		Unknown = 0,
		Bad = 1,
		Good = 2,
		Great = 3,
		Excellent = 4,
	};
}
