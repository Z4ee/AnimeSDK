#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Func_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int ValueDoubleBuffer_1_TypeDefinitionIndex = 38309;

	template <typename T>
	struct ValueDoubleBuffer_1
	{
		T Front; // 0x0
		T Back; // 0x0
		::System::Int32 FrontIndex; // 0x0
	};
}
