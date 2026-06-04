#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONACTIVEFORMULACOUNTCONFIG_METHOD_3_59C61AF77CB8BABB_OFFSET UNITYSDK_OFFSET(0x19B50BA0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONACTIVEFORMULACOUNTCONFIG_METHOD_3_76E416CBF2360EA2_OFFSET UNITYSDK_OFFSET(0x19B5C620)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONACTIVEFORMULACOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B50B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnActiveFormulaCountConfig_TypeDefinitionIndex = 17090;

	class RogueModifierExecuteActionOnActiveFormulaCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONACTIVEFORMULACOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_76E416CBF2360EA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnActiveFormulaCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnActiveFormulaCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONACTIVEFORMULACOUNTCONFIG_METHOD_3_76E416CBF2360EA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_59C61AF77CB8BABB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnActiveFormulaCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnActiveFormulaCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONACTIVEFORMULACOUNTCONFIG_METHOD_3_59C61AF77CB8BABB_OFFSET))(a1, a2);
		}
	};
}
