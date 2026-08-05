#pragma once
#include "unitysdk/unitysdk.h"

namespace InfluxDB
{
	inline static constexpr unsigned int WritePrecision_TypeDefinitionIndex = 8058;

	enum class WritePrecision : ::System::Int32
	{
		Us = 3,
		Ns = 4,
		S = 2,
		Ms = 1,
	};
}
