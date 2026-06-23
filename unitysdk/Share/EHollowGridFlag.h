#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridFlag_TypeDefinitionIndex = 18082;

	enum class EHollowGridFlag : ::System::UInt32
	{
		TemporaryVisibleAtAround = 0x1000,
		Unlocked = 0x2000,
		VisibleByTriggerEvent = 0x100,
		Visible = 0x40,
		VisibleAtGridAround = 0x80,
		BrightenOnlyVisible = 0x20000,
		Target = 0x10000,
		Core = 0x1,
		Blocked = 0x100000,
		SyncToClient = 0x200,
		Empty = 0x80000,
		CanTriggerMultiTimes = 0x800,
		Guide = 0x8000,
		ShowEventID = 0x10,
		Travelled = 0x4,
		ShowEventType = 0x8,
		Unstable = 0x40000,
		CanTriggerEvent = 0x20,
		Brighten = 0x4000,
		CanMove = 0x2,
		Door = 0x400,
	};
}
