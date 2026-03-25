#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAsset_HEU_AssetType_TypeDefinitionIndex = 37621;

	enum class HEU_HoudiniAsset_HEU_AssetType : ::System::Int32
	{
		TYPE_INVALID = 0,
		TYPE_HDA = 1,
		TYPE_CURVE = 2,
		TYPE_INPUT = 3,
	};
}
