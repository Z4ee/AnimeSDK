#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesReportType_TypeDefinitionIndex = 63707;

	enum class PlanetFesReportType : ::System::Int32
	{
		BusinessDayFinish = 1,
		FesLevelUp = 2,
		MainPageClose = 3,
	};
}
