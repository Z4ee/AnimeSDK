#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathChangeScrollRedDot_ItemRedDotData_TypeDefinitionIndex = 71302;

	struct alignas(8) AvatarPathChangeScrollRedDot_ItemRedDotData
	{
		::UnityEngine::Transform* Root; // 0x10
		::UnityEngine::Transform* RedDotRoot; // 0x18
	};
}
