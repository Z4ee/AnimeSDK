#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int MyLogger_GeometryType_TypeDefinitionIndex = 8122;

	enum class MyLogger_GeometryType : ::System::Byte
	{
		Normal = 0x0,
		Wired = 0x2,
		Wire = 0x1,
	};
}
