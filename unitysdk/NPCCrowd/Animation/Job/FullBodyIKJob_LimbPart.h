#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation::Job
{
	inline static constexpr unsigned int FullBodyIKJob_LimbPart_TypeDefinitionIndex = 89933;

	struct alignas(4) FullBodyIKJob_LimbPart
	{
		::UnityEngine::Vector3 localPosition; // 0x10
		::UnityEngine::Vector3 goalPosition; // 0x1C
		::System::Single goalWeight; // 0x28
		::System::Single goalPullWeight; // 0x2C
		::System::Single maximumExtension; // 0x30
		::System::Single stiffness; // 0x34
	};
}
