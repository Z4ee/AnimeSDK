#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EErrorType_TypeDefinitionIndex = 9396;

	enum class EErrorType : ::System::Int32
	{
		Modal = 2,
		Floats = 1,
		Special = 3,
	};
}
