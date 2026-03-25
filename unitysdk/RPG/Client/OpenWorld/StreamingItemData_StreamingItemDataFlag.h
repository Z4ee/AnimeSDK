#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingItemData_StreamingItemDataFlag_TypeDefinitionIndex = 60605;

	enum class StreamingItemData_StreamingItemDataFlag : ::System::Int32
	{
		BitIsStreamingLock = 1,
		BitIsCameraCull = 2,
		BitIsPolymerStub = 3,
		BitIsCanKeepParent = 4,
		BitIsShadowInitValue = 5,
		BitIsFastFading = 6,
		IsFilterByVolume = 7,
		BitNotLoadForPVS = 8,
	};
}
