#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDataClearPriority_TypeDefinitionIndex = 84026;

	enum class ConfigDataClearPriority : ::System::Int32
	{
		ByPriority = 3,
		All = 1,
		SamePriority = 0,
		Self = 2,
	};
}
