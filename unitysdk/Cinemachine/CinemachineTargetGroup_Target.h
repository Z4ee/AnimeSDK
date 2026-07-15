#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTargetGroup_Target_TypeDefinitionIndex = 37604;

	struct alignas(8) CinemachineTargetGroup_Target
	{
		::UnityEngine::Transform* target; // 0x10
		::System::Single weight; // 0x18
		::System::Single radius; // 0x1C
	};
}
