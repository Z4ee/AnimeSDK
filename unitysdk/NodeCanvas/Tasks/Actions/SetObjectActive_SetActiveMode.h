#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetObjectActive_SetActiveMode_TypeDefinitionIndex = 30677;

	enum class SetObjectActive_SetActiveMode : ::System::Int32
	{
		Deactivate = 0,
		Toggle = 2,
		Activate = 1,
	};
}
