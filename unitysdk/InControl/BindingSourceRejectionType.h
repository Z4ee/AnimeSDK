#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int BindingSourceRejectionType_TypeDefinitionIndex = 39498;

	enum class BindingSourceRejectionType : ::System::Int32
	{
		None = 0,
		DuplicateBindingOnAction = 1,
		DuplicateBindingOnActionSet = 2,
	};
}
