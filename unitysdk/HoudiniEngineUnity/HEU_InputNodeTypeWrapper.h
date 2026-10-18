#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputNodeTypeWrapper_TypeDefinitionIndex = 40562;

	enum class HEU_InputNodeTypeWrapper : ::System::Int32
	{
		CONNECTION = 0,
		NODE = 1,
		PARAMETER = 2,
	};
}
