#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Textmap::Parameter
{
	inline static constexpr unsigned int MetricNumberFormatMode_TypeDefinitionIndex = 60146;

	enum class MetricNumberFormatMode : ::System::Int32
	{
		CJK = 0,
		Western = 1,
	};
}
