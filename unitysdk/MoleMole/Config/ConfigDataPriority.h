#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDataPriority_TypeDefinitionIndex = 67854;

	enum class ConfigDataPriority : ::System::Int32
	{
		World = 2,
		Character = 0,
		Level = 1,
	};
}
