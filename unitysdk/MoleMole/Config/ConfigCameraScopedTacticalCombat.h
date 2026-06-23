#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Cameras { class TacticalCombatCameraConfig; }
namespace MoleMole::Config { class ScopedTacticalCombatConfigInput; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDTACTICALCOMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0xE9678B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraScopedTacticalCombat_TypeDefinitionIndex = 80577;

	class ConfigCameraScopedTacticalCombat : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Cameras::TacticalCombatCameraConfig* Config; // 0x58
		::MoleMole::Config::ScopedTacticalCombatConfigInput* Input; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDTACTICALCOMBAT__CTOR_OFFSET))(this);
		}
	};
}
