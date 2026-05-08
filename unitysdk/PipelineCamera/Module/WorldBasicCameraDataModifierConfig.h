#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int WorldBasicCameraDataModifierConfig_TypeDefinitionIndex = 36397;

	struct alignas(4) WorldBasicCameraDataModifierConfig
	{
		::Foundation::Unreal::FName ModuleId; // 0x10
		::System::Int32 PipelineId; // 0x18
	};
}
