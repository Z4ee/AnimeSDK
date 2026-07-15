#pragma once
#include "unitysdk/unitysdk.h"

namespace SuperScrollView
{
	inline static constexpr unsigned int SnapStatus_TypeDefinitionIndex = 45836;

	enum class SnapStatus : ::System::Int32
	{
		NoTargetSet = 0,
		TargetHasSet = 1,
		SnapMoving = 2,
		SnapMoveFinish = 3,
	};
}
