#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ModifierActionWrapper_TypeDefinitionIndex = 38392;

	enum class HEU_ModifierActionWrapper : ::System::Int32
	{
		MULTIPARM_INSERT = 0,
		MULTIPARM_REMOVE = 1,
		MULTIPARM_CLEAR = 2,
		SET_FLOAT = 3,
		SET_INT = 4,
	};
}
