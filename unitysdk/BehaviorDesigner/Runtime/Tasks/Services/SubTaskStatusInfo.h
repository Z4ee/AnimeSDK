#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace BehaviorDesigner::Runtime::Tasks::Services
{
	inline static constexpr unsigned int SubTaskStatusInfo_TypeDefinitionIndex = 32299;

	struct alignas(8) SubTaskStatusInfo
	{
		::System::String* Status; // 0x10
	};
}
