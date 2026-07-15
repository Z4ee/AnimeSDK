#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSpineStoryController_Anchor_TypeDefinitionIndex = 57585;

	struct alignas(8) MonoSpineStoryController_Anchor
	{
		::System::String* uniqueName; // 0x10
		::UnityEngine::Transform* origin; // 0x18
	};
}
