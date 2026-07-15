#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int IsometricViewPuzzleEvent_TypeDefinitionIndex = 57474;

	enum class IsometricViewPuzzleEvent : ::System::UInt32
	{
		EnterAttachRegion = 0x0,
		LeaveAttachRegion = 0x1,
		ReleaseInAttachRegion = 0x2,
		CameraZoomIn = 0x3,
		CameraZoomOut = 0x4,
	};
}
