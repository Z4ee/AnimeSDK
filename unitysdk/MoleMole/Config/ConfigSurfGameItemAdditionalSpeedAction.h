#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMADDITIONALSPEEDACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10D0C960)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMADDITIONALSPEEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0CD00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemAdditionalSpeedAction_TypeDefinitionIndex = 73779;

	class ConfigSurfGameItemAdditionalSpeedAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::UnityEngine::AnimationCurve* SpeedCurve; // 0x10
		::System::Single AdditionalSpeed; // 0x18
		::System::Single MaxSpeed; // 0x1C
		::System::Single MinSpeed; // 0x20
		::System::Single Duration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMADDITIONALSPEEDACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMADDITIONALSPEEDACTION_EXECUTE_OFFSET))(this);
		}
	};
}
