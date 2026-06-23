#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/MontageClipTimeData.h"
#include "unitysdk/NPCCrowd/Animation/MontageClipType.h"
#include "unitysdk/NPCCrowd/Animation/MontageSeqFrameLoopMode.h"
#include "unitysdk/NPCCrowd/Animation/MontageSeqFrameTargetType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_GETCLIPTYPE_OFFSET UNITYSDK_OFFSET(0x733B10)
#define NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_GETDURATION_OFFSET UNITYSDK_OFFSET(0x733C00)
#define NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_GETEFFECTIVESPEEDSCALE_OFFSET UNITYSDK_OFFSET(0x733C10)
#define NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_GETPLAYSTARTTIME_OFFSET UNITYSDK_OFFSET(0x733CC0)
#define NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_GETTIMEDATA_OFFSET UNITYSDK_OFFSET(0x733B60)
#define NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_ISLOOPENABLED_OFFSET UNITYSDK_OFFSET(0x733C70)
#define NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_ISVALIDCLIP_OFFSET UNITYSDK_OFFSET(0x733AA0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageSeqFrameRawData_TypeDefinitionIndex = 61636;

	struct alignas(8) MontageSeqFrameRawData
	{
		::System::Single startTime; // 0x10
		::System::Single endTime; // 0x14
		::NPCCrowd::Animation::MontageClipTimeData timeData; // 0x18
		::NPCCrowd::Animation::MontageSeqFrameTargetType targetType; // 0x24
		::System::Int32 targetId; // 0x28
		::System::String* textureSheetKey; // 0x30
		::NPCCrowd::Animation::MontageSeqFrameLoopMode loopMode; // 0x38
		::System::Single playStartTime; // 0x3C
		::System::Boolean takeoverTick; // 0x40
		::System::Single speedScale; // 0x44
		::System::Boolean isGap; // 0x48

		::System::Boolean IsValidClip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_ISVALIDCLIP_OFFSET))(this);
		}

		::NPCCrowd::Animation::MontageClipType GetClipType()
		{
			return ((::NPCCrowd::Animation::MontageClipType(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_GETCLIPTYPE_OFFSET))(this);
		}

		::NPCCrowd::Animation::MontageClipTimeData GetTimeData()
		{
			return ((::NPCCrowd::Animation::MontageClipTimeData(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_GETTIMEDATA_OFFSET))(this);
		}

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_GETDURATION_OFFSET))(this);
		}

		::System::Single GetEffectiveSpeedScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_GETEFFECTIVESPEEDSCALE_OFFSET))(this);
		}

		::System::Boolean IsLoopEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_ISLOOPENABLED_OFFSET))(this);
		}

		::System::Single GetPlayStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGESEQFRAMERAWDATA_GETPLAYSTARTTIME_OFFSET))(this);
		}
	};
}
