#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchSlotStatus_TypeDefinitionIndex = 60208;

	enum class CakeCatchSlotStatus : ::System::Int32
	{
		Invalid = 0,
		NoCat = 1,
		CanConfirm = 2,
		CanCatch = 3,
	};
}
