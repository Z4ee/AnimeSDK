#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetCookStatusWrapper_TypeDefinitionIndex = 38400;

	enum class HEU_AssetCookStatusWrapper : ::System::Int32
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
