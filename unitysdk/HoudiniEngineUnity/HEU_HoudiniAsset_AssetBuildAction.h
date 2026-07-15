#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAsset_AssetBuildAction_TypeDefinitionIndex = 38237;

	enum class HEU_HoudiniAsset_AssetBuildAction : ::System::Int32
	{
		NONE = 0,
		RELOAD = 1,
		COOK = 2,
		INVALID = 3,
		STRIP_HEDATA = 4,
		DUPLICATE = 5,
		RESET_PARAMS = 6,
	};
}
