#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PS_IssuerID_TypeDefinitionIndex = 8064;

	enum class PS_IssuerID : ::System::Int32
	{
		Invalid = -1,
		Development = 1,
		Certification = 8,
		Live = 256,
	};
}
