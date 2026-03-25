#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int RendererSlotMaterials_SlotMaterial_TypeDefinitionIndex = 60366;

	struct alignas(8) RendererSlotMaterials_SlotMaterial
	{
		::System::Int32 index; // 0x10
		::UnityEngine::Material* material; // 0x18
	};
}
