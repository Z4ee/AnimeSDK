#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetTask_BuildType_TypeDefinitionIndex = 38448;

	enum class HEU_AssetTask_BuildType : ::System::Int32
	{
		NONE = 0,
		LOAD = 1,
		COOK = 2,
		RELOAD = 3,
	};
}
