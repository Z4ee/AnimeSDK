#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraFollowTargetParam_TypeDefinitionIndex = 38178;

	struct alignas(4) CameraFollowTargetParam
	{
		::UnityEngine::Vector3 Location; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C
		::UnityEngine::Vector3 Velocity; // 0x2C
	};
}
