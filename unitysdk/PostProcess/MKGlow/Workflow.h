#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Workflow_TypeDefinitionIndex = 29637;

	enum class Workflow : ::System::Int32
	{
		Threshold = 0,
		Selective = 1,
		Natural = 2,
	};
}
