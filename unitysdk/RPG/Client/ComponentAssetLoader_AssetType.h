#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_AssetType_TypeDefinitionIndex = 65343;

	enum class ComponentAssetLoader_AssetType : ::System::Int32
	{
		None = 0,
		Material = 1,
		Mesh = 2,
		AniController = 3,
		GameObjEnable = 4,
		CompEnable = 5,
	};
}
