#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_CurveDataType_TypeDefinitionIndex = 38223;

	enum class HEU_CurveDataType : ::System::Int32
	{
		INVALID = 0,
		GEO_COORDS_PARAM = 1,
		HAPI_COORDS_PARAM = 2,
		POSITION_ATTRIBUTE = 3,
	};
}
