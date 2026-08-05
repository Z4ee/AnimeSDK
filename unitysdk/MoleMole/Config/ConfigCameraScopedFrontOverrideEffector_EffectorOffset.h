#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScopedFrontCameraControlEmotionOverrideEffector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ScopedFrontCameraControlEmotion; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_EFFECTOROFFSET_APPLYOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x116FC740)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_EFFECTOROFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x116FC7C0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_EFFECTOROFFSET___BASE_APPLYOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x116FC7D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraScopedFrontOverrideEffector_EffectorOffset_TypeDefinitionIndex = 77018;

	class ConfigCameraScopedFrontOverrideEffector_EffectorOffset : public ::MoleMole::Config::ScopedFrontCameraControlEmotionOverrideEffector
	{
	public:
		::UnityEngine::Vector3 EffectorOffset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_EFFECTOROFFSET__CTOR_OFFSET))(this);
		}

		::System::Void ApplyOverrideConfig(::MoleMole::Config::ScopedFrontCameraControlEmotion* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScopedFrontCameraControlEmotion*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_EFFECTOROFFSET_APPLYOVERRIDECONFIG_OFFSET))(this, config);
		}

		::System::Void __base_ApplyOverrideConfig(::MoleMole::Config::ScopedFrontCameraControlEmotion* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScopedFrontCameraControlEmotion*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_EFFECTOROFFSET___BASE_APPLYOVERRIDECONFIG_OFFSET))(this, P0);
		}
	};
}
