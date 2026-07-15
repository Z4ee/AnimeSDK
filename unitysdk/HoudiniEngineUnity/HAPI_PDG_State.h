#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_PDG_State_TypeDefinitionIndex = 38328;

	enum class HAPI_PDG_State : ::System::Int32
	{
		HAPI_PDG_STATE_READY = 0,
		HAPI_PDG_STATE_COOKING = 1,
		HAPI_PDG_STATE_MAX = 2,
		HAPI_PDG_STATE_MAX_READY_STATE = 0,
	};
}
