#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftPoseAdjuster_PosePointInfo_TypeDefinitionIndex = 79972;

	struct alignas(8) MechCraftPoseAdjuster_PosePointInfo
	{
		::System::UInt32 PoseID; // 0x10
		::UnityEngine::Transform* Point; // 0x18
	};
}
