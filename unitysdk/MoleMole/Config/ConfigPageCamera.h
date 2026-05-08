#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPageCameraBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigCameraNoise; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGPAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x186BD800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPageCamera_TypeDefinitionIndex = 49279;

	class ConfigPageCamera : public ::MoleMole::Config::ConfigPageCameraBase
	{
	public:
		::UnityEngine::AnimationCurve* noiseBlendSpeedCurve; // 0x10
		::MoleMole::Config::ConfigCameraNoise* cameraNoiseProfile; // 0x18
		::System::String* stretchCameraKey; // 0x20
		::UnityEngine::AnimationCurve* initToSpecialTranslationCurve; // 0x28
		::UnityEngine::AnimationCurve* initTranslationCurveSpecial; // 0x30
		::UnityEngine::AnimationCurve* initTranslationCurve; // 0x38
		::UnityEngine::AnimationCurve* initCameraFovCurve; // 0x40
		::UnityEngine::AnimationCurve* initToSpecialCameraFovCurve; // 0x48
		::UnityEngine::AnimationCurve* initCameraFovCurveSpecial; // 0x50
		::System::Single initDurationSpecial; // 0x58
		::UnityEngine::Vector3 bornAimPosition; // 0x5C
		::System::Single bornCameraFovSpecial; // 0x68
		::UnityEngine::Vector3 bornPosition; // 0x6C
		::UnityEngine::Vector3 initAimPositionSpecial; // 0x78
		::System::Boolean applySpecialCameraFov; // 0x84
		::UnityEngine::Vector3 initAimPosition; // 0x88
		::System::Single initCameraFov; // 0x94
		::UnityEngine::Vector3 initPositionSpecial; // 0x98
		::System::Single initToSpecialDuration; // 0xA4
		::System::Single initDuration; // 0xA8
		::UnityEngine::Vector3 initPosition; // 0xAC
		::System::Single noiseBlendDuration; // 0xB8
		::System::Single initCameraFovSpecial; // 0xBC
		::UnityEngine::Vector3 bornPositionSpecial; // 0xC0
		::System::Boolean applyAimPosition; // 0xCC
		::System::Boolean applySpecialCameraPosition; // 0xCD
		::System::Boolean applySpecialCameraTranslation; // 0xCE
		::System::Boolean applySpecialCameraAimPosition; // 0xCF
		::System::Single bornCameraFov; // 0xD0
		::UnityEngine::Vector3 bornAimPositionSpecial; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPAGECAMERA__CTOR_OFFSET))(this);
		}
	};
}
