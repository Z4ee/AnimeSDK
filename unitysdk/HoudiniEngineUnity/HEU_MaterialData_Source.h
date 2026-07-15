#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_MaterialData_Source_TypeDefinitionIndex = 38423;

	enum class HEU_MaterialData_Source : ::System::Int32
	{
		DEFAULT = 0,
		HOUDINI = 1,
		UNITY = 2,
		SUBSTANCE = 3,
	};
}
