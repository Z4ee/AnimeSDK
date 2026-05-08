#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_MissionTipType_TypeDefinitionIndex = 55042;

	enum class UIMissionTipsContainerWidgetController_MissionTipType : ::System::Int32
	{
		RefreshTrack = 2,
		SlideMissionFinish = 5,
		PartnerDateFreeModeTip = 10,
		ServerAreaTrigger = 9,
		HDDQuestHang = 7,
		Challenge = 14,
		Activity = 6,
		UnlockPersonalLine = 4,
		PartnerDateAreaTrigger = 12,
		InterKnot = 0,
		UpdateRecommendTrack = 3,
		PartnerDateBubbleTip = 11,
		ClientAreaTrigger = 8,
		WeeklyBingoAreaTrigger = 13,
		MissionSync = 1,
	};
}
