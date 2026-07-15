#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BillboardWayPointMutexStatus_TypeDefinitionIndex = 57775;

	enum class BillboardWayPointMutexStatus : ::System::Int32
	{
		WayPointOpen = 0,
		BillboardShow = 1,
	};
}
