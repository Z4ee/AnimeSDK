#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper_WorkingStatus_TypeDefinitionIndex = 46015;

	enum class GroupVariableHelper_WorkingStatus : ::System::Int32
	{
		None = 0,
		Reading = 1,
		Writing = 2,
	};
}
