#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }

#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA60A70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSideScrollingCamera_TypeDefinitionIndex = 63346;

	class ConfigSideScrollingCamera : public ::System::Object
	{
	public:
		::System::Single FOV; // 0x10
		::System::Single Radius; // 0x14
		::System::Single PitchAngle; // 0x18
		::UnityEngine::Vector3 LookAtWorldPosOffset; // 0x1C
		::System::Single DynamicCenterOffsetMaxLengthX; // 0x28
		::System::Single DynamicCenterResetTime; // 0x2C
		::System::Single DynamicCenterDamping; // 0x30
		::System::Single XAxisSoftZoneScreenSpaceRatio; // 0x34
		::System::Single YAxisSoftZoneScreenSpaceRatio; // 0x38
		::System::Single DampingXInsideZone; // 0x3C
		::System::Single DampingYInsideZone; // 0x40
		::System::Single DampingXOutsideZone; // 0x44
		::System::Single DampingYOutsideZone; // 0x48
		::System::Single DampingXLerpRate; // 0x4C
		::System::Single DampingYLerpRate; // 0x50
		::System::Single DampingZ; // 0x54
		::System::Boolean EnableShake; // 0x58
		::System::Single ShakeScale; // 0x5C
		::System::Boolean EnableZoom; // 0x60
		::System::Boolean EnablePipelineOverrideZoom; // 0x61
		::System::Single ZoomScale; // 0x64
		::System::Boolean EnableStretch; // 0x68
		::System::Single StretchScale; // 0x6C
		::MoleMole::Cameras::CameraTrackBlending* DefaultBlendIn; // 0x70
		::MoleMole::Cameras::CameraTrackBlending* DefaultBlendOut; // 0x78
		::System::Single ListenerOffsetFromCameraForward; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGCAMERA__CTOR_OFFSET))(this);
		}
	};
}
