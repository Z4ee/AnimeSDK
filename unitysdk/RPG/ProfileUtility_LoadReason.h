#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG
{
	inline static constexpr unsigned int ProfileUtility_LoadReason_TypeDefinitionIndex = 33721;

	enum class ProfileUtility_LoadReason : ::System::UInt32
	{
		Unknown = 0x0,
		Undefined = 0x1,
		LoadResource = 0x2,
		LoadMap = 0x4,
		LoadAction = 0x8,
		SyncLoadUI = 0x10,
		AsyncLoadUI = 0x20,
		SetupViewUI = 0x40,
		TabChangeUI = 0x80,
		All = 0xFFFFFFFF,
	};
}
