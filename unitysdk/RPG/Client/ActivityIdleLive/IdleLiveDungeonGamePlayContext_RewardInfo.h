#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonGamePlayContext_RewardInfo_TypeDefinitionIndex = 70078;

	struct alignas(8) IdleLiveDungeonGamePlayContext_RewardInfo
	{
		::System::UInt32 ItemID; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 Count; // 0x20
	};
}
