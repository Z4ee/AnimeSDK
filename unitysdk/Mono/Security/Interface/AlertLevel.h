#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int AlertLevel_TypeDefinitionIndex = 2274;

	enum class AlertLevel : ::System::Byte
	{
		Warning = 0x1,
		Fatal = 0x2,
	};
}
