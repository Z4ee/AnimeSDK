#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelNPCNameWidgetController_AvatarPosFrameCache_TypeDefinitionIndex = 82009;

	struct alignas(4) UIInLevelNPCNameWidgetController_AvatarPosFrameCache
	{
		::UnityEngine::Vector3 Position; // 0x10
		::System::Boolean Valid; // 0x1C
		::System::Boolean IgnoreYGap; // 0x1D
	};
}
