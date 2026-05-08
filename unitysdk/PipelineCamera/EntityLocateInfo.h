#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int EntityLocateInfo_TypeDefinitionIndex = 35905;

	struct alignas(4) EntityLocateInfo
	{
		::UnityEngine::Vector3 Location; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C
		::System::Single Height; // 0x2C
	};
}
