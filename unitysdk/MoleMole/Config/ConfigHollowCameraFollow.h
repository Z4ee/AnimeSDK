#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowCameraAvoidObstacle; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA9BC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraFollow_TypeDefinitionIndex = 52799;

	class ConfigHollowCameraFollow : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowCameraAvoidObstacle* ConfigAvoidObstacle; // 0x10
		::System::Single ScreenRatio; // 0x18
		::System::Boolean UseDynamicZ; // 0x1C
		::System::Boolean PlayerAvoidJoystick; // 0x1D
		::System::Single DistToTargetZ; // 0x20
		::MoleMole::Battle::ProceduralAnimDamperParam DamperParams; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAFOLLOW__CTOR_OFFSET))(this);
		}
	};
}
