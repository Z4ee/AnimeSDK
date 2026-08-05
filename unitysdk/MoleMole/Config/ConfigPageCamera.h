#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPageCameraBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigCameraNoise; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGPAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B60E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPageCamera_TypeDefinitionIndex = 76931;

	class ConfigPageCamera : public ::MoleMole::Config::ConfigPageCameraBase
	{
	public:
		::UnityEngine::AnimationCurve* initCameraFovCurveSpecial; // 0x10
		::System::String* stretchCameraKey; // 0x18
		::MoleMole::Config::ConfigCameraNoise* cameraNoiseProfile; // 0x20
		::UnityEngine::AnimationCurve* initTranslationCurveSpecial; // 0x28
		::UnityEngine::AnimationCurve* initToSpecialCameraFovCurve; // 0x30
		::UnityEngine::AnimationCurve* noiseBlendSpeedCurve; // 0x38
		::UnityEngine::AnimationCurve* initCameraFovCurve; // 0x40
		::UnityEngine::AnimationCurve* initTranslationCurve; // 0x48
		::UnityEngine::AnimationCurve* initToSpecialTranslationCurve; // 0x50
		::System::Single initDuration; // 0x58
		::UnityEngine::Vector3 bornPositionSpecial; // 0x5C
		::UnityEngine::Vector3 bornAimPosition; // 0x68
		::System::Single bornCameraFov; // 0x74
		::System::Boolean applySpecialCameraTranslation; // 0x78
		::System::Boolean applySpecialCameraPosition; // 0x79
		::UnityEngine::Vector3 bornAimPositionSpecial; // 0x7C
		::UnityEngine::Vector3 initAimPosition; // 0x88
		::UnityEngine::Vector3 initAimPositionSpecial; // 0x94
		::System::Single initCameraFovSpecial; // 0xA0
		::System::Single noiseBlendDuration; // 0xA4
		::System::Single initToSpecialDuration; // 0xA8
		::UnityEngine::Vector3 initPositionSpecial; // 0xAC
		::System::Boolean applyAimPosition; // 0xB8
		::System::Boolean applySpecialCameraFov; // 0xB9
		::System::Boolean applySpecialCameraAimPosition; // 0xBA
		::UnityEngine::Vector3 bornPosition; // 0xBC
		::System::Single bornCameraFovSpecial; // 0xC8
		::System::Single initDurationSpecial; // 0xCC
		::UnityEngine::Vector3 initPosition; // 0xD0
		::System::Single initCameraFov; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPAGECAMERA__CTOR_OFFSET))(this);
		}
	};
}
