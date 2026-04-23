#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PullRefreshControl_DragLoadState_TypeDefinitionIndex = 66925;

	enum class PullRefreshControl_DragLoadState : ::System::Int32
	{
		None = 0,
		WaitContinueDrag = 1,
		WaitRelase = 2,
		WaitLoad = 3,
		Loaded = 4,
	};
}
