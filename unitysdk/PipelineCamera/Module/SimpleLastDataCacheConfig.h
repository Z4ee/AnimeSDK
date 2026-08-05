#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int SimpleLastDataCacheConfig_TypeDefinitionIndex = 38664;

	struct alignas(8) SimpleLastDataCacheConfig
	{
		::System::String* ModuleId; // 0x10
		::System::Int32 PipelineId; // 0x18
	};
}
