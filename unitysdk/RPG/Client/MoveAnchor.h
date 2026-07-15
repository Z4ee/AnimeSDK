#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int MoveAnchor_TypeDefinitionIndex = 65701;

	struct alignas(8) MoveAnchor
	{
		::UnityEngine::Transform* Anchor; // 0x10
		::System::Single MoveSpeed; // 0x18
	};
}
