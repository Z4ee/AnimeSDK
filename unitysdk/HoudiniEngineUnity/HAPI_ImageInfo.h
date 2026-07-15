#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ImageDataFormat.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ImagePacking.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_ImageInfo_TypeDefinitionIndex = 38353;

	struct alignas(8) HAPI_ImageInfo
	{
		::System::Int32 imageFileFormatNameSH; // 0x10
		::System::Int32 xRes; // 0x14
		::System::Int32 yRes; // 0x18
		::HoudiniEngineUnity::HAPI_ImageDataFormat dataFormat; // 0x1C
		::System::Boolean interleaved; // 0x20
		::HoudiniEngineUnity::HAPI_ImagePacking packing; // 0x24
		::System::Double gamma; // 0x28
	};
}
