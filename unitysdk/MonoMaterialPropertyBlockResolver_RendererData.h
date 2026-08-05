#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Renderer; }

inline static constexpr unsigned int MonoMaterialPropertyBlockResolver_RendererData_TypeDefinitionIndex = 78277;

struct alignas(8) MonoMaterialPropertyBlockResolver_RendererData
{
	::UnityEngine::Renderer* renderer; // 0x10
	::System::Int32 materialCount; // 0x18
};
