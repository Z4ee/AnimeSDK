#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScePadTriggerEffectCommand.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int ScePadTriggerEffectParam_TypeDefinitionIndex = 45961;

struct alignas(8) ScePadTriggerEffectParam
{
	::System::Byte triggerMask; // 0x10
	::Il2CppArray<::System::Byte>* padding; // 0x18
	::Il2CppArray<::ScePadTriggerEffectCommand>* command; // 0x20
};
