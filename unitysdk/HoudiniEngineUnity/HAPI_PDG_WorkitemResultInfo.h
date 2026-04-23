#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_PDG_WorkitemResultInfo_TypeDefinitionIndex = 43614;

	struct alignas(8) HAPI_PDG_WorkitemResultInfo
	{
		::System::Int32 resultSH; // 0x10
		::System::Int32 resultTagSH; // 0x14
		::System::Int64 resultHash; // 0x18
	};
}
