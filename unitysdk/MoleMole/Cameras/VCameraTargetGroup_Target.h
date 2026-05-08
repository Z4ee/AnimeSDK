#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VCameraTargetGroup_Target_TypeDefinitionIndex = 38793;

	struct alignas(8) VCameraTargetGroup_Target
	{
		::UnityEngine::Transform* target; // 0x10
		::System::Single weight; // 0x18
		::System::Single radius; // 0x1C
	};
}
