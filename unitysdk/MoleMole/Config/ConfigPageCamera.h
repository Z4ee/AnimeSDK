#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPageCameraBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigCameraNoise; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGPAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD73E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPageCamera_TypeDefinitionIndex = 61922;

	class ConfigPageCamera : public ::MoleMole::Config::ConfigPageCameraBase
	{
	public:
		::UnityEngine::AnimationCurve* noiseBlendSpeedCurve; // 0x10
		::UnityEngine::AnimationCurve* initTranslationCurve; // 0x18
		::UnityEngine::AnimationCurve* initToSpecialTranslationCurve; // 0x20
		::System::String* stretchCameraKey; // 0x28
		::UnityEngine::AnimationCurve* initCameraFovCurve; // 0x30
		::UnityEngine::AnimationCurve* initToSpecialCameraFovCurve; // 0x38
		::MoleMole::Config::ConfigCameraNoise* cameraNoiseProfile; // 0x40
		::UnityEngine::AnimationCurve* initTranslationCurveSpecial; // 0x48
		::UnityEngine::AnimationCurve* initCameraFovCurveSpecial; // 0x50
		::UnityEngine::Vector3 initAimPositionSpecial; // 0x58
		::UnityEngine::Vector3 bornPosition; // 0x64
		::System::Single initCameraFov; // 0x70
		::System::Boolean applySpecialCameraFov; // 0x74
		::System::Boolean applySpecialCameraTranslation; // 0x75
		::System::Single noiseBlendDuration; // 0x78
		::UnityEngine::Vector3 bornAimPositionSpecial; // 0x7C
		::System::Boolean applySpecialCameraPosition; // 0x88
		::System::Boolean applyAimPosition; // 0x89
		::System::Boolean applySpecialCameraAimPosition; // 0x8A
		::UnityEngine::Vector3 bornAimPosition; // 0x8C
		::System::Single initDurationSpecial; // 0x98
		::System::Single initToSpecialDuration; // 0x9C
		::UnityEngine::Vector3 initAimPosition; // 0xA0
		::UnityEngine::Vector3 initPosition; // 0xAC
		::System::Single bornCameraFov; // 0xB8
		::System::Single bornCameraFovSpecial; // 0xBC
		::System::Single initDuration; // 0xC0
		::System::Single initCameraFovSpecial; // 0xC4
		::UnityEngine::Vector3 bornPositionSpecial; // 0xC8
		::UnityEngine::Vector3 initPositionSpecial; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPAGECAMERA__CTOR_OFFSET))(this);
		}
	};
}
