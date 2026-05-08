#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SurfCameraContext_CameraSide.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfCamera_TypeDefinitionIndex = 62368;

	struct alignas(8) ConfigSurfCamera
	{
		::UnityEngine::Vector3 DefaultRotation; // 0x10
		::System::Single DefaultFov; // 0x1C
		::System::Boolean UseFovCurve; // 0x20
		::System::Single MaxFOV; // 0x24
		::UnityEngine::AnimationCurve* FovCurve; // 0x28
		::System::Single DefaultDistance; // 0x30
		::System::Single MaxDistance; // 0x34
		::UnityEngine::AnimationCurve* OffsetZBySpeedCurve; // 0x38
		::System::Single SteerDistanceMax; // 0x40
		::UnityEngine::AnimationCurve* SteerDistanceCurve; // 0x48
		::UnityEngine::Vector2 DefaultOffset; // 0x50
		::UnityEngine::Vector2 MaxOffset; // 0x58
		::UnityEngine::AnimationCurve* OffsetXBySpeedCurve; // 0x60
		::UnityEngine::AnimationCurve* OffsetXBySteerCurve; // 0x68
		::UnityEngine::AnimationCurve* RollBySpeedCurve; // 0x70
		::UnityEngine::AnimationCurve* RollBySteerCurve; // 0x78
		::MoleMole::SurfCameraContext_CameraSide InitSide; // 0x80
		::System::Single FixedXOffset; // 0x84
		::System::Single ChangeSideDuration; // 0x88
		::UnityEngine::AnimationCurve* ChangeSideCurve; // 0x90
		::System::Single HandShakeLoopXDuration; // 0x98
		::System::Single HandShakeLoopXAmplitude; // 0x9C
		::System::Single HandShakeLoopYDuration; // 0xA0
		::System::Single HandShakeLoopYAmplitude; // 0xA4
		::System::Single BlendRatio; // 0xA8
		::System::Boolean FollowRoadYaw; // 0xAC
		::System::Single TrackPositionOffset; // 0xB0
		::System::Single MouseRotationMaxAngle; // 0xB4
		::System::Single MouseSensitivity; // 0xB8
		::System::String* CameraShakeKey; // 0xC0
		::System::Single CameraShakeLandingSpeedThreshold; // 0xC8
	};
}
