#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }

#define MOLEMOLE_CAMERAS_TACTICALCOMBATCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x134E54B0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int TacticalCombatCameraConfig_TypeDefinitionIndex = 68404;

	class TacticalCombatCameraConfig : public ::System::Object
	{
	public:
		::System::Single minFieldOfView; // 0x10
		::System::Single maxFieldOfView; // 0x14
		::System::Single rollAngleThreshold; // 0x18
		::System::Single screenOffsetXThreshold; // 0x1C
		::System::Single screenOffsetYThreshold; // 0x20
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x28
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_TACTICALCOMBATCAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
