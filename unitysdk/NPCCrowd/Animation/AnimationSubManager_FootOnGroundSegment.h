#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FootOnGroundSegment_TypeDefinitionIndex = 70479;

	struct alignas(4) AnimationSubManager_FootOnGroundSegment
	{
		::System::Int32 StartFrame; // 0x10
		::System::Int32 EndFrame; // 0x14
		::UnityEngine::Vector3 GroundPositionEntitySpace; // 0x18
	};
}
