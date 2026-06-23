#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverSoundType_TypeDefinitionIndex = 79375;

	enum class FeverSoundType : ::System::Int32
	{
		MaxLevel = 0,
		ExitFeverMode = 4,
		EnterFeverMode = 3,
		LevelDown = 2,
		LevelUp = 1,
	};
}
