#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_PDG_WorkItemInfo_TypeDefinitionIndex = 38363;

	struct alignas(4) HAPI_PDG_WorkItemInfo
	{
		::System::Int32 index; // 0x10
		::System::Int32 outputFileCount; // 0x14
		::System::Int32 nameSH; // 0x18
	};
}
