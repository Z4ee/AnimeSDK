#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Sample
{
	inline static constexpr unsigned int SampleDynamicType_TypeDefinitionIndex = 73934;

	enum class SampleDynamicType : ::System::Int32
	{
		Invalid = 0,
		Long = 1,
		Double = 2,
	};
}
