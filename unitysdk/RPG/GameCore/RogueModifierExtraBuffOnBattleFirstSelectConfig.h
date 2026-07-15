#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFONBATTLEFIRSTSELECTCONFIG_METHOD_3_5487DB754D5C25C0_OFFSET UNITYSDK_OFFSET(0x1CFC1090)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFONBATTLEFIRSTSELECTCONFIG_METHOD_3_8A6CEBDB49DA7704_OFFSET UNITYSDK_OFFSET(0x1CFC1040)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFONBATTLEFIRSTSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC1080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExtraBuffOnBattleFirstSelectConfig_TypeDefinitionIndex = 17249;

	class RogueModifierExtraBuffOnBattleFirstSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFONBATTLEFIRSTSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A6CEBDB49DA7704(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraBuffOnBattleFirstSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraBuffOnBattleFirstSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFONBATTLEFIRSTSELECTCONFIG_METHOD_3_8A6CEBDB49DA7704_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5487DB754D5C25C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraBuffOnBattleFirstSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraBuffOnBattleFirstSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFONBATTLEFIRSTSELECTCONFIG_METHOD_3_5487DB754D5C25C0_OFFSET))(a1, a2);
		}
	};
}
