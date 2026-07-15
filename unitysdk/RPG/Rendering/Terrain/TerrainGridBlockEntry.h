#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Rendering::Terrain
{
	inline static constexpr unsigned int TerrainGridBlockEntry_TypeDefinitionIndex = 49436;

	struct alignas(8) TerrainGridBlockEntry
	{
		::System::Int32 row; // 0x10
		::System::Int32 col; // 0x14
		::Il2CppArray<::System::String*>* lodPrefabPaths; // 0x18
	};
}
