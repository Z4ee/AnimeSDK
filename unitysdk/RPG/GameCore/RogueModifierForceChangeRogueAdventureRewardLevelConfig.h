#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_METHOD_3_29EA84D5CE9C2892_OFFSET UNITYSDK_OFFSET(0x1CFC11C0)
#define RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_METHOD_3_A9F3ED0FDB90492E_OFFSET UNITYSDK_OFFSET(0x1CFC1210)
#define RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC1200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierForceChangeRogueAdventureRewardLevelConfig_TypeDefinitionIndex = 17105;

	class RogueModifierForceChangeRogueAdventureRewardLevelConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_29EA84D5CE9C2892(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierForceChangeRogueAdventureRewardLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierForceChangeRogueAdventureRewardLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_METHOD_3_29EA84D5CE9C2892_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A9F3ED0FDB90492E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierForceChangeRogueAdventureRewardLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierForceChangeRogueAdventureRewardLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_METHOD_3_A9F3ED0FDB90492E_OFFSET))(a1, a2);
		}
	};
}
