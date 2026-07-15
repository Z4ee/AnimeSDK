#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Metrics
{
	inline static constexpr unsigned int UserControllerType_TypeDefinitionIndex = 43467;

	enum class UserControllerType : ::System::Int32
	{
		Unknown = 0,
		MouseKeyboard = 1,
		GamepadControl = 2,
		TouchControl = 3,
	};
}
