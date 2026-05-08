#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverSoundType_TypeDefinitionIndex = 65627;

	enum class FeverSoundType : ::System::Int32
	{
		ExitFeverMode = 4,
		EnterFeverMode = 3,
		MaxLevel = 0,
		LevelDown = 2,
		LevelUp = 1,
	};
}
