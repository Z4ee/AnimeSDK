#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace NapStreaming
{
	inline static constexpr unsigned int SceneDensityInfo_TypeDefinitionIndex = 46424;

	struct alignas(8) SceneDensityInfo
	{
		::System::String* md5; // 0x10
		::System::String* report; // 0x18
		::System::String* reportDetail; // 0x20
		::System::Boolean ignore; // 0x28
	};
}
