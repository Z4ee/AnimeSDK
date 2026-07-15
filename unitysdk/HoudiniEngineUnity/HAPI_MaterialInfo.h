#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_MaterialInfo_TypeDefinitionIndex = 38351;

	struct alignas(4) HAPI_MaterialInfo
	{
		::System::Int32 nodeId; // 0x10
		::System::Boolean exists; // 0x14
		::System::Boolean hasChanged; // 0x15
	};
}
