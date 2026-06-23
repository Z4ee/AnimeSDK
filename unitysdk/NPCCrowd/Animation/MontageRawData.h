#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/MontageClipType.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_MONTAGERAWDATA_GETCLIPTYPE_OFFSET UNITYSDK_OFFSET(0x6C8930)
#define NPCCROWD_ANIMATION_MONTAGERAWDATA_GETDURATION_OFFSET UNITYSDK_OFFSET(0x6C89F0)
#define NPCCROWD_ANIMATION_MONTAGERAWDATA_GETTIMEDATA_OFFSET UNITYSDK_OFFSET(0x6C8980)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageRawData_TypeDefinitionIndex = 51555;

	struct alignas(4) MontageRawData
	{
		::System::Single startTime; // 0x10
		::System::Single endTime; // 0x14
		::System::Single speed; // 0x18
		::NPCCrowd::Animation::MontageClipType clipType; // 0x1C
		::System::Int32 clipID; // 0x20
		::System::Boolean loop; // 0x24
		::System::Single fadeinTIme; // 0x28

		::NPCCrowd::Animation::MontageClipType GetClipType()
		{
			return ((::NPCCrowd::Animation::MontageClipType(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGERAWDATA_GETCLIPTYPE_OFFSET))(this);
		}

		/*
		::NPCCrowd::Animation::MontageClipTimeData GetTimeData()
		{
			return ((::NPCCrowd::Animation::MontageClipTimeData(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGERAWDATA_GETTIMEDATA_OFFSET))(this);
		}
		*/

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGERAWDATA_GETDURATION_OFFSET))(this);
		}
	};
}
