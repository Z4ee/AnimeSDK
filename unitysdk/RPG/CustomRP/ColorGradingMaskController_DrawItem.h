#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ColorGradingMaskController_DrawItem_TypeDefinitionIndex = 36222;

	struct alignas(8) ColorGradingMaskController_DrawItem
	{
		::UnityEngine::Renderer* renderer; // 0x10
		::UnityEngine::Material* material; // 0x18
		::System::Int32 subMeshIndex; // 0x20
	};
}
