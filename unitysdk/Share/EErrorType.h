#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EErrorType_TypeDefinitionIndex = 10722;

	enum class EErrorType : ::System::Int32
	{
		Special = 3,
		Floats = 1,
		Modal = 2,
	};
}
