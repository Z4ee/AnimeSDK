#pragma once
#include "unitysdk/unitysdk.h"

namespace Beebyte::Obfuscator
{
	inline static constexpr unsigned int MessageCode_TypeDefinitionIndex = 45258;

	enum class MessageCode : ::System::Int32
	{
		UnityReflectionMethodNotFound = 0,
	};
}
