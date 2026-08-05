#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace NapStreaming
{
	inline static constexpr unsigned int NonStreamingGenerateData_TypeDefinitionIndex = 47546;

	struct alignas(8) NonStreamingGenerateData
	{
		::System::String* nonStreamingName; // 0x10
		::System::Single minSize; // 0x18
	};
}
