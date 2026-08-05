#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3D57574A5731A8CB;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CAMERAS_DEFAULTFRAMETWOSHAPECONFIG_CREATEPOLICY_OFFSET UNITYSDK_OFFSET(0x116CD400)
#define MOLEMOLE_CAMERAS_DEFAULTFRAMETWOSHAPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x116CD5E0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int DefaultFrameTwoShapeConfig_TypeDefinitionIndex = 72866;

	class DefaultFrameTwoShapeConfig : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* PitchMappingCurve; // 0x10
		::UnityEngine::AnimationCurve* DistanceMinDeltaYawCurve; // 0x18
		::System::Single aimRatio; // 0x20
		::System::Single fieldOfView; // 0x24
		::UnityEngine::AnimationCurve* DistanceHeightRatioCurve; // 0x28
		::UnityEngine::AnimationCurve* HeightDeltaRadiusRatioCurve; // 0x30
		::UnityEngine::AnimationCurve* HeightDeltaScreenOffsetYCurve; // 0x38
		::System::Single maxVerticalOffset; // 0x40
		::System::Single minHorizontalRatio; // 0x44
		::System::Boolean enableAdjustment; // 0x48
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x50
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEFAULTFRAMETWOSHAPECONFIG__CTOR_OFFSET))(this);
		}

		::Class_1_3D57574A5731A8CB* CreatePolicy()
		{
			return ((::Class_1_3D57574A5731A8CB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEFAULTFRAMETWOSHAPECONFIG_CREATEPOLICY_OFFSET))(this);
		}
	};
}
