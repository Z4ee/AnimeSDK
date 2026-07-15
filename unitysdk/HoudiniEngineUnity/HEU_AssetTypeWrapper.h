#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetTypeWrapper_TypeDefinitionIndex = 38403;

	enum class HEU_AssetTypeWrapper : ::System::Int32
	{
		TYPE_INVALID = 0,
		TYPE_HDA = 1,
		TYPE_CURVE = 2,
		TYPE_INPUT = 3,
	};
}
