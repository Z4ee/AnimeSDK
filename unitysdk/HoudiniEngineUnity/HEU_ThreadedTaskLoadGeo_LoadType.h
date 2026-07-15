#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ThreadedTaskLoadGeo_LoadType_TypeDefinitionIndex = 38458;

	enum class HEU_ThreadedTaskLoadGeo_LoadType : ::System::Int32
	{
		FILE = 0,
		NODE = 1,
		ASSET = 2,
	};
}
