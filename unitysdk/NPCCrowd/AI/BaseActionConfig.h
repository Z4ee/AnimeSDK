#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int BaseActionConfig_TypeDefinitionIndex = 59619;

	struct alignas(8) BaseActionConfig
	{
		::System::String* description; // 0x10
	};
}
