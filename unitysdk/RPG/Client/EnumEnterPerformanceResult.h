#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EnumEnterPerformanceResult_TypeDefinitionIndex = 57974;

	enum class EnumEnterPerformanceResult : ::System::Int32
	{
		Ok = 0,
		AlreadyInPerformance = 1,
		WaitUIPageClose = 2,
		RotatableRegionAirlock = 3,
		Teleporting = 4,
		EraFlipperPerform = 5,
		EndOfInnerCheck = 6,
		ChimeraBattleResult = 7,
		RogueMagicSettle = 8,
		ElfLoading = 9,
		OnlineCakeCatchBoxOpening = 10,
		NetworkDisconnected = 11,
	};
}
