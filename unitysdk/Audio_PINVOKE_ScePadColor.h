#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Audio_PINVOKE_ScePadColor_TypeDefinitionIndex = 80171;

struct alignas(1) Audio_PINVOKE_ScePadColor
{
	::System::Byte r; // 0x10
	::System::Byte g; // 0x11
	::System::Byte b; // 0x12
	::System::Byte reserve; // 0x13
};
