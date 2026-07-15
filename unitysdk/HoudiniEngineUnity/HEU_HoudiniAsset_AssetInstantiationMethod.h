#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAsset_AssetInstantiationMethod_TypeDefinitionIndex = 38241;

	enum class HEU_HoudiniAsset_AssetInstantiationMethod : ::System::Int32
	{
		DEFAULT = 0,
		DUPLICATED = 1,
		UNDO = 2,
	};
}
