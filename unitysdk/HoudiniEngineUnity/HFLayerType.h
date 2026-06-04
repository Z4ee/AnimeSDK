#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HFLayerType_TypeDefinitionIndex = 37805;

	enum class HFLayerType : ::System::Int32
	{
		DEFAULT = 0,
		HEIGHT = 1,
		MASK = 2,
		DETAIL = 3,
	};
}
