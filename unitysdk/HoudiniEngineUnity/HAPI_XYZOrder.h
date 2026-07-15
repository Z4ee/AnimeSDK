#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_XYZOrder_TypeDefinitionIndex = 38321;

	enum class HAPI_XYZOrder : ::System::Int32
	{
		HAPI_XYZ = 0,
		HAPI_XZY = 1,
		HAPI_YXZ = 2,
		HAPI_YZX = 3,
		HAPI_ZXY = 4,
		HAPI_ZYX = 5,
		HAPI_XYZORDER_DEFAULT = 0,
	};
}
