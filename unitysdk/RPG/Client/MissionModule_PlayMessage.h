#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_PlayMessage_TypeDefinitionIndex = 63200;

	struct alignas(4) MissionModule_PlayMessage
	{
		::System::UInt32 MessageSectionID; // 0x10
	};
}
