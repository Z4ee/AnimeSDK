#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigCameraScopedFrontOverrideEffector.h"

namespace MoleMole::Photo { class PlayableGraphClipConfig; }
namespace MoleMole::Photo { class ScopedFrontCameraControlConfig; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_POSECLIP_APPLYOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x134F66E0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_POSECLIP_RESET_OFFSET UNITYSDK_OFFSET(0x134F6760)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_POSECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x134F6810)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_POSECLIP___BASE_APPLYOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x134F6820)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_POSECLIP___BASE_RESET_OFFSET UNITYSDK_OFFSET(0x134F68B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraScopedFrontOverrideEffector_PoseClip_TypeDefinitionIndex = 42925;

	class ConfigCameraScopedFrontOverrideEffector_PoseClip : public ::MoleMole::Config::ConfigCameraScopedFrontOverrideEffector
	{
	public:
		::MoleMole::Photo::PlayableGraphClipConfig* PoseClipConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_POSECLIP__CTOR_OFFSET))(this);
		}

		::System::Void ApplyOverrideConfig(::MoleMole::Photo::ScopedFrontCameraControlConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_POSECLIP_APPLYOVERRIDECONFIG_OFFSET))(this, config);
		}

		::System::Void Reset(::MoleMole::Photo::ScopedFrontCameraControlConfig* config, ::MoleMole::Photo::ScopedFrontCameraControlConfig* defaultConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_POSECLIP_RESET_OFFSET))(this, config, defaultConfig);
		}

		::System::Void __base_ApplyOverrideConfig(::MoleMole::Photo::ScopedFrontCameraControlConfig* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_POSECLIP___BASE_APPLYOVERRIDECONFIG_OFFSET))(this, P0);
		}

		::System::Void __base_Reset(::MoleMole::Photo::ScopedFrontCameraControlConfig* P0, ::MoleMole::Photo::ScopedFrontCameraControlConfig* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_POSECLIP___BASE_RESET_OFFSET))(this, P0, P1);
		}
	};
}
