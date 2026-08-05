#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridFlag_TypeDefinitionIndex = 17311;

	enum class EHollowGridFlag : ::System::UInt32
	{
		Brighten = 0x4000,
		CanTriggerMultiTimes = 0x800,
		ShowEventID = 0x10,
		Guide = 0x8000,
		CanMove = 0x2,
		VisibleAtGridAround = 0x80,
		SyncToClient = 0x200,
		CanTriggerEvent = 0x20,
		Target = 0x10000,
		Travelled = 0x4,
		ShowEventType = 0x8,
		VisibleByTriggerEvent = 0x100,
		Visible = 0x40,
		Empty = 0x80000,
		Unlocked = 0x2000,
		Core = 0x1,
		BrightenOnlyVisible = 0x20000,
		Blocked = 0x100000,
		Door = 0x400,
		Unstable = 0x40000,
		TemporaryVisibleAtAround = 0x1000,
	};
}
