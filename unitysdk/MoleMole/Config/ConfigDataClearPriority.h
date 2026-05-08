#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDataClearPriority_TypeDefinitionIndex = 45026;

	enum class ConfigDataClearPriority : ::System::Int32
	{
		All = 1,
		SamePriority = 0,
		ByPriority = 3,
		Self = 2,
	};
}
