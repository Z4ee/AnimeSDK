#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyClamping_TypeDefinitionIndex = 39011;

	enum class CurvyClamping : ::System::Int32
	{
		Loop = 1,
		PingPong = 2,
		Clamp = 0,
	};
}
