#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int IKHitReactionChainEnd_TypeDefinitionIndex = 65408;

	struct alignas(8) IKHitReactionChainEnd
	{
		::UnityEngine::Transform* Target; // 0x10
		::UnityEngine::Vector3 Axis; // 0x18
		::System::Single ExtendLength; // 0x24
	};
}
