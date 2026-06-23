#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CharacterMovementAction.h"
#include "unitysdk/PipelineCamera/CharacterMovementMode.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CharacterMovementData_TypeDefinitionIndex = 37516;

	struct alignas(4) CharacterMovementData
	{
		::UnityEngine::Vector3 Location; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C
		::UnityEngine::Vector3 Velocity; // 0x2C
		::PipelineCamera::CharacterMovementMode MovementMode; // 0x38
		::PipelineCamera::CharacterMovementAction MovementAction; // 0x3C
	};
}
