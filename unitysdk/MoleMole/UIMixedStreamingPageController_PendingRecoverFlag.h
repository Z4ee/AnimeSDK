#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMixedStreamingPageController_PendingRecoverFlag_TypeDefinitionIndex = 62854;

	enum class UIMixedStreamingPageController_PendingRecoverFlag : ::System::Int32
	{
		None = 0,
		AnimationSkipped = 2,
		SlotStateChanged = 1,
	};
}
