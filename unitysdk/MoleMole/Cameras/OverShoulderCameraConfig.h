#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/OverShoulderCameraOutElevation.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG_GET_RUNTIMEMAXPITCH_OFFSET UNITYSDK_OFFSET(0x141D82C0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG_GET_RUNTIMEMINPITCH_OFFSET UNITYSDK_OFFSET(0x141D82B0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x141D82D0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverShoulderCameraConfig_TypeDefinitionIndex = 38378;

	class OverShoulderCameraConfig : public ::System::Object
	{
	public:
		::System::Single minPitch; // 0x10
		::System::Single maxPitch; // 0x14
		::UnityEngine::Vector3 followOffset; // 0x18
		::UnityEngine::Vector3 cameraOffset; // 0x24
		::System::Single nearClipPlane; // 0x30
		::System::Single fieldOfView; // 0x34
		::System::Single rollAngle; // 0x38
		::System::Boolean enableInitPitch; // 0x3C
		::System::Single initPitchAngle; // 0x40
		::System::Single blendInDuration; // 0x44
		::System::String* blendInCurveKey; // 0x48
		::System::Boolean IgnoreFovBlend; // 0x50
		::System::Single blendInFovDuration; // 0x54
		::System::String* blendInFovCurveKey; // 0x58
		::System::Single blendOutDuration; // 0x60
		::System::String* blendOutCurveKey; // 0x68
		::MoleMole::Cameras::OverShoulderCameraOutElevation OutElevation; // 0x70
		::System::Boolean EnablePositionDamping; // 0x80
		::System::Boolean EnableOldPosDampingMethod; // 0x81
		::System::Single PositionDampingParamXZ; // 0x84
		::System::Single PositionDampingParamY; // 0x88
		::System::Boolean EnableListenRotateInput; // 0x8C
		::System::Single ListenRotateInputSensitivityX; // 0x90
		::System::Single ListenRotateInputSensitivityY; // 0x94
		::System::Single MobileTouchSensitivityScale; // 0x98
		::System::Boolean EnableRotateInputSmooth; // 0x9C
		::UnityEngine::Vector2 AccelTime; // 0xA0
		::UnityEngine::Vector2 DecelTime; // 0xA8
		::System::Boolean ApplyCameraFowardAsAimDir; // 0xB0
		::System::Boolean IgnoreLookAtScreenOffset; // 0xB1
		::System::Boolean EnableStretchPosOffsetY; // 0xB2
		::System::Boolean forceUseActCameraFOV; // 0xB3
		::System::Boolean forceUseActCameraRollAngle; // 0xB4
		::System::Single OverrideCollisionInterpToSpeed; // 0xB8
		::System::Boolean EnableShake; // 0xBC
		::System::Single ShakeScale; // 0xC0
		::System::Boolean EnableZoom; // 0xC4
		::System::Boolean EnablePipelineOverrideZoom; // 0xC5
		::System::Single ZoomScale; // 0xC8
		::System::Boolean EnableStretch; // 0xCC
		::System::Single StretchScale; // 0xD0
		::System::Boolean isFirstPersonView; // 0xD4
		::System::Single animatorPitchMinAngle; // 0xD8
		::System::Single animatorPitchMaxAngle; // 0xDC
		::System::String* animatorBlendTreeParam; // 0xE0
		::System::Single exitFirstPersonPolarAngle; // 0xE8
		::System::Boolean summonedAnimatorBlend; // 0xEC
		::System::Collections::Generic::List_1<::System::String*>* setRenderVisibleList; // 0xF0
		::System::Boolean isVisible; // 0xF8
		::System::Boolean isApplyAllRender; // 0xF9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG__CTOR_OFFSET))(this);
		}

		::System::Single get_RuntimeMinPitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG_GET_RUNTIMEMINPITCH_OFFSET))(this);
		}

		::System::Single get_RuntimeMaxPitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG_GET_RUNTIMEMAXPITCH_OFFSET))(this);
		}
	};
}
