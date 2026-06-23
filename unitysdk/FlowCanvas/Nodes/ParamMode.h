#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParamMode_TypeDefinitionIndex = 30673;

	enum class ParamMode : ::System::Int32
	{
		In = 1,
		Undefined = 0,
		Ref = 3,
		Out = 2,
		Instance = 4,
		Result = 6,
	};
}
