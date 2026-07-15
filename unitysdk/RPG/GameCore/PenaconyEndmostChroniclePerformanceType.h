#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PenaconyEndmostChroniclePerformanceType_TypeDefinitionIndex = 23720;

	enum class PenaconyEndmostChroniclePerformanceType : ::System::Int32
	{
		None = 0,
		NormalShow = 1,
		Fire = 2,
		ShowLineWithAnim = 3,
		UnlockChronicleQTE = 4,
		UnlockEndingQTE = 5,
		ShowEndingDialog = 6,
		ShowWithLocked = 7,
		CloseWithWhite = 8,
	};
}
