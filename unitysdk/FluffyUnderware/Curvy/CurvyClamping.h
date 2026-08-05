#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyClamping_TypeDefinitionIndex = 39446;

	enum class CurvyClamping : ::System::Int32
	{
		Clamp = 0,
		PingPong = 2,
		Loop = 1,
	};
}
