#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int IDToTaskWrapper_ContentType_TypeDefinitionIndex = 33895;

	enum class IDToTaskWrapper_ContentType : ::System::Int32
	{
		Invalid = 0,
		List = 1,
		Dictionary = 2,
	};
}
