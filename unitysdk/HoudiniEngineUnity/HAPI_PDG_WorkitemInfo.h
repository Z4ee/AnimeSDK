#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_PDG_WorkitemInfo_TypeDefinitionIndex = 43613;

	struct alignas(4) HAPI_PDG_WorkitemInfo
	{
		::System::Int32 index; // 0x10
		::System::Int32 numResults; // 0x14
		::System::Int32 nameSH; // 0x18
	};
}
