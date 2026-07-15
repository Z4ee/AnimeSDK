#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystem
{
	inline static constexpr unsigned int WindTriggerType_TypeDefinitionIndex = 47773;

	enum class WindTriggerType : ::System::Int32
	{
		Duct = 0,
		Eddy = 1,
		Curve = 2,
	};
}
