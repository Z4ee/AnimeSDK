#pragma once
#include "unitysdk/unitysdk.h"

namespace InfluxDB
{
	inline static constexpr unsigned int WritePrecision_TypeDefinitionIndex = 8255;

	enum class WritePrecision : ::System::Int32
	{
		Us = 3,
		S = 2,
		Ms = 1,
		Ns = 4,
	};
}
