#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int DefaultFollowInitializerConfig_TypeDefinitionIndex = 38655;

	struct alignas(4) DefaultFollowInitializerConfig
	{
		::Foundation::Unreal::FName ModuleId; // 0x10
		::System::Int32 PipelineId; // 0x18
	};
}
