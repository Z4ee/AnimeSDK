#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetLocation_TypeDefinitionIndex = 8241;

	enum class AssetLocation : ::System::Byte
	{
		Internal = 0x1,
		None = 0x2,
		Streaming = 0x3,
		Medium = 0x4,
		EditorOnly = 0x0,
		External = 0x5,
	};
}
