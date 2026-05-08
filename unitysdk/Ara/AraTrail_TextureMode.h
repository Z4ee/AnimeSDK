#pragma once
#include "unitysdk/unitysdk.h"

namespace Ara
{
	inline static constexpr unsigned int AraTrail_TextureMode_TypeDefinitionIndex = 31375;

	enum class AraTrail_TextureMode : ::System::Int32
	{
		Stretch = 0,
		Tile = 1,
		WorldTile = 2,
	};
}
