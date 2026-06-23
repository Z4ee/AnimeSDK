#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUIFocusBase.h"

#define MONOUIFOCUS3D__CTOR_OFFSET UNITYSDK_OFFSET(0xD571D10)

inline static constexpr unsigned int MonoUIFocus3D_TypeDefinitionIndex = 85399;

class MonoUIFocus3D : public ::MonoUIFocusBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIFOCUS3D__CTOR_OFFSET))(this);
	}
};
