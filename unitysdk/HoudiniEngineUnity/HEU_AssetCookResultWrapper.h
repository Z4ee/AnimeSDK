#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetCookResultWrapper_TypeDefinitionIndex = 39260;

	enum class HEU_AssetCookResultWrapper : ::System::Int32
	{
		NONE = 0,
		SUCCESS = 1,
		ERRORED = 2,
	};
}
