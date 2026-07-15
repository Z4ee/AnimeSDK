#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ReasonBool_1_TypeDefinitionIndex = 57302;

	template <typename Reason>
	struct ReasonBool_1
	{
		::System::UInt64 _ReasonBitSet; // 0x0
	};
}
