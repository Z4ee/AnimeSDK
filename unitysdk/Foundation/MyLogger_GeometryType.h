#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int MyLogger_GeometryType_TypeDefinitionIndex = 7929;

	enum class MyLogger_GeometryType : ::System::Byte
	{
		Wire = 0x1,
		Normal = 0x0,
		Wired = 0x2,
	};
}
