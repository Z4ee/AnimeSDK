#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_MONTAGECLIPTIMEDATA_GETDURATION_OFFSET UNITYSDK_OFFSET(0x6AA760)
#define NPCCROWD_ANIMATION_MONTAGECLIPTIMEDATA_GETSAFESPEED_OFFSET UNITYSDK_OFFSET(0x6AA7C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageClipTimeData_TypeDefinitionIndex = 81851;

	struct alignas(4) MontageClipTimeData
	{
		::System::Single startTime; // 0x10
		::System::Single endTime; // 0x14
		::System::Single speed; // 0x18

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGECLIPTIMEDATA_GETDURATION_OFFSET))(this);
		}

		::System::Single GetSafeSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGECLIPTIMEDATA_GETSAFESPEED_OFFSET))(this);
		}
	};
}
