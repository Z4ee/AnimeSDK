#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSoundAction_OffsetPosition; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x177E2730)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___C__DISPLAYCLASS10_0__EXECUTE_B__1_OFFSET UNITYSDK_OFFSET(0x177E2740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_OffsetPosition___c__DisplayClass10_0_TypeDefinitionIndex = 83237;

	class ConfigSoundAction_OffsetPosition___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* targetGo; // 0x10
		::MoleMole::Config::ConfigSoundAction_OffsetPosition* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___C__DISPLAYCLASS10_0__EXECUTE_B__1_OFFSET))(this);
		}
	};
}
