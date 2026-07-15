#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_AssetInfo_TypeDefinitionIndex = 38340;

	struct alignas(4) HAPI_AssetInfo
	{
		::System::Int32 nodeId; // 0x10
		::System::Int32 objectNodeId; // 0x14
		::System::Boolean hasEverCooked; // 0x18
		::System::Int32 nameSH; // 0x1C
		::System::Int32 labelSH; // 0x20
		::System::Int32 filePathSH; // 0x24
		::System::Int32 versionSH; // 0x28
		::System::Int32 fullOpNameSH; // 0x2C
		::System::Int32 helpTextSH; // 0x30
		::System::Int32 helpURLSH; // 0x34
		::System::Int32 objectCount; // 0x38
		::System::Int32 handleCount; // 0x3C
		::System::Int32 transformInputCount; // 0x40
		::System::Int32 geoInputCount; // 0x44
		::System::Int32 geoOutputCount; // 0x48
		::System::Boolean haveObjectsChanged; // 0x4C
		::System::Boolean haveMaterialsChanged; // 0x4D
	};
}
