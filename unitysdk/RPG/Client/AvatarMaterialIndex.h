#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarMaterialIndex_TypeDefinitionIndex = 60232;

	enum class AvatarMaterialIndex : ::System::Int32
	{
		None = -1,
		Dead = 0,
		Unobtained = 1,
	};
}
