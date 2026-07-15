#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputNode_InternalObjectType_TypeDefinitionIndex = 38249;

	enum class HEU_InputNode_InternalObjectType : ::System::Int32
	{
		UNKNOWN = 0,
		HDA = 1,
		UNITY_MESH = 2,
	};
}
