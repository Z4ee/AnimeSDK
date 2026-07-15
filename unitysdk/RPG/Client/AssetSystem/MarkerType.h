#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int MarkerType_TypeDefinitionIndex = 39420;

	enum class MarkerType : ::System::Int32
	{
		SyncLoadBundle = 0,
		AsyncLoadBundle = 1,
		SyncLoadAsset = 2,
		AsyncLoadAsset = 3,
		BatchUnload = 4,
		AssetRequestHandle = 5,
		BundleRequestHandle = 6,
		APIBatchSync = 7,
		APIBatchAsync = 8,
		WillUnloadAsset = 9,
		WillUnloadBundle = 10,
	};
}
