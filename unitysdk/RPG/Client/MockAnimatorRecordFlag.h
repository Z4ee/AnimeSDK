#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MockAnimatorRecordFlag_TypeDefinitionIndex = 68483;

	enum class MockAnimatorRecordFlag : ::System::UInt32
	{
		Parameter = 0x1,
		LayerState = 0x2,
		Speed = 0x4,
		All = 0xFFFFFFFF,
	};
}
