#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_METHOD_7_D47177D5BD8F8E91_OFFSET UNITYSDK_OFFSET(0x1E5543B0)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_METHOD_7_D8B12B73CC6C1EB5_OFFSET UNITYSDK_OFFSET(0x1E554400)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5543F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaCondFilterNotActivatedFormulaConfig_TypeDefinitionIndex = 19344;

	class RogueTournFormulaCondFilterNotActivatedFormulaConfig : public ::RPG::GameCore::RogueFormulaConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_D47177D5BD8F8E91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_METHOD_7_D47177D5BD8F8E91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_D8B12B73CC6C1EB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_METHOD_7_D8B12B73CC6C1EB5_OFFSET))(a1, a2);
		}
	};
}
