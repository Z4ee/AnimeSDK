#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAEVENTCONFIG_METHOD_3_59A7EB82DC499432_OFFSET UNITYSDK_OFFSET(0x17630750)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAEVENTCONFIG_METHOD_3_B083ED9947DDF8BB_OFFSET UNITYSDK_OFFSET(0x17630680)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17630700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnFormulaEventConfig_TypeDefinitionIndex = 16342;

	class RogueModifierExecuteActionOnFormulaEventConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B083ED9947DDF8BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAEVENTCONFIG_METHOD_3_B083ED9947DDF8BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_59A7EB82DC499432(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAEVENTCONFIG_METHOD_3_59A7EB82DC499432_OFFSET))(a1, a2);
		}
	};
}
