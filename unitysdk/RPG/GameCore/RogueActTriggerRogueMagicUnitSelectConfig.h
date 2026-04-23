#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_METHOD_6_B1E6268D5A309B0B_OFFSET UNITYSDK_OFFSET(0x18CD8560)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_METHOD_6_DDAF49D4B5C53F9E_OFFSET UNITYSDK_OFFSET(0x18CD8340)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD8480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectConfig_TypeDefinitionIndex = 18675;

	class RogueActTriggerRogueMagicUnitSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DDAF49D4B5C53F9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_METHOD_6_DDAF49D4B5C53F9E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B1E6268D5A309B0B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_METHOD_6_B1E6268D5A309B0B_OFFSET))(a1, a2);
		}
	};
}
