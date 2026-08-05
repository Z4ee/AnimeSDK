#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SCEPADTRIGGEREFFECTSLOPEFEEDBACKPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x881B70)

inline static constexpr unsigned int ScePadTriggerEffectSlopeFeedbackParam_TypeDefinitionIndex = 86527;

struct alignas(1) ScePadTriggerEffectSlopeFeedbackParam
{
	::System::Byte startPosition; // 0x10
	::System::Byte endPosition; // 0x11
	::System::Byte startStrength; // 0x12
	::System::Byte endStrength; // 0x13

	::System::Void _ctor(::System::Byte feedbackStartPosition, ::System::Byte feedbackEndPosition, ::System::Byte feedbackStartStrength, ::System::Byte feedbackEndStrength)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SCEPADTRIGGEREFFECTSLOPEFEEDBACKPARAM__CTOR_OFFSET))(this, feedbackStartPosition, feedbackEndPosition, feedbackStartStrength, feedbackEndStrength);
	}
};
