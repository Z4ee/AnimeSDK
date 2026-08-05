#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionRuntime_RootRotateActionRuntimeData_TypeDefinitionIndex = 89626;

	struct alignas(4) AIActionRuntime_RootRotateActionRuntimeData
	{
		::UnityEngine::Vector3 LocalAxis; // 0x10
		::UnityEngine::Quaternion StartRotation; // 0x1C
		::System::Single Angle; // 0x2C
	};
}
