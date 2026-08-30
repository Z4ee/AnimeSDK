#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERBATTLESELECTBUFFFORMULAREQUIREDCONFIG_METHOD_3_B1916B8CFDC52732_OFFSET UNITYSDK_OFFSET(0x1EEF7AE0)
#define RPG_GAMECORE_ROGUEMODIFIERBATTLESELECTBUFFFORMULAREQUIREDCONFIG_METHOD_3_B9E92C797879EB4E_OFFSET UNITYSDK_OFFSET(0x1EEF7B30)
#define RPG_GAMECORE_ROGUEMODIFIERBATTLESELECTBUFFFORMULAREQUIREDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF7B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierBattleSelectBuffFormulaRequiredConfig_TypeDefinitionIndex = 17783;

	class RogueModifierBattleSelectBuffFormulaRequiredConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBATTLESELECTBUFFFORMULAREQUIREDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B1916B8CFDC52732(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierBattleSelectBuffFormulaRequiredConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierBattleSelectBuffFormulaRequiredConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBATTLESELECTBUFFFORMULAREQUIREDCONFIG_METHOD_3_B1916B8CFDC52732_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B9E92C797879EB4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierBattleSelectBuffFormulaRequiredConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierBattleSelectBuffFormulaRequiredConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBATTLESELECTBUFFFORMULAREQUIREDCONFIG_METHOD_3_B9E92C797879EB4E_OFFSET))(a1, a2);
		}
	};
}
