#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetDatabase_HEU_ImportAssetOptions_TypeDefinitionIndex = 38276;

	enum class HEU_AssetDatabase_HEU_ImportAssetOptions : ::System::Int32
	{
		Default = 0,
		ForceUpdate = 1,
		ForceSynchronousImport = 8,
		ImportRecursive = 256,
		DontDownloadFromCacheServer = 8192,
		ForceUncompressedImport = 16384,
	};
}
