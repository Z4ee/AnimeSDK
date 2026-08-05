#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetLocation_TypeDefinitionIndex = 8442;

	enum class AssetLocation : ::System::Byte
	{
		Medium = 0x4,
		None = 0x2,
		EditorOnly = 0x0,
		Streaming = 0x3,
		External = 0x5,
		Internal = 0x1,
	};
}
