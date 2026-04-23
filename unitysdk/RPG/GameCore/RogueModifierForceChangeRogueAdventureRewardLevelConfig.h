#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_METHOD_3_2824E0ADA7D23E57_OFFSET UNITYSDK_OFFSET(0x18D3EEB0)
#define RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_METHOD_3_A9F3ED0FDB90492E_OFFSET UNITYSDK_OFFSET(0x18D3EF80)
#define RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3EF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierForceChangeRogueAdventureRewardLevelConfig_TypeDefinitionIndex = 16928;

	class RogueModifierForceChangeRogueAdventureRewardLevelConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2824E0ADA7D23E57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierForceChangeRogueAdventureRewardLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierForceChangeRogueAdventureRewardLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_METHOD_3_2824E0ADA7D23E57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A9F3ED0FDB90492E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierForceChangeRogueAdventureRewardLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierForceChangeRogueAdventureRewardLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_METHOD_3_A9F3ED0FDB90492E_OFFSET))(a1, a2);
		}
	};
}
