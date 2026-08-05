#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigShootingGroundCameraAxis.h"
#include "unitysdk/MoleMole/Config/ConfigShootingGroundControl_ZoomInputType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUNDCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD61250)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShootingGroundControl_TypeDefinitionIndex = 55216;

	class ConfigShootingGroundControl : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigShootingGroundControl_ZoomInputType ZoomType; // 0x10
		::MoleMole::Config::ConfigShootingGroundCameraAxis NormalSensitivity; // 0x14
		::MoleMole::Config::ConfigShootingGroundCameraAxis ZoomSensitivity; // 0x34
		::System::Single AimAssistRatio; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUNDCONTROL__CTOR_OFFSET))(this);
		}
	};
}
