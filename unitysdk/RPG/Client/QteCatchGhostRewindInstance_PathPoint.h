#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	inline static constexpr unsigned int QteCatchGhostRewindInstance_PathPoint_TypeDefinitionIndex = 57568;

	struct alignas(4) QteCatchGhostRewindInstance_PathPoint
	{
		::System::Single Ratio; // 0x10
		::System::Single MinValue; // 0x14
		::System::Single MaxValue; // 0x18
		::UnityEngine::Vector3 Position; // 0x1C
		::UnityEngine::Quaternion Rotation; // 0x28
	};
}
