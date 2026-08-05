#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDataClearPriority_TypeDefinitionIndex = 54882;

	enum class ConfigDataClearPriority : ::System::Int32
	{
		Self = 2,
		ByPriority = 3,
		All = 1,
		SamePriority = 0,
	};
}
