#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_PresetType_TypeDefinitionIndex = 38303;

	enum class HAPI_PresetType : ::System::Int32
	{
		HAPI_PRESETTYPE_INVALID = -1,
		HAPI_PRESETTYPE_BINARY = 0,
		HAPI_PRESETTYPE_IDX = 1,
		HAPI_PRESETTYPE_MAX = 2,
	};
}
