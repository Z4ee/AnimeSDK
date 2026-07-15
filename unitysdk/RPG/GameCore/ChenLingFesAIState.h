#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesAIState_TypeDefinitionIndex = 17698;

	enum class ChenLingFesAIState : ::System::Int32
	{
		Wait = 0,
		Turn = 1,
		Move = 2,
	};
}
