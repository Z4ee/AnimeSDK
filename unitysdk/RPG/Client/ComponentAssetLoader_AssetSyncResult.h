#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_AssetSyncResult_TypeDefinitionIndex = 63058;

	enum class ComponentAssetLoader_AssetSyncResult : ::System::Int32
	{
		None = 0,
		NeedRefreshAnimator = 1,
		DataDirty = 2,
	};
}
