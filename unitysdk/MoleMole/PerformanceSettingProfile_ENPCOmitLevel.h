#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PerformanceSettingProfile_ENPCOmitLevel_TypeDefinitionIndex = 56317;

	enum class PerformanceSettingProfile_ENPCOmitLevel : ::System::Int32
	{
		None = 0,
		Aggressive = 2,
		Slight = 1,
		OnlyNecessary = 3,
	};
}
