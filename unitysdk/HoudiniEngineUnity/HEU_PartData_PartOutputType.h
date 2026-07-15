#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PartData_PartOutputType_TypeDefinitionIndex = 38261;

	enum class HEU_PartData_PartOutputType : ::System::Int32
	{
		NONE = 0,
		MESH = 1,
		VOLUME = 2,
		CURVE = 3,
		INSTANCER = 4,
	};
}
