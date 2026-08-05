#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BLINKPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1454F3A0)

inline static constexpr unsigned int BlinkPhase_TypeDefinitionIndex = 71170;

class BlinkPhase : public ::System::Object
{
public:
	::System::Int32 ChangeNumberColorCount; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLINKPHASE__CTOR_OFFSET))(this);
	}
};
