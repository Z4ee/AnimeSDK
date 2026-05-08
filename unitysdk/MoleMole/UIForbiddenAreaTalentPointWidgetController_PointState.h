#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaTalentPointWidgetController_PointState_TypeDefinitionIndex = 63045;

	enum class UIForbiddenAreaTalentPointWidgetController_PointState : ::System::Int32
	{
		PointState_Unlock = 2,
		PointState_Lock = 1,
		PointState_None = 0,
		PointState_Normal = 3,
		PointState_Advanced = 4,
	};
}
