#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_METHOD_6_4B3B592F894BF577_OFFSET UNITYSDK_OFFSET(0x175CCAD0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_METHOD_6_AD9C680B0A091F82_OFFSET UNITYSDK_OFFSET(0x175CCCF0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175CCC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectDropConfig_TypeDefinitionIndex = 18035;

	class RogueActTriggerRogueMagicUnitSelectDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_4B3B592F894BF577(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_METHOD_6_4B3B592F894BF577_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AD9C680B0A091F82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_METHOD_6_AD9C680B0A091F82_OFFSET))(a1, a2);
		}
	};
}
