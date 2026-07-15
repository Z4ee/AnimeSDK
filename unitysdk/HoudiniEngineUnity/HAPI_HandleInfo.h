#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_HandleInfo_TypeDefinitionIndex = 38345;

	struct alignas(4) HAPI_HandleInfo
	{
		::System::Int32 nameSH; // 0x10
		::System::Int32 typeNameSH; // 0x14
		::System::Int32 bindingsCount; // 0x18
	};
}
