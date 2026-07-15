#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_Leg_PhysicsLockInfo_TypeDefinitionIndex = 42688;

	struct alignas(4) Grounding_Leg_PhysicsLockInfo
	{
		::System::Single Y; // 0x10
		::UnityEngine::Vector3 Normal; // 0x14
	};
}
