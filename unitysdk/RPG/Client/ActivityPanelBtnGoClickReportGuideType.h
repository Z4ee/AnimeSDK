#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPanelBtnGoClickReportGuideType_TypeDefinitionIndex = 58966;

	enum class ActivityPanelBtnGoClickReportGuideType : ::System::Int32
	{
		None = 0,
		GuideTakeMission = 1,
		GuideGoto = 2,
		ActivityGoto = 3,
		EarlyAccess = 4,
		WorldUnlock = 5,
	};
}
