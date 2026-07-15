#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int QTEData_FailActionType_TypeDefinitionIndex = 46486;

	enum class QTEData_FailActionType : ::System::Int32
	{
		DoNothing = 0,
		JumpToStart = 1,
		FinishiTimeline = 2,
	};
}
