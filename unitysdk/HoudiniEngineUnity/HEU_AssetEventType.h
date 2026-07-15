#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetEventType_TypeDefinitionIndex = 38199;

	enum class HEU_AssetEventType : ::System::Int32
	{
		UNKNOWN = 0,
		RELOAD = 1,
		COOK = 2,
		BAKE_NEW = 3,
		BAKE_UPDATE = 4,
	};
}
