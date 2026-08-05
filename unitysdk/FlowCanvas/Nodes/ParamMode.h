#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParamMode_TypeDefinitionIndex = 30805;

	enum class ParamMode : ::System::Int32
	{
		Result = 6,
		Ref = 3,
		Undefined = 0,
		In = 1,
		Instance = 4,
		Out = 2,
	};
}
