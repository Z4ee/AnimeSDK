#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTeamInfo_SimpleSlotData_TypeDefinitionIndex = 74792;

	struct alignas(4) IdleLiveBaseTeamInfo_SimpleSlotData
	{
		::System::UInt32 SlotID; // 0x10
		::System::UInt32 AvatarID; // 0x14
	};
}
