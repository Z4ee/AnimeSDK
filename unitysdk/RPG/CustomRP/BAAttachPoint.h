#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int BAAttachPoint_TypeDefinitionIndex = 36045;

	struct alignas(8) BAAttachPoint
	{
		::UnityEngine::Transform* trans; // 0x10
		::System::Int32 boneIndex; // 0x18
	};
}
