#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAsset_AssetCookResult_TypeDefinitionIndex = 38239;

	enum class HEU_HoudiniAsset_AssetCookResult : ::System::Int32
	{
		NONE = 0,
		SUCCESS = 1,
		ERRORED = 2,
	};
}
