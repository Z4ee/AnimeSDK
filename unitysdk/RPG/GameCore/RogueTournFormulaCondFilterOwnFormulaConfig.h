#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_METHOD_7_1D1CCBACF376575D_OFFSET UNITYSDK_OFFSET(0x1E554460)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_METHOD_7_B648CFADF9C56799_OFFSET UNITYSDK_OFFSET(0x1E554410)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E554450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaCondFilterOwnFormulaConfig_TypeDefinitionIndex = 19343;

	class RogueTournFormulaCondFilterOwnFormulaConfig : public ::RPG::GameCore::RogueFormulaConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_B648CFADF9C56799(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterOwnFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterOwnFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_METHOD_7_B648CFADF9C56799_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_1D1CCBACF376575D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterOwnFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterOwnFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_METHOD_7_1D1CCBACF376575D_OFFSET))(a1, a2);
		}
	};
}
