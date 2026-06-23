#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Authenticode
{
	inline static constexpr unsigned int Authority_TypeDefinitionIndex = 2474;

	enum class Authority : ::System::Int32
	{
		Individual = 0,
		Commercial = 1,
		Maximum = 2,
	};
}
