#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GenerateOptions_TypeDefinitionIndex = 38440;

	struct alignas(1) HEU_GenerateOptions
	{
		::System::Boolean _generateUVs; // 0x10
		::System::Boolean _generateTangents; // 0x11
		::System::Boolean _generateNormals; // 0x12
		::System::Boolean _useLODGroups; // 0x13
		::System::Boolean _splitPoints; // 0x14
	};
}
