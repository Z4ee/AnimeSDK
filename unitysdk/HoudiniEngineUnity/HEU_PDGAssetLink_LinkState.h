#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGAssetLink_LinkState_TypeDefinitionIndex = 38377;

	enum class HEU_PDGAssetLink_LinkState : ::System::Int32
	{
		INACTIVE = 0,
		LINKING = 1,
		LINKED = 2,
		ERROR_NOT_LINKED = 3,
	};
}
