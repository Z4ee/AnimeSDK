#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERFORMULAFORCEENABLECONFIG_METHOD_3_932FA214E98EE68C_OFFSET UNITYSDK_OFFSET(0x19B53AE0)
#define RPG_GAMECORE_ROGUEMODIFIERFORMULAFORCEENABLECONFIG_METHOD_3_DEF8524D48609DD5_OFFSET UNITYSDK_OFFSET(0x19B5E120)
#define RPG_GAMECORE_ROGUEMODIFIERFORMULAFORCEENABLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B53A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierFormulaForceEnableConfig_TypeDefinitionIndex = 17098;

	class RogueModifierFormulaForceEnableConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORMULAFORCEENABLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DEF8524D48609DD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierFormulaForceEnableConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierFormulaForceEnableConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORMULAFORCEENABLECONFIG_METHOD_3_DEF8524D48609DD5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_932FA214E98EE68C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierFormulaForceEnableConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierFormulaForceEnableConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORMULAFORCEENABLECONFIG_METHOD_3_932FA214E98EE68C_OFFSET))(a1, a2);
		}
	};
}
