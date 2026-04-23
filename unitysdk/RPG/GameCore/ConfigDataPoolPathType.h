#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolPathType_TypeDefinitionIndex = 23500;

	enum class ConfigDataPoolPathType : ::System::Int32
	{
		Absolute = 0,
		ConfigRelative_PersistentFirst = 1,
		ConfigRelative_PersistentOnly = 2,
		ConfigRelative_StreamingAssetsOnly = 3,
		ConfigRelative_RawConfig = 4,
	};
}
