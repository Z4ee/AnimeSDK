#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGUICOOPTEAM3D_CAMERACONFIG_APPLYCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x11CC15B0)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_CAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11CC16F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICoopTeam3D_CameraConfig_TypeDefinitionIndex = 74764;

	class ConfigUICoopTeam3D_CameraConfig : public ::System::Object
	{
	public:
		::System::Single xRotation; // 0x10
		::System::Single FOV; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_CAMERACONFIG__CTOR_OFFSET))(this);
		}

		::System::Void ApplyCameraConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_CAMERACONFIG_APPLYCAMERACONFIG_OFFSET))(this);
		}
	};
}
