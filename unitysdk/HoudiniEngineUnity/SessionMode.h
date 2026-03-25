#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int SessionMode_TypeDefinitionIndex = 37768;

	enum class SessionMode : ::System::Int32
	{
		Socket = 0,
		Pipe = 1,
	};
}
