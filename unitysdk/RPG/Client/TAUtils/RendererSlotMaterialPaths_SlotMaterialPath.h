#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int RendererSlotMaterialPaths_SlotMaterialPath_TypeDefinitionIndex = 70244;

	struct alignas(8) RendererSlotMaterialPaths_SlotMaterialPath
	{
		::System::Int32 index; // 0x10
		::System::String* materialPath; // 0x18
	};
}
