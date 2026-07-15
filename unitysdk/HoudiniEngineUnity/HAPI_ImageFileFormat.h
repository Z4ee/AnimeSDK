#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_ImageFileFormat_TypeDefinitionIndex = 38352;

	struct alignas(4) HAPI_ImageFileFormat
	{
		::System::Int32 nameSH; // 0x10
		::System::Int32 descriptionSH; // 0x14
		::System::Int32 defaultExtensionSH; // 0x18
	};
}
