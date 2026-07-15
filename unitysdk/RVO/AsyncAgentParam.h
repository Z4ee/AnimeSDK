#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RVO
{
	inline static constexpr unsigned int AsyncAgentParam_TypeDefinitionIndex = 42716;

	struct alignas(4) AsyncAgentParam
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 Velocity; // 0x1C
		::System::Single Height; // 0x28
		::System::Single MaxSpeed; // 0x2C
		::System::Single Radius; // 0x30
		::System::Int32 AvoidancePriority; // 0x34
	};
}
