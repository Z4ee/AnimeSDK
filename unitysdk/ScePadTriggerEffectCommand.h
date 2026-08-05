#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScePadTriggerEffectCommandData.h"
#include "unitysdk/ScePadTriggerEffectMode.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int ScePadTriggerEffectCommand_TypeDefinitionIndex = 70617;

struct alignas(8) ScePadTriggerEffectCommand
{
	::ScePadTriggerEffectMode mode; // 0x10
	::Il2CppArray<::System::Byte>* padding; // 0x18
	::ScePadTriggerEffectCommandData commandData; // 0x20
};
