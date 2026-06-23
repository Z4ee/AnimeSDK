#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SCEPADTRIGGEREFFECTMULTIPLEPOSITIONVIBRATIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x35F450)

inline static constexpr unsigned int ScePadTriggerEffectMultiplePositionVibrationParam_TypeDefinitionIndex = 62231;

struct alignas(8) ScePadTriggerEffectMultiplePositionVibrationParam
{
	::System::Byte frequency; // 0x10
	::Il2CppArray<::System::Byte>* amplitude; // 0x18

	::System::Void _ctor(::System::Byte VibrationFrequency, ::Il2CppArray<::System::Byte>* VibrationAmplitude)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SCEPADTRIGGEREFFECTMULTIPLEPOSITIONVIBRATIONPARAM__CTOR_OFFSET))(this, VibrationFrequency, VibrationAmplitude);
	}
};
