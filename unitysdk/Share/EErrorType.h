#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EErrorType_TypeDefinitionIndex = 13960;

	enum class EErrorType : ::System::Int32
	{
		Floats = 1,
		Special = 3,
		Modal = 2,
	};
}
