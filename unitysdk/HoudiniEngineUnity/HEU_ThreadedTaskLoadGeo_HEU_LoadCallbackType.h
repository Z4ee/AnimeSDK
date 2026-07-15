#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ThreadedTaskLoadGeo_HEU_LoadCallbackType_TypeDefinitionIndex = 38462;

	enum class HEU_ThreadedTaskLoadGeo_HEU_LoadCallbackType : ::System::Int32
	{
		PRECOOK = 0,
		POSTCOOK = 1,
	};
}
