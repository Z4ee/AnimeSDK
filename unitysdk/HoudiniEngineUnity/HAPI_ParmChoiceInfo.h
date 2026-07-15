#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_ParmChoiceInfo_TypeDefinitionIndex = 38344;

	struct alignas(4) HAPI_ParmChoiceInfo
	{
		::System::Int32 parentParmId; // 0x10
		::System::Int32 labelSH; // 0x14
		::System::Int32 valueSH; // 0x18
	};
}
