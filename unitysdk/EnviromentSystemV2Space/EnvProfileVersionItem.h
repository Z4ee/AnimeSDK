#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvProfileVersionItem_TypeDefinitionIndex = 47524;

	struct alignas(8) EnvProfileVersionItem
	{
		::System::String* name; // 0x10
	};
}
