#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleTargetType_TypeDefinitionIndex = 24318;

	enum class MarbleTargetType : ::System::Int32
	{
		None = 0,
		DeadSeal = 1,
	};
}
