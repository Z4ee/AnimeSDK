#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_ObjectInfo_TypeDefinitionIndex = 38347;

	struct alignas(4) HAPI_ObjectInfo
	{
		::System::Int32 nameSH; // 0x10
		::System::Int32 objectInstancePathSH; // 0x14
		::System::Boolean hasTransformChanged; // 0x18
		::System::Boolean haveGeosChanged; // 0x19
		::System::Boolean isVisible; // 0x1A
		::System::Boolean isInstancer; // 0x1B
		::System::Boolean isInstanced; // 0x1C
		::System::Int32 geoCount; // 0x20
		::System::Int32 nodeId; // 0x24
		::System::Int32 objectToInstanceId; // 0x28
	};
}
