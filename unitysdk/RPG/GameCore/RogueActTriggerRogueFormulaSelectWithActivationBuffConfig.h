#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_METHOD_6_065DE09249BA9635_OFFSET UNITYSDK_OFFSET(0x175CB940)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_METHOD_6_AEADB06C81058FF8_OFFSET UNITYSDK_OFFSET(0x175CB720)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175CB860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueFormulaSelectWithActivationBuffConfig_TypeDefinitionIndex = 18008;

	class RogueActTriggerRogueFormulaSelectWithActivationBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_AEADB06C81058FF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectWithActivationBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectWithActivationBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_METHOD_6_AEADB06C81058FF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_065DE09249BA9635(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectWithActivationBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectWithActivationBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_METHOD_6_065DE09249BA9635_OFFSET))(a1, a2);
		}
	};
}
