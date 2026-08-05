#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_MONTAGECLIPDATAINDEX_ISVALID_OFFSET UNITYSDK_OFFSET(0x60F790)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageClipDataIndex_TypeDefinitionIndex = 61290;

	struct alignas(4) MontageClipDataIndex
	{
		::System::Int32 layerIndex; // 0x10
		::System::Int32 clipIndex; // 0x14

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGECLIPDATAINDEX_ISVALID_OFFSET))(this);
		}
	};
}
