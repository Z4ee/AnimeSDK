#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioGameState_TypeDefinitionIndex = 15728;

	enum class AudioGameState : ::System::Int32
	{
		Unknow = 0,
		Adventure = 1,
		Battle = 3,
		CutScene = 2,
		Menu = 6,
		JukeBox = 7,
	};
}
