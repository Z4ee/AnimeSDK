#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigCameraScopedFrontOverrideEffector.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"

namespace MoleMole::Photo { class ScopedFrontCameraControlConfig; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_CAMERABONE_APPLYOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0xF138850)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_CAMERABONE_RESET_OFFSET UNITYSDK_OFFSET(0xF1388E0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_CAMERABONE__CTOR_OFFSET UNITYSDK_OFFSET(0xF1389A0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_CAMERABONE___BASE_APPLYOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0xF1389B0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_CAMERABONE___BASE_RESET_OFFSET UNITYSDK_OFFSET(0xF138A40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraScopedFrontOverrideEffector_CameraBone_TypeDefinitionIndex = 55224;

	class ConfigCameraScopedFrontOverrideEffector_CameraBone : public ::MoleMole::Config::ConfigCameraScopedFrontOverrideEffector
	{
	public:
		::PipelineCamera::SerializableHashString CameraBone; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_CAMERABONE__CTOR_OFFSET))(this);
		}

		::System::Void ApplyOverrideConfig(::MoleMole::Photo::ScopedFrontCameraControlConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_CAMERABONE_APPLYOVERRIDECONFIG_OFFSET))(this, config);
		}

		::System::Void Reset(::MoleMole::Photo::ScopedFrontCameraControlConfig* config, ::MoleMole::Photo::ScopedFrontCameraControlConfig* defaultConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_CAMERABONE_RESET_OFFSET))(this, config, defaultConfig);
		}

		::System::Void __base_ApplyOverrideConfig(::MoleMole::Photo::ScopedFrontCameraControlConfig* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_CAMERABONE___BASE_APPLYOVERRIDECONFIG_OFFSET))(this, P0);
		}

		::System::Void __base_Reset(::MoleMole::Photo::ScopedFrontCameraControlConfig* P0, ::MoleMole::Photo::ScopedFrontCameraControlConfig* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_CAMERABONE___BASE_RESET_OFFSET))(this, P0, P1);
		}
	};
}
