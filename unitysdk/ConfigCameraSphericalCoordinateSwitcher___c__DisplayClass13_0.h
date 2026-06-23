#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigCameraSphericalCoordinateSwitcher;

#define CONFIGCAMERASPHERICALCOORDINATESWITCHER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12D89950)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER___C__DISPLAYCLASS13_0__WAITUNTILTIMECURSOR_B__0_OFFSET UNITYSDK_OFFSET(0x12D89960)

inline static constexpr unsigned int ConfigCameraSphericalCoordinateSwitcher___c__DisplayClass13_0_TypeDefinitionIndex = 54241;

class ConfigCameraSphericalCoordinateSwitcher___c__DisplayClass13_0 : public ::System::Object
{
public:
	::ConfigCameraSphericalCoordinateSwitcher* __4__this; // 0x10
	::System::Single resumeTime; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _WaitUntilTimeCursor_b__0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER___C__DISPLAYCLASS13_0__WAITUNTILTIMECURSOR_B__0_OFFSET))(this);
	}
};
