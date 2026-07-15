#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicationFlag_TypeDefinitionIndex = 35327;

	enum class ReplicationFlag : ::System::Byte
	{
		None = 0x0,
		Dirty = 0x1,
		Initial = 0x2,
		ToOwner = 0x4,
		ToOther = 0x8,
		SnapshotToOwner = 0x7,
		SnapshotToOther = 0xB,
		DeltaToOwner = 0x5,
		DeltaToOther = 0x9,
	};
}
