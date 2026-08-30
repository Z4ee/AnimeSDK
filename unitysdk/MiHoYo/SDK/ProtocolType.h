#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolType_TypeDefinitionIndex = 8065;

	enum class ProtocolType : ::System::Int32
	{
		Default = 0,
		Update = 1,
	};
}
