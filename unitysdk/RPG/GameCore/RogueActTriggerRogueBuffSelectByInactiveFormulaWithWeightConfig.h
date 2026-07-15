#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_6_162C437B41182DF3_OFFSET UNITYSDK_OFFSET(0x1C49E730)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_6_CC9D3FA0F7A23C2F_OFFSET UNITYSDK_OFFSET(0x1C49E6E0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49E720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig_TypeDefinitionIndex = 18916;

	class RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_CC9D3FA0F7A23C2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_6_CC9D3FA0F7A23C2F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_162C437B41182DF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_6_162C437B41182DF3_OFFSET))(a1, a2);
		}
	};
}
