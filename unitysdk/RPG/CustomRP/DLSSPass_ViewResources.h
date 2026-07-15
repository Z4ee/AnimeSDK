#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Texture; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass_ViewResources_TypeDefinitionIndex = 36008;

	struct alignas(8) DLSSPass_ViewResources
	{
		::UnityEngine::Texture* source; // 0x10
		::UnityEngine::Texture* output; // 0x18
		::UnityEngine::Texture* depth; // 0x20
		::UnityEngine::Texture* motionVectors; // 0x28
		::UnityEngine::Texture* biasColorMask; // 0x30
	};
}
