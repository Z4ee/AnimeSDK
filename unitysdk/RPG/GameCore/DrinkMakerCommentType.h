#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCommentType_TypeDefinitionIndex = 12696;

	enum class DrinkMakerCommentType : ::System::Int32
	{
		Unsatisfactory = 1,
		Satisfactory = 2,
	};
}
