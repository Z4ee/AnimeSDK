#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetLocation_TypeDefinitionIndex = 7954;

	enum class AssetLocation : ::System::Byte
	{
		Streaming = 0x3,
		External = 0x5,
		EditorOnly = 0x0,
		Medium = 0x4,
		Internal = 0x1,
		None = 0x2,
	};
}
