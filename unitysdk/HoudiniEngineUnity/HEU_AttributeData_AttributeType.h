#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AttributeData_AttributeType_TypeDefinitionIndex = 38267;

	enum class HEU_AttributeData_AttributeType : ::System::Int32
	{
		UNDEFINED = -1,
		BOOL = 0,
		INT = 1,
		FLOAT = 2,
		STRING = 3,
		MAX = 4,
	};
}
