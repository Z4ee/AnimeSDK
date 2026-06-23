#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SCEPADTRIGGEREFFECTFEEDBACKPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x417DA0)

inline static constexpr unsigned int ScePadTriggerEffectFeedbackParam_TypeDefinitionIndex = 74182;

struct alignas(1) ScePadTriggerEffectFeedbackParam
{
	::System::Byte position; // 0x10
	::System::Byte strength; // 0x11

	::System::Void _ctor(::System::Byte feedbackPosition, ::System::Byte feedbackStrength)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SCEPADTRIGGEREFFECTFEEDBACKPARAM__CTOR_OFFSET))(this, feedbackPosition, feedbackStrength);
	}
};
