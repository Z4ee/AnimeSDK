#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAsset_AssetCookStatus_TypeDefinitionIndex = 38238;

	enum class HEU_HoudiniAsset_AssetCookStatus : ::System::Int32
	{
		NONE = 0,
		COOKING = 1,
		POSTCOOK = 2,
		LOADING = 3,
		POSTLOAD = 4,
		PRELOAD = 5,
		SELECT_SUBASSET = 6,
	};
}
