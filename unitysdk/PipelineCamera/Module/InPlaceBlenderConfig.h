#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int InPlaceBlenderConfig_TypeDefinitionIndex = 38662;

	struct alignas(4) InPlaceBlenderConfig
	{
		::Foundation::Unreal::FName ModuleId; // 0x10
		::System::Int32 PipelineId; // 0x18
	};
}
