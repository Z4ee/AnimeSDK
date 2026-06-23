#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/SideScrollingReturnActCameraPolarType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }

#define MOLEMOLE_CAMERAS_SIDESCROLLINGCAMERARUNTIMEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x10CDE4C0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int SideScrollingCameraRuntimeParam_TypeDefinitionIndex = 65286;

	class SideScrollingCameraRuntimeParam : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 StartPos; // 0x10
		::UnityEngine::Vector3 EndPos; // 0x1C
		::MoleMole::Cameras::CameraTrackBlending* OverrideBlendIn; // 0x28
		::MoleMole::Cameras::CameraTrackBlending* OverrideBlendOut; // 0x30
		::MoleMole::Cameras::SideScrollingReturnActCameraPolarType ReturnPolarType; // 0x38

		::System::Void _ctor(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, ::MoleMole::Cameras::CameraTrackBlending* overrideBlendIn, ::MoleMole::Cameras::CameraTrackBlending* overrideBlendOut, ::System::Boolean startEndBound, ::MoleMole::Cameras::SideScrollingReturnActCameraPolarType returnPolarType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Cameras::CameraTrackBlending*, ::MoleMole::Cameras::CameraTrackBlending*, ::System::Boolean, ::MoleMole::Cameras::SideScrollingReturnActCameraPolarType))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SIDESCROLLINGCAMERARUNTIMEPARAM__CTOR_OFFSET))(this, startPos, endPos, overrideBlendIn, overrideBlendOut, startEndBound, returnPolarType);
		}
	};
}
