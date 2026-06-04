#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERBATTLESELECTBUFFFORMULAREQUIREDCONFIG_METHOD_3_AD04113078A21977_OFFSET UNITYSDK_OFFSET(0x19B4E790)
#define RPG_GAMECORE_ROGUEMODIFIERBATTLESELECTBUFFFORMULAREQUIREDCONFIG_METHOD_3_B9E92C797879EB4E_OFFSET UNITYSDK_OFFSET(0x19B4E860)
#define RPG_GAMECORE_ROGUEMODIFIERBATTLESELECTBUFFFORMULAREQUIREDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B4E810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierBattleSelectBuffFormulaRequiredConfig_TypeDefinitionIndex = 17104;

	class RogueModifierBattleSelectBuffFormulaRequiredConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBATTLESELECTBUFFFORMULAREQUIREDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AD04113078A21977(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierBattleSelectBuffFormulaRequiredConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierBattleSelectBuffFormulaRequiredConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBATTLESELECTBUFFFORMULAREQUIREDCONFIG_METHOD_3_AD04113078A21977_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B9E92C797879EB4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierBattleSelectBuffFormulaRequiredConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierBattleSelectBuffFormulaRequiredConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBATTLESELECTBUFFFORMULAREQUIREDCONFIG_METHOD_3_B9E92C797879EB4E_OFFSET))(a1, a2);
		}
	};
}
