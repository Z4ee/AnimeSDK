#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_PDG_WorkItemOutputFile_TypeDefinitionIndex = 38364;

	struct alignas(8) HAPI_PDG_WorkItemOutputFile
	{
		::System::Int32 filePathSH; // 0x10
		::System::Int32 tagSH; // 0x14
		::System::Int64 hash; // 0x18
	};
}
