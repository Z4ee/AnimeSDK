#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security
{
	inline static constexpr unsigned int UriPartial_TypeDefinitionIndex = 51;

	enum class UriPartial : ::System::Int32
	{
		Scheme = 0,
		Authority = 1,
		Path = 2,
	};
}
