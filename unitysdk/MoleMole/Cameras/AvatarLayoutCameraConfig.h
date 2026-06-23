#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_AVATARLAYOUTCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF0DC0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int AvatarLayoutCameraConfig_TypeDefinitionIndex = 58988;

	class AvatarLayoutCameraConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 CameraOffset; // 0x10
		::System::Single Radius; // 0x18
		::System::Single FieldOfView; // 0x1C
		::System::Single PitchAngle; // 0x20
		::System::Single YawAngle; // 0x24
		::System::Single RollAngle; // 0x28
		::System::Boolean DisableFollowPosition; // 0x2C
		::System::Single PositionDamping; // 0x30
		::System::Boolean DisableFollowRotation; // 0x34
		::System::Single RotationDamping; // 0x38
		::System::Single BlendInDuration; // 0x3C
		::System::String* BlendInCurveKey; // 0x40
		::System::Single BlendOutDuration; // 0x48
		::System::String* BlendOutCurveKey; // 0x50
		::System::Boolean ManualSetCameraOutElevation; // 0x58
		::System::Single CustomCameraOutElevation; // 0x5C
		::System::Boolean ManualSetCameraOutPolar; // 0x60
		::System::Single CustomCameraOutPolar; // 0x64
		::System::Single CameraShakeRatio; // 0x68
		::System::Single CameraZoomRatio; // 0x6C
		::System::Single CameraStretchRatio; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_AVATARLAYOUTCAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
