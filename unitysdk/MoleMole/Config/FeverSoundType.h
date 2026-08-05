#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverSoundType_TypeDefinitionIndex = 86492;

	enum class FeverSoundType : ::System::Int32
	{
		EnterFeverMode = 3,
		LevelUp = 1,
		MaxLevel = 0,
		LevelDown = 2,
		ExitFeverMode = 4,
	};
}
