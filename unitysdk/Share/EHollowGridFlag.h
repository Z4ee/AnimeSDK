#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridFlag_TypeDefinitionIndex = 9906;

	enum class EHollowGridFlag : ::System::UInt32
	{
		Brighten = 0x4000,
		ShowEventID = 0x10,
		Empty = 0x80000,
		Guide = 0x8000,
		Unlocked = 0x2000,
		Door = 0x400,
		CanMove = 0x2,
		VisibleAtGridAround = 0x80,
		CanTriggerMultiTimes = 0x800,
		Target = 0x10000,
		Travelled = 0x4,
		VisibleByTriggerEvent = 0x100,
		BrightenOnlyVisible = 0x20000,
		CanTriggerEvent = 0x20,
		SyncToClient = 0x200,
		Blocked = 0x100000,
		Visible = 0x40,
		TemporaryVisibleAtAround = 0x1000,
		ShowEventType = 0x8,
		Unstable = 0x40000,
		Core = 0x1,
	};
}
