#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/EulerRotation.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int DefaultRotationInputConfig_TypeDefinitionIndex = 36390;

	struct alignas(8) DefaultRotationInputConfig
	{
		::PipelineCamera::EulerRotation InitialRotation; // 0x10
		::UnityEngine::Vector3 InitialRotationSpeed; // 0x58
		::Foundation::Unreal::FName ModuleId; // 0x64
		::System::Int32 PipelineId; // 0x6C
	};
}
