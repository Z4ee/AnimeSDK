#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraAbilityStart; }
namespace RPG::GameCore { class ChimeraEventHandlers; }
namespace RPG::GameCore { class ChimeraWorkPhaseConfig; }

#define RPG_GAMECORE_CHIMERAWORKJSONCONFIG_METHOD_2_337BB6FCD821A54F_OFFSET UNITYSDK_OFFSET(0x1964E1C0)
#define RPG_GAMECORE_CHIMERAWORKJSONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1964E360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkJsonConfig_TypeDefinitionIndex = 15109;

	class ChimeraWorkJsonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraAbilityStart* Spawn; // 0x10
		::RPG::GameCore::ChimeraAbilityStart* OnStart; // 0x18
		::RPG::GameCore::ChimeraAbilityStart* OnFinish; // 0x20
		::RPG::GameCore::ChimeraAbilityStart* Leave; // 0x28
		::RPG::GameCore::ChimeraAbilityStart* CloseAttack; // 0x30
		::RPG::GameCore::ChimeraWorkPhaseConfig* WorkPhase; // 0x38
		::RPG::GameCore::ChimeraEventHandlers* Handlers; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKJSONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_337BB6FCD821A54F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraWorkJsonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWorkJsonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKJSONCONFIG_METHOD_2_337BB6FCD821A54F_OFFSET))(a1, a2);
		}
	};
}
