#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigCameraScopedFrontOverrideEffector.h"

namespace MoleMole::Photo { class PlayableBlendSpace1DConfig; }
namespace MoleMole::Photo { class ScopedFrontCameraControlConfig; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_BLENDSPACE_APPLYOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x1B8F36C0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_BLENDSPACE_RESET_OFFSET UNITYSDK_OFFSET(0x1B8F3740)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_BLENDSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8F37F0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_BLENDSPACE___BASE_APPLYOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x1B8F3800)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_BLENDSPACE___BASE_RESET_OFFSET UNITYSDK_OFFSET(0x1B8F3890)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraScopedFrontOverrideEffector_BlendSpace_TypeDefinitionIndex = 52949;

	class ConfigCameraScopedFrontOverrideEffector_BlendSpace : public ::MoleMole::Config::ConfigCameraScopedFrontOverrideEffector
	{
	public:
		::MoleMole::Photo::PlayableBlendSpace1DConfig* BlendSpaceConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_BLENDSPACE__CTOR_OFFSET))(this);
		}

		::System::Void ApplyOverrideConfig(::MoleMole::Photo::ScopedFrontCameraControlConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_BLENDSPACE_APPLYOVERRIDECONFIG_OFFSET))(this, config);
		}

		::System::Void Reset(::MoleMole::Photo::ScopedFrontCameraControlConfig* config, ::MoleMole::Photo::ScopedFrontCameraControlConfig* defaultConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_BLENDSPACE_RESET_OFFSET))(this, config, defaultConfig);
		}

		::System::Void __base_ApplyOverrideConfig(::MoleMole::Photo::ScopedFrontCameraControlConfig* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_BLENDSPACE___BASE_APPLYOVERRIDECONFIG_OFFSET))(this, P0);
		}

		::System::Void __base_Reset(::MoleMole::Photo::ScopedFrontCameraControlConfig* P0, ::MoleMole::Photo::ScopedFrontCameraControlConfig* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_BLENDSPACE___BASE_RESET_OFFSET))(this, P0, P1);
		}
	};
}
