#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphState_TypeDefinitionIndex = 55273;

	enum class LevelGraphState : ::System::Int32
	{
		Unknow = 0,
		Init = 1,
		Ready = 2,
		Executing = 3,
		Finish = 4,
	};
}
