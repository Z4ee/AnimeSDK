#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper_WorkingStatus_TypeDefinitionIndex = 51601;

	enum class GroupVariableHelper_WorkingStatus : ::System::Int32
	{
		Reading = 1,
		None = 0,
		Writing = 2,
	};
}
