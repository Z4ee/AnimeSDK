#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEFORMULACONFIG_METHOD_3_4723B23C309C84D6_OFFSET UNITYSDK_OFFSET(0x18D810B0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEFORMULACONFIG_METHOD_3_E103B19E5DAD35B2_OFFSET UNITYSDK_OFFSET(0x18D80DF0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D80DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncReforgeFormulaConfig_TypeDefinitionIndex = 17119;

	class RogueWorkbenchFuncReforgeFormulaConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4723B23C309C84D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncReforgeFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEFORMULACONFIG_METHOD_3_4723B23C309C84D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E103B19E5DAD35B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncReforgeFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEFORMULACONFIG_METHOD_3_E103B19E5DAD35B2_OFFSET))(a1, a2);
		}
	};
}
