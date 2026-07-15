#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_GroundingLegLockTransform_TypeDefinitionIndex = 42685;

	struct alignas(4) Grounding_GroundingLegLockTransform
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C
	};
}
