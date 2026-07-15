#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetSkinType_TypeDefinitionIndex = 65356;

	enum class ComponentAssetSkinType : ::System::Int32
	{
		Character = 0,
		Equipment = 1,
	};
}
