#pragma once
#include "unitysdk/unitysdk.h"

namespace QWER
{
	inline static constexpr unsigned int ELogLevel_TypeDefinitionIndex = 85877;

	enum class ELogLevel : ::System::Int32
	{
		Debug = 0,
		Info = 1,
		Warning = 2,
		Error = 3,
		None = 4,
	};
}
