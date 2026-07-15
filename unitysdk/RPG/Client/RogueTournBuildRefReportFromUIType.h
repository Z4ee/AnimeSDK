#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefReportFromUIType_TypeDefinitionIndex = 57314;

	enum class RogueTournBuildRefReportFromUIType : ::System::UInt32
	{
		RecomTab = 0x0,
		AllTab = 0x1,
		HistoryDialog = 0x2,
		SwitchOnDetailDialog = 0x3,
		Debug = 0x4,
		FavoriteTab = 0x5,
	};
}
