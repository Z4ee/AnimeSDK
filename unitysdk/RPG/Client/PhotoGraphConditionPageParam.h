#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphConditionPageParam_TypeDefinitionIndex = 66329;

	struct alignas(1) PhotoGraphConditionPageParam
	{
		::System::Boolean IsLongRangeMode; // 0x10
		::System::Boolean HideResultToast; // 0x11
		::System::Boolean ShowSaveBtn; // 0x12
	};
}
