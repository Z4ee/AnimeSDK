#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SCEPADTRIGGEREFFECTMULTIPLEPOSITIONFEEDBACKPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

inline static constexpr unsigned int ScePadTriggerEffectMultiplePositionFeedbackParam_TypeDefinitionIndex = 72243;

struct alignas(8) ScePadTriggerEffectMultiplePositionFeedbackParam
{
	::Il2CppArray<::System::Byte>* strength; // 0x10

	::System::Void _ctor(::Il2CppArray<::System::Byte>* feedbackStrength)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SCEPADTRIGGEREFFECTMULTIPLEPOSITIONFEEDBACKPARAM__CTOR_OFFSET))(this, feedbackStrength);
	}
};
