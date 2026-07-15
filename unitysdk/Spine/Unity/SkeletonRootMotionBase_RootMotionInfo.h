#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRootMotionBase_RootMotionInfo_TypeDefinitionIndex = 42221;

	struct alignas(4) SkeletonRootMotionBase_RootMotionInfo
	{
		::UnityEngine::Vector2 start; // 0x10
		::UnityEngine::Vector2 current; // 0x18
		::UnityEngine::Vector2 mid; // 0x20
		::UnityEngine::Vector2 end; // 0x28
		::System::Boolean timeIsPastMid; // 0x30
	};
}
