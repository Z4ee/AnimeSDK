#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_VolumeVisualType.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_VolumeVisualInfo_TypeDefinitionIndex = 38357;

	struct alignas(4) HAPI_VolumeVisualInfo
	{
		::HoudiniEngineUnity::HAPI_VolumeVisualType type; // 0x10
		::System::Single iso; // 0x14
		::System::Single density; // 0x18
	};
}
