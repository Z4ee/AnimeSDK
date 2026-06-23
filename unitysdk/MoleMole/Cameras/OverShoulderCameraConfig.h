#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/OverShoulderCameraOutElevation.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG_GET_RUNTIMEMAXPITCH_OFFSET UNITYSDK_OFFSET(0x13FF1410)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG_GET_RUNTIMEMINPITCH_OFFSET UNITYSDK_OFFSET(0x13FF1400)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF1420)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverShoulderCameraConfig_TypeDefinitionIndex = 64835;

	class OverShoulderCameraConfig : public ::System::Object
	{
	public:
		::System::Single minPitch; // 0x10
		::System::Single maxPitch; // 0x14
		::System::Boolean useOffsetBasePoint; // 0x18
		::System::String* basePointAttachPoint; // 0x20
		::UnityEngine::Vector3 followOffset; // 0x28
		::UnityEngine::Vector3 cameraOffset; // 0x34
		::System::Single nearClipPlane; // 0x40
		::System::Single fieldOfView; // 0x44
		::System::Single rollAngle; // 0x48
		::System::Boolean enableInitPitchYawFollow; // 0x4C
		::System::Boolean enableInitPitch; // 0x4D
		::System::Single initPitchAngle; // 0x50
		::System::Single blendInDuration; // 0x54
		::System::String* blendInCurveKey; // 0x58
		::System::Boolean IgnoreFovBlend; // 0x60
		::System::Single blendInFovDuration; // 0x64
		::System::String* blendInFovCurveKey; // 0x68
		::System::Single blendOutDuration; // 0x70
		::System::String* blendOutCurveKey; // 0x78
		::MoleMole::Cameras::OverShoulderCameraOutElevation OutElevation; // 0x80
		::System::Boolean EnablePositionDamping; // 0x90
		::System::Boolean EnableOldPosDampingMethod; // 0x91
		::System::Boolean EnableLagPosDampingMethod; // 0x92
		::System::Single PositionDampingParamXZ; // 0x94
		::System::Single PositionDampingParamY; // 0x98
		::System::Boolean EnableListenRotateInput; // 0x9C
		::System::Single ListenRotateInputSensitivityX; // 0xA0
		::System::Single ListenRotateInputSensitivityY; // 0xA4
		::System::Single MobileTouchSensitivityScale; // 0xA8
		::System::Boolean EnableRotateInputSmooth; // 0xAC
		::UnityEngine::Vector2 AccelTime; // 0xB0
		::UnityEngine::Vector2 DecelTime; // 0xB8
		::System::Boolean ApplyCameraFowardAsAimDir; // 0xC0
		::System::Boolean IgnoreLookAtScreenOffset; // 0xC1
		::System::Boolean EnableStretchPosOffsetY; // 0xC2
		::System::Boolean forceUseActCameraFOV; // 0xC3
		::System::Boolean forceUseActCameraRollAngle; // 0xC4
		::System::Single OverrideCollisionInterpToSpeed; // 0xC8
		::System::Boolean EnableShake; // 0xCC
		::System::Single ShakeScale; // 0xD0
		::System::Boolean EnableZoom; // 0xD4
		::System::Boolean EnablePipelineOverrideZoom; // 0xD5
		::System::Single ZoomScale; // 0xD8
		::System::Boolean EnableStretch; // 0xDC
		::System::Single StretchScale; // 0xE0
		::System::Boolean isFirstPersonView; // 0xE4
		::System::Single animatorPitchMinAngle; // 0xE8
		::System::Single animatorPitchMaxAngle; // 0xEC
		::System::String* animatorBlendTreeParam; // 0xF0
		::System::Single exitFirstPersonPolarAngle; // 0xF8
		::System::Boolean summonedAnimatorBlend; // 0xFC
		::System::Collections::Generic::List_1<::System::String*>* setRenderVisibleList; // 0x100
		::System::Boolean isVisible; // 0x108
		::System::Boolean isApplyAllRender; // 0x109

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
