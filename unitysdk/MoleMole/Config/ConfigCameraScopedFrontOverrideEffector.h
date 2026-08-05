#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class ScopedFrontCameraControlConfig; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_APPLYOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x1B7E40A0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B7E4140)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B7E40F0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E4250)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraScopedFrontOverrideEffector_TypeDefinitionIndex = 46402;

	class ConfigCameraScopedFrontOverrideEffector : public ::System::Object
	{
	public:
		::System::Int32 ClientConditionId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR__CTOR_OFFSET))(this);
		}

		::System::Void ApplyOverrideConfig(::MoleMole::Photo::ScopedFrontCameraControlConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_APPLYOVERRIDECONFIG_OFFSET))(this, config);
		}

		::System::Void Reset(::MoleMole::Photo::ScopedFrontCameraControlConfig* config, ::MoleMole::Photo::ScopedFrontCameraControlConfig* defaultConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFrontCameraControlConfig*, ::MoleMole::Photo::ScopedFrontCameraControlConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_RESET_OFFSET))(this, config, defaultConfig);
		}

		::System::Boolean IsMatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTOVERRIDEEFFECTOR_ISMATCH_OFFSET))(this);
		}
	};
}
