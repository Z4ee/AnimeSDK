#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitLevelGraphFinishMode_TypeDefinitionIndex = 23879;

	enum class WaitLevelGraphFinishMode : ::System::Int32
	{
		FinishOrDispose = 0,
		Finish = 1,
		Dispose = 2,
	};
}
