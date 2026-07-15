#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTechTreeInfo_TechTreeUpdateData_TypeDefinitionIndex = 71798;

	struct alignas(4) IdleLiveTechTreeInfo_TechTreeUpdateData
	{
		::System::Boolean IsActivate; // 0x10
		::System::UInt32 NodeId; // 0x14
	};
}
