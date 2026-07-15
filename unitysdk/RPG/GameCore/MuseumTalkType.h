#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumTalkType_TypeDefinitionIndex = 13729;

	enum class MuseumTalkType : ::System::Int32
	{
		Unknown = 0,
		EnterOpenDayDefault = 1,
		ExecutingLockMission = 2,
		ExecutingPhaseMission = 3,
		AtlasMissionListFull = 4,
		ExecutingAtlasMission = 5,
		FinishMission = 6,
		HaveMarketRedDot = 7,
		MissionListFull = 8,
		RenewPointMax = 9,
		MarketDefault = 21,
		ReturnOpenDayDefault = 31,
		AllAreaGotFullRenewPoint = 32,
		NotAllAreaGotFullRenewPoint = 33,
	};
}
