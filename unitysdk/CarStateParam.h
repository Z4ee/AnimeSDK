#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CARSTATEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA6DD980)

inline static constexpr unsigned int CarStateParam_TypeDefinitionIndex = 38004;

class CarStateParam : public ::System::Object
{
public:
	::System::Single Acceleration; // 0x10
	::System::Single Deceleration; // 0x14
	::System::Single EmergencyBrake; // 0x18
	::System::Single Weight; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARSTATEPARAM__CTOR_OFFSET))(this);
	}
};
