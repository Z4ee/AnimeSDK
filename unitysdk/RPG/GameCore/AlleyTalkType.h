#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyTalkType_TypeDefinitionIndex = 12152;

	enum class AlleyTalkType : ::System::Int32
	{
		Default = 0,
		AfterEventDefault = 1,
		DuringEventDefault = 2,
		AcceptedEventListFull = 3,
		PackGoodsOverweight = 4,
		ShopTransportRoadUndone = 5,
		TriggerGuaranteedFund = 6,
		ExistUrgentEventMission = 7,
		ExistUnreceivedRenownReward = 8,
		ShopTransportInPoorGrade = 9,
	};
}
