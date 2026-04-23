#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_METHOD_7_B69EEE24AE88EF8A_OFFSET UNITYSDK_OFFSET(0x18D738F0)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_METHOD_7_D8B12B73CC6C1EB5_OFFSET UNITYSDK_OFFSET(0x18D73950)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D73940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaCondFilterNotActivatedFormulaConfig_TypeDefinitionIndex = 18576;

	class RogueTournFormulaCondFilterNotActivatedFormulaConfig : public ::RPG::GameCore::RogueFormulaConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_B69EEE24AE88EF8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_METHOD_7_B69EEE24AE88EF8A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_D8B12B73CC6C1EB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_METHOD_7_D8B12B73CC6C1EB5_OFFSET))(a1, a2);
		}
	};
}
