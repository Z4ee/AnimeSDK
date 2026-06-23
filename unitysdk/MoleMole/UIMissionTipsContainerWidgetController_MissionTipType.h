#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_MissionTipType_TypeDefinitionIndex = 69594;

	enum class UIMissionTipsContainerWidgetController_MissionTipType : ::System::Int32
	{
		Activity = 6,
		RefreshTrack = 2,
		Challenge = 15,
		UpdateRecommendTrack = 3,
		PartnerDateFreeModeTip = 10,
		WeeklyBingoAreaTrigger = 13,
		ServerAreaTrigger = 9,
		SlideMissionFinish = 5,
		ClientAreaTrigger = 8,
		ExploreQuestAreaTrigger = 14,
		HDDQuestHang = 7,
		PartnerDateAreaTrigger = 12,
		PartnerDateBubbleTip = 11,
		UnlockPersonalLine = 4,
		InterKnot = 0,
		MissionSync = 1,
	};
}
