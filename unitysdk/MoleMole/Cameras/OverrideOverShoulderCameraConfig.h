#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_OVERRIDEOVERSHOULDERCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x162920D0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverrideOverShoulderCameraConfig_TypeDefinitionIndex = 72578;

	class OverrideOverShoulderCameraConfig : public ::System::Object
	{
	public:
		::System::Boolean EnableOverrideFollowOffset; // 0x10
		::UnityEngine::Vector3 OverrideFollowOffset; // 0x14
		::System::Boolean EnableOverrideCameraOffset; // 0x20
		::UnityEngine::Vector3 OverrideCameraOffset; // 0x24
		::System::Boolean EnableOverrideFov; // 0x30
		::System::Single OverrideFov; // 0x34
		::System::Boolean EnableOverrideBlendIn; // 0x38
		::System::Single OverrideBlendInDuration; // 0x3C
		::System::String* OverrideBlendInCurveKey; // 0x40
		::System::Boolean EnableOverrideRollAngle; // 0x48
		::System::Single OverrideRollAngle; // 0x4C
		::System::Boolean EnableOverrideBlendOut; // 0x50
		::System::Single OverrideBlendOutDuration; // 0x54
		::System::String* OverrideBlendOutCurveKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERRIDEOVERSHOULDERCAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
