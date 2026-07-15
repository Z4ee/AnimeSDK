#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PenaconyEndmostChronicleEventType_TypeDefinitionIndex = 63158;

	enum class PenaconyEndmostChronicleEventType : ::System::Int32
	{
		Invalid = 0,
		Close = 1,
		ZoomValudChanged = 2,
		MoveItem = 3,
		SimpleTalk = 4,
		ShowChronicle = 5,
		FireChronicle = 6,
		ShowLine = 7,
		UnlockChronicleQTE = 8,
		UnlockEndingQTE = 9,
		ShowEndingDialog = 10,
		ShowWithLocked = 11,
		CloseWithWhiteTransfer = 12,
	};
}
