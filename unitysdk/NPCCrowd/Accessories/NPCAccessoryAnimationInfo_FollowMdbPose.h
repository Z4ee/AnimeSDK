#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/MDB_StateType.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimationInfo_FollowMdbPose_TypeDefinitionIndex = 59883;

	struct alignas(4) NPCAccessoryAnimationInfo_FollowMdbPose
	{
		::System::Int32 npcAnimationID; // 0x10
		::System::Int32 mdbPoseId; // 0x14
		::UnityEngine::MDB_StateType mdbState; // 0x18
		::System::Boolean bDisableMdb; // 0x1C
	};
}
