#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_StorageType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_VolumeType.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_VolumeInfo_TypeDefinitionIndex = 38355;

	struct alignas(8) HAPI_VolumeInfo
	{
		::System::Int32 nameSH; // 0x10
		::HoudiniEngineUnity::HAPI_VolumeType type; // 0x14
		::System::Int32 xLength; // 0x18
		::System::Int32 yLength; // 0x1C
		::System::Int32 zLength; // 0x20
		::System::Int32 minX; // 0x24
		::System::Int32 minY; // 0x28
		::System::Int32 minZ; // 0x2C
		::System::Int32 tupleSize; // 0x30
		::HoudiniEngineUnity::HAPI_StorageType storage; // 0x34
		::System::Int32 tileSize; // 0x38
		::HoudiniEngineUnity::HAPI_Transform transform; // 0x40
		::System::Boolean hasTaper; // 0x68
		::System::Single xTaper; // 0x6C
		::System::Single yTaper; // 0x70
	};
}
