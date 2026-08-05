#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LoginLoadType_TypeDefinitionIndex = 7923;

	enum class LoginLoadType : ::System::Byte
	{
		Normal = 0x0,
		IEnumeratorLoader = 0x1,
	};
}
