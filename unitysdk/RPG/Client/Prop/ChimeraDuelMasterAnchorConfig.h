#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMasterAnchorConfig_TypeDefinitionIndex = 71878;

	struct alignas(8) ChimeraDuelMasterAnchorConfig
	{
		::System::UInt32 ID; // 0x10
		::UnityEngine::Transform* MasterAnchor; // 0x18
	};
}
