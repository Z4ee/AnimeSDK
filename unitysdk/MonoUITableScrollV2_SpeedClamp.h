#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_SpeedClamp_SpeedClampType.h"
#include "unitysdk/System/Object.h"

#define MONOUITABLESCROLLV2_SPEEDCLAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x135749D0)

inline static constexpr unsigned int MonoUITableScrollV2_SpeedClamp_TypeDefinitionIndex = 75050;

class MonoUITableScrollV2_SpeedClamp : public ::System::Object
{
public:
	::MonoUITableScrollV2_SpeedClamp_SpeedClampType speedClamp; // 0x10
	::System::Single maxSpeed; // 0x14
	::System::Single dragSpeedToMoveSpeed; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SPEEDCLAMP__CTOR_OFFSET))(this);
	}
};
