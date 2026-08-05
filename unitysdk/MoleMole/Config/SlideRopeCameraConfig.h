#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_SLIDEROPECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C478430)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SlideRopeCameraConfig_TypeDefinitionIndex = 46940;

	class SlideRopeCameraConfig : public ::System::Object
	{
	public:
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x10
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x18
		::System::Single defaultPitch; // 0x20
		::System::Single defaultYaw; // 0x24
		::System::Single defaultRoll; // 0x28
		::System::Single radius; // 0x2C
		::System::Boolean useFocalLens; // 0x30
		::System::Single lens; // 0x34
		::System::Single importantInScreenRatio; // 0x38
		::System::Single fov; // 0x3C
		::System::Single exitYaw; // 0x40
		::System::Single exitPitch; // 0x44
		::System::Boolean overrideBlendInAtSwitch; // 0x48
		::System::String* overrideCurveAtSwitch; // 0x50
		::System::Single overrideBlendInTimeRate; // 0x58
		::System::Boolean fallBackRight; // 0x5C
		::System::Single reverseWaitTime; // 0x60
		::MoleMole::Cameras::CameraTrackBlending* reverseBlend; // 0x68
		::System::Single minYaw; // 0x70
		::System::Single maxYaw; // 0x74
		::System::Single minPitch; // 0x78
		::System::Single maxPitch; // 0x7C
		::System::Single autoDefaultSpeed; // 0x80
		::System::Single inputRotateSpeed; // 0x84
		::System::String* inputDampingCurve; // 0x88
		::MoleMole::Cameras::CameraTrackBlending* opOffsetBlend; // 0x90
		::System::Boolean inputOffsetFollowBase; // 0x98
		::System::Single stayCustomTime; // 0x9C
		::UnityEngine::Vector3 followOffset; // 0xA0
		::UnityEngine::Vector2 viewOffset; // 0xAC
		::System::Single futureTime; // 0xB4
		::System::String* slopeToCurve; // 0xB8
		::System::Boolean enableDynamicRoll; // 0xC0
		::System::Single dynamicRollMaxAngle; // 0xC4
		::System::Single dynamicRollAngularSpeedRef; // 0xC8
		::System::Single dynamicRollAngularSpeedDeadZone; // 0xCC
		::System::Single dynamicRollSmoothTime; // 0xD0
		::System::Boolean dynamicRollInvert; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SLIDEROPECAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
