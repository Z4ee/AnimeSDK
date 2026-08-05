#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Workflow_TypeDefinitionIndex = 26826;

	enum class Workflow : ::System::Int32
	{
		Selective = 1,
		Natural = 2,
		Threshold = 0,
	};
}
