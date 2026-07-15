#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LinkStateWrapper_TypeDefinitionIndex = 38412;

	enum class HEU_LinkStateWrapper : ::System::Int32
	{
		INACTIVE = 0,
		LINKING = 1,
		LINKED = 2,
		ERROR_NOT_LINKED = 3,
	};
}
