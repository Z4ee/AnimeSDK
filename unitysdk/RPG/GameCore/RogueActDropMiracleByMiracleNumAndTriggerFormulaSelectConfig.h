#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_METHOD_6_7106AC4D27D4536E_OFFSET UNITYSDK_OFFSET(0x19AE4990)
#define RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_METHOD_6_93DDC8DBE0AF2D5B_OFFSET UNITYSDK_OFFSET(0x19AE4BB0)
#define RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE4AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig_TypeDefinitionIndex = 18673;

	class RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_7106AC4D27D4536E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_METHOD_6_7106AC4D27D4536E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_93DDC8DBE0AF2D5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_METHOD_6_93DDC8DBE0AF2D5B_OFFSET))(a1, a2);
		}
	};
}
