#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CAMERAS_TELESCOPECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x144C5FE0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int TelescopeCameraConfig_TypeDefinitionIndex = 48010;

	class TelescopeCameraConfig : public ::System::Object
	{
	public:
		::System::Single minPitch; // 0x10
		::System::Single maxPitch; // 0x14
		::System::Single minYaw; // 0x18
		::System::Single maxYaw; // 0x1C
		::System::Single minRoll; // 0x20
		::System::Single maxRoll; // 0x24
		::System::Single minFieldOfView; // 0x28
		::System::Single maxFieldOfView; // 0x2C
		::System::Single defaultFieldOfView; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_TELESCOPECAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
