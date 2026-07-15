#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePath_Waypoint_TypeDefinitionIndex = 37589;

	struct alignas(4) CinemachinePath_Waypoint
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 tangent; // 0x1C
		::System::Single roll; // 0x28
	};
}
