#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefReportSourceType_TypeDefinitionIndex = 57315;

	enum class RogueTournBuildRefReportSourceType : ::System::Int32
	{
		NotApplicable = -1,
		Http = 0,
		ShareCode = 1,
	};
}
