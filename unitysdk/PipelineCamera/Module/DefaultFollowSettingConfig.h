#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/Module/DefaultFollowSettingParam.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int DefaultFollowSettingConfig_TypeDefinitionIndex = 38671;

	struct alignas(4) DefaultFollowSettingConfig
	{
		::PipelineCamera::Module::DefaultFollowSettingParam DefaultSetting; // 0x10
		::Foundation::Unreal::FName ModuleId; // 0x28
		::System::Int32 PipelineId; // 0x30
	};
}
