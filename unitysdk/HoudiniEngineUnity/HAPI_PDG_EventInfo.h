#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_PDG_EventInfo_TypeDefinitionIndex = 38362;

	struct alignas(4) HAPI_PDG_EventInfo
	{
		::System::Int32 nodeId; // 0x10
		::System::Int32 workItemId; // 0x14
		::System::Int32 dependencyId; // 0x18
		::System::Int32 currentState; // 0x1C
		::System::Int32 lastState; // 0x20
		::System::Int32 eventType; // 0x24
		::System::Int32 msgSH; // 0x28
	};
}
