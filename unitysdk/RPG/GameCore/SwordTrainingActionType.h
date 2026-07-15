#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingActionType_TypeDefinitionIndex = 11957;

	enum class SwordTrainingActionType : ::System::Int32
	{
		None = 0,
		Train = 1,
		Travel = 2,
	};
}
