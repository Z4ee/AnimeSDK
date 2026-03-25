#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCapturer_ImageCompareResult_TypeDefinitionIndex = 29245;

	struct alignas(8) FramePassCapturer_ImageCompareResult
	{
		::System::Single corr; // 0x10
		::Il2CppArray<::System::Byte>* diff; // 0x18
	};
}
