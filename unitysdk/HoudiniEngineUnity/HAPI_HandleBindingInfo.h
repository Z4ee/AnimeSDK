#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_HandleBindingInfo_TypeDefinitionIndex = 38346;

	struct alignas(4) HAPI_HandleBindingInfo
	{
		::System::Int32 handleParmNameSH; // 0x10
		::System::Int32 assetParmNameSH; // 0x14
		::System::Int32 assetParmId; // 0x18
		::System::Int32 assetParmIndex; // 0x1C
	};
}
