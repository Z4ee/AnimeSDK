#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PauseDialogTabEnum_TypeDefinitionIndex = 66970;

	enum class PauseDialogTabEnum : ::System::Int32
	{
		None = 0,
		Stage = 1,
		Custom = 2,
		Fate = 3,
		Audio = 4,
		Hotkeys = 5,
		OtherSetting = 6,
	};
}
