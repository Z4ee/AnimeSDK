#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputNode_InputNodeType_TypeDefinitionIndex = 38247;

	enum class HEU_InputNode_InputNodeType : ::System::Int32
	{
		CONNECTION = 0,
		NODE = 1,
		PARAMETER = 2,
	};
}
