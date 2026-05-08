#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PerformanceSettingProfile_ENPCOmitLevel_TypeDefinitionIndex = 46106;

	enum class PerformanceSettingProfile_ENPCOmitLevel : ::System::Int32
	{
		Slight = 1,
		None = 0,
		Aggressive = 2,
		OnlyNecessary = 3,
	};
}
