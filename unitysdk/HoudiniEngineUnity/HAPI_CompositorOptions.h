#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_CompositorOptions_TypeDefinitionIndex = 37559;

	struct alignas(4) HAPI_CompositorOptions
	{
		::System::Int32 maximumResolutionX; // 0x10
		::System::Int32 maximumResolutionY; // 0x14
	};
}
