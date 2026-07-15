#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int TimeData_TypeDefinitionIndex = 9565;

	struct alignas(4) TimeData
	{
		::System::Single elapsedTime; // 0x10
		::System::Single deltaTime; // 0x14
		::System::Int32 elapsedUpdates; // 0x18
	};
}
