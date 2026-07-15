#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_MaterialSourceWrapper_TypeDefinitionIndex = 38409;

	enum class HEU_MaterialSourceWrapper : ::System::Int32
	{
		DEFAULT = 0,
		HOUDINI = 1,
		UNITY = 2,
		SUBSTANCE = 3,
	};
}
