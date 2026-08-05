#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Module/DefaultFollowSettingParam.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int DefaultFollowInitialParam_TypeDefinitionIndex = 38654;

	struct alignas(4) DefaultFollowInitialParam
	{
		::UnityEngine::Quaternion RotationInput; // 0x10
		::PipelineCamera::Module::DefaultFollowSettingParam FollowSetting; // 0x20
		::UnityEngine::Vector3 PivotLocation; // 0x38
	};
}
