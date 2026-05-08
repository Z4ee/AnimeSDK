#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LoginLoadType_TypeDefinitionIndex = 7711;

	enum class LoginLoadType : ::System::Byte
	{
		IEnumeratorLoader = 0x1,
		Normal = 0x0,
	};
}
