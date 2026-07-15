#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SignalTransformProcessor_SignalDrivenMode_TypeDefinitionIndex = 67787;

	enum class SignalTransformProcessor_SignalDrivenMode : ::System::Int32
	{
		Controller = 0,
		Threshold = 1,
		Curve = 2,
		State = 3,
		Phase = 4,
	};
}
