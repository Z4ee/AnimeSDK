#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDataPriority_TypeDefinitionIndex = 63213;

	enum class ConfigDataPriority : ::System::Int32
	{
		World = 2,
		Level = 1,
		Character = 0,
	};
}
