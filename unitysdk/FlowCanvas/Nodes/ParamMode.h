#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParamMode_TypeDefinitionIndex = 27707;

	enum class ParamMode : ::System::Int32
	{
		Undefined = 0,
		In = 1,
		Result = 6,
		Out = 2,
		Instance = 4,
		Ref = 3,
	};
}
