#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_METHOD_6_93DDC8DBE0AF2D5B_OFFSET UNITYSDK_OFFSET(0x1D02DAF0)
#define RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_METHOD_6_B2F4A21B4B94B8F7_OFFSET UNITYSDK_OFFSET(0x1D02DAA0)
#define RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02DAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig_TypeDefinitionIndex = 18949;

	class RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_B2F4A21B4B94B8F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_METHOD_6_B2F4A21B4B94B8F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_93DDC8DBE0AF2D5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_METHOD_6_93DDC8DBE0AF2D5B_OFFSET))(a1, a2);
		}
	};
}
